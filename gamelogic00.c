//
// gamelogic00.c
//
// This is group 0 of scene ids.
//
// Essentially, this is the main menu display of the program.
//

#include "common.h"
#include "gamelogic.h"

// external linkage to the game variables.
extern  struct  gamelogic_variablelist  gstruct_GameVars;

extern  struct  gamelogic_variablelist  gstruct_SavedGames[];

extern  char    gcDebugFlag;


//
// Main Menu Scene function.
//
int gamelogic00_scene0000 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    iRet = mutils_addToDialogBuffer (">Main Menu\n\nXyla\'s Little Elven Adventure (XLEA). Version 0.90\n\nLicense:CC BY 4.0 (type \"credits\" and press \"Enter\" to see more)\n\nThis text game has heavy adult and sexual content and is not meant for minors. At bare minimum, you should be above the \"age of consent\" to play this game. If you don\'t know what \"age of consent\" is, then exit now.\n\nTo exit this game.. Type \"exit\" and press the \"Enter\" key, or hold down the \"Ctrl\" key and press the \"Q\" key.\n\nIf you want help about the interface, or detail about other keyboard shortcuts, type \"help\" below and press the \"Enter\" key.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Start new game", 1001, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Help", 1, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Exit", 9, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("About Xyla\'s Little Elven Adventure", 2, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Load previous game", 4, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// Help screen Scene function.
//
int gamelogic00_scene0001 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    iRet = mutils_addToDialogBuffer (">Help\n\nThere are 3 keyboard shortcuts:\n\nCtrl-Q and Ctrl-C is the quick exit from the game. This will NOT save your current game state.\n\nCtrl-S accesses the save menu, where you can save your current game in a save slot, then continue playing.\n\nCtrl-U returns you to the main menu. This will NOT save your current game state.\n\nIf you want to load a previously saved game, then go to the \"Main Menu\" (using Ctrl-U) and access the \"Load previous game\" menu selection.\n\nUse the \"Start new game\" from the \"Main Menu\" to start a new game.\n\n\nOther than the above keyboard shortcuts, this game has 2 modes.\n\nMode #1:\n\nThe first is the \"navigate around the great wall-of-text\" mode where you use either the up or down arrow keys to scroll the screen a line at a time..\n\n.. or the page-up and page-down keys to scroll up or down an entire screen at a time.\n\n- You can pick you are in this mode when you look at the bottom right of the window.. See that inverted <more>.. that means that there is \"more\" text to scroll down to see. When that indicator is absent, it means you are in the second mode (\"command selection\" mode).\n\n- You might notice that I am putting a great wall of text in this help screen (it is possible that there might be enough lines to trigger this mode).\n\n- This game has an automatic resize capability so if you can make the text window as big or as small as you want (both height and width). The program will redraw the text when it detects that the screen size has changed.\n\n- This game program itself does not contain any capability to change the size of the font you are using or the font. That is left to the surrounding display manager. It really depends upon what you are using for the terminal display as to where the controls are. Look at the menu items for the terminal display (or remote session, if you are playing this over a SSH session) that this program is run within to find those controls. You should be able to adjust them while this program is running.\n\n-- Don\'t bother \"thumping your fist on a table\" because I cannot tell you precisely where to look. If you were smart enough to start this program up (and for some people, this would have meant compiling it), you should have enough intelligence to go and find what I am talking about on your \"platform of choice\".\n\nMode #2:\n\nThe second is the \"command selection\" mode. This is where there is a little \"greater than\" symbol (>) prompt that appears at the left, below the \"great wall-of-text\". This will happen whenever there is a user selection to be made (and you have reached the bottom of the current \"great wall-of-text\" block).\n\nThis is similar to adventure-type games (also known as interactive fiction games). However, there are some extra features here. This game has an auto-complete function (which will be heresy to \"true\" IF fans). You might notice below the entry prompt is another line that might look like this:\n\n+ 3 commands..\n\nThere are few special things about this prompt. It has 2 sub-modes, \"Direct entry\" and \"Tab selection\". These two modes work together.\n\n- \"Direct entry\" is where you can type part of the command (which could be as simple as the first character). As soon as you have typed enough for a unique command, it will write out the ENTIRE command below the entry prompt, with a question mark at the end. If you were to press the \"Enter\" key.. THAT will be the command you have selected.\n\nIf you have entered a character combination that matches no commands, then that field will update to say \"-No commands..\" which means that there are no matches for what you have entered.\n\nHow do you see the list.. use \"Tab selection\".\n\n- \"Tab selection\" is where you press the \"Tab\" key, and the entry prompt changes to a list selection. Also, the status line below the entry prompt will tell you something like this:\n\n:command 1 of 3..\n\nYou can \"scroll through\" all of the available commands by using the up/down or left/right keys on your keyboard.\n\nWhile in \"tab selection\" mode.. the highlighted command is the one that is performed when you press the \"Enter\" key.\n\nThe two modes can be used together, you can enter the first letter, first letters, or starting phrase of a command, then press tab to find out what you can select from. If there is one single command match starting with a letter, then you just press that letter, confirm that you have the right command, and press the \"Enter\" key.\n\nThis solution works regardless of if there are only 2 selections or 200. It also does not hide any potential actions from you, the player. You can see every option that is available to be selected from. Unfortunately, in XLEA, I only let this list get as high as 9 at any point in time.\n\nThis is the bottom of the help page. Below should be an entry prompt (keep scrolling, you will see it) were you can return to the main menu, or you can go to either the \"About\" or \"Credits\" pages.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Start new game", 1001, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("About Xyla\'s Little Elven Adventure", 2, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Load previous game", 4, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// About screen Scene function.
//
int gamelogic00_scene0002 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    iRet = mutils_addToDialogBuffer (">About Xyla\'s Little Elven Adventure\n\nThis is an interactive-fiction-like text novel game, except that the interface is a little different. Details about the interface are described over in the help page.\n\nThis page is about the game story. This is adult fiction, which is rather heavy on sexual references and encounters.\n\n\nStoryline subjects:\n\n- Xyla, the titular character, is a \"equivalent to a 30-year old human\" female orc, who is (or was) stationed at an Orcdom \"Outer Village\" as a guard. She is (or was) a member of the Orcdom Self Defense Force (OSDF).\n\n- Somehow (which is not explained in the storyline) Xyla has been captured by a couple of elves. A Light-Elf and a Dark-Elf. Both of these elves are mages, and are \"equivalent to a 20-year old human\".\n\n- A Tentacle Monster makes a regular appearance.\n\nIf you want to know more about the story, then play the game.\n\n\nDevelopment:\n\nDevelopment of this game started as a small project to create a \"kinetic novel\" type storyline, but with more complex logic behind the sex scenes than what an average text-based \"interactive novel\" type engine would allow.\n\nThe game is being published as both source code and binaries (for a selected system) to show what can be accomplished without relying upon a complex game engine. This is more of a \"roll your own\" type solution.\n\nThe interface was borrowed from a larger project primarily to prove and test the interface itself, with a less complex project as the proving ground.\n\n\nUse of of the CURSES API:\n\nCURSES was picked because it is multi-computer-platform capable. It is multi-platform only because some nice people have created Windows interface replacement versions of the CURSES API. CURSES is available for free. If the development libraries for CURSES are not supplied as part of the operating system, they can be downloaded and installed.\n\nCURSES itself is related to the entire concept of a command line interface. Command line interface programs are not going away anytime soon and they will stick around as long as the various flavors of *NIXes (including Linux) continue to exist.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Start new game", 1001, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Help", 1, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Load previous game", 4, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// Credits screen Scene function.
//
int gamelogic00_scene0003 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    iRet = mutils_addToDialogBuffer (">Credits\n\nXyla\'s Little Elven Adventure (XLEA) is licensed under the Creative Commons Attribution 4.0 International license (CC BY 4.0).\n\nhttp://creativecommons.org/licenses/by/4.0/\n..and..\n(LICENSE file) http://creativecommons.org/licenses/by/4.0/legalcode\n\nIf you take this game and/or story, modify it (or translate it into another language), you need to leave everything on this credit page alone and add your own details to it (of course).\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToDialogBuffer ("Concept, dialog and code was originally by M100. Thanks to the participants on the #/d/evs rizon.net IRC channel for guidance, as well as putting up with occasional ranting while making this.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Start new game", 1001, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Help", 1, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("About Xyla\'s Little Elven Adventure", 2, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Load previous game", 4, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// Load games Scene function.
//
int gamelogic00_scene0004 (int iSubSceneId, char cSubFlag)
{
    int iRet;
    int iOffset;
    char cLock = FALSE;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    iRet = mutils_addToDialogBuffer (">Load Previous Game\n\n");
    if (iRet != 0) return iRet;

    for (iOffset = 0; iOffset < 9; iOffset++)
    {
        char    szDateTime[30];
        char    szInputString[100];

        szDateTime[0] = 0;

        sprintf (szInputString, "save%d.txt", iOffset + 1);

        iRet = statefile_parseSaveFile (szInputString, szDateTime);

        if (iRet == 1)
        {
            sprintf (szInputString, "Slot %d is invalid (%s) !\n", iOffset + 1, szDateTime);
        }
        else if (iRet == 0)
        {
            sprintf (szInputString, "Load from slot %d", iOffset + 1);

            iRet = mutils_addToCommandList (szInputString, 5, iOffset);

            sprintf (szInputString, "Slot %d was saved: %s\n", iOffset + 1, szDateTime);

            cLock = TRUE;
        }
        else // iRet == 2
        {
            sprintf (szInputString, "Slot %d is empty.\n", iOffset + 1);
        }

        iRet = mutils_addToDialogBuffer (szInputString);
        if (iRet != 0) return iRet;
    }

    if (cLock == FALSE)
    {
        iRet = mutils_addToDialogBuffer ("\nThere are NO valid saves to load !\n\n");
        if (iRet != 0) return iRet;
    }
    else
    {
        iRet = mutils_addToDialogBuffer ("\nSelect from one of the above save files, or just return to the main menu.\n\n");
        if (iRet != 0) return iRet;
    }

    //Note: Scene id 5 is special and does not exist in the lookup table. The main function looks out for it and loads up whatever is at the memory offset.

    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// Game exit function.
//
int gamelogic00_scene0009 (int iSubSceneId, char cSubFlag)
{
    // exit curses mode..
#ifndef __PDCURSES__
    //
    // Why knock out the use of endwin() for PDCURSES??.. well it crashes if I leave it in.
    //
    endwin();
#endif

    // exit the program.. it's that simple..
    exit (0);
}



