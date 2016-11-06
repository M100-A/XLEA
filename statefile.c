//
// statefile.c
//
// save/load functions for save files.
//

#include "common.h"
#include "gamelogic.h"

// linkage to the file load structure..
extern  struct	futils_filebuff         gstruct_FileBuffGen;

// linkage to the mutils data.
extern  struct  mutils_commandlist  *gstruct_CommandList;
extern  int     giCommandListUsed;
extern  char    *gpszDialogBuffer;
extern  int     giDialogBufferUsed;
extern  int     giDialogBufferSize;
extern  char    *gpszArchiveBuffer;
extern  int     giArchiveBufferUsed;

// linkage to the gamestate data.
extern  struct  gamelogic_variablelist  gstruct_GameVars;

#ifndef INTERFACE_CURSES
extern char     gszSessionTrackingId[50];
#endif //INTERFACE_CURSES


//
// Sub function to check if this line is what it should be.
//
int statefile_checkLineNonString (char *pszLine)
{
    if ((pszLine[0] == '#') || (pszLine[0] == '=') || (pszLine[0] == '!'))
        return 1;

    return 0;
}


//
// function to load in a save file and to partially parse it, verifying if it is usable.
//
// Note: this function does not actually load the save file, as it is meant to extract
//   and check only some detail from the file for the purposes of showing the file in a
//   list of save/load slots.
//
// returns 2 if non-existent (not enough data to indicate that it is there).
// returns 1 if invalid (could at least retrieve the date/time).
// returns 0 if it appears to be a valid save.
//
int statefile_parseSaveFile (char *pszFileName, char *pszDateTime)
{
    char    szInputString[900];
    int     iOffset;
    int     iValue;
    int     iYear;
    int     iMonth;
#ifdef INTERFACE_CURSES
    char    *pszMonth;
#endif // INTERFACE_CURSES
    int     iDay;
    int     iHour;
    int     iMin;
    int     iSec;
    int     iRet;

    // load the entire save file into the memory buffer
    iRet = futils_loadFileIntoMemory (pszFileName, &gstruct_FileBuffGen);

    if (iRet != 0)
        return 2;

    // start with the version line..
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 898) != 0)
    {
        return 2;
    }
    szInputString[898] = 0;

#ifdef INTERFACE_CURSES
    // check to see if it starts with what we want
    if (szInputString[0] != '!')
        return 2;
#else
    // check to see if it starts with what we want
    if (szInputString[0] != '*')
        return 2;
#endif //INTERFACE_CURSES

    // otherwise I don't care what it says

    //
    // Global values section
    //

    // next the global values section (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 2;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##XLEAGlobal") != 0)
        return 2;

    // next the global values section (size line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 2;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "=13") != 0)
        return 2;

    // next the date/time field
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 2;
    szInputString[20] = 0;

    // Check the date/time field (and format it).

    // 00000000001111111111
    // 01234567890123456789
    // YYYY-MM-DD-hh-mm-ss

    if ((szInputString[4] != '-') || (szInputString[7] != '-') || (szInputString[10] != '-') || (szInputString[13] != '-') || (szInputString[16] != '-') || (szInputString[19] != 0))
    {
        return 2;
    }

    szInputString[4] = 0;
    szInputString[7] = 0;
    szInputString[10] = 0;
    szInputString[13] = 0;
    szInputString[16] = 0;

    iYear = atoi (szInputString);
    iMonth = atoi (&szInputString[5]);
    iDay = atoi (&szInputString[8]);
    iHour = atoi (&szInputString[11]);
    iMin = atoi (&szInputString[14]);
    iSec = atoi (&szInputString[17]);

    if ((iYear < 1) || (iMonth < 1) || (iDay < 1) || (iHour < 0) || (iMin < 0) || (iSec < 0) || (iMonth > 12) || (iDay > 31) || (iHour > 23) || (iMin > 59) || (iSec > 59))
    {
        return 2;
    }

#ifdef INTERFACE_CURSES
    switch (iMonth)
    {
    case 1:
        pszMonth = "Jan";
        break;
    case 2:
        pszMonth = "Feb";
        break;
    case 3:
        pszMonth = "Mar";
        break;
    case 4:
        pszMonth = "Apr";
        break;
    case 5:
        pszMonth = "May";
        break;
    case 6:
        pszMonth = "Jun";
        break;
    case 7:
        pszMonth = "Jul";
        break;
    case 8:
        pszMonth = "Aug";
        break;
    case 9:
        pszMonth = "Sep";
        break;
    case 10:
        pszMonth = "Oct";
        break;
    case 11:
        pszMonth = "Nov";
        break;
    case 12:
        pszMonth = "Dec";
        break;
    default:
        pszMonth = "Unk";
        break;
    }

    sprintf (pszDateTime, "%04d-%s-%02d %02d:%02d:%02d",
            iYear,
            pszMonth,
            iDay,
            iHour,
            iMin,
            iSec);
#else

    {
        struct tm tmDateTime;
        time_t tTimeNow;

        tmDateTime.tm_year = iYear - 1900;
        tmDateTime.tm_mon = iMonth - 1;
        tmDateTime.tm_mday = iDay;
        tmDateTime.tm_hour = iHour;
        tmDateTime.tm_min = iMin;
        tmDateTime.tm_sec = iSec;
        tmDateTime.tm_isdst = -1;

        tTimeNow = mktime (&tmDateTime);

        sprintf (pszDateTime, "%ld", tTimeNow);
    }

#endif //INTERFACE_CURSES

    // (02) the cVActionCounter field
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (03) flags block
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 100) != 0)
        return 1;
    szInputString[100] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    if ((int)strlen (szInputString) != 47)
        return 1;

    // (04) sex actions array
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 130) != 0)
        return 1;
    szInputString[130] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (05) sexual partner 1 climax value.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (06) sexual partner 2 climax value.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (07) sexual partner 1 arousal value.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (08) sexual partner 2 arousal value.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (09) sexual partner 1 arousal base increment.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (10) sexual partner 2 arousal base increment.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (11) sexual partner 1 arousal limit.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (12) sexual partner 2 arousal limit.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // (13) PastActionsCounter.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    //
    // Command List section
    //

    // section identifier (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##CommandList") != 0)
        return 1;

    // following line count (second line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    if (szInputString[0] != '=')
        return 1;

    iValue = atoi (&szInputString[1]);

    // just verify that we can load the data.
    for (iOffset = 0; iValue > iOffset; iOffset++)
    {
        if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 148) != 0)
            return 1;
    }

    //
    // Archive Buffer section
    //

    // section identifier (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##ArchiveBuf") != 0)
        return 1;

    // following line count (second line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    if (szInputString[0] != '-')
        return 1;

    iValue = atoi (&szInputString[1]);

    // make the buffer reader jump ahead by the value we have defined.
    gstruct_FileBuffGen.ulBufferPos += (unsigned long)iValue;

    //
    // Dialog Buffer section
    //

    // section identifier (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##DialogBuf") != 0)
        return 1;

    // following line count (second line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    if (szInputString[0] != '-')
        return 1;

    iValue = atoi (&szInputString[1]);

    // make the buffer reader jump ahead by the value we have defined.
    gstruct_FileBuffGen.ulBufferPos += (unsigned long)iValue;

    //
    // Trailer line
    //

    // section identifier (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##End##") != 0)
        return 1;

    return 0;
}


//
// function to load in a single command element.
//
int statefile_loadCommandElement ()
{
    char    szInputString[150];
    int     iOffset1;
    int     iOffset2;
    int     iSceneId;
    int     iSubSceneId;

    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 148) != 0)
        return 1;
    szInputString[148] = 0;
    szInputString[149] = 0;

    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    iOffset1 = 0;

    while (1)
    {
        if (szInputString[iOffset1] == 0)
            return 1;

        if (szInputString[iOffset1] == ' ')
            break;

        iOffset1++;
    }

    szInputString[iOffset1] = 0;
    iOffset1++;

    iOffset2 = iOffset1;

    while (1)
    {
        if (szInputString[iOffset2] == 0)
            return 1;

        if (szInputString[iOffset2] == ' ')
            break;

        iOffset2++;
    }

    szInputString[iOffset2] = 0;
    iOffset2++;

    iSceneId = (int)atoi (szInputString);
    iSubSceneId = (int)atoi (&szInputString[iOffset1]);

    if (mutils_addToCommandList (&szInputString[iOffset2], iSceneId, iSubSceneId))
        return 1;

    return 0;
}


//
// sub function to interpret and load a flag value from a character offset.
//
void statefile_loadFlagOffset (char cInputValue, char *pcOutputValue)
{
    if (cInputValue == '0')
    {
        pcOutputValue[0] = 0;
    }
    else if (cInputValue == '1')
    {
        pcOutputValue[0] = 1;
    }
    else
    {
        gstruct_GameVars.cFVarsValid = -1;
    }
}


//
// function to load in a save file to activate it for real.
//
// returns 1 if there was a problem.
// returns 0 if the save was loaded.
//
int statefile_loadSaveFile (char *pszFileName)
{
    char    szInputString[900];
    int     iOffset;
    int     iValue;
    int     iRet;

#ifdef INTERFACE_CURSES
    sprintf (szInputString, "Loading %s", pszFileName);

    clear ();
    attron(A_DIM);
    mvaddstr (2, 1, szInputString);
    attroff(A_DIM);
    refresh ();
#endif

    // load the entire save file into the memory buffer
    iRet = futils_loadFileIntoMemory (pszFileName, &gstruct_FileBuffGen);

    if (iRet != 0)
        return 1;

    // start with the version line..
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 898) != 0)
    {
        return 1;
    }
    szInputString[898] = 0;

#ifdef INTERFACE_CURSES
    // check to see if it starts with what we want
    if (szInputString[0] != '!')
        return 2;
    // otherwise I don't care what it says
#else
    // check to see if it starts with what we want
    if (szInputString[0] != '*')
        return 2;

    // copy aside the tracking id.
    strncpy (gszSessionTrackingId, &szInputString[1], 48);
    gszSessionTrackingId[48] = 0;
#endif //INTERFACE_CURSES

    //
    // Global values section
    //

    // next the global values section (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##XLEAGlobal") != 0)
        return 1;

    // next the global values section (size line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "=13") != 0)
        return 1;

    // next the date/time field
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
        return 1;
    szInputString[20] = 0;

    // Check the date/time field.

    // 00000000001111111111
    // 01234567890123456789
    // YYYY-MM-DD-hh-mm-ss

    if ((szInputString[4] != '-') || (szInputString[7] != '-') || (szInputString[10] != '-') || (szInputString[13] != '-') || (szInputString[16] != '-') || (szInputString[19] != 0))
    {
        return 1;
    }

    // we are not doing anything with the date/time other than verifying it's format.

    // (02) the cVActionCounter field
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.cVActionCounter = (char)(atoi (szInputString));

    // (03) flags block
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 100) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[100] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    if ((int)strlen (szInputString) != 47)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }

    statefile_loadFlagOffset (szInputString[0], &gstruct_GameVars.cFPainMagic1);
    statefile_loadFlagOffset (szInputString[1], &gstruct_GameVars.cFIntDialog);
    statefile_loadFlagOffset (szInputString[2], &gstruct_GameVars.cFExtIntDialog);
    statefile_loadFlagOffset (szInputString[3], &gstruct_GameVars.cFLookAroundRoom);
    statefile_loadFlagOffset (szInputString[4], &gstruct_GameVars.cFVisitTheBed);
    statefile_loadFlagOffset (szInputString[5], &gstruct_GameVars.cFVisitTheTable);
    statefile_loadFlagOffset (szInputString[6], &gstruct_GameVars.cFVisitTheDoor);
    statefile_loadFlagOffset (szInputString[7], &gstruct_GameVars.cFVisitTheCon);
    statefile_loadFlagOffset (szInputString[8], &gstruct_GameVars.cFCheckTheChair);
    statefile_loadFlagOffset (szInputString[9], &gstruct_GameVars.cFSitInTheChair);
    statefile_loadFlagOffset (szInputString[10], &gstruct_GameVars.cFPainMagic2);
    statefile_loadFlagOffset (szInputString[11], &gstruct_GameVars.cFPainMagic3);
    statefile_loadFlagOffset (szInputString[12], &gstruct_GameVars.cFAnalDropFirst1);
    statefile_loadFlagOffset (szInputString[13], &gstruct_GameVars.cFOralDropFirst1);
    statefile_loadFlagOffset (szInputString[14], &gstruct_GameVars.cFBreakBonds1);
    statefile_loadFlagOffset (szInputString[15], &gstruct_GameVars.cFBreakBonds2);
    statefile_loadFlagOffset (szInputString[16], &gstruct_GameVars.cFGetNoticed1);
    statefile_loadFlagOffset (szInputString[17], &gstruct_GameVars.cFDildoFun1);
    statefile_loadFlagOffset (szInputString[18], &gstruct_GameVars.cFAnalDropFirst2);
    statefile_loadFlagOffset (szInputString[19], &gstruct_GameVars.cFOralDropFirst2);
    statefile_loadFlagOffset (szInputString[20], &gstruct_GameVars.cFAnalDropLast2);
    statefile_loadFlagOffset (szInputString[21], &gstruct_GameVars.cFTableStillThere);
    statefile_loadFlagOffset (szInputString[22], &gstruct_GameVars.cFDarkElfNeedy1);
    statefile_loadFlagOffset (szInputString[23], &gstruct_GameVars.cFDarkElfRest1);
    statefile_loadFlagOffset (szInputString[24], &gstruct_GameVars.cFDarkElfExhaust1);
    statefile_loadFlagOffset (szInputString[25], &gstruct_GameVars.cFLightElfHumilate);
    statefile_loadFlagOffset (szInputString[26], &gstruct_GameVars.cFPullOutDildos2);
    statefile_loadFlagOffset (szInputString[27], &gstruct_GameVars.cFTurnedLeftFirst);
    statefile_loadFlagOffset (szInputString[28], &gstruct_GameVars.cFBeenOutAndBack);
    statefile_loadFlagOffset (szInputString[29], &gstruct_GameVars.cFIgnoredTheDoor1);
    statefile_loadFlagOffset (szInputString[30], &gstruct_GameVars.cFMovedTheDoor1);
    statefile_loadFlagOffset (szInputString[31], &gstruct_GameVars.cFClosedTheDoor1);
    statefile_loadFlagOffset (szInputString[32], &gstruct_GameVars.cFTookTheKey);
    statefile_loadFlagOffset (szInputString[33], &gstruct_GameVars.cFLeftDoorWideOpen);
    statefile_loadFlagOffset (szInputString[34], &gstruct_GameVars.cFKeyToDarkElf);
    statefile_loadFlagOffset (szInputString[35], &gstruct_GameVars.cFKeyToLightElf);
    statefile_loadFlagOffset (szInputString[36], &gstruct_GameVars.cFLearntHardWay1);
    statefile_loadFlagOffset (szInputString[37], &gstruct_GameVars.cFGiveInToLightElf);
    statefile_loadFlagOffset (szInputString[38], &gstruct_GameVars.cFBecomeASexpot);
    statefile_loadFlagOffset (szInputString[39], &gstruct_GameVars.cFMasturbator);
    statefile_loadFlagOffset (szInputString[40], &gstruct_GameVars.cFIgnoredTheDoor2);
    statefile_loadFlagOffset (szInputString[41], &gstruct_GameVars.cFClosedTheDoor2);
    statefile_loadFlagOffset (szInputString[42], &gstruct_GameVars.cFEnding7Rollup);
    statefile_loadFlagOffset (szInputString[43], &gstruct_GameVars.cFEnding8Rollup);
    statefile_loadFlagOffset (szInputString[44], &gstruct_GameVars.cFSexSceneStart);
    statefile_loadFlagOffset (szInputString[45], &gstruct_GameVars.cPartner1Active);
    statefile_loadFlagOffset (szInputString[46], &gstruct_GameVars.cPartner2Active);

    if (gstruct_GameVars.cFVarsValid == -1)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }

    // (04) sex actions array
    for (iOffset = 0; iOffset < 30; iOffset++)
    {
        gstruct_GameVars.cPastSexActions[iOffset] = 0;
    }

    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 130) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[130] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // if there is actual data..
    if (szInputString[0] != 0)
    {
        char    cVal;

        iOffset = 0;
        iValue = 0;

        while (1)
        {
            if (szInputString[iOffset] == 0)
                break;

            if ((iOffset > 90) || (iValue > 29))
            {
                gstruct_GameVars.cFVarsValid = 0;
                return 1;
            }

            if (szInputString[iOffset + 2] != '-')
            {
                gstruct_GameVars.cFVarsValid = 0;
                return 1;
            }

            szInputString[iOffset + 2] = 0;
            cVal = (char)(atoi (&szInputString[iOffset]));

            if ((cVal == 0) || (cVal > 99))
            {
                gstruct_GameVars.cFVarsValid = 0;
                return 1;
            }

            gstruct_GameVars.cPastSexActions[iValue] = cVal;

            iValue++;
            iOffset += 3;
        }
    }

    // (05) sexual partner 1 climax value.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.iClimaxCount1 = atoi (szInputString);

    // (06) sexual partner 2 climax value.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.iClimaxCount2 = atoi (szInputString);

    // (07) sexual partner 1 arousal value.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.iArousalLevel1 = atoi (szInputString);

    // (08) sexual partner 2 arousal value.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.iArousalLevel2 = atoi (szInputString);

    // (09) sexual partner 1 arousal base increment.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.iArousalBaseIncrement1 = atoi (szInputString);

    // (10) sexual partner 2 arousal base increment.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.iArousalBaseIncrement2 = atoi (szInputString);

    // (11) sexual partner 1 arousal limit.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.iArousalLimit1 = atoi (szInputString);

    // (12) sexual partner 2 arousal limit.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.iArousalLimit2 = atoi (szInputString);

    // (13) PastActionsCounter.
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 20) != 0)
    {
        gstruct_GameVars.cFVarsValid = 0;
        return 1;
    }
    szInputString[20] = 0;
    if (statefile_checkLineNonString (szInputString) != 0) return 1;

    // convert it to a value
    gstruct_GameVars.iPastActionsNum = atoi (szInputString);

    //
    // If we made it all of the way to here.. then the data must be valid..
    //
    gstruct_GameVars.cFVarsValid = 1;

#ifdef INTERFACE_CURSES
    attron(A_DIM);
    mvaddstr (3, 1, "Global vars loaded");
    attroff(A_DIM);
    refresh ();
#endif

    //
    // Command List section
    //

    // section identifier (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##CommandList") != 0)
        return 1;

    // following line count (second line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    if (szInputString[0] != '=')
        return 1;

    iValue = atoi (&szInputString[1]);

    // wipe the existing command list
    mutils_initAndClearCommandList ();

    // just verify that we can load the data.
    for (iOffset = 0; iValue > iOffset; iOffset++)
    {
        iRet = statefile_loadCommandElement ();
        if (iRet != 0)
            return 1;
    }

#ifdef INTERFACE_CURSES
    attron(A_DIM);
    mvaddstr (4, 1, "Command list loaded");
    attroff(A_DIM);
    refresh ();
#endif

    //
    // Archive Buffer section
    //

    // section identifier (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##ArchiveBuf") != 0)
        return 1;

    // following line count (second line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    if (szInputString[0] != '-')
        return 1;

    iValue = atoi (&szInputString[1]);

#ifdef INTERFACE_CURSES
    if (iValue > 65535)
        return 1;
#else
    if (iValue > 16383)
        return 1;
#endif // INTERFACE_CURSES

    // copy the archive data straight over
    strncpy (gpszArchiveBuffer, &gstruct_FileBuffGen.pcData[gstruct_FileBuffGen.ulBufferPos], iValue);
    gpszArchiveBuffer[iValue] = 0;
    giArchiveBufferUsed = iValue;

    // make the buffer reader jump ahead by the value we have defined.
    gstruct_FileBuffGen.ulBufferPos += (unsigned long)iValue;

    //
    // Dialog Buffer section
    //

    // section identifier (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##DialogBuf") != 0)
        return 1;

    // following line count (second line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    if (szInputString[0] != '-')
        return 1;

    iValue = atoi (&szInputString[1]);

    // if the data is larger than what we have allocated for buffer.
    if (iValue > giDialogBufferSize)
    {
        // .. then it is time to increase the memory buffer allocation.
        int iNewSize = iValue + 100;
        char *pcMemData;

        // round up..
        while (iNewSize % 8192)
            iNewSize++;

        // decrement by 2 (it is added in by the realloc)..
        iNewSize -= 2;

        // now for the realloc..
        pcMemData = (char *)realloc ((VOID *)gpszDialogBuffer, (size_t)(iNewSize + 2));

        if (pcMemData == NULL)
            return 1;

        // I don't care if realloc is going to keep it all, I am about to overwrite it..

        // Now to save aside the references..
        gpszDialogBuffer = pcMemData;
        giDialogBufferSize = iNewSize;
    }

    // copy the archive data straight over
    strncpy (gpszDialogBuffer, &gstruct_FileBuffGen.pcData[gstruct_FileBuffGen.ulBufferPos], iValue);
    gpszDialogBuffer[iValue] = 0;
    giDialogBufferUsed = iValue;

    // make the buffer reader jump ahead by the value we have defined.
    gstruct_FileBuffGen.ulBufferPos += (unsigned long)iValue;

    //
    // Trailer line
    //

    // section identifier (first line)
    if (futils_readLineFromMemoryNoEndLineCombo (&gstruct_FileBuffGen, szInputString, 18) != 0)
        return 1;
    szInputString[18] = 0;

    // if it isn't what we are expecting.. ignore this file.
    if (strcmp (szInputString, "##End##") != 0)
        return 1;

#ifdef INTERFACE_CURSES
    attron(A_DIM);
    mvaddstr (5, 1, "Dialog loaded");
    attroff(A_DIM);
#endif

    return 0;
}


//
// function to write out the variables to a save file.
//
int statefile_writeSaveFile (char *pszFileName)
{
    char    szInputString[900];
    int     iOffset;
    int     iRet;

    // wipe the file buffer
    iRet = futils_wipeFileBuffer (&gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    //
    // Start with the global variables.
    //

    {
        struct tm *ptmDateTime;
        time_t tTimeNow;

        time (&tTimeNow);
        ptmDateTime = localtime (&tTimeNow);

        sprintf (szInputString, "##XLEAGlobal\n=13\n%04d-%02d-%02d-%02d-%02d-%02d\n%d\n",
                (int)ptmDateTime->tm_year + 1900,
                (int)ptmDateTime->tm_mon + 1,
                (int)ptmDateTime->tm_mday,
                (int)ptmDateTime->tm_hour,
                (int)ptmDateTime->tm_min,
                (int)ptmDateTime->tm_sec,
                (int)gstruct_GameVars.cVActionCounter);
    }

    iRet = futils_addStringToFileBufferEnd (szInputString, &gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    //
    // Load in the flags..
    //

    if (gstruct_GameVars.cFPainMagic1 != 0) // 0
        strcpy (szInputString, "1");
    else
        strcpy (szInputString, "0");

    if (gstruct_GameVars.cFIntDialog != 0) // 1
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFExtIntDialog != 0) // 2
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFLookAroundRoom != 0) // 3
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFVisitTheBed != 0) // 4
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFVisitTheTable != 0) // 5
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFVisitTheDoor != 0) // 6
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFVisitTheCon != 0) // 7
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFCheckTheChair != 0) // 8
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFSitInTheChair != 0) // 9
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFPainMagic2 != 0) // 10
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFPainMagic3 != 0) // 11
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFAnalDropFirst1 != 0) // 12
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFOralDropFirst1 != 0) // 13
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFBreakBonds1 != 0) // 14
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFBreakBonds2 != 0) // 15
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFGetNoticed1 != 0) // 16
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFDildoFun1 != 0) // 17
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFAnalDropFirst2 != 0) // 18
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFOralDropFirst2 != 0) // 19
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFAnalDropLast2 != 0) // 20
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFTableStillThere != 0) // 21
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFDarkElfNeedy1 != 0) // 22
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFDarkElfRest1 != 0) // 23
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFDarkElfExhaust1 != 0) // 24
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFLightElfHumilate != 0) // 25
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFPullOutDildos2 != 0) // 26
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFTurnedLeftFirst != 0) // 27
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFBeenOutAndBack != 0) // 28
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFIgnoredTheDoor1 != 0) // 29
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFMovedTheDoor1 != 0) // 30
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFClosedTheDoor1 != 0) // 31
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFTookTheKey != 0) // 32
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFLeftDoorWideOpen != 0) // 33
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFKeyToDarkElf != 0) // 34
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFKeyToLightElf != 0) // 35
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFLearntHardWay1 != 0) // 36
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFGiveInToLightElf != 0) // 37
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFBecomeASexpot != 0) // 38
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFMasturbator != 0) // 39
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFIgnoredTheDoor2 != 0) // 40
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFClosedTheDoor2 != 0) // 41
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFEnding7Rollup != 0) // 42
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFEnding8Rollup != 0) // 43
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cFSexSceneStart != 0) // 44
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cPartner1Active != 0) // 45
        strcat (szInputString, "1");
    else
        strcat (szInputString, "0");

    if (gstruct_GameVars.cPartner2Active != 0) // 46
        strcat (szInputString, "1\n");
    else
        strcat (szInputString, "0\n");

    if (gstruct_GameVars.cPastSexActions[0] != 0)
    {
        char    szTempString[20];

        iOffset = 0;

        while (1)
        {
            if (iOffset > 29)
                break;

            if ((gstruct_GameVars.cPastSexActions[iOffset] < 1) || (gstruct_GameVars.cPastSexActions[iOffset] > 99))
                break;

            sprintf (szTempString, "%02d%c", (int)gstruct_GameVars.cPastSexActions[iOffset], '-');

            strcat (szInputString, szTempString);

            iOffset++;
        }
    }

    iRet = futils_addStringToFileBufferEnd (szInputString, &gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    //
    // Load in the remaining integers..
    //

    sprintf (szInputString, "\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",
            gstruct_GameVars.iClimaxCount1,
            gstruct_GameVars.iClimaxCount2,
            gstruct_GameVars.iArousalLevel1,
            gstruct_GameVars.iArousalLevel2,
            gstruct_GameVars.iArousalBaseIncrement1,
            gstruct_GameVars.iArousalBaseIncrement2,
            gstruct_GameVars.iArousalLimit1,
            gstruct_GameVars.iArousalLimit2,
            gstruct_GameVars.iPastActionsNum);

    iRet = futils_addStringToFileBufferEnd (szInputString, &gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    //
    // Now for the selection command data.
    //

    sprintf (szInputString, "##CommandList\n=%d\n", (int)giCommandListUsed);

    iRet = futils_addStringToFileBufferEnd (szInputString, &gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    for (iOffset = 0; (int)giCommandListUsed > iOffset; iOffset++)
    {
        sprintf (szInputString, "%d %d %s\n",
                (int)gstruct_CommandList[iOffset].iSceneId,
                (int)gstruct_CommandList[iOffset].iSubSceneId,
                gstruct_CommandList[iOffset].pszCommand);

        iRet = futils_addStringToFileBufferEnd (szInputString, &gstruct_FileBuffGen);

        if (iRet != 0)
            return 1;
    }

    //
    // Now for the archive data.
    //

    sprintf (szInputString, "##ArchiveBuf\n-%d\n", (int)strlen (gpszArchiveBuffer));

    iRet = futils_addStringToFileBufferEnd (szInputString, &gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    iRet = futils_addStringToFileBufferEnd (gpszArchiveBuffer, &gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    //
    // Now for the dailog data.
    //

    sprintf (szInputString, "##DialogBuf\n-%d\n", (int)strlen (gpszDialogBuffer));

    iRet = futils_addStringToFileBufferEnd (szInputString, &gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    iRet = futils_addStringToFileBufferEnd (gpszDialogBuffer, &gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    //
    // trailer line.
    //

    iRet = futils_addStringToFileBufferEnd ("##End##\n\n", &gstruct_FileBuffGen);
    if (iRet != 0)
        return 1;

    //
    // Write the file.
    //

    unlink (pszFileName);

#ifdef INTERFACE_CURSES
    futils_writeFileHeaderAndData (pszFileName, "!Version 0.90\n", gstruct_FileBuffGen.pcData);
#else
    sprintf (szInputString, "*%s\n", gszSessionTrackingId);

    futils_writeFileHeaderAndData (pszFileName, szInputString, gstruct_FileBuffGen.pcData);
#endif //INTERFACE_CURSES

    return 0;
}


