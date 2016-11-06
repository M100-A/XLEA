//
// gamelogic.h
//

//
// define for the maximum number of sub-recursions..
//
#define MAXGAMESCENENESTS 20
// this is used in the scene functions to figure out if the program is stuck in a potentially infinite scene link loop, and to bail out.

// definition for the game global variables.
struct	gamelogic_variablelist
{
    int     iDtYear;            // date year
    int     iDtMonth;           // date month
    int     iDtDay;             // date day
    int     iDtHour;            // time hour
    int     iDtMin;             // time minute
    int     iDtSec;             // time second
//    int     iSceneId;           // scene id
//    int     iSubSceneId;        // sub-scene id
    char    cFVarsValid;        // Variables valid flag.
    char    cFPainMagic1;       // "Pain Magic 1" flag.
    char    cVActionCounter;    // "Action Counter" value.
    char    cFIntDialog;        // "Internal Dialog" flag.
    char    cFExtIntDialog;     // "Extra Internal Dialog" flag.
    char    cFLookAroundRoom;   // "Look Around Room" flag.
    char    cFVisitTheBed;      // "Visit the Bed" flag.
    char    cFVisitTheTable;    // "Visit the Table" flag.
    char    cFVisitTheDoor;     // "Visit the Door" flag.
    char    cFVisitTheCon;      // "Visit the Contraption" flag.
    char    cFCheckTheChair;    // "Check the Chair" flag.
    char    cFSitInTheChair;    // "Sit In the Chair" flag.
    char    cFPainMagic2;       // "Pain Magic 2" flag.
    char    cFPainMagic3;       // "Pain Magic 3" flag.
    char    cFAnalDropFirst1;   // "Anal Drop First 1" flag.
    char    cFOralDropFirst1;   // "Oral Drop First 1" flag.
    char    cFBreakBonds1;      // "Break Bonds 1" flag.
    char    cFBreakBonds2;      // "Break Bonds 2" flag.
    char    cFGetNoticed1;      // "Get Noticed 1" flag.
    char    cFDildoFun1;        // "Dildo Fun 1" flag.
    char    cFAnalDropFirst2;   // "Anal Drop First 2" flag.
    char    cFOralDropFirst2;   // "Oral Drop First 2" flag.
    char    cFAnalDropLast2;    // "Anal Drop Last 2" flag.
    char    cFTableStillThere;  // "Table Still There" flag.
    char    cFDarkElfNeedy1;    // "Dark-Elf Needy 1" flag.
    char    cFDarkElfRest1;     // "Dark-Elf Rest 1" flag.
    char    cFDarkElfExhaust1;  // "Dark-Elf Exhausted 1" flag.
    char    cFLightElfHumilate; // "Light-Elf Humiliation" flag.
    char    cFPullOutDildos2;   // "Pull Out Dildos 2" flag.
    char    cFTurnedLeftFirst;  // "Turned Left First" flag.
    char    cFBeenOutAndBack;   // "Been Out And Back" flag.
    char    cFIgnoredTheDoor1;  // "Ignored The Door 1" flag.
    char    cFMovedTheDoor1;    // "Moved The Door 1" flag.
    char    cFClosedTheDoor1;   // "Closed The Door 1" flag.
    char    cFTookTheKey;       // "Took The Key" flag.
    char    cFLeftDoorWideOpen; // "Left Door Wide Open" flag.
    char    cFKeyToDarkElf;     // "Key To Dark-Elf" flag.
    char    cFKeyToLightElf;    // "Key To Light-Elf" flag.
    char    cFLearntHardWay1;   // "Learnt The Hard-way 1" flag.
    char    cFGiveInToLightElf; // "Give in to the Light-Elf" flag.
    char    cFBecomeASexpot;    // "Becoming A Sexpot" flag.
    char    cFMasturbator;      // "Masturbator" flag.
    char    cFIgnoredTheDoor2;  // "Ignored The Door 2" flag.
    char    cFClosedTheDoor2;   // "Closed The Door 2" flag.
    char    cFEnding7Rollup;    // "Ending 7 Rollup" flag.
    char    cFEnding8Rollup;    // "Ending 8 Rollup" flag.
    char    cFSexSceneStart;    // "Sex Scene Start" flag.
    char    cPastSexActions[30]; // table for past sex actions.
    char    cPartner1Active;    // sexual partner active flag.
    char    cPartner2Active;    // sexual partner active flag.
    int     iClimaxCount1;      // sexual partner 1 climax value.
    int     iClimaxCount2;      // sexual partner 2 climax value.
    int     iArousalLevel1;     // sexual partner 1 arousal value.
    int     iArousalLevel2;     // sexual partner 2 arousal value.
    int     iArousalBaseIncrement1; // sexual partner 1 arousal base increment.
    int     iArousalBaseIncrement2; // sexual partner 2 arousal base increment.
    int     iArousalLimit1;     // sexual partner 1 arousal limit.
    int     iArousalLimit2;     // sexual partner 2 arousal limit.
    int     iPastActionsNum;    // PastActionsCounter.
};

// definition for the scene list array
struct  main_scenelist
{
    int     iSceneId;                               // scene id
    int     (*vFunc)(int iSubSceneId, char cSubFlag); // call function.
};

//
// These are the common functions (gamelogiccommon.c).
//

void gamelogiccommon_resetSexVars ();
void gamelogiccommon_initSexScene1 (int iArousalLevel1, int iArousalBaseIncrement1, int iArousalLimit1);
void gamelogiccommon_initSexScene2 (int iArousalLevel1, int iArousalBaseIncrement1, int iArousalLimit1, int iArousalLevel2, int iArousalBaseIncrement2, int iArousalLimit2);
char gamelogiccommon_sexActionPartner1 (char cAction);
char gamelogiccommon_sexActionPartner2 (char cAction);

void gamelogiccommon_loadSaveFile (char *pszSaveFile, struct gamelogic_variablelist *pstruct_GameData);
void gamelogiccommon_loadFlagOffset (char cInputValue, char *pcOutputValue, struct gamelogic_variablelist *pstruct_GameData);
int gamelogiccommon_loadAllSaves ();
void gamelogiccommon_saveSaveFile (char *pszSaveFile);

//
// These ALL of the scene id functions (gamelogicxx.c).
//
// These need to be defined so that they can be referenced by the lookup array, without dumping EVERY single function into the one sourcecode listing.
//

int gamelogic00_scene0000 (int iSubSceneId, char cSubFlag);
int gamelogic00_scene0001 (int iSubSceneId, char cSubFlag);
int gamelogic00_scene0002 (int iSubSceneId, char cSubFlag);
int gamelogic00_scene0003 (int iSubSceneId, char cSubFlag);
int gamelogic00_scene0004 (int iSubSceneId, char cSubFlag);
int gamelogic00_scene0009 (int iSubSceneId, char cSubFlag);

int gamelogic01_scene1001 (int iSubSceneId, char cSubFlag);
int gamelogic01_scene1002 (int iSubSceneId, char cSubFlag);
int gamelogic01_scene1003 (int iSubSceneId, char cSubFlag);
int gamelogic01_scene1004 (int iSubSceneId, char cSubFlag);
int gamelogic01_scene1005 (int iSubSceneId, char cSubFlag);
int gamelogic01_scene1006 (int iSubSceneId, char cSubFlag);
int gamelogic01_scene1007 (int iSubSceneId, char cSubFlag);
int gamelogic01_scene1008 (int iSubSceneId, char cSubFlag);

int gamelogic02_scene1010 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1011 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1012 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1013 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1014 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1015 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1016 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1017 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1018 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1019 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1020 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1021 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1022 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1023 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1024 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1025 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1026 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1027 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1028 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1029 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1030 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1031 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1032 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1033 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1034 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1035 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1036 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1037 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1038 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1039 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1040 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1041 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1042 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1043 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1044 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1045 (int iSubSceneId, char cSubFlag);
int gamelogic02_scene1046 (int iSubSceneId, char cSubFlag);

int gamelogic03_scene1060 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1061 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1062 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1063 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1064 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1065 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1066 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1067 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1068 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1069 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1070 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1071 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1072 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1073 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1074 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1075 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1076 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1077 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1078 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1079 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1080 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1081 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1082 (int iSubSceneId, char cSubFlag);
int gamelogic03_scene1083 (int iSubSceneId, char cSubFlag);

int gamelogic04_scene1090 (int iSubSceneId, char cSubFlag);
int gamelogic04_scene1091 (int iSubSceneId, char cSubFlag);
int gamelogic04_scene1092 (int iSubSceneId, char cSubFlag);
int gamelogic04_scene1093 (int iSubSceneId, char cSubFlag);
int gamelogic04_scene1094 (int iSubSceneId, char cSubFlag);

int gamelogic05_scene1100 (int iSubSceneId, char cSubFlag);
int gamelogic05_scene1101 (int iSubSceneId, char cSubFlag);
int gamelogic05_scene1102 (int iSubSceneId, char cSubFlag);
int gamelogic05_scene1103 (int iSubSceneId, char cSubFlag);
int gamelogic05_scene1104 (int iSubSceneId, char cSubFlag);
int gamelogic05_scene1105 (int iSubSceneId, char cSubFlag);
int gamelogic05_scene1106 (int iSubSceneId, char cSubFlag);

int gamelogic06_scene1110 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1111 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1112 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1113 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1114 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1115 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1116 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1117 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1118 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1119 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1120 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1121 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1122 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1123 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1124 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1125 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1126 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1127 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1128 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1129 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1130 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1131 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1132 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1133 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1134 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1135 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1136 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1137 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1138 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1139 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1140 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1141 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1142 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1143 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1144 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1145 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1146 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1147 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1148 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1149 (int iSubSceneId, char cSubFlag);
int gamelogic06_scene1150 (int iSubSceneId, char cSubFlag);

int gamelogic07_scene1180 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1200 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1220 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1221 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1222 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1223 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1224 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1225 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1230 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1231 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1232 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1233 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1234 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1235 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1240 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1241 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1242 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1243 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1244 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1245 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1246 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1247 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1248 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1250 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1251 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1252 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1253 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1261 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1270 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1271 (int iSubSceneId, char cSubFlag);
int gamelogic07_scene1281 (int iSubSceneId, char cSubFlag);



