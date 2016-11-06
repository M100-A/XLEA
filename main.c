//
// main.c
//
// main listing of the program..
//

#include "common.h"
#include "gamelogic.h"

extern struct  mutils_commandlist  *gstruct_CommandList;
extern int     giCommandListUsed;

extern char    *gpszDialogBuffer;
extern int     giDialogBufferUsed;
extern char    *gpszArchiveBuffer;
extern int     giArchiveBufferUsed;

// storage of the (in progress) game variables..
struct  gamelogic_variablelist  gstruct_GameVars;

// storage of the file load structure..
struct	futils_filebuff         gstruct_FileBuffGen;

// this is the debug output flag
char    gcDebugFlag = 0;
// this is referenced in a lot of the scene files to turn on logging in most places where flags are set and used
// unfortunately, this messes up the dialog display.
// this is turned on by the -D command line switch.

char    gcTabDefault = 0;
// global variable for defining that tab mode is the default mode


// this is the actual scene list..
struct  main_scenelist gstructSceneList[] =
{
    {    0, gamelogic00_scene0000 },
    {    1, gamelogic00_scene0001 },
    {    2, gamelogic00_scene0002 },
    {    3, gamelogic00_scene0003 },
    {    4, gamelogic00_scene0004 },
    {    9, gamelogic00_scene0009 },

    { 1001, gamelogic01_scene1001 },
    { 1002, gamelogic01_scene1002 },
    { 1003, gamelogic01_scene1003 },
    { 1004, gamelogic01_scene1004 },
    { 1005, gamelogic01_scene1005 },
    { 1006, gamelogic01_scene1006 },
    { 1007, gamelogic01_scene1007 },
    { 1008, gamelogic01_scene1008 },

    { 1010, gamelogic02_scene1010 },
    { 1011, gamelogic02_scene1011 },
    { 1012, gamelogic02_scene1012 },
    { 1013, gamelogic02_scene1013 },
    { 1014, gamelogic02_scene1014 },
    { 1015, gamelogic02_scene1015 },
    { 1016, gamelogic02_scene1016 },
    { 1017, gamelogic02_scene1017 },
    { 1018, gamelogic02_scene1018 },
    { 1019, gamelogic02_scene1019 },
    { 1020, gamelogic02_scene1020 },
    { 1021, gamelogic02_scene1021 },
    { 1022, gamelogic02_scene1022 },
    { 1023, gamelogic02_scene1023 },
    { 1024, gamelogic02_scene1024 },
    { 1025, gamelogic02_scene1025 },
    { 1026, gamelogic02_scene1026 },
    { 1027, gamelogic02_scene1027 },
    { 1028, gamelogic02_scene1028 },
    { 1029, gamelogic02_scene1029 },
    { 1030, gamelogic02_scene1030 },
    { 1031, gamelogic02_scene1031 },
    { 1032, gamelogic02_scene1032 },
    { 1033, gamelogic02_scene1033 },
    { 1034, gamelogic02_scene1034 },
    { 1035, gamelogic02_scene1035 },
    { 1036, gamelogic02_scene1036 },
    { 1037, gamelogic02_scene1037 },
    { 1038, gamelogic02_scene1038 },
    { 1039, gamelogic02_scene1039 },
    { 1040, gamelogic02_scene1040 },
    { 1041, gamelogic02_scene1041 },
    { 1042, gamelogic02_scene1042 },
    { 1043, gamelogic02_scene1043 },
    { 1044, gamelogic02_scene1044 },
    { 1045, gamelogic02_scene1045 },
    { 1046, gamelogic02_scene1046 },

    { 1060, gamelogic03_scene1060 },
    { 1061, gamelogic03_scene1061 },
    { 1062, gamelogic03_scene1062 },
    { 1063, gamelogic03_scene1063 },
    { 1064, gamelogic03_scene1064 },
    { 1065, gamelogic03_scene1065 },
    { 1066, gamelogic03_scene1066 },
    { 1067, gamelogic03_scene1067 },
    { 1068, gamelogic03_scene1068 },
    { 1069, gamelogic03_scene1069 },
    { 1070, gamelogic03_scene1070 },
    { 1071, gamelogic03_scene1071 },
    { 1072, gamelogic03_scene1072 },
    { 1073, gamelogic03_scene1073 },
    { 1074, gamelogic03_scene1074 },
    { 1075, gamelogic03_scene1075 },
    { 1076, gamelogic03_scene1076 },
    { 1077, gamelogic03_scene1077 },
    { 1078, gamelogic03_scene1078 },
    { 1079, gamelogic03_scene1079 },
    { 1080, gamelogic03_scene1080 },
    { 1081, gamelogic03_scene1081 },
    { 1082, gamelogic03_scene1082 },
    { 1083, gamelogic03_scene1083 },

    { 1090, gamelogic04_scene1090 },
    { 1091, gamelogic04_scene1091 },
    { 1092, gamelogic04_scene1092 },
    { 1093, gamelogic04_scene1093 },
    { 1094, gamelogic04_scene1094 },

    { 1100, gamelogic05_scene1100 },
    { 1101, gamelogic05_scene1101 },
    { 1102, gamelogic05_scene1102 },
    { 1103, gamelogic05_scene1103 },
    { 1104, gamelogic05_scene1104 },
    { 1105, gamelogic05_scene1105 },
    { 1106, gamelogic05_scene1106 },

    { 1110, gamelogic06_scene1110 },
    { 1111, gamelogic06_scene1111 },
    { 1112, gamelogic06_scene1112 },
    { 1113, gamelogic06_scene1113 },
    { 1114, gamelogic06_scene1114 },
    { 1115, gamelogic06_scene1115 },
    { 1116, gamelogic06_scene1116 },
    { 1117, gamelogic06_scene1117 },
    { 1118, gamelogic06_scene1118 },
    { 1119, gamelogic06_scene1119 },
    { 1120, gamelogic06_scene1120 },
    { 1121, gamelogic06_scene1121 },
    { 1122, gamelogic06_scene1122 },
    { 1123, gamelogic06_scene1123 },
    { 1124, gamelogic06_scene1124 },
    { 1125, gamelogic06_scene1125 },
    { 1126, gamelogic06_scene1126 },
    { 1127, gamelogic06_scene1127 },
    { 1128, gamelogic06_scene1128 },
    { 1129, gamelogic06_scene1129 },
    { 1130, gamelogic06_scene1130 },
    { 1131, gamelogic06_scene1131 },
    { 1132, gamelogic06_scene1132 },
    { 1133, gamelogic06_scene1133 },
    { 1134, gamelogic06_scene1134 },
    { 1135, gamelogic06_scene1135 },
    { 1136, gamelogic06_scene1136 },
    { 1137, gamelogic06_scene1137 },
    { 1138, gamelogic06_scene1138 },
    { 1139, gamelogic06_scene1139 },
    { 1140, gamelogic06_scene1140 },
    { 1141, gamelogic06_scene1141 },
    { 1142, gamelogic06_scene1142 },
    { 1143, gamelogic06_scene1143 },
    { 1144, gamelogic06_scene1144 },
    { 1145, gamelogic06_scene1145 },
    { 1146, gamelogic06_scene1146 },
    { 1147, gamelogic06_scene1147 },
    { 1148, gamelogic06_scene1148 },
    { 1149, gamelogic06_scene1149 },
    { 1150, gamelogic06_scene1150 },

    { 1180, gamelogic07_scene1180 },
    { 1200, gamelogic07_scene1200 },
    { 1220, gamelogic07_scene1220 },
    { 1221, gamelogic07_scene1221 },
    { 1222, gamelogic07_scene1222 },
    { 1223, gamelogic07_scene1223 },
    { 1224, gamelogic07_scene1224 },
    { 1225, gamelogic07_scene1225 },
    { 1230, gamelogic07_scene1230 },
    { 1231, gamelogic07_scene1231 },
    { 1232, gamelogic07_scene1232 },
    { 1233, gamelogic07_scene1233 },
    { 1234, gamelogic07_scene1234 },
    { 1235, gamelogic07_scene1235 },
    { 1240, gamelogic07_scene1240 },
    { 1241, gamelogic07_scene1241 },
    { 1242, gamelogic07_scene1242 },
    { 1243, gamelogic07_scene1243 },
    { 1244, gamelogic07_scene1244 },
    { 1245, gamelogic07_scene1245 },
    { 1246, gamelogic07_scene1246 },
    { 1247, gamelogic07_scene1247 },
    { 1248, gamelogic07_scene1248 },
    { 1250, gamelogic07_scene1250 },
    { 1251, gamelogic07_scene1251 },
    { 1252, gamelogic07_scene1252 },
    { 1253, gamelogic07_scene1253 },
    { 1261, gamelogic07_scene1261 },
    { 1270, gamelogic07_scene1270 },
    { 1271, gamelogic07_scene1271 },
    { 1281, gamelogic07_scene1281 },
    {   -1, NULL                  }
};


#ifdef PURE_WINDOWS_VERSION
int dummy_main (int argc, char **argv);

int APIENTRY WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    LPSTR lpszCmdLine, int nCmdShow)
{
   char *argv[30];
   int i, argc = 1;

   argv[0] = "Rain";
   for (i = 0; lpszCmdLine[i]; i++)
       if (lpszCmdLine[i] != ' ' && (!i || lpszCmdLine[i - 1] == ' '))
          argv[argc++] = lpszCmdLine + i;

   for (i = 0; lpszCmdLine[i]; i++)
       if (lpszCmdLine[i] == ' ')
          lpszCmdLine[i] = '\0';

   return dummy_main (argc, (char **)argv);
}

int dummy_main (int argc, char **argv)
#else       /* "usual",  console-app version: */
int main (int argc, char **argv)
#endif
{
    int     iKey;
    char    *pszBase;
    int     iRowOut;
    int     iRowStart;
    int     iRowOffset;
    int     iScrHeight;
    int     iScrWidth;
    int     iSpaceOffset;
    char    cScroll1UpDown;
    char    cReprint;
    char    cPrintLine;
    char    cFullScreenFlag;
    char    cClearScreenFlag;
    char    cRememberEditFlag;
    char    szInputString[400];
    char    szWorkString[410];
    int     iOffset;
    int     iEndOffset;
    int     iEditRow;
    int     iPosition;
    int     iPosWinEnd;
    char    cKeyMode;
    char    cEnterAction;
    int     iCommands;
    int     iCommandOffset;
    char    *pszCommand;
    int     iCount;
    int     iLen;
    int     iLen2;

    char    cLockError;
    int     iCurrentSceneId;
    int     iSceneId;
    int     iSubSceneId;
    int     iRet;
    char    cExitFlag = 0;

    char    cLogEnable = 0;
    char    cArchiveLine;

    //
    // Process the command line arguments.
    //
    iOffset = 0;
    while (--argc)
    {
        iOffset++;
        pszBase = argv [iOffset];
        if (*pszBase == '-')
        {
            pszBase++;

            switch (*pszBase)
            {
            // -D turns on the debug outputs in the dialog
            case 'D':
                gcDebugFlag = 1;
                break;

            // -L turns on the log file of all of the output
            case 'L':
                cLogEnable = 1;
                break;

            // -t defaults the input to tab mode (0.82 addition)..
            case 't':
                gcTabDefault = 1;
                break;
            }
        }
    }

    // set the flag to indicate that the memory variables are invalid..
    gstruct_GameVars.cFVarsValid = 0;

    // set the flag to say that the buffered file memory is not initialised yet.
    gstruct_FileBuffGen.bMemFlag = FALSE;
    // If this is NOT done, then horrible game crashing things can happen with
    //   futils_preAllocateBuffer() and futils_loadFileIntoMemory()

    //
    // In the middle of the startup init, I am going to force allocate gstruct_FileBuffGen
    //
    // I know for a fact that the memory allocation will not normally exceed 100Kilobytes.
    // The ENTIRE main dialog (with comments) is only 75Kilobytes (it won't all be shown
    //   at the same time), and the archive buffer is limited to 64Kilobytes.
    //
    // So, for the purposes of working with the save files of a limited size, I am going
    //   to bulk init the memory storage for gstruct_FileBuffGen now. This saves potential
    //   realloc() calls and overhead later.
    //
    iRet = futils_preAllocateBuffer ((unsigned long)122880, &gstruct_FileBuffGen);

    if (iRet != 0)
    {
        printf ("fault: futils_preAllocateBuffer malloc error\n");
        return 1;
    }

    //
    // Initialize (allocate memory) for the command list and dialog buffer..
    //
    // Note: the savescreen functions are alternate versions of the mutils ones.
    // The reason for separate savescreen functions, and memory buffers is so that
    // invoking the save screen does not overwrite the main memory buffers
    // (that way they can be saved, and returned to after the save file is made).
    //

    // the command list for savescreen is smaller than the main one, so it is least
    //   likely to expand.
    iRet = savescreen_initAndClearCommandList ();

    if (iRet != 0)
    {
        printf ("fault: savescreen_initAndClearCommandList malloc error\n");
        return 1;
    }

    // the dialog buffer is only 2K, which is unlikely to expand either.
    iRet = savescreen_initAndClearDialogBuffer ();

    if (iRet != 0)
    {
        printf ("fault: savescreen_initAndClearDialogBuffer malloc error\n");
        return 1;
    }

    // I set the main command list to be big enough to never expand for this game
    //   (it still can, it is just there is no need).
    iRet = mutils_initAndClearCommandList ();

    if (iRet != 0)
    {
        printf ("fault: mutils_initAndClearCommandList malloc error\n");
        return 1;
    }

    // I init the dialog buffer last, which inits the fixed archive buffer first.
    //  The dialog buffer is the most likely to grow (and be realloced).
    // setting the order this way reduces the likelihood of memory fragmentation.
    iRet = mutils_initAndClearDialogBuffer ();

    if (iRet != 0)
    {
        printf ("fault: mutils_initAndClearDialogBuffer malloc error\n");
        return 1;
    }

    // init the random number generator
    {
        time_t tTime;

        srand ((unsigned) time (&tTime));
    }

    // init data.. (start at the main menu)
    iSceneId = 0;
    iSubSceneId = 0;

#ifdef __PDCURSES__
    // this is where the screen dimensions are loaded in.
    ttytype[0] = 25;   ttytype[1] = (char)250;  // allow 25-250 lines.
    ttytype[2] = 80;   ttytype[3] = (char)250;  // allow 80-250 columns.
    // these have to be set BEFORE initscr()..
#endif

    // start curses..
    initscr ();

#ifdef __PDCURSES__
    start_color ();
    use_default_colors ();
#endif

    // raw mode..
	raw ();

    // enables the keypad input..
    keypad (stdscr, TRUE);

    // turns off echoing of key presses..
    noecho ();

    // allows the use of the scrl() function..
    scrollok (stdscr, TRUE);

    // initialize the static part of the search/replace system..
    mdialog_initStaticList ();

    // let's force populate something into the scroll back buffer
    mutils_addToDialogBuffer ("\n>\n");

#ifdef __PDCURSES__
    PDC_set_title( "Xyla's Little Elven Adventure 0.90");
#endif

    // this is the main while loop..
    while (1)
    {
        // clear the two buffers..
        mutils_initAndClearCommandList ();
        mutils_addDialogToArchive (2);

        iCurrentSceneId = iSceneId;

        //
        // SceneId 5 is special in the form that it does not exist in the lookup table.
        //  The subsceneid is the id of the save file. After this is (successfully) loaded,
        //  control is dropped through to the display.
        //
        if ((iSceneId == 5) && (iSubSceneId > -1) && (iSubSceneId < 9))
        {
            sprintf (szWorkString, "save%d.txt", (int)(iSubSceneId + 1));

            iRet = statefile_loadSaveFile (szWorkString);

            if (iRet)
            {
                attron(A_BOLD);
                mvaddstr (1, 1, "Load of saved game failed!.. sending back to main menu.");
                attroff(A_BOLD);
                refresh();

                mutils_initAndClearDialogBuffer ();
                sprintf (szInputString, "Restoration of save %d failed!\n\n>\n", iSubSceneId + 1);
                mutils_addToDialogBuffer (szInputString);

                // sleep for about 15 seconds
                futils_sleep (15000);

                iSceneId = 0;
                iSubSceneId = 0;
                continue;
            }
            else
            {
                attron(A_BOLD);
                mvaddstr (1, 1, "Load of saved game successful.");
                attroff(A_BOLD);
                refresh();

                // sleep for about 2 seconds
                futils_sleep (2000);
            }
        }
        else
        {
            // this is the while loop that scans the jump table for the scene id.
            cLockError = 0;
            iOffset = 0;
            while (1)
            {
                if (gstructSceneList[iOffset].iSceneId == -1)
                {
                    cLockError = 1;
                    break;
                }

                if (gstructSceneList[iOffset].iSceneId == iSceneId)
                    break;

                iOffset++;
            }

            // if we ran to the end of the table without a lock.. then.. there is a problem.
            if (cLockError != 0)
            {
                sprintf (szWorkString, "\n\nFAULT: unable to find scene id %d.\n\nSending player back to the main menu.\n", iSceneId);

                // dialog should always be capped like this.. so that it works within the screen scroll.
                mutils_addToDialogBuffer (szWorkString);

                mutils_addToCommandList ("Main Menu", 0, 0);
            }
            else
            {
                // this is where the actual referenced function is called.
                iRet = gstructSceneList[iOffset].vFunc(iSubSceneId, 0);

                if (iRet != 0)
                {
                    //
                    // Unfortunately, the use of endwin() only works for Linux (it causes the windows PDCURSES program to crash)..
                    //
                    // So. on a windows system, this won't display a thing.. the program will just exit if it has either a malloc or nest depth problem.
                    //
#ifndef __PDCURSES__
                    endwin();
                    printf ("fault: non-zero (%d) return from scene function %d\n", iRet, iSceneId);
                    //
                    // Currently I know of only 2 non-zero return codes.
                    //
                    // 1 which means that there was a malloc()/realloc() problem.
                    // 101 which means that MAXGAMESCENENESTS was encountered with the scene functions linking to each other.
                    //
                    // MAXGAMESCENENESTS is defined in gamelogic.h
                    // the check of the number of scenes nesting each other is to prevent the program smashing its own stack in an infinite loop (causing a segmentation fault).
                    //

                    if (iRet == 101)
                    {
                        printf ("%s\n{check the last}\n", gpszDialogBuffer);

                        printf ("fault: non-zero (%d) return from scene function %d\n", iRet, iSceneId);
                    }
                    //
                    // This is a horrible way of bailing out, but when debug is on, this is the only way that I can figure out where the code is caught in an endless loop..
                    //
#endif

                    return 1;
                }

                if (giCommandListUsed == 0)
                {
                    sprintf (szWorkString, "\n\nFAULT: no command list at the end of the call juncture.. %d (%d).\n\nSending player back to the main menu.\n", iSceneId, iSubSceneId);

                    // dialog should always be capped like this.. so that it works within the screen scroll.
                    mutils_addToDialogBuffer (szWorkString);

                    mutils_addToCommandList ("Main Menu", 0, 0);
                }
            }

            // dialog should always be capped like this.. so that it works within the screen scroll.
            mutils_addToDialogBuffer (">\n");
        }

        //
        // I turned this into something that is activated by a command line switch.
        //
        if (cLogEnable != 0)
            futils_writeFileHeaderAndData ("XLEA-Log.txt", "#XLEA v0.90 log output\n", gpszDialogBuffer);

        for (iOffset = 0; iOffset < 399; iOffset++)
            szInputString[iOffset] = 0;

        // re-init the scrolling area..
        iRowOut = 0;
        iRowStart = 0;
        cFullScreenFlag = 0;
        cRememberEditFlag = 0;
        cClearScreenFlag = 1; // forces the clear of the screen
        cKeyMode = 0;
        iEditRow = 5;
        iPosition = 0;
        cEnterAction = 0;
        iCommands = 0;
        iCommandOffset = 0;
        iCount = 0;

        // this is a special flag that I included for scrolling the screen a single line at a time.
        cScroll1UpDown = 0;

#ifdef __PDCURSES__
        // the usage of resize_term is for PDCURSES, to enable it to pickup when someone has changed the terminal window area, without this
        //  PDCURSES will readjust its buffers and allow the getmaxyx to pickup the changed screen area.
        resize_term (0, 0);
#endif

        // get the screen resolution again..
		getmaxyx (stdscr, iScrHeight, iScrWidth);

        // if default tab mode is enabled, setup the variables
        if (gcTabDefault != 0)
        {
            // iCommands would already be 0 from the above setting.

            // just count.. it should not be a problem, as the user would have not entered any partial values yet.
            for (iOffset = 0; iOffset < giCommandListUsed; iOffset++)
            {
                iCommands++;
            }
        }

        //
        // I should figure out where Row Start is.
        //
        iRowStart = mutils_calcRowStartOffset (iScrWidth);

        {
            int iDialogRows = mutils_calcDialogRows (iScrWidth);

            if (iDialogRows < (iScrHeight - 2))
            {
                cKeyMode = 5;
            }
        }

        while (1)
        {
            // this is in scroll mode..
            if (cKeyMode == 0)
            {
                pszBase = gpszArchiveBuffer;
                iRowOut = 0;
                cFullScreenFlag = 0;
                iOffset = 0;
                cArchiveLine = 1;

                if (cClearScreenFlag)
                {
                    clear ();
                    cClearScreenFlag = 0;
                    cReprint = 1;
                }

                // this is the code that skips the lines that we have already scrolled past.
                if (iRowStart != 0)
                {
                    iRowOffset = 0;

                    while (iRowStart > iRowOffset)
                    {
                        while (1)
                        {
                            if (pszBase[0] != ' ')
                                break;

                            pszBase++;
                        }

                        iOffset = 0;
                        iSpaceOffset = -1;

                        // first pass, find if this is a null or CR char..
                        while (1)
                        {
                            if (pszBase[iOffset] == '\n')
                                break;
                            if (pszBase[iOffset] == 0)
                                break;
                            if (iOffset >= iScrWidth)
                                break;
                            if (pszBase[iOffset] == ' ')
                                iSpaceOffset = iOffset;

                            iOffset++;
                        }

                        // if the line is blank.. skip it..
                        if (iOffset == 0)
                        {
                            // if this is the end.. break..
                            if (pszBase[iOffset] == 0)
                            {
//                              iRowStart = iRowOffset;

                                if (cArchiveLine != 0)
                                {
                                    pszBase = gpszDialogBuffer;
                                    cArchiveLine = 0;
                                }
                                else
                                    break;

                                continue;
                            }

                            pszBase++;

                            iRowOffset++;
                            continue;
                        }

                        // if this is the end.. print the output, and then break..
                        if (pszBase[iOffset] == 0)
                        {
                            if (cArchiveLine != 0)
                            {
                                pszBase = gpszDialogBuffer;
                                cArchiveLine = 0;
                            }
                            else
                                break;

                            continue;
                        }

                        // if this is a newline.
                        if (pszBase[iOffset] == '\n')
                        {
                            pszBase += (iOffset + 1);

                            iRowOffset++;
                            continue;
                        }

                        // to have reached this point, there are no newlines, and we are in the middle of the string..

                        // if we did not find a space character
                        if (iSpaceOffset == -1)
                        {
                            pszBase += iOffset;

                            iRowOffset++;
                            continue;
                        }

                        // otherwise.. we do have a space character..
                        pszBase += (iSpaceOffset + 1);

                        // increment the row offset..
                        iRowOffset++;
                    }
                }

                // this is the code that displays the lines we are looking at.
                while (1)
                {
                    if (cReprint != 0)
                    {
                        cPrintLine = 1;
                    }
                    else
                    {
                        cPrintLine = 0;

                        if ((cScroll1UpDown == -1) && (iRowOut == 0))
                            cPrintLine = 1;
                        else if ((cScroll1UpDown == 1) && (iRowOut == (iScrHeight - 2)))
                        {
                            cPrintLine = 1;

                            for (iOffset = 0; iOffset < (iScrWidth - 1); iOffset++)
                                szWorkString[iOffset] = ' ';

                            szWorkString[iScrWidth - 1] = 0;

                            mvaddstr (iRowOut, 0, szWorkString);
                            // this erases the line with the <more> for redraw.
                        }
                        else if (iRowOut == (iScrHeight - 1))
                        {
                            cPrintLine = 1;
                            if (cScroll1UpDown == -1)
                            {
                                for (iOffset = 0; iOffset < (iScrWidth - 1); iOffset++)
                                    szWorkString[iOffset] = ' ';

                                szWorkString[iScrWidth - 1] = 0;

                                mvaddstr (iRowOut, 0, szWorkString);
                                // this erases the line with the <more> for redraw.
                            }
                        }
                        else
                            cPrintLine = 0;
                    }

                    if ((iRowOut + 1) > iScrHeight)
                    {
                        cFullScreenFlag = 1;
                        break;
                    }

                    if (cPrintLine != 0)
                    {
                        move (iRowOut, 0);
                    }
                    iOffset = 0;
                    iSpaceOffset = -1;

                    while (1)
                    {
                        if (pszBase[0] != ' ')
                            break;

                        pszBase++;
                    }

                    // first pass, find if this is a null or CR char..
                    while (1)
                    {
                        if (pszBase[iOffset] == '\n')
                            break;
                        if (pszBase[iOffset] == 0)
                            break;
                        if ((iRowOut + 1) >= iScrHeight)
                        {
                            if (iOffset >= (iScrWidth - 8))
                                break;
                        }
                        if (iOffset >= iScrWidth)
                            break;
                        if (pszBase[iOffset] == ' ')
                            iSpaceOffset = iOffset;

                        iOffset++;
                    }

                    // if the line is blank.. skip it..
                    if (iOffset == 0)
                    {
                        // if this is the end.. break..
                        if (pszBase[iOffset] == 0)
                        {
                            if (cArchiveLine != 0)
                            {
                                pszBase = gpszDialogBuffer;
                                cArchiveLine = 0;
                            }
                            else
                                break;

                            continue;
                        }

                        iRowOut++;
                        pszBase++;

                        continue;
                    }

                    // if this is the end.. print the output, and then break..
                    if (pszBase[iOffset] == 0)
                    {
                        if (cPrintLine != 0)
                        {
                            if (cArchiveLine != 0)
                                attron(A_DIM);
                            printw ("%s", pszBase);
                            if (cArchiveLine != 0)
                                attroff(A_DIM);
                        }

                        if (cArchiveLine != 0)
                        {
                            pszBase = gpszDialogBuffer;
                            cArchiveLine = 0;
                        }
                        else
                            break;

                        continue;
                    }

                    // if this is a newline.
                    if (pszBase[iOffset] == '\n')
                    {
                        if (cPrintLine != 0)
                        {
                            if (cArchiveLine != 0)
                                attron(A_DIM);
                            addnstr (pszBase, iOffset);
                            if (cArchiveLine != 0)
                                attroff(A_DIM);
                        }

                        iRowOut++;
                        pszBase += (iOffset + 1);

                        continue;
                    }

                    // to have reached this point, there are no newlines, and we are in the middle of the string..

                    // if we did not find a space character
                    if (iSpaceOffset == -1)
                    {
                        if (cPrintLine != 0)
                        {
                            if (cArchiveLine != 0)
                                attron(A_DIM);
                            addnstr (pszBase, iOffset);
                            if (cArchiveLine != 0)
                                attroff(A_DIM);
                        }

                        iRowOut++;
                        pszBase += iOffset;

                        continue;
                    }

                    // otherwise.. we do have a space character..
                    if (cPrintLine != 0)
                    {
                        if (cArchiveLine != 0)
                            attron(A_DIM);
                        addnstr (pszBase, iSpaceOffset);
                        if (cArchiveLine != 0)
                            attroff(A_DIM);
                    }
                    iRowOut++;
                    pszBase += (iSpaceOffset + 1);
                }

                // reset the up/down and reprint flags
                cScroll1UpDown = 0;
                cReprint = 0;

                if ((iRowOut < 3) && (iRowStart > 0))
                {
                    iRowStart--;
                    if (iRowStart)
                        iRowStart--;
                    continue;
                }

                if (cFullScreenFlag == 1)
                {
                    attron (A_REVERSE | A_BOLD);
                    move (iScrHeight - 1, iScrWidth - 7);
                    addstr ("<more>");
                    attroff (A_REVERSE | A_BOLD);
                }
                else
                {
                    iEditRow = iRowOut - 1;

                    if (gcTabDefault != 0)
                    {
                        if (cRememberEditFlag != 0)
                        {
                            mvaddch (iEditRow, 0, '>' | A_BOLD);
                            cKeyMode = 10;
                        }
                        else
                        {
                            mvaddch (iEditRow, 0, ':');
                            cKeyMode = 20;
                        }
                    }
                    else
                    {
                        if (cRememberEditFlag != 0)
                        {
                            mvaddch (iEditRow, 0, ':');
                            cKeyMode = 20;
                        }
                        else
                        {
                            mvaddch (iEditRow, 0, '>' | A_BOLD);
                            cKeyMode = 10;
                        }
                    }
                    continue;
                }

                // refresh the screen..
                refresh();

                iKey = getch ();

                // Ctrl-Q & Ctrl-C
                if ((iKey == 17) || (iKey == 3))
                {
                    cExitFlag = 1;
                    break;
                }

                // Ctrl-U
                if ((iKey == 21) && (iCurrentSceneId != 0))
                {
                    iSceneId = 0;
                    iSubSceneId = 0;
                    break;
                }

                // Ctrl-S
                if ((iKey == 19) && (iCurrentSceneId > 900))
                // Save should not trigger on itself, or other menu scenes.
                {
                    int iScrHeightNew;
                    int iScrWidthNew;
                    int iDialogRows;

                    iRet = savescreen_playerInteract ();

                    if (iRet == 1)
                    {
                        cExitFlag = 1;
                        break;
                    }

                    if (iRet == 10)
                    {
                        iSceneId = 0;
                        iSubSceneId = 0;
                        break;
                    }

#ifdef __PDCURSES__
                    resize_term (0, 0);
#endif
                    cClearScreenFlag = 1;
                    getmaxyx (stdscr, iScrHeightNew, iScrWidthNew);

                    if ((iScrWidthNew != iScrWidth) || (iScrHeightNew != iScrHeight))
                    {
                        // reset the row start to the top of the dialog
                        iRowStart = mutils_calcRowStartOffset (iScrWidthNew);
                    }

                    iScrWidth = iScrWidthNew;
                    iScrHeight = iScrHeightNew;

                    iDialogRows = mutils_calcDialogRows (iScrWidth);

                    if (iDialogRows < (iScrHeight - 2))
                    {
                        cKeyMode = 5;
                    }

                    continue;
                }

                if (iKey == KEY_RESIZE)
                {
                    int iScrHeightNew;
                    int iScrWidthNew;
                    int iDialogRows;

#ifdef __PDCURSES__
                    resize_term (0, 0);
#endif
                    cClearScreenFlag = 1;
                    getmaxyx (stdscr, iScrHeightNew, iScrWidthNew);

                    if ((iScrWidthNew != iScrWidth) || (iScrHeightNew != iScrHeight))
                    {
                        // reset the row start to the top of the dialog
                        iRowStart = mutils_calcRowStartOffset (iScrWidthNew);
                    }

                    iScrWidth = iScrWidthNew;
                    iScrHeight = iScrHeightNew;

                    iDialogRows = mutils_calcDialogRows (iScrWidth);

                    if (iDialogRows < (iScrHeight - 2))
                    {
                        cKeyMode = 5;
                    }

                    continue;
                }

                // home key..
                if (iKey == KEY_HOME)
                {
                    int iRowStartNew;

                    iRowStartNew = mutils_calcRowStartOffset (iScrWidth);

                    if (iRowStartNew != iRowStart)
                    {
                        iRowStart = iRowStartNew;

                        cClearScreenFlag = 1;
                    }

                    continue;
                }

                // end key..
                if (iKey == KEY_END)
                {
                    cKeyMode = 5;
                    continue;
                }

                if (iKey == KEY_DOWN)
                {
                    iRowStart++;
                    cScroll1UpDown = 1;
                    scrl (1);

                    continue;
                }

                if (iKey == KEY_UP)
                {
                    if (iRowStart > 0)
                    {
                        iRowStart--;
                        cScroll1UpDown = -1;
                        scrl (-1);
                    }

                    continue;
                }

                if (iKey == KEY_NPAGE)
                {
                    for (iOffset = 0; iOffset < (iScrHeight - 1); iOffset++)
                    {
                        iRowStart++;
                    }

                    cClearScreenFlag = 1;

                    continue;
                }

                if (iKey == KEY_PPAGE)
                {
                    if (iRowStart > 0)
                    {
                        for (iOffset = 0; iOffset < (iScrHeight - 1); iOffset++)
                        {
                            iRowStart--;

                            if (iRowStart == 0)
                                break;
                        }

                        cClearScreenFlag = 1;
                    }

                    continue;
                }
            }
            // this is the re-calc mode for a resize of the two line editor modes..
            else if (cKeyMode == 5)
            {
                cClearScreenFlag = 1;
                getmaxyx (stdscr, iScrHeight, iScrWidth);
                pszBase = gpszArchiveBuffer;
                cArchiveLine = 1;

                iRowOffset = 0;

                while (1)
                {
                    while (1)
                    {
                        if (pszBase[0] != ' ')
                            break;

                        pszBase++;
                    }

                    iOffset = 0;
                    iSpaceOffset = -1;

                    // first pass, find if this is a null or CR char..
                    while (1)
                    {
                        if (pszBase[iOffset] == '\n')
                            break;
                        if (pszBase[iOffset] == 0)
                            break;
                        if (iOffset >= iScrWidth)
                            break;
                        if (pszBase[iOffset] == ' ')
                            iSpaceOffset = iOffset;

                        iOffset++;
                    }

                    // if the line is blank.. skip it..
                    if (iOffset == 0)
                    {
                        // if this is the end.. break..
                        if (pszBase[iOffset] == 0)
                        {
                            iRowStart = iRowOffset;

                            if (cArchiveLine != 0)
                            {
                                pszBase = gpszDialogBuffer;
                                cArchiveLine = 0;
                            }
                            else
                                break;

                            continue;
                        }

                        pszBase++;

                        iRowOffset++;
                        continue;
                    }

                    // if this is the end.. print the output, and then break..
                    if (pszBase[iOffset] == 0)
                    {
                        iRowStart = iRowOffset;

                        if (cArchiveLine != 0)
                        {
                            pszBase = gpszDialogBuffer;
                            cArchiveLine = 0;
                        }
                        else
                            break;

                        continue;
                    }

                    // if this is a newline.
                    if (pszBase[iOffset] == '\n')
                    {
                        pszBase += (iOffset + 1);

                        iRowOffset++;
                        continue;
                    }

                    // to have reached this point, there are no newlines, and we are in the middle of the string..

                    // if we did not find a space character
                    if (iSpaceOffset == -1)
                    {
                        pszBase += iOffset;

                        iRowOffset++;
                        continue;
                    }

                    // otherwise.. we do have a space character..
                    pszBase += (iSpaceOffset + 1);

                    // increment the row offset..
                    iRowOffset++;
                }

                iRowStart -= (iScrHeight - 1);
                while (iRowStart < 0)
                    iRowStart++;

                cKeyMode = 0;

                continue;
            }
            // this is the editor processing mode..
            else if (cKeyMode == 10)
            {
                // first, count the matches..
                iCount = 0;
                iLen = (int)strlen (szInputString);

                for (iOffset = 0; iOffset < giCommandListUsed; iOffset++)
                {
                    if (iLen != 0)
                    {
                        if (futils_strnicmp (gstruct_CommandList[iOffset].pszCommand, szInputString, iLen) == 0)
                        {
                            pszCommand = gstruct_CommandList[iOffset].pszCommand;
                            iSceneId = gstruct_CommandList[iOffset].iSceneId;
                            iSubSceneId = gstruct_CommandList[iOffset].iSubSceneId;
                            iCount++;
                        }
                    }
                    else
                    {
                        pszCommand = gstruct_CommandList[iOffset].pszCommand;
                        iSceneId = gstruct_CommandList[iOffset].iSceneId;
                        iSubSceneId = gstruct_CommandList[iOffset].iSubSceneId;
                        iCount++;
                    }
                }

                if (iCount != iCommands)
                {
                    iCommands = iCount;

                    for (iOffset = 0; iOffset < (iScrWidth - 1); iOffset++)
                        szWorkString[iOffset] = ' ';

                    szWorkString[iScrWidth - 1] = 0;

                    mvaddstr (iEditRow + 1, 0, szWorkString);

                    if (iCommands == 0)
                    {
                        attron(A_DIM);
                        mvaddnstr (iEditRow + 1, 0, "-No commands..", iScrWidth - 1);
                        attroff(A_DIM);
                        iSceneId = -1;
                        iSubSceneId = -1;
                    }
                    else
                    {
                        if (iCommands == 1)
                        {
                            if (strcmp (pszCommand, szInputString) == 0)
                            {
                                attron(A_DIM);
                                mvaddnstr (iEditRow + 1, 0, "press <enter> to action.", iScrWidth - 1);
                                attroff(A_DIM);
                                cEnterAction = 1;
                            }
                            else
                            {
                                cEnterAction = 0;

                                iLen2 = (int)strlen (pszCommand);

                                if (iLen2 > (iScrWidth - 3))
                                {
                                    iOffset = 0;

                                    while (iLen2 > (iScrWidth - 3))
                                    {
                                        iLen2--;
                                        iOffset++;
                                    }

                                    mvaddch (iEditRow + 1, 0, '.' | A_BOLD);
                                    attron(A_DIM);
                                    addstr (&pszCommand[iOffset]);
                                    attroff(A_DIM);
                                    addch ('?' | A_BOLD);
                                }
                                else
                                {
                                    sprintf (szWorkString, ":%s", pszCommand);
                                    attron(A_DIM);
                                    mvaddnstr (iEditRow + 1, 0, szWorkString, iScrWidth - 3);
                                    attroff(A_DIM);
                                    addch ('?' | A_BOLD);
                                }
                            }
                        }
                        else
                        {
                            sprintf (szWorkString, "+ %d commands..", iCommands);
                            attron(A_DIM);
                            mvaddnstr (iEditRow + 1, 0, szWorkString, iScrWidth - 1);
                            attroff(A_DIM);
                            iSceneId = -1;
                            iSubSceneId = -1;
                        }
                    }

                }

                // now for displaying the text that the user is editing.
                iLen = (int)strlen (szInputString);

                if (iLen > (iScrWidth - 2))
                {
                    // ok.. it gets complex.. the length of the string is too long for the screen.

                    // first, work out which end we are truncating from..
                    // this is based upon exactly where the "iPosition" is right now.

                    iLen2 = iScrWidth / 2;
                    iPosWinEnd = iLen - iLen2;

                    // first mode.. is when the position of the cursor is on the right..
                    if (iPosition > iPosWinEnd)
                    {
                        mvaddch (iEditRow, 1, '.' | A_DIM);
                        iOffset = iLen - (iScrWidth - 3);
                        mvaddstr (iEditRow, 2, &szInputString[iOffset]);
                        move (iEditRow, 2 + iPosition - iOffset);
                    }
                    // second mode.. is when the position of the cursor is on the left..
                    else if (iPosition < iLen2)
                    {
                        mvaddnstr (iEditRow, 1, szInputString, (iScrWidth - 3));
                        mvaddch (iEditRow, (iScrWidth - 2), '.' | A_DIM);
                        move (iEditRow, 1 + iPosition);
                    }
                    // third mode.. when the cursor is dead center.
                    else
                    {
                        iOffset = (iPosition - iLen2) + 1;
                        mvaddch (iEditRow, 1, '.' | A_DIM);
                        mvaddch (iEditRow, (iScrWidth - 2), '.' | A_DIM);
                        mvaddnstr (iEditRow, 2, &szInputString[iOffset], (iScrWidth - 4));
                        move (iEditRow, iLen2 + 1);
                    }
                }
                else
                {
                    // this is the simpler and more straightforward code.
                    mvaddstr (iEditRow, 1, szInputString);
                    move (iEditRow, 1 + iPosition);
                }

                refresh();

                iKey = getch ();

                // Ctrl-Q & Ctrl-C
                if ((iKey == 17) || (iKey == 3))
                {
                    cExitFlag = 1;
                    break;
                }

                // Ctrl-U
                if ((iKey == 21) && (iCurrentSceneId != 0))
                {
                    iSceneId = 0;
                    iSubSceneId = 0;
                    break;
                }

                // Ctrl-S
                if ((iKey == 19) && (iCurrentSceneId > 900))
                {
                    iRet = savescreen_playerInteract ();

                    if (iRet == 1)
                    {
                        cExitFlag = 1;
                        break;
                    }

                    if (iRet == 10)
                    {
                        iSceneId = 0;
                        iSubSceneId = 0;
                        break;
                    }

#ifdef __PDCURSES__
                    resize_term (0, 0);
#endif

                    cKeyMode = 5;
                    if (gcTabDefault != 0)
                        cRememberEditFlag = 1;
                    else
                        cRememberEditFlag = 0;
                    iCommands = -1;
                    continue;
                }

                // resize key
                if (iKey == KEY_RESIZE)
                {
#ifdef __PDCURSES__
                    resize_term (0, 0);
#endif
                    cKeyMode = 5;
                    if (gcTabDefault != 0)
                        cRememberEditFlag = 1;
                    else
                        cRememberEditFlag = 0;
                    iCommands = -1;
                    continue;
                }

                // home key..
                if (iKey == KEY_HOME)
                {
                    int iRowStartNew;

                    iRowStartNew = mutils_calcRowStartOffset (iScrWidth);

                    if (iRowStartNew != iRowStart)
                    {
                        iRowStart = iRowStartNew;

                        if (gcTabDefault != 0)
                            cRememberEditFlag = 1;
                        else
                            cRememberEditFlag = 0;

                        cClearScreenFlag = 1;
                        cKeyMode = 0;
                        iCommands = -1;
                    }

                    continue;
                }

                // left key..
                if (iKey == KEY_LEFT)
                {
                    if (iPosition > 0)
                        iPosition--;

                    continue;
                }

                // up key..
                if (iKey == KEY_UP)
                {
                    if (iRowStart > 0)
                    {
                        if (gcTabDefault != 0)
                            cRememberEditFlag = 1;
                        else
                            cRememberEditFlag = 0;

                        iRowStart--;
                        cScroll1UpDown = -1;
                        scrl (-1);
                        cKeyMode = 0;
                        iCommands = -1;
                    }

                    continue;
                }

                // page up key..
                if (iKey == KEY_PPAGE)
                {
                    if (iRowStart > 0)
                    {
                        for (iOffset = 0; iOffset < (iScrHeight - 1); iOffset++)
                        {
                            iRowStart--;

                            if (iRowStart == 0)
                                break;
                        }

                        if (gcTabDefault != 0)
                            cRememberEditFlag = 1;
                        else
                            cRememberEditFlag = 0;

                        cClearScreenFlag = 1;
                        cKeyMode = 0;
                        iCommands = -1;
                    }

                    continue;
                }

                // right key..
                if (iKey == KEY_RIGHT)
                {
                    if (iPosition < (int)strlen (szInputString))
                        iPosition++;

                    continue;
                }

                // enter key..
                if ((iKey == 10) || (iKey == 13))
                {
                    if (iCommands == 1)
                    {
                        for (iOffset = 0; iOffset < (iScrWidth - 1); iOffset++)
                            szWorkString[iOffset] = ' ';

                        szWorkString[iScrWidth - 1] = 0;

                        mvaddstr (iEditRow + 1, 0, szWorkString);

                        strcpy (szInputString, pszCommand);
                        iPosition = (int)strlen (pszCommand);

                        if (iPosition > (iScrWidth - 2))
                        {
                            iOffset = (int)strlen (pszCommand) - (int)(iScrWidth - 2);
                            sprintf (szWorkString, "%s", &pszCommand[iOffset]);

                            mvaddch (iEditRow, 0, '.' | A_DIM);
                            attron(A_BOLD);
                            mvaddnstr (iEditRow, 1, szWorkString, iScrWidth - 2);
                            attroff(A_BOLD);
                        }
                        else
                        {
                            iOffset = 0;

                            sprintf (szWorkString, "#%s", pszCommand);
                            attron(A_BOLD);
                            mvaddnstr (iEditRow, 0, szWorkString, iScrWidth - 1);
                            attroff(A_BOLD);
                        }

                        move (iEditRow, (1 + iPosition) - iOffset);

                        refresh ();

                        break;
                    }

                    beep ();

                    continue;
                }

                // tab key (and down key)..
                if ((iKey == KEY_DOWN) || (iKey == 9))
                {
                    if (iCommands == 1)
                    {
                        strcpy (szInputString, pszCommand);
                        iPosition = (int)strlen (szInputString);
                        iCommands = -1;

                        continue;
                    }
                    else if (iCommands > 1)
                    {
                        cKeyMode = 20;
                        iCommandOffset = 0;
                        mvaddch (iEditRow, 0, ':');
                        continue;
                    }
                }

                // backspace key..
                if ((iKey == KEY_BACKSPACE) || (iKey == 8))
				{
                    if (iPosition > 0)
                    {
                        iPosition--;

                        for (iOffset = iPosition; iOffset < (int)((int)strlen (szInputString) + 1); iOffset++)
                            szInputString[iOffset] = szInputString[iOffset + 1];

                        mvaddch (iEditRow, (int)strlen (szInputString) + 1, ' ');

                        // force a re-evaluate
                        iCommands = -1;
                    }
                    // this makes backspace function the same as delete when at char position 0.
                    else if (iPosition == 0)
                    {
                        for (iOffset = iPosition; iOffset < (int)((int)strlen (szInputString) + 1); iOffset++)
                            szInputString[iOffset] = szInputString[iOffset + 1];

                        mvaddch (iEditRow, (int)strlen (szInputString) + 1, ' ');

                        // force a re-evaluate
                        iCommands = -1;
                    }

                    continue;
                }

                // delete key..
                if (iKey == KEY_DC)
                {
                    if ((strlen (szInputString) > 0) && ((int)strlen (szInputString) != iPosition))
                    {
                        for (iOffset = iPosition; iOffset < (int)((int)strlen (szInputString) + 1); iOffset++)
                            szInputString[iOffset] = szInputString[iOffset + 1];

                        mvaddch (iEditRow, (int)strlen (szInputString) + 1, ' ');

                        // force a re-evaluate
                        iCommands = -1;
                    }
                    // this makes delete function the same as back when at the end of the string.
                    else if ((strlen (szInputString) == iPosition) && (iPosition))
                    {
                        iPosition--;

                        for (iOffset = iPosition; iOffset < (int)((int)strlen (szInputString) + 1); iOffset++)
                            szInputString[iOffset] = szInputString[iOffset + 1];

                        mvaddch (iEditRow, (int)strlen (szInputString) + 1, ' ');

                        // force a re-evaluate
                        iCommands = -1;
                    }

                    continue;
                }

                // characters we are accepting into the string..
                if (((iKey >= 'A') && (iKey <= 'Z')) || ((iKey >= 'a') && (iKey <= 'z')) || ((iKey >= '0') && (iKey <= '9')) || (iKey == '-') || (iKey == ',') || (iKey == '&') || (iKey == ' ') || (iKey == '\''))
                {
                    if ((iCommands == 1) && (cEnterAction == 1))
                        iCommands = -1;

                    // if this is at the end of the line already.. just put in the character..
                    if ((int)strlen (szInputString) == iPosition)
                    {
                        szInputString[iPosition] = iKey;
                        szInputString[iPosition + 1] = 0;
                        iPosition++;

                        continue;
                    }

                    // otherwise.. this isn't at the end of the line..
                    // first move everything at the end out.
                    iEndOffset = (int)strlen (szInputString);
                    iOffset = iEndOffset;
                    szInputString[iOffset + 2] = 0;

                    while (1)
                    {
                        if (iOffset < iPosition)
                            break;

                        szInputString[iOffset + 1] = szInputString[iOffset];

                        if (iOffset == 0)
                            break;

                        iOffset--;
                    }

                    // insert the key..
                    szInputString[iPosition] = iKey;
                    iPosition++;

                    continue;
                }
            }
            // this is the tab selection mode..
            else
            {
                iCount = 0;
                iLen = (int)strlen (szInputString);

                for (iOffset = 0; iOffset < giCommandListUsed; iOffset++)
                {
                    if (iLen != 0)
                    {
                        if (futils_strnicmp (gstruct_CommandList[iOffset].pszCommand, szInputString, iLen) == 0)
                        {
                            if (iCount == iCommandOffset)
                            {
                                pszCommand = gstruct_CommandList[iOffset].pszCommand;
                                iSceneId = gstruct_CommandList[iOffset].iSceneId;
                                iSubSceneId = gstruct_CommandList[iOffset].iSubSceneId;
                            }

                            iCount++;
                        }
                    }
                    else
                    {
                        if (iCount == iCommandOffset)
                        {
                            pszCommand = gstruct_CommandList[iOffset].pszCommand;
                            iSceneId = gstruct_CommandList[iOffset].iSceneId;
                            iSubSceneId = gstruct_CommandList[iOffset].iSubSceneId;
                        }

                        iCount++;
                    }
                }

                for (iOffset = 0; iOffset < (iScrWidth - 1); iOffset++)
                    szWorkString[iOffset] = ' ';
                szWorkString[iScrWidth - 1] = 0;

                // first, wipe out the ENTIRE entry line..
                mvaddnstr (iEditRow, 0, szWorkString, iScrWidth - 1);

                // build the detail for the comment line..
                sprintf (szWorkString, ":command %d of %d..", iCommandOffset + 1, iCommands);
                szWorkString[iScrWidth - 1] = 0;

                // render the comment line..
                attron(A_DIM);
                mvaddnstr (iEditRow + 1, 0, szWorkString, iScrWidth - 1);
                attroff(A_DIM);

                // now for the harder stuff.. the entry line.
                iLen2 = (int)strlen (pszCommand);

                if (iLen2 >= (iScrWidth - 2))
                {
                    // this is where i have to deal with the fact that the window will be too small for the ENTIRE command display.

                    // let's check to see if our tail end of the command is going to fit..
                    iLen2 = iLen2 - iLen;

                    // if the tail-end is not going to fit in one piece, then this is slightly easier.
                    if (iLen2 >= (iScrWidth - 2))
                    {
                        while (iLen2 > (iScrWidth - 2))
                        {
                            iLen2--;
                            iLen++;
                        }

                        mvaddch (iEditRow, 0, '.');
                        mvaddnstr (iEditRow, 1, &pszCommand[iLen], iLen2);
                        move (iEditRow, iScrWidth - 1);
                    }
                    // if the tail end is going to be in two peices.. then this becomes more complex..
                    else
                    {
                        iLen2 = (int)strlen (pszCommand);
                        iOffset = 0;

                        while (iLen2 > (iScrWidth - 2))
                        {
                            iLen2--;
                            iOffset++;
                        }

                        mvaddch (iEditRow, 0, '.');
                        attron(A_BOLD);
                        mvaddnstr (iEditRow, 1, &pszCommand[iOffset], iLen - iOffset);
                        attroff(A_BOLD);
                        addstr (&pszCommand[iLen]);

                        move (iEditRow, iScrWidth - 1);
                    }
                }
                else
                {
                    // this is the easier code (no overrun).. just put the detail there..

                    mvaddch (iEditRow, 0, '>');
                    attron(A_BOLD);
                    mvaddnstr (iEditRow, 1, pszCommand, iLen);
                    attroff(A_BOLD);
                    addstr (&pszCommand[iLen]);
                    move (iEditRow, 1 + (int)strlen (pszCommand));
                }

                refresh();

                iKey = getch ();

                // Ctrl-Q & Ctrl-C
                if ((iKey == 17) || (iKey == 3))
                {
                    cExitFlag = 1;
                    break;
                }

                // Ctrl-U
                if ((iKey == 21) && (iCurrentSceneId != 0))
                {
                    iSceneId = 0;
                    iSubSceneId = 0;
                    break;
                }

                // Ctrl-S
                if ((iKey == 19) && (iCurrentSceneId > 900))
                {
                    iRet = savescreen_playerInteract ();

                    if (iRet == 1)
                    {
                        cExitFlag = 1;
                        break;
                    }

                    if (iRet == 10)
                    {
                        iSceneId = 0;
                        iSubSceneId = 0;
                        break;
                    }

#ifdef __PDCURSES__
                    resize_term (0, 0);
#endif

                    cKeyMode = 5;
                    if (gcTabDefault != 0)
                        cRememberEditFlag = 0;
                    else
                        cRememberEditFlag = 1;
                    continue;
                }

                // resize key
                if (iKey == KEY_RESIZE)
                {
#ifdef __PDCURSES__
                    resize_term (0, 0);
#endif
                    cKeyMode = 5;
                    if (gcTabDefault != 0)
                        cRememberEditFlag = 0;
                    else
                        cRememberEditFlag = 1;
                    continue;
                }

                // home key..
                if (iKey == KEY_HOME)
                {
                    int iRowStartNew;

                    iRowStartNew = mutils_calcRowStartOffset (iScrWidth);

                    if (iRowStartNew != iRowStart)
                    {
                        iRowStart = iRowStartNew;

                        if (gcTabDefault != 0)
                            cRememberEditFlag = 0;
                        else
                            cRememberEditFlag = 1;

                        cClearScreenFlag = 1;
                        cKeyMode = 0;
                        iCommands = -1;
                    }

                    continue;
                }

                // left and up keys..
                if ((iKey == KEY_LEFT) || (iKey == KEY_UP))
                {
                    if (iCommandOffset <= 0)
                        iCommandOffset = iCommands;

                    iCommandOffset--;
                    continue;
                }

                // right and down keys..
                if ((iKey == KEY_RIGHT) || (iKey == KEY_DOWN))
                {
                    iCommandOffset++;

                    if (iCommandOffset >= iCommands)
                        iCommandOffset = 0;

                    continue;
                }

                // page up key..
                if (iKey == KEY_PPAGE)
                {
                    if (iRowStart > 0)
                    {
                        for (iOffset = 0; iOffset < (iScrHeight - 1); iOffset++)
                        {
                            iRowStart--;

                            if (iRowStart == 0)
                                break;
                        }

                        if (gcTabDefault != 0)
                            cRememberEditFlag = 0;
                        else
                            cRememberEditFlag = 1;

                        cClearScreenFlag = 1;
                        cKeyMode = 0;
//                        iCommands = -1;
                    }

                    continue;
                }

                // enter key..
                if ((iKey == 10) || (iKey == 13))
                {
//                  mvaddch (iEditRow, 0, '>' | A_BOLD);
                    strcpy (szInputString, pszCommand);
                    iPosition = (int)strlen (pszCommand);

                    for (iOffset = 0; iOffset < (iScrWidth - 1); iOffset++)
                        szWorkString[iOffset] = ' ';

                    szWorkString[iScrWidth - 1] = 0;

                    mvaddstr (iEditRow + 1, 0, szWorkString);

                    if (iPosition > (iScrWidth - 2))
                    {
                        iOffset = (int)strlen (pszCommand) - (iScrWidth - 2);
                        sprintf (szWorkString, "%s", &pszCommand[iOffset]);

                        mvaddch (iEditRow, 0, '.' | A_DIM);
                        attron(A_BOLD);
                        mvaddnstr (iEditRow, 1, szWorkString, iScrWidth - 2);
                        attroff(A_BOLD);
                    }
                    else
                    {
                        iOffset = 0;

                        sprintf (szWorkString, "#%s", pszCommand);
                        attron(A_BOLD);
                        mvaddnstr (iEditRow, 0, szWorkString, iScrWidth - 1);
                        attroff(A_BOLD);
                    }

                    move (iEditRow, (1 + iPosition) - iOffset);

                    refresh ();

                    break;
                }

                // backspace & delete keys..
                if ((iKey == KEY_BACKSPACE) || (iKey == 8) || (iKey == KEY_DC))
				{
                    // This forces the mode back to direct entry, and deletes a character off the end.
                    strcpy (szInputString, pszCommand);
                    iPosition = (int)strlen (pszCommand) - 1;
                    szInputString[iPosition] = 0;

                    for (iOffset = 0; iOffset < (iScrWidth - 1); iOffset++)
                        szWorkString[iOffset] = ' ';

                    szWorkString[iScrWidth - 1] = 0;

                    cKeyMode = 10;
                    mvaddstr (iEditRow, 1, szWorkString);
                    mvaddch (iEditRow, 0, '>' | A_BOLD);
                    iCommands = -1;
                    continue;
                }

                // tab key..
                if (iKey == 9)
                {
                    for (iOffset = 0; iOffset < (iScrWidth - 1); iOffset++)
                        szWorkString[iOffset] = ' ';

                    szWorkString[iScrWidth - 1] = 0;

                    cKeyMode = 10;
                    mvaddstr (iEditRow, 1, szWorkString);
                    mvaddch (iEditRow, 0, '>' | A_BOLD);
                    iCommands = -1;
                    continue;
                }
            }
        }

        //
        // To have reached here, means that the player as selected an entry..
        //

        if (cExitFlag == 1)
            break;
    }

#ifndef __PDCURSES__
    //
    // Why knock out the use of endwin() for PDCURSES??.. well it crashes if I leave it in.
    //
    endwin();
#endif

    return 0;
}

