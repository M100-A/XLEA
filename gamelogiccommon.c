//
// gamelogiccommon.c
//
// These are functions that I created for sex scene interaction.
//

#include "common.h"
#include "gamelogic.h"

// external linkage to the game variables.
extern  struct  gamelogic_variablelist  gstruct_GameVars;

//
// Reset the sex scene variables..
//
void gamelogiccommon_resetSexVars ()
{
    gstruct_GameVars.cFSexSceneStart = 0;
    gstruct_GameVars.cPastSexActions[0] = 0;
    gstruct_GameVars.cPartner1Active = 0;
    gstruct_GameVars.cPartner2Active = 0;
    gstruct_GameVars.iClimaxCount1 = 0;
    gstruct_GameVars.iClimaxCount2 = 0;
    gstruct_GameVars.iArousalLevel1 = 0;
    gstruct_GameVars.iArousalLevel2 = 0;
    gstruct_GameVars.iArousalBaseIncrement1 = 0;
    gstruct_GameVars.iArousalBaseIncrement2 = 0;
    gstruct_GameVars.iArousalLimit1 = 0;
    gstruct_GameVars.iArousalLimit2 = 0;
    gstruct_GameVars.iPastActionsNum = 0;
}

//
// init the variables for a single partner sex scene.
//
void gamelogiccommon_initSexScene1 (int iArousalLevel1, int iArousalBaseIncrement1, int iArousalLimit1)
{
    int iOffset;

    gstruct_GameVars.iClimaxCount1 = 0;
    gstruct_GameVars.iClimaxCount2 = 0;
    gstruct_GameVars.iPastActionsNum = 0;
    gstruct_GameVars.cPartner1Active = 1;
    gstruct_GameVars.cPartner2Active = 0;

    for (iOffset = 0; iOffset < 28; iOffset++)
    {
        gstruct_GameVars.cPastSexActions[iOffset] = 0;
    }

    gstruct_GameVars.iArousalLevel1 = iArousalLevel1;
    gstruct_GameVars.iArousalBaseIncrement1 = iArousalBaseIncrement1;
    gstruct_GameVars.iArousalLimit1 = iArousalLimit1;

    gstruct_GameVars.iArousalLevel2 = 0;
    gstruct_GameVars.iArousalBaseIncrement2 = 0;
    gstruct_GameVars.iArousalLimit2 = 0;
}

//
// init the variables for a dual partner sex scene.
//
void gamelogiccommon_initSexScene2 (int iArousalLevel1, int iArousalBaseIncrement1, int iArousalLimit1, int iArousalLevel2, int iArousalBaseIncrement2, int iArousalLimit2)
{
    int iOffset;

    gstruct_GameVars.iClimaxCount1 = 0;
    gstruct_GameVars.iClimaxCount2 = 0;
    gstruct_GameVars.iPastActionsNum = 0;
    gstruct_GameVars.cPartner1Active = 1;
    gstruct_GameVars.cPartner2Active = 1;

    for (iOffset = 0; iOffset < 28; iOffset++)
    {
        gstruct_GameVars.cPastSexActions[iOffset] = 0;
    }

    gstruct_GameVars.iArousalLevel1 = iArousalLevel1;
    gstruct_GameVars.iArousalBaseIncrement1 = iArousalBaseIncrement1;
    gstruct_GameVars.iArousalLimit1 = iArousalLimit1;

    gstruct_GameVars.iArousalLevel2 = iArousalLevel2;
    gstruct_GameVars.iArousalBaseIncrement2 = iArousalBaseIncrement2;
    gstruct_GameVars.iArousalLimit2 = iArousalLimit2;
}

//
// internal function to do the common debuff calculation stuff for the included action.
//
int gamelogiccommon_sexActionDebuff (char cAction)
{
    int iOffset;
    int i2BytePattCount = 0;
    int i3BytePattCount = 0;
    int i4BytePattCount = 0;
    int i5BytePattCount = 0;
    int iArousalDebuffCalc = 0;

    iOffset = 22;

    while (iOffset >= 0)
    {
        gstruct_GameVars.cPastSexActions[iOffset + 1] = gstruct_GameVars.cPastSexActions[iOffset];

        iOffset--;
    }
    gstruct_GameVars.cPastSexActions[24] = 0;
    gstruct_GameVars.cPastSexActions[0] = 0;

    gstruct_GameVars.cPastSexActions[0] = (char)cAction;

    if (gstruct_GameVars.iPastActionsNum < 24)
        gstruct_GameVars.iPastActionsNum++;

    if (gstruct_GameVars.iPastActionsNum > 5)
    {
        iOffset = 2;
        while (1)
        {
            if (gstruct_GameVars.cPastSexActions[iOffset + 1] == 0)
                break;

            if (memcmp ((void *)gstruct_GameVars.cPastSexActions, (void *)&gstruct_GameVars.cPastSexActions[iOffset], 2) == 0)
            {
                i2BytePattCount++;
            }

            iOffset++;
        }
    }

    if (gstruct_GameVars.iPastActionsNum > 7)
    {
        iOffset = 3;
        while (1)
        {
            if (gstruct_GameVars.cPastSexActions[iOffset + 2] == 0)
                break;

            if (memcmp ((void *)gstruct_GameVars.cPastSexActions, (void *)&gstruct_GameVars.cPastSexActions[iOffset], 3) == 0)
            {
                i3BytePattCount++;
            }

            iOffset++;
        }
    }

    if (gstruct_GameVars.iPastActionsNum > 9)
    {
        iOffset = 4;
        while (1)
        {
            if (gstruct_GameVars.cPastSexActions[iOffset + 3] == 0)
                break;

            if (memcmp ((void *)gstruct_GameVars.cPastSexActions, (void *)&gstruct_GameVars.cPastSexActions[iOffset], 4) == 0)
            {
                i4BytePattCount++;
            }

            iOffset++;
        }
    }

    if (gstruct_GameVars.iPastActionsNum > 11)
    {
        iOffset = 5;
        while (1)
        {
            if (gstruct_GameVars.cPastSexActions[iOffset + 4] == 0)
                break;

            if (memcmp ((void *)gstruct_GameVars.cPastSexActions, (void *)&gstruct_GameVars.cPastSexActions[iOffset], 5) == 0)
            {
                i5BytePattCount++;
            }

            iOffset++;
        }
    }

    iArousalDebuffCalc = (i2BytePattCount * 2) + (i3BytePattCount * 4) + (i4BytePattCount * 6) + (i5BytePattCount * 8);

    return iArousalDebuffCalc;
}

//
// perform the processing for a sexual action that perferences Partner 1.
//
// returns:
//  0 if no changes.
// -1 if the last action resulted in more of a debuff than a buff
//  1 if the last action resulted in partner 1 climaxing
//  2 if the last action resulted in partner 2 climaxing
//  3 if the last action resulted in both partners climaxing
//
char gamelogiccommon_sexActionPartner1 (char cAction)
{
    int iArousalBuffCalc1 = 0;
    int iArousalBuffCalc2 = 0;
    int iArousalDebuffCalc = 0;
    char cProbFlag = 0;

    iArousalDebuffCalc = gamelogiccommon_sexActionDebuff (cAction);

    if (gstruct_GameVars.iClimaxCount1 < 2)
        iArousalBuffCalc1 = gstruct_GameVars.iArousalBaseIncrement1 + gstruct_GameVars.iPastActionsNum + (gstruct_GameVars.iClimaxCount1 * 2);
    else
        iArousalBuffCalc1 = gstruct_GameVars.iArousalBaseIncrement1 + gstruct_GameVars.iPastActionsNum + (gstruct_GameVars.iClimaxCount1 * 2) - (gstruct_GameVars.iClimaxCount1 / 3);

    if (iArousalDebuffCalc >= iArousalBuffCalc1)
    {
        gstruct_GameVars.iArousalLevel1 -= ((iArousalDebuffCalc - iArousalBuffCalc1) / 2);

        if (gstruct_GameVars.iArousalLevel1 < 5)
        {
            gstruct_GameVars.iArousalLevel1 = 5;
        }

        cProbFlag = 1;
    }
    else
    {
        gstruct_GameVars.iArousalLevel1 += (iArousalBuffCalc1 - iArousalDebuffCalc);
    }

    if (gstruct_GameVars.cPartner2Active != 0)
    {
        if (gstruct_GameVars.iClimaxCount2 < 2)
            iArousalBuffCalc2 = (gstruct_GameVars.iArousalBaseIncrement2 + gstruct_GameVars.iPastActionsNum + (gstruct_GameVars.iClimaxCount2 * 2)) / 2;
        else
            iArousalBuffCalc2 = (gstruct_GameVars.iArousalBaseIncrement2 + gstruct_GameVars.iPastActionsNum + (gstruct_GameVars.iClimaxCount2 * 2) - (gstruct_GameVars.iClimaxCount2 / 3)) / 2;

        if (iArousalDebuffCalc >= iArousalBuffCalc2)
        {
            gstruct_GameVars.iArousalLevel2 -= ((iArousalDebuffCalc - iArousalBuffCalc2) / 2);

            if (gstruct_GameVars.iArousalLevel2 < 5)
            {
                gstruct_GameVars.iArousalLevel2 = 5;
            }

            cProbFlag = 1;
        }
        else
        {
            gstruct_GameVars.iArousalLevel2 += ((iArousalBuffCalc2 - iArousalDebuffCalc) / 2);
        }

        if ((gstruct_GameVars.iArousalLevel2 > gstruct_GameVars.iArousalLimit2) && (gstruct_GameVars.iArousalLevel1 > gstruct_GameVars.iArousalLimit1))
        {
            gstruct_GameVars.iClimaxCount1++;
            gstruct_GameVars.iArousalLevel1 = gstruct_GameVars.iArousalBaseIncrement1 + ((gstruct_GameVars.iClimaxCount1 * gstruct_GameVars.iArousalBaseIncrement1) / 2);

            gstruct_GameVars.iClimaxCount2++;
            gstruct_GameVars.iArousalLevel2 = gstruct_GameVars.iArousalBaseIncrement2 + ((gstruct_GameVars.iClimaxCount2 * gstruct_GameVars.iArousalBaseIncrement2) / 2);

            return 3;
        }

        if (gstruct_GameVars.iArousalLevel2 > gstruct_GameVars.iArousalLimit2)
        {
            gstruct_GameVars.iClimaxCount2++;
            gstruct_GameVars.iArousalLevel2 = gstruct_GameVars.iArousalBaseIncrement2 + ((gstruct_GameVars.iClimaxCount2 * gstruct_GameVars.iArousalBaseIncrement2) / 2);

            return 2;
        }
    }

    if (gstruct_GameVars.iArousalLevel1 > gstruct_GameVars.iArousalLimit1)
    {
        gstruct_GameVars.iClimaxCount1++;
        gstruct_GameVars.iArousalLevel1 = gstruct_GameVars.iArousalBaseIncrement1 + ((gstruct_GameVars.iClimaxCount1 * gstruct_GameVars.iArousalBaseIncrement1) / 2);

        return 1;
    }

    if (cProbFlag != 0)
        return -1;

    return 0;
}

//
// perform the processing for a sexual action that perferences Partner 2.
//
// returns:
//  0 if no changes.
// -1 if the last action resulted in more of a debuff than a buff
//  1 if the last action resulted in partner 1 climaxing
//  2 if the last action resulted in partner 2 climaxing
//  3 if the last action resulted in both partners climaxing
//
char gamelogiccommon_sexActionPartner2 (char cAction)
{
    int iArousalBuffCalc1 = 0;
    int iArousalBuffCalc2 = 0;
    int iArousalDebuffCalc = 0;
    char cProbFlag = 0;

    iArousalDebuffCalc = gamelogiccommon_sexActionDebuff (cAction);

    if (gstruct_GameVars.iClimaxCount2 < 2)
        iArousalBuffCalc2 = gstruct_GameVars.iArousalBaseIncrement2 + gstruct_GameVars.iPastActionsNum + (gstruct_GameVars.iClimaxCount2 * 2);
    else
        iArousalBuffCalc2 = gstruct_GameVars.iArousalBaseIncrement2 + gstruct_GameVars.iPastActionsNum + (gstruct_GameVars.iClimaxCount2 * 2) - (gstruct_GameVars.iClimaxCount2 / 3);

    if (iArousalDebuffCalc >= iArousalBuffCalc2)
    {
        gstruct_GameVars.iArousalLevel2 -= ((iArousalDebuffCalc - iArousalBuffCalc2) / 2);

        if (gstruct_GameVars.iArousalLevel2 < 5)
        {
            gstruct_GameVars.iArousalLevel2 = 5;
        }

        cProbFlag = 1;
    }
    else
    {
        gstruct_GameVars.iArousalLevel2 += (iArousalBuffCalc2 - iArousalDebuffCalc);
    }

    if (gstruct_GameVars.cPartner1Active != 0)
    {
        if (gstruct_GameVars.iClimaxCount1 < 2)
            iArousalBuffCalc1 = (gstruct_GameVars.iArousalBaseIncrement1 + gstruct_GameVars.iPastActionsNum + (gstruct_GameVars.iClimaxCount1 * 2)) / 2;
        else
            iArousalBuffCalc1 = (gstruct_GameVars.iArousalBaseIncrement1 + gstruct_GameVars.iPastActionsNum + (gstruct_GameVars.iClimaxCount1 * 2) - (gstruct_GameVars.iClimaxCount1 / 3)) / 2;

        if (iArousalDebuffCalc >= iArousalBuffCalc1)
        {
            gstruct_GameVars.iArousalLevel1 -= ((iArousalDebuffCalc - iArousalBuffCalc1) / 2);

            if (gstruct_GameVars.iArousalLevel1 < 5)
            {
                gstruct_GameVars.iArousalLevel1 = 5;
            }

            cProbFlag = 1;
        }
        else
        {
            gstruct_GameVars.iArousalLevel1 += ((iArousalBuffCalc1 - iArousalDebuffCalc) / 2);
        }

        if ((gstruct_GameVars.iArousalLevel2 > gstruct_GameVars.iArousalLimit2) && (gstruct_GameVars.iArousalLevel1 > gstruct_GameVars.iArousalLimit1))
        {
            gstruct_GameVars.iClimaxCount1++;
            gstruct_GameVars.iArousalLevel1 = gstruct_GameVars.iArousalBaseIncrement1 + ((gstruct_GameVars.iClimaxCount1 * gstruct_GameVars.iArousalBaseIncrement1) / 2);

            gstruct_GameVars.iClimaxCount2++;
            gstruct_GameVars.iArousalLevel2 = gstruct_GameVars.iArousalBaseIncrement2 + ((gstruct_GameVars.iClimaxCount2 * gstruct_GameVars.iArousalBaseIncrement2) / 2);

            return 3;
        }

        if (gstruct_GameVars.iArousalLevel1 > gstruct_GameVars.iArousalLimit1)
        {
            gstruct_GameVars.iClimaxCount1++;
            gstruct_GameVars.iArousalLevel1 = gstruct_GameVars.iArousalBaseIncrement1 + ((gstruct_GameVars.iClimaxCount1 * gstruct_GameVars.iArousalBaseIncrement1) / 2);

            return 1;
        }
    }

    if (gstruct_GameVars.iArousalLevel2 > gstruct_GameVars.iArousalLimit2)
    {
        gstruct_GameVars.iClimaxCount2++;
        gstruct_GameVars.iArousalLevel2 = gstruct_GameVars.iArousalBaseIncrement2 + ((gstruct_GameVars.iClimaxCount2 * gstruct_GameVars.iArousalBaseIncrement2) / 2);

        return 2;
    }

    if (cProbFlag != 0)
        return -1;

    return 0;
}

