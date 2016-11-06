//
// gamelogic06.c
//
// This is group 6 of scene ids.
//

#include "common.h"
#include "gamelogic.h"

// external linkage to the game variables.
extern  struct  gamelogic_variablelist  gstruct_GameVars;
extern  char    gcDebugFlag;


//
// "Leave the dildos in" Path Selection function.
//
int gamelogic06_scene1110 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1110 >Leave the dildos in}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Leave the dildos in\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks it might be a good idea to take them out. She tries relaxing her abdomen muscles, but neither of them refuse to budge. #!00# then lifts her head up off the bed and leans forward a bit to get a better view.\n\n\"What in hades...\"\n\n#!00#\'s clitoris is now protruding from her clitoral hood by almost an inch and is also approximately three-quarters of inch wide.\n\nNot only are each of her swollen nipples now just over an inch long, but her breasts are also bigger\?!.\n\n\"Those... LITTLE... assholes...\"\n\n#!00# collapses back on the bed... thinking to herself \"Trying to take those out... bad idea...\"\n\n#!00# realizes that her rising anger is also increasing her arousal... which isn\'t good either. #!00# tries to calm herself down by breathing in deeply, slowly, a few times, while also laying still. It isn\'t easy when you are already extremely horny. #!00# tries to focus on something to calm herself down and decides to concentrate on how gross it feels that her butt is sitting in a pool of her own pussy juices... no... that isn\'t helping... for some reason she finds that really erotic... for now focus on #!01# drills instead. There is nothing more boring that participating in a military parade so that some asshat politician can have a power trip.\n\nAfter a couple of minutes, #!00# has some success in calming herself down, so she carefully rolls onto her side, trying to get away from the pool of liquid, while also not setting herself off. After 5 minutes, which felt like an eternity, she manages to make it to the edge of the bed. Finally she manages to stand up without cuming her brains out.\n\n#!00# sighs \"so desperately want a good fuck right now...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1112 (0, cSubFlag + 1);
    return iRet;
}

//
// "Pull the dildos out" Path Selection function.
//
int gamelogic06_scene1111 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1111 >Pull the dildos out}\n\n[set cFPullOutDildos2]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Pull the dildos out\n\n");
        if (iRet != 0) return iRet;
    }

    // pull the dildos out flag
    gstruct_GameVars.cFPullOutDildos2 = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well... it would make it easier to move around\".\n\nShe reaches down to try and grab the base of the one in her pussy...\n\n... and accidentally brushes the side of her clitoris with her wrist.\n\n\n[2 minutes later...]\n\nAfter her ninth orgasm in a row, #!00# has finally calmed down enough.\n\nThe stimulation did help, as she pulled the anal dildo out on the second orgasm and the one in her pussy after the third. But #!00# was STILL in the mood and just could not help but continue masturbating for a while longer.\n\n#!00# is still laying on her back on the bed, looking up at the ceiling, but the pool of her pussy juices that her butt is sitting in is now slightly larger and higher.\n\n#!00# decides to take this opportunity, while her libido isn\'t in overdrive, to get off the bed.\n\nHowever, by the time that she makes it to the edge of the bed, #!00# is already back in the \'fuck anything that moves\' mood again. When #!00# stood up, the first thing that she notices... is gravity.\n\n\"Huh\?\"\n\n#!00#\'s breasts are bigger again. Aside from the fact that her swollen nipples are now over an inch long...\n\n#!00#\'s clitoris is now also bigger. About three-quarters of an inch wide and almost an inch long is currently exposed and unlikely to ever retreat back beneath her clitoral-hood.\n\n\"Those... little FREAKS!!\"\n\n#!00#\'s arousal rose with her anger.\n\n\"Rrrrgh... shit... FUCK... calm down... must... calm down...\"\n\nIt isn\'t easy for her. #!00# spends 2 minutes crouching next to the edge of the bed, breathing slowly. After she is satisfied that has averted more mindless masturbation, #!00# stands back up.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1112 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1110 and 1111 above.
//
int gamelogic06_scene1112 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1112 06 Pre-Scene Merge 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# looks around and the first thing that she notices is the door of the cell.\n\n\"Is that...\"\n\n#!00# wonders over to the door. Yes, the latch-bolt is retracted and the door is slightly ajar.\n\n");
    if (iRet != 0) return iRet;

    if ((gstruct_GameVars.cFPullOutDildos2 != 0) && (gstruct_GameVars.cFExtIntDialog != 0))
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 AND cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        // this includes extra dialog, as a result, knocks out a menu selection below.

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the door, closes her eyes and sighs.\n\n#!00# thinks to herself \"Do they really expect that I will fall for this, this HAS to be a test.\"\n\n#!00# carefully considers the fact there are likely to be traps in the hallway, besides, her clitoris and nipples are buzzing again.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 AND cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        iRet = mutils_addToCommandList ("Try to escape", 1113, 0);
        if (iRet != 0) return iRet;
    }

    iRet = mutils_addToCommandList ("Inspect the door lock", 1114, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Ignore the door", 1115, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Try to escape" Path Selection function.
//
int gamelogic06_scene1113 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1113 >Try to escape}\n\n[set cFMovedTheDoor1]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Try to escape\n\n");
        if (iRet != 0) return iRet;
    }

    // set moved the door flag.
    gstruct_GameVars.cFMovedTheDoor1 = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00#, puts her hand against the door and pushes it open. She glances around inside the cell to see if anything is out of place, or if anyone else is there.\n\n#!00# then pokes her head out the door and looks to the right, to the left, then to the right again. All that she can see is an empty hallway, in either direction.\n\n#!00# then takes a step through the cell doorway, into the hallway.\n\n#!00# thinks to herself \"no opponents... no headaches...\". #!00# closes her eyes and listens for any unusual sounds. Nothing other than the usual sound wind in the distance.\n\n#!00# looks around again, then thinks to herself \"which way now \?\".\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Go left", 1116, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Go right", 1117, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Inspect the door lock" Path Selection function.
//
int gamelogic06_scene1114 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1114 >Inspect the door lock}\n\n[set cFMovedTheDoor1]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Inspect the door lock\n\n");
        if (iRet != 0) return iRet;
    }

    // set moved the door flag.
    gstruct_GameVars.cFMovedTheDoor1 = 1;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is curious, about the lock of this door. She has seen the Light-Elf lock the door without using the key. It isn\'t often that orcs get to inspect elven stuff up close. She could report back about this. And, spend possibly even longer locked up in a #!02# brig. At least she will be back IN #!02#. She still does not know what the two pervert elves are after. Not that she could understand if they told her, because... clearly... neither of them can speak Orc.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is curious, about the door lock. The Light-Elf closed it without using a key. The Dark-Elf can OPEN it without using a key. Elven-made stuff is weird. But then, the entire situation that #!00# finds herself in is weird.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides it would be a really good idea if she could actually see the outside of the lock. However, the bars are too close to each other to stick her head through.\n\nThis IS an unlocked door anyway.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00#, grabs the door and pushes it open some more, then pokes her head out of the doorway and looks right. She sees a hallway. An empty hallway. #!00# considers the fact that despite appearing to be a harmless hallway there might be a trap waiting out there. There is a wall at the far end.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00#, grabs the door and pushes it open some more, then pokes her head out of the doorway and looks right. She sees a hallway. #!00# spends some time studying the hallway, considering the fact that it does not look like much of an obstacle, there is a wall at the end.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("She then checks to the left, looking through the bars of the door. #!00# hasn\'t seen anyone come from that direction, but there might be something of worth that way. It is another hallway... there seems to be an end wall as well, that is closer.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# considers the fact that there should be doors and looks to the right again. She always hears some form of metallic sound, before hearing the footsteps of the elves.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks to the right again. There has to be a door out there, as she always hears something metallic in the distance, before the elves came.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Content with the fact that there is no immediate danger and the fact that she hasn\'t set off any traps, #!00# ventures out of the cell for the first time. Nothing bad has happened... yet...\n\n#!00# decides to focus on the reason that she is taking this risk. The chance to take a look at the outside of the door lock. Just as she is about to get a good look at the outer lock plate, she sees it.\n\nThe elves... left a key... in the keyhole.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("This, is just too suspicious. #!00# checks both directions along the hallway, then back inside the cell. Finally, #!00# looks at the key in the lock again. #!00# then ponders that this might be how the Dark-Elf constantly opened the door, but then remembers that the Light-Elf has specifically used a key.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("What luck... however... #!00# checks the hallway... in both directions... twice... then ponders... \"for what reason is the key inside the lock\?.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mutils_addToCommandList ("Leave the door open and Ignore the key", 1127, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Close the door and Leave the key", 1128, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Take the key and Leave the door open", 1129, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Take the key and Close the door", 1130, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Ignore the door" Path Selection function.
//
int gamelogic06_scene1115 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1115 >Ignore the door}\n\n[set cFIgnoredTheDoor1]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Ignore the door\n\n");
        if (iRet != 0) return iRet;
    }

    // set ignored the door flag.
    gstruct_GameVars.cFIgnoredTheDoor1 = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the door, then through the bars along the hallway, looks over the door again and then around the cell.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# then decides it will be a REALLY bad idea to do anything to this door.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# then decides it will be a REALLY bad idea to do anything to this door. This is too convenient... there has to be a trap... or... the open door itself is a trap...\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"I... don\'t like this... I should just stay away from it... for now.\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly backs away from the door, then walks over to the edge of the bed and tries to sit down. Which isn\'t easy has her clitoris is still buzzing and her pussy is drooling.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly backs away from the door, then walks over to the edge of the bed and tries to sit down. Which isn\'t easy because of the two dildos. #!00# does manage to sit down, eventually, then considers the possibility of removing the dildos now.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly backs away from the door, then walks over to the edge of the bed and tries to sit down. Which isn\'t easy because of the two dildos.\n\nAfter a couple of failed attempts sitting down, #!00# decides for just letting her butt onto slap into the surface of the bed and deal with whatever follows. She lightly climaxes while doing so, but manages to hold it together.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to sit still without fidgeting... and waits.\n\n\n[1 hour later...]\n\n#!00# has been waiting patiently, while constantly aroused, for the two elves to return.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("It does not help that the two dildos are still inside of her.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# tried multiple sitting positions on the bed, which made it difficult for her in one way or another. Eventually she just decided to lay flat on the bed, with her knees at the edge and her feet resting on the floor.\n\n#!00# just sits there... awake... waiting for something to happen while quietly listening to the wind in the distance.\n\nFinally #!00# hears the faint screeching of metal scraping on metal. It looks like the two elven-butt-heads are returning.\n\nWhile listening to the sounds of their footsteps in the hallway, #!00# props herself up on her elbows.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1132 (0, cSubFlag + 1);
    return iRet;
}

//
// "Go left" Path Selection function.
//
int gamelogic06_scene1116 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1116 >Go left}\n\n[set cFTurnedLeftFirst]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Go left\n\n");
        if (iRet != 0) return iRet;
    }

    // set the turned left flag.
    gstruct_GameVars.cFTurnedLeftFirst = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to turn left and head the opposite direction from where the elves have been appearing.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# walks around the open door and starts walking down the corridor. #!00# is walking slowly because she is still sensitive and attempting to do anything quickly is running the risk of her orgasming along the way.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# walks around the open door and starts walking down the corridor. #!00# is walking slowly, not to avoid attention, but because she still has two dildos that are along for the ride and her arousal is sky-high.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("After a few steps, she can clearly see what beyond what is next to her cell. It is... another cell... with another closed cell door.\n\n#!00# keeps walking, slowly and carefully, while looking around the corner into the neighboring cell. It appears to be empty.\n\n#!00# glances behind her, to check that there is no one behind her in the corridor, then keeps walking past the separation between her cell and the next. The more that #!00# looks, the more that she confirms that the cell is... mostly... empty.\n\nThe same white-smoke luminescent orbs are embedded into the walls, illuminating an empty room. There aren\'t any people in the room.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("There is one thing in the neighboring cell. Near the door, are the broken remains of the contraption, that used to be next to the left wall in #!00#\'s cell.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("But there are two things in the neighboring cell. Near the door, are the broken remains of the contraption that was in next to the left wall in #!00#\'s cell and the table that used to be against the right wall.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# keeps walking till she reaches the door of the cell.\n\nThere is a keyhole in the center of the latch-plate, the keyhole is empty. The door is closed and appears to be locked.\n\nGiven that there is nobody, or nothing of interest inside the cell, #!00# decides to keep walking. However, after a couple of steps past the door of the cell, #!00# realized that she would not be walking this direction for too much longer.\n\nEventually, #!00# reaches the edge of the neighboring cell and the end of the hallway.\n\nThe end of the hallway is the same light-gray stone wall as the other walls, no sign of any mortar or bricks. Lit by the nearby luminescent orbs.\n\nNo sign of a doorway, or if there is one, it is very well hidden.\n\nA thought does cross #!00#\'s mind that she could try searching for a hidden door, but she has as about as much likelihood of to finding a hidden door here, as finding a virgin at the graduation ceremony of the #!01# basic training course.\n\nSo there is nothing left to do... but turn around... and walk back along the hallway.\n\n#!00# walks past the door of the neighboring cell, past the dividing wall of the two cells and towards the door of the cell that she was in. And, that is when she sees it.\n\nThe keyhole, in the center of the latch-plate, of the open cell door... has a key in it.\n\n#!00# thinks to herself \"They left... THE key... in THE lock \?!\"\n\nBecause the door opens outwards to the left, she missed the fact that the key was there. And, if #!00# had turned right instead, she wouldn\'t have seen it at all.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Ignore the door and Continue along the hallway", 1121, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Leave the key and Return to the cell", 1118, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Take the key and Return to the cell", 1119, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Take the key and Continue along the hallway", 1120, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Go right" Path Selection function.
//
int gamelogic06_scene1117 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1117 >Go right}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Go right\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to turn right and head the direction from where the elves have been appearing.\n\n#!00# walks out the doorway, turn right and starts walking... slowly... down the corridor.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00#\'s lack of speed isn\'t due to the fact that she is trying to be quiet. She is still very sensitive, even though she had pulled the two Dildos out. It is because of what she did AFTER she got them out, that she is still so sensitive.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00#\'s lack of speed isn\'t due to the fact that she is trying to be quiet. She is still very sensitive AND she has a dildo still inside her pussy and another inside her asshole.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("After a few steps, she can clearly see what beyond what is next to her cell... it is... another cell... with another closed door.\n\n#!00# keeps walking, slowly and carefully, looking around the corner into the neighboring cell.\n\nThere is furniture inside, but there doesn\'t appear to be anyone in it.\n\n#!00# looks back and fourth along the corridor, verifying that it is still just her. The sound of the wind is still the same as before.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1126 (0, cSubFlag + 1);
    return iRet;
}

//
// "Leave the key and Return to the cell" Path Selection function.
//
int gamelogic06_scene1118 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1118 >Leave the key and Return to the cell}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Leave the key and Return to the cell\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# ponders this discovery. To have left the door open and the key like this must mean that the elves planned as some sort of test, or a trap.\n\n#!00# decides she is not going to fall for it, so she ignores the key, walks around the door and back into the cell.\n\n#!00# looks back at the now wide open door and thinks to herself \"they are going to notice that has been moved\".\n\n#!00# steps out of the cell again, grabs the door and pulls it behind her. Which turns out to be slightly difficult as the door pivots on its hinges almost without any effort at all. Just as #!00# positions the door where she thought it was originally, she thinks to herself \"I wonder... should I close this... or leave it\".\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1122 (0, cSubFlag + 1);
    return iRet;
}

//
// "Take the key and Return to the cell" Path Selection function.
//
int gamelogic06_scene1119 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1119 >Take the key and Return to the cell}\n\n[set cFTookTheKey] [set cFLeftDoorWideOpen]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Take the key and Return to the cell\n\n");
        if (iRet != 0) return iRet;
    }

    // set took the key flag.
    gstruct_GameVars.cFTookTheKey = 1;

    // left the door wide open
    gstruct_GameVars.cFLeftDoorWideOpen = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"This is suspicious... door open... key in the lock...\"\n\n#!00# walks over to the door and grabs the key. She then looks around to check if anyone is watching her, or any spells being chanted.\n\n#!00# then pulls the key out of the lock. She then examines the tip of the key and thinks to herself \"definitely not like anything back in #!02#... well... thanks for the key boys.\"\n\n#!00# then walks around the door and back into the cell. After passing through the doorway, #!00# looks back at the door and thinks to herself \"They are going to notice that\".\n\n#!00# then looks at the key in her hand and thinks \"Ah well... even if I put the door back... they are going to notice anyway... or... should I just close the silly thing\?\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1122 (0, cSubFlag + 1);
    return iRet;
}

//
// "Take the key and Continue along the hallway" Path Selection function.
//
int gamelogic06_scene1120 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1120 >Take the key and Continue along the hallway}\n\n[set cFTookTheKey]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Take the key and Continue along the hallway\n\n");
        if (iRet != 0) return iRet;
    }

    // set took the key flag.
    gstruct_GameVars.cFTookTheKey = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"That might be useful\".\n\n#!00# walks over to the door and grabs the key. She then looks around to check if there is anything strange or anybody watching her. She cannot feel the effects of any spells being cast or chanted, and the sound of the wind in the distance is the same as always.\n\n#!00# then pulls the key out of the lock. Still nothing out of the ordinary. Except, now, she is holding an elven lock key.\n\n#!00# examines the top of the key. It is vaguely similar to keys from #!02#... but this isn\'t #!02#.\n\n#!00# steps around the door and continues walking along the hallway.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1125 (0, cSubFlag + 1);
    return iRet;
}

//
// "Ignore the door and Continue along the hallway" Path Selection function.
//
int gamelogic06_scene1121 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1121 >Ignore the door and Continue along the hallway}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Ignore the door and Continue along the hallway\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to ignore the key. It might be useful, but it might be a trap. However, leaving the door open could lead to a trap anyway. Well, she is an orc, so it should not be that bad... right\?.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00#\'s pussy and nipples start throbbing again, almost in unison. #!00# considers that she could just duck back into the cell, grab a couple of decent sized Dildos and bring them along, as weapons. No, it isn\'t really worth the trouble or the risk.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00#\'s pussy and nipples start throbbing again, almost in unison. The fact that she still has a dildo in her pussy, along with the other in her butt, isn\'t helping. Those COULD be useful now. #!00# can always pull them out and throw them, assuming that she could do so without cuming her brains out. Well, if she gets angry that will happen anyway and it makes the battle that much more enjoyable... and memorable... beat the shit out of an enemy and jizz your inner thighs while doing it... what more couldn\'t an orc girl ask for\?..\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic06_scene1125 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1118 and 1119 above.
//
int gamelogic06_scene1122 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1122 06 Pre-Scene Merge 2}\n\n[set cFBeenOutAndBack]\n");
        if (iRet != 0) return iRet;
    }

    // set the been out and back flag.
    gstruct_GameVars.cFBeenOutAndBack = 1;

    // there is no dialog here, just the setting of the command list.

    iRet = mutils_addToCommandList ("Leave the door open", 1123, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Pull the door shut", 1124, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Leave the door open" Path Selection function.
//
int gamelogic06_scene1123 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1123 >Leave the door open}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Leave the door open\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"I should just leave the thing as it is, besides I still might need to get through that.\"\n\n#!00# pokes her head out of the cell doorway and looks in each direction along the hallway. There is still no sign of anyone, so she retreats back inside the cell.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1131 (0, cSubFlag + 1);
    return iRet;
}

//
// "Pull the door shut" Path Selection function.
//
int gamelogic06_scene1124 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1124 >Pull the door shut}\n\n[clear cFMovedTheDoor1] [set cFClosedTheDoor1]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Pull the door shut\n\n");
        if (iRet != 0) return iRet;
    }

    // reset moved the door flag.
    gstruct_GameVars.cFMovedTheDoor1 = 0;

    // set closed the door flag.
    gstruct_GameVars.cFClosedTheDoor1 = 1;

    if (gstruct_GameVars.cFLeftDoorWideOpen != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLeftDoorWideOpen is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to close the door, so she walks through the doorway, grabs the door and pulls the door behind her as she steps back into the cell. The door moves effortlessly and #!00# has to push back on the door slightly to slow it down. Her main concern is making too much noise when closing the door.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLeftDoorWideOpen is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLeftDoorWideOpen is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to close the door, so she grabs the door and pulls it towards her.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLeftDoorWideOpen is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("As the outside latch-plate barely touches the outer door-frame, there is an audible metal click as the latch-bolt slides back into place. #!00# thinks to herself ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTookTheKey != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"thought so... anyone can lock this door... however, I also have the key...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTookTheKey is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"thought so... anyone can lock this door... however, now, I need either of those two elven perverts to actually open it again...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTookTheKey is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic06_scene1131 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1120 and 1121 above.
//
int gamelogic06_scene1125 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1125 06 Pre-Scene Merge 3}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("After a few steps, #!00# can clearly see what beyond what is next to her cell. It is... yet another cell... with yet... another... locked door.\n\n#!00# thinks to herself \"just how many of these things are there\?.\"\n\n#!00# keeps walking... slowly and carefully... looking around the corner into the neighboring cell.\n\nThere is furniture inside this one... but... like the other one... there doesn\'t appear to be anyone in it.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1126 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1117 and 1125 above.
//
int gamelogic06_scene1126 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1126 06 Pre-Scene Merge 4}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# keeps walking past the wall separating the two cells.\n\nThe same white-smoke luminescent orbs are embedded into the walls, illuminating the cell. The furniture is different. There is what appears to be a large circular deep-pink colored thing in the center of the cell. #!00# can only assume that it is some sort of bed, as it is about the same height as the square black rubber bed in the middle of her cell. Whatever it is, it has the same glossiness to it as well.\n\nSome sort of chair in the corner...\n\nA large double-door cabinet in another corner...\n\nA very large set of drawers against the back wall...\n\nIs that a... really big mirror... against the wall over there\?\n\nThe ceiling is strange... sort of reflective. Like a mirror. #!00# cannot think of a reason as to why there would be a large mirror attached to the ceiling...\n\nBy the time that #!00# arrives in front of the door, she is not entirely convinced that what she is staring into isn\'t actually a cell for a prisoner. The mere fact that there is actual carpet on the floor... Carpet that is a light-coral color... which is sort of a weird color, but still is soft carpet... soft long and bushy carpet... none the less.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTurnedLeftFirst != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTurnedLeftFirst is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("A definite improvement over the light-gray stone for the floor in the cell that #!00# was in and also... the mostly empty cell at the end.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTurnedLeftFirst is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTurnedLeftFirst is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("A definite improvement over the light-gray stone for the floor in the cell that #!00# was in.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTurnedLeftFirst is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFTookTheKey != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the keyhole in the center of the door latch-plate, then at the key in her hand and thinks to herself \"What\'s the worst that can happen now... if I try \?\"\n\n#!00# proceeds to put the key into the keyhole and attempts to turn it. The key does not want to turn and the door is not opening.\n\n#!00# considers forcing the lock to turn, but remembers that #!02# keys are notoriously flimsy, despite the fact that they are made out of hardened steel. There have been many times where the wrong key was put in the wrong lock, then part of the key was snapped off in there, and it was necessary to call for some metal-smiths to rip apart the door-lock, if not the entire door. The elven key she has is even SMALLER than a key from #!02#.\n\n#!00# decides to remove the key and leave this door alone. However, this does lower the chances of the key actually opening anything else.\n\n#!00# keeps walking along the corridor, aware that the key that she is holding is probably not meant to unlock any door other than the door of the cell that she was in. Then #!00# stops walking and considers the fact that she does not know if the key that she is holding is even meant for the lock that she found it in. It is not as if she actually tried it before taking the key. Oh well... not to matter...\n\n#!00# resumes walking along the corridor.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTookTheKey is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFTurnedLeftFirst != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFTurnedLeftFirst is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the keyhole and remembered that she left the key that she saw behind. #!00# briefly considers going back to get that key just to try it in this lock, but then decides that she is more interested in getting out of this dungeon, than the possibility of... what\?.. newer furniture\?.. weird elven furniture\?.. that is shiny\?.. if there is anything of use in a cabinet in a locked room\?.. the chance to find out what the ceiling mirror is for\?\?.. those things aren\'t important!.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFTurnedLeftFirst is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFTurnedLeftFirst is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the keyhole and remembers that the Light-Elf had a key... also the Dark-Elf seemed to be able to unlock doors like this... however, neither of them are here and right now... and #!00# is trying to avoid both of them.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFTurnedLeftFirst is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to keep walking along the corridor.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTookTheKey is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Beyond the edge of the cell that #!00# is outside of, is not another cell, but another light-gray flat stone wall. The light-gray flat stone floor, ceiling and two walls... a corridor... continues to stretch out beyond that. However, there is... something... part way along the right flat wall. This looks promising.\n\n#!00# keeps walking and once she passes the edge of the carpeted cell. The \'something\' turns out to be a door. #!00# thinks to herself \"well, I did hear something just before I could hear the elves walking towards the cell... maybe this is THAT door\?\".\n\n#!00# keeps walking along the corridor, aware that she might be running into the elves sometime soon. However, running into a mage in an enclosed space is actually a disadvantage for the mage anyway and both of the elves appear to only be mages. So if #!00# ran into them, she could easily injure them, before they can complete their enchantments.\n\nBefore #!00# arrives at the door, she can see it is solid, with the same dark-slate-blue color that the metal bars for the cells are, another latch-plate, keyhole in the center of it. No door handle.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTookTheKey != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the key that she is holding and thinks to herself \"Unlikely to work, but I might as well try\".\n\n#!00# puts the key into the lock and tries turning it. To #!00#\'s surprise, the key turns and she can hear the click of the latch-bolt sliding back within the plate. The door... is unlocked.\n\n#!00# was about to think something to herself, when she heard a hissing sound above her head.\n\n\"oh fuck...\"\n\nJust as #!00# looks up, the descending pale-violet-red mist has already hit her.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFPullOutDildos2 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPullOutDildos2 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The immediate headache drowns out the fact that her nipples and clitoris are throbbing.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPullOutDildos2 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPullOutDildos2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The immediate headache drowns out the fact that her nipples and clitoris are throbbing, along with the sensation of the two dildos.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPullOutDildos2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTookTheKey is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFTurnedLeftFirst != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFTurnedLeftFirst is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the keyhole and regrets for a second time that she did not take the key from the lock back at her cell. Then she quickly dismisses the idea and comes to the conclusion that is she runs into yet another dead end, she knows that she has something else to come back and try.\n\nSo #!00# decides to ignore the door for now and keep walking.\n\nAs #!00# is walking along the corridor, it is apparent that she is walking towards another wall at the end... however, it is not another dead end.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFTurnedLeftFirst is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFTurnedLeftFirst is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the keyhole and laments the fact that she does not have a key. #!00# thinks to herself \"It is not as if those elven-little-dicks would have actually left a key for me to find\".\n\nSo #!00# decides to keep walking along the corridor.\n\nAs #!00# is walking along the corridor, it is apparent that she is walking towards a wall at the end... however, it is not a dead end.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFTurnedLeftFirst is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("There appears to be a hole... no... a turn... this is a left turn. There isn\'t one on the right... so this isn\'t a tee-intersect. #!00# keeps walking... slowly.\n\nJust as #!00# is 5 steps away from reaching the corner...\n\n... #!00# hears a hissing sound above her head.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFPullOutDildos2 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPullOutDildos2 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"SHIT...\"\n\nJust as #!00# looks up, the descending pale-violet-red mist has already hit her.\n\nHer nipples, clitoris are no longer the primary concern, as the headache hits her hard.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPullOutDildos2 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPullOutDildos2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"Rrgh... TRAP...\"\n\nJust as #!00# looks up, the descending pale-violet-red mist has already hit her.\n\nHer nipples, clitoris and the dildos that were potential weapons... are no longer the source of her anguish as the headache from the sleep spell hits her with a devastating effect.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPullOutDildos2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# collapses in the floor and passes out.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTookTheKey is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    // this links up with ending 001.
    iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
    return iRet;
}

//
// "Leave the door open and Ignore the key" Path Selection function.
//
int gamelogic06_scene1127 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1127 >Leave the door open and Ignore the key}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Leave the door open and Ignore the key\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFTableStillThere != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFTableStillThere is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The fact that the key is inside the lock and the door was left open... it smells like a trap. The elves were too thorough to find two missing dildos and put them back with the rest, to forget a key and the leave the door to the cell open. It is best to just leave the key as it is.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFTableStillThere is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFTableStillThere is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The fact that the key is inside the lock and the door was left open, smells like a trap. The elves were thorough to recover two missing dildos... and... they even took away the table, to prevent it being used as a weapon. They then arranged the dildos in a neat formation on the floor. How could they forget the key and leave the door open. No, it is best to just leave the key as it is.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFTableStillThere is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("As much as it seems like a good idea to take the key, the two elves will notice that it is gone, then who knows what will happen.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to leave the key there. However, there is the minor matter of the fact that she has moved the door. #!00# thinks to herself \"They are going to notice that I moved this.\"\n\n#!00# steps back into the cell and grabs the door, pulling it behind her.\n\nShe stops the door just before it closes. Which is slightly harder than it sounds, because the door is moving so easily and #!00# initially overestimated the amount of physical strength needed to move the door.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"About there... well... it looks about right\". #!00# then backs away from the door wondering if the elves will notice, then considers the inevitability that they will anyway.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the gap between the edge of the door and the frame. She thinks she has it back where it started. #!00# steps back from the door.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic06_scene1131 (0, cSubFlag + 1);
    return iRet;
}

//
// "Close the door and Leave the key" Path Selection function.
//
int gamelogic06_scene1128 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1128 >Close the door and Leave the key}\n\n[clear cFMovedTheDoor1] [set cFClosedTheDoor1]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Close the door and Leave the key\n\n");
        if (iRet != 0) return iRet;
    }

    // reset moved the door flag.
    gstruct_GameVars.cFMovedTheDoor1 = 0;

    // set closed the door flag.
    gstruct_GameVars.cFClosedTheDoor1 = 1;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# decides that taking the key might trigger another trap, so she decides to leave it behind.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks about it. She should leave the key behind. Taking it would be a really bad idea.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# cautiously looks in both directions along the hallway, grabs the door and pulls it behind her as she steps back into the cell.\n\nHowever, #!00# returns to the cell a little bit too quickly, as the elven-made door almost effortlessly swings back into the door-frame.\n\nJust as #!00# realizes her mistake, the outer plate touches the door-frame and the latch-bolt slides back in with an audible click.\n\n\"Oh... shit...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# considers her mistake for a moment and then comes to the conclusion that she might as well see how the elves react to the result first. If they were so observant in the first place, it is possible that they would have noticed that #!00# had moved the door anyway.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# checks the door with her hand... and... yes... it is not just closed but locked as well. There isn\'t anything she can do about the door now. If she was to try and force it open, they would notice the damage.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFPullOutDildos2 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPullOutDildos2 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("Also, her sensitive areas are still buzzing and getting angry is only going to make her horny.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPullOutDildos2 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPullOutDildos2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("Also, there is the small matter that she still has a dildo stuck inside her pussy, and another jammed inside her anus.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPullOutDildos2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to leave the door alone, as there is nothing she can do about it now.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1131 (0, cSubFlag + 1);
    return iRet;
}

//
// "Take the key and leave the door open" Path Selection function.
//
int gamelogic06_scene1129 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1129 >Take the key and leave the door open}\n\n[set cFTookTheKey]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Take the key and leave the door open\n\n");
        if (iRet != 0) return iRet;
    }

    // set took the key flag.
    gstruct_GameVars.cFTookTheKey = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"That key... might be useful.\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches around to grab it, then realizes that the two elves will notice if it is gone. However, the Dark-Elf is usually the one who opens the door anyway and he normally doesn\'t use the key.\n\n#!00# thinks to herself \"Is this the Dark-Elf\'s method of opening the door without a key, but leaving the key in the lock anyway\?\"\n\n#!00# considers that would be awfully stupid, as a prisoner could still reach outside of the cell and grab the key. Also, the Light-Elf seemed to use a key when he opened the door once.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches around to grab it, then realizes that the two elves will notice if it is gone. However, the elves seem to have a method of opening the door without the key.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("So #!00# grabs the key and pulls it out of the keyhole. She then checks her surroundings again.\n\nThen... #!00# looks at the door and she thinks to herself \"They would notice that I moved this\". #!00# grabs the door and pulls it slowly behind her as she steps back inside the cell.\n\n\"Careful...\"\n\n#!00# slowly pulls the door so that she has it back to the way it was when she found it, which turns out to be difficult. Despite the fact that the door is solid and appears heavy, it is surprisingly easy to pivot on its hinges.\n\n#!00# sighs with relief when the door is slightly ajar, but not closed. If the elves forget about her, she might have to still open this door again.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1131 (0, cSubFlag + 1);
    return iRet;
}

//
// "Take the key and close the door" Path Selection function.
//
int gamelogic06_scene1130 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1130 >Take the key and close the door}\n\n[clear cFMovedTheDoor1] [set cFClosedTheDoor1] [set cFTookTheKey]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Take the key and close the door\n\n");
        if (iRet != 0) return iRet;
    }

    // reset moved the door flag.
    gstruct_GameVars.cFMovedTheDoor1 = 0;

    // set closed the door flag.
    gstruct_GameVars.cFClosedTheDoor1 = 1;

    // set took the key flag.
    gstruct_GameVars.cFTookTheKey = 1;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The thought of taking the key from the keyhole enters #!00#\'s mind. She cautiously looks around, specifically behind her along the hallway, in the direction that the two elves normally approach from.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# decides that while taking the key could be bad, it would be interesting to see if the two elves would notice it is gone.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches over and pulls the key out of the keyhole. #!00# then looks around again. No-one has suddenly appeared, and there are no signs of any spells. Good.\n\n#!00# decides to quickly step back into the cell. Oh, and she should return the door to where it was a the same time. So she grabs the door, steps into the cell...\n\n... and the door swings back behind her with hardly any effort.\n\n\"wha...\"\n\n#!00# tries to stop the momentum of the door, but she is moments too late, as the outer plate has touched the door-frame...\n\n... then the latch-bolt slid back in with an audible click.\n\n#!00# is about to start cursing herself when she realizes...\n\n\"oh... I have the key...\"\n\n#!00# decides that it isn\'t too bad. While there is no keyhole on the inside, it is possible that she might be able to reach through the bars and get to the keyhole on the outside.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1131 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1123, 1124, 1127, 1128, 1129 and 1130 above.
//
int gamelogic06_scene1131 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1131 06 Pre-Scene Merge 5}\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks around the cell and decides to wait for the elves next move while sitting on the bed.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks around the cell and decides sit on the bed and to wait elves. Which isn\'t going to be easy considering that she still has a couple of dildos inside. #!00# sighs at the prospect of sitting down.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[10 minutes later...]\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("It isn\'t easy waiting. In order to keep her arousal in check, #!00# has had to lean back, spread her legs and prop herself up on her elbows. This position is causing her discomfort in other ways, but at least she is not succumbing to her rampant carnal desires. Her pussy has been constantly drooling and a small puddle has formed on the rubber latex beneath her butt.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("While waiting for the elves to return, #!00# has had to lean back, spread her legs and prop herself up on her elbows. It is the only way to keep her clitoris clear and the pressure off the dildo in her pussy. However, she now has to deal with the pressure on the dildo in her anus instead. It wasn\'t easy for #!00# to sit on the edge of the bed, but she did it. Her pussy has been constantly drooling, and a small puddle of #!00#\'s pussy juices has formed on the rubber latex beneath her butt.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Finally, #!00# hears the faint screeching of metal scraping on metal. It looks like the two elven-butt-heads are returning.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLeftDoorWideOpen != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLeftDoorWideOpen is set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# just sits there waiting patiently as the approaching footsteps echo louder in the hallway. Then #!00# looks at the door and realizes that she left the door wide open. #!00# thinks to herself \"well... that was dumb... I should have tried moving that back to where it was... Oh well...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# just sits there waiting patiently as approaching footsteps echo louder in the hallway. Then she looks at the door and realizes that she left the door wide open. #!00# sighs, and decides that there isn\'t anything she can do about it now.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLeftDoorWideOpen is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLeftDoorWideOpen is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# just sits there waiting patiently as the approaching footsteps echo louder in the hallway.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLeftDoorWideOpen is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic06_scene1132 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1115 and 1131 above.
//
int gamelogic06_scene1132 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1132 06 Pre-Scene Merge 6}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# looks over in the direction of the right side wall. Finally, she can see the Dark-Elf, followed by the Light-Elf. The pair reach the right edge of the cell bars and the Dark-Elf stops walking.\n\nThe Light-Elf continues walking and passes in front of the Dark-Elf. The Dark-Elf just stands there, staring at #!00#.\n\n");
    if (iRet != 0) return iRet;

    // ignored the door branch.
    if (gstruct_GameVars.cFIgnoredTheDoor1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-and-endif-01:cFIgnoredTheDoor1 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic06_scene1133 (0, cSubFlag + 1);
        return iRet;
    }

    // closed the door branches.
    if (gstruct_GameVars.cFClosedTheDoor1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-and-endif-01:cFClosedTheDoor1 is set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFTookTheKey != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-and-endif-02:cFTookTheKey is set]\n");
                if (iRet != 0) return iRet;
            }

            // took the key and closed the door branch.
            iRet = gamelogic06_scene1134 (0, cSubFlag + 1);
            return iRet;
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-and-endif-02:cFTookTheKey is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            // left the key and closed the door branch.
            iRet = gamelogic06_scene1135 (0, cSubFlag + 1);
            return iRet;
        }
    }

    // if the key was taken.
    if (gstruct_GameVars.cFTookTheKey != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-and-endif-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFLeftDoorWideOpen != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFLeftDoorWideOpen is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf only takes another step before glancing back at the Dark-Elf and mentioning something. The Dark-Elf continues to stare at #!00#.\n\n");
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.cFIntDialog != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFIntDialog is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Looks like he noticed the door... I wonder if he will notice the key.\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFIntDialog is set]\n");
                    if (iRet != 0) return iRet;
                }
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFIntDialog is NOT set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well... that was obvious... too obvious.\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFIntDialog is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf walks up to the door, grabs it with his hand and partially closes the door... Then, the Light-Elf blinks as he looks at the empty keyhole, the Light-Elf then says something...\n\nThis time, the Dark-Elf glances at the Light-Elf then resumes staring at #!00#. The Light-Elf then fully opens the door again and walks into the cell.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFLeftDoorWideOpen is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFLeftDoorWideOpen is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf keeps walking till he almost reaches the door. Just as he arrives at the door, he talks. It is obvious to #!00# he his not talking to her, but the Dark-Elf. #!00# glances at the Dark-Elf and notices that the Dark-Elf is still staring at her.\n\nThe Light-Elf then grabs the door, opens it and walks into the cell.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFLeftDoorWideOpen is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf is looking directly at #!00#. #!00# thinks to herself \"Okay... what is pissing him off... that the door was unlocked... or that the key isn\'t...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("It is obvious that the Light-Elf is looking straight at #!00#. It is difficult to tell if the Light-Elf is angry or not, but #!00# quickly comes to the conclusion that he is.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf says something to #!00#, then holds out his open right hand. #!00# glances at his hand, then at his face.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Heh... your manners suck...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            if (gstruct_GameVars.cFPullOutDildos2 != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFPullOutDildos2 is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"As much as I would like to shake your hand right now... break it off... then ram it down your throat... I am sort of tired...\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFPullOutDildos2 is set]\n");
                    if (iRet != 0) return iRet;
                }
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFPullOutDildos2 is NOT set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well... maybe... just maybe... you want a dildo... sorry... the ones that I have are kinda... stuck...\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFPullOutDildos2 is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("After a tense fifteen seconds where #!00# and the Light-Elf just stare at each other, the Light-Elf retracts his right hand, reaches into his right pocket, pulls out the end of a piece of string and shows it to #!00#.\n\nThe Light-Elf then repeats what he said to #!00# earlier. #!00# raises her eyebrows. She still has the key hidden in her right hand.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"So... it WAS left there as a test.\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"A key... on a string... does not just come untied by itself.\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly looks over at where the Dark-Elf is standing outside of the cell bars. He is still standing there, silently staring at #!00#. #!00# just continues to stare at the Dark-Elf.\n\nThe Light-Elf decides to also look at the Dark-Elf and talks to him. The Dark-Elf glances at the Light-Elf, with a worried look, then at #!00#, then looks at the Light-Elf again.\n\nThe Dark-Elf says something and the Light-Elf responds. The Dark-Elf, grudgingly, walks towards the door of the cell and enters the doorway into the cell.\n\n");
        if (iRet != 0) return iRet;

        // branch off to who the PC throws the key to.
        iRet = gamelogic06_scene1136 (0, cSubFlag + 1);
        return iRet;
    }

    if (gstruct_GameVars.cFLeftDoorWideOpen != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLeftDoorWideOpen is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf only takes another step before saying something, but not looking anywhere but at the wide open door. The Dark-Elf continues to stare at #!00#.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well... it is obvious that the door is open now...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"To be expected... I left it wide open...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf walks up to the door, grabs it with his hand and partially closes the door. #!00# then notices that the Light-Elf is doing something with the outside of the lock, then he opens the door again, with his right hand, while holding the key in his left.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLeftDoorWideOpen is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLeftDoorWideOpen is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf keeps walking till he almost reaches the door. Just as he arrives at the door, he talks. It is obvious to #!00# he his not talking to her, but the Dark-Elf. #!00# glances at the Dark-Elf and notices that the Dark-Elf raises his eyebrows, while still staring at #!00#.\n\nLight-Elf is doing something with the outside of the lock, then he opens the door again, with his right hand, while holding the key in his left.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLeftDoorWideOpen is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf then then proceeds to take the end of a piece of string out of his right pocket and then reattaches the key back to the end of the string. Finally, the Light-Elf puts the key and string back into his pocket and steps into the cell through the open door.\n\n#!00# takes another look at the Light-Elf\'s face and notices that he still has a poker-face expression.\n\n");
    if (iRet != 0) return iRet;

    // branch merge
    iRet = gamelogic06_scene1140 (0, cSubFlag + 1);
    return iRet;
}

//
// Branch point for "Ignored the door".
//
int gamelogic06_scene1133 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1133 06 Branch 1 (ignored the door)}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# glances at the Dark-Elf and then watches the Light-Elf.\n\nLight-Elf walks right up to the door of the cell and carefully looks at it.\n\n#!00# thinks to herself \"It was a good idea to leave that alone.\"\n\nThe Light-Elf opens the door, slouches his shoulders then closes the door. There is an audible click as the latch-bolt slides back into place.\n\n\"Eh\?..\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf glances at the Dark-Elf and nods. The Dark-Elf starts chanting. #!00# sighs...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf glances at the Dark-Elf and nods. The Dark-Elf starts chanting. #!00# wonders if anything is going to be different about this Dream-Vision.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("After a little while... #!00#\'s vision goes dark.\n\n#!00# decides to wait to see what happens. Eventually, as usual, the same Tentacle Monster as before appears and tentacles wrap around #!00#\'s crotch and breasts. Just as #!00#\'s right nipple starts tingling.\n\n#!00# sighs \"If it wasn\'t for the other stuff they are doing to me...\"\n\nThe tingling spreads to #!00#\'s left nipple... then with her clitoris.\n\n#!00# continues \"... I would be falling asleep due to boredom.\"\n\nThen both of #!00#\'s breasts start tingling, almost simultaneously.\n\n\"I wonder how much bigger I am going to be at the end of this\?..\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Then #!00# starts to feel a sensation in her pussy an anus.\n\n\"What the... I just GOT those out and now they have put them back IN\?!\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# then starts to feel the dildos that were already in her pussy and anus start to move around.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# then wonders if the elves outside of her Dream-Vision are going to force her to suck them off, however there is no sensation in her mouth and the Tentacle Monster just keeps violating her lower orifices.\n\nWhat is different this time, is that feels as if someone is groping both of her breasts. #!00# wonders why the elves are concentrating on her breasts this time, instead of making her suck their cocks.\n\n#!00# has no choice but to wait till the Dream-Vision ends. Occasionally the vision of the Tentacle Monster stops and continues, but other than that, there is nothing for #!00# to do.\n\n\n[?? later...]\n\nAfter what could have been hours, if not days, because #!00#\'s perception of the flow of time is messed up due to the Dream-Vision, the feeling of someone touching her breasts is replaced by pain all over her body, which is slowly rising.\n\nJust before #!00# passes out because of the pain, she concludes that the elves have finished their little encounter and they are back to their usual tricks.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1230 (0, cSubFlag + 1);
    return iRet;
}

//
// Branch point for "Took the key and closed the door".
//
int gamelogic06_scene1134 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1134 06 Branch 2 (took the key and closed the door)}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf keeps walking till he almost reaches the door. Just as he arrives at the door, he talks. It is obvious to #!00# he his not talking to her, but the Dark-Elf. #!00# looks at the Dark-Elf, who glances at the Light-Elf, then glances back at #!00#, then looks at the Light-Elf again.\n\nThe Dark-Elf says something to the Light-Elf. The Light-Elf responds. #!00# looks at the Light-Elf and notices that he is staring only at her. Finally, the Dark-Elf starts walking towards the door of the cell.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"It would appear that WAS the one and only key... So... what happens now\?\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"If there was only one... then why leave it in the lock\?\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# resumes watching the Dark-Elf, who walks towards the Light-Elf next to the cell door. The Dark-Elf casts his enchantment, the latch-bolt slides back and the door is unlocked. This time, it is the Light-Elf who grabs the door and pulls it open.\n\nThe Dark-Elf, who has completed his task of opening the door is about to turn around and walk back to the safer spot further back along the hallway, when the Light-Elf says something to him, while still staring at #!00#. The Dark-Elf, with an expression of concern on his face, looks at the Light-Elf and responds back. The Light-Elf steps into the cell, all while keeping his focus on #!00# and talks to the Dark-Elf some more.\n\nThe Dark-Elf looks unhappy, but stays and shifts his focus to looking at #!00#.\n\nMeanwhile the Light-Elf takes one more step after entering the cell and then stops. The Light-Elf says something to #!00#, then holds out his open right hand. #!00# looks at his hand.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"It is possible that you want the key... but you are going to have to be a little bit more obvious than that.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"That\'s a nice looking hand... are you offering it to me\?\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# glances at the Dark-Elf, who is fidgeting near the open door of the cell. #!00# then looks at the Light-Elf.\n\n#!00# and the Light-Elf continue staring at each other, while the Dark-Elf watches from nearby. Finally, the Light-Elf retracts his right hand reaches into his right pocket, pulls out the end of a piece of string and shows it to #!00#.\n\nThe Light-Elf then repeats what he said to #!00# earlier. #!00# raises her eyebrows. She still has the key hidden in her closed right hand.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well... I would say that is slightly more obvious.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Either you are missing a key... or... your \'dress\' is falling apart.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# repeatedly glances at the Dark-Elf, who is still standing near the door. The Dark-Elf is more anxious than #!00#.\n\nThe Light-Elf decides to call out to the Dark-Elf. The Dark-Elf looks at the Light-Elf and responds, with an expression of disbelief on his face. The Light-Elf sighs, repeats his last statement to the Dark-Elf, then adds something extra onto the end.\n\nThe Dark-Elf looks back along the hallway and finally steps into the cell.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1136 (0, cSubFlag + 1);
    return iRet;
}

//
// Branch point for "Left the key and closed the door".
//
int gamelogic06_scene1135 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1135 06 Branch 3 (left the key and closed the door)}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf keeps walking till he almost reaches the door. Just as he arrives at the door, he talks. It is obvious to #!00# he his not talking to her, but the Dark-Elf. #!00# glances at the Dark-Elf, just as the Dark-Elf finished glancing at the Light-Elf and resumed staring at #!00#.\n\n#!00# looks at the Light-Elf and the door, after she hears the audible click from the latch-bolt sliding back to unlock the door.\n\nThe Light-Elf then opens the door and removes the key from the keyhole. He then then proceeds to take the end of a piece of string out of his pocket.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"So... he did leave that there... specifically...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Interesting way... of testing someone...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Then, with a smug look on his face, the Light-Elf proceeds to reattach the key back to the end of the string and puts the key and string back into his pocket.\n\nThe Light-Elf smirks as he then opens the door further and steps into the cell.\n\nUpon seeing the Light-Elf\'s expression, #!00#\'s anger rises. However, her arousal also rises with it and she would literally fuck anything that moves right now. #!00# finds herself torn between fucking him senseless and fucking killing him.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Tackle the Light-Elf", 1141, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Masturbate", 1142, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Invite the Light-Elf over", 1143, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Let the Light-Elf do as he pleases", 1144, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// This is a pathway merge point called from 1132 (conditional) and 1134 above.
//
int gamelogic06_scene1136 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1136 06 Pre-Scene Merge 7}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# watches the Dark-Elf as he walks over to the left of the Light-Elf and stands there. The Dark-Elf sighs.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Now that everyone is gathered, time to show them what they want.\"\n\nThe Light-Elf is about to say something when #!00# holds up the key and shows it to the pair of elves. The Light-Elf stops talking and keeps his poker-face expression, while the Dark-Elf is dumbfounded.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf says something and this time #!00# thinks it is meant for her... as it sounds a lot like when he was in the cell by himself before it called out to the Dark-Elf to come in.\n\n#!00# thinks to herself \"Okay... maybe you are asking for this.\"\n\n#!00# holds up the key and shows it to two elves. The Light-Elf\'s expression does not change, while the Dark-Elf slouches and sighs again.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mutils_addToCommandList ("Throw the key to the Dark-Elf", 1137, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Throw the key to the Light-Elf", 1138, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Throw the key to the Dark-Elf" Path Selection function.
//
int gamelogic06_scene1137 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1137 >Throw the key to the Dark-Elf}\n\n[set cFKeyToDarkElf]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Throw the key to the Dark-Elf\n\n");
        if (iRet != 0) return iRet;
    }

    // set the key to the dark elf flag.
    gstruct_GameVars.cFKeyToDarkElf = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# tosses the key to the Dark-Elf. The Dark-Elf wasn\'t expecting it, as the key hits him in the chest just as he realizes that #!00# threw it to him. The Dark-Elf quickly crouches forward to catch the key before it hits the ground and stands up with a wide grin on his face.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well... at least someone is happy.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Nice catch.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf looks at the Dark-Elf and the Dark-Elf notices. The grin quickly vanishes from the Dark-Elf\'s face. The Dark-Elf then throws the key at the Light-Elf.\n\nThe Light-Elf, quickly snatches the key out of the air, with his right hand, while he is still holding the string that is attached to his pocket.\n\nThe Light-Elf resumes looking at #!00#, while the Dark-Elf looks around the cell, still rather pleased with himself.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1139 (0, cSubFlag + 1);
    return iRet;
}

//
// "Throw the key to the Light-Elf" Path Selection function.
//
int gamelogic06_scene1138 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1138 >Throw the key to the Light-Elf}\n\n[set cFKeyToLightElf]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Throw the key to the Light-Elf\n\n");
        if (iRet != 0) return iRet;
    }

    // set the key to the light elf flag.
    gstruct_GameVars.cFKeyToLightElf = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# throws the key to the Light-Elf, who effortlessly catches the key with his left hand.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Someone has good reflexes.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Eh-heh... I should have thrown it to the Dark-one.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic06_scene1139 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1137 and 1138 above.
//
int gamelogic06_scene1139 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1139 06 Pre-Scene Merge 8}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf proceeds to use both of his hands to reattach the key to the end of the string, while looking only at #!00#. He then places the key and the string back into his right pocket.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFKeyToDarkElf != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Meanwhile the Dark-Elf is fidgeting again...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well... it is clear whose key that was.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Okay... you now have your precious key back.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic06_scene1140 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1132 (conditional) and 1139 above.
//
int gamelogic06_scene1140 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1140 06 Pre-Scene Merge 9}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf starts walking towards #!00# and crouches down in front of her.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"I don\'t like where this is going.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Umm...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf then reaches out for #!00#\'s breasts with both hands and expertly tweaks both of #!00#\'s nipples. #!00# climaxes and falls back onto the bed.\n\n\"Fuuck... what was THAT\?\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1145 (0, cSubFlag + 1);
    return iRet;
}

//
// "Tackle the Light-Elf" Path Selection function.
//
int gamelogic06_scene1141 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1141 >Tackle the Light-Elf}\n\n[set cFLearntHardWay1]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Tackle the Light-Elf\n\n");
        if (iRet != 0) return iRet;
    }

    // set the learnt the hardway flag.
    gstruct_GameVars.cFLearntHardWay1 = 1;

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"This asshole is pissing me off.\" #!00# leans forward, ignoring the stimulation that she has just subjected herself to.\n\nJust as the Light-Elf takes another step forward, #!00# quickly jumps up and runs at him.\n\nThe Light-Elf is surprised when he sees that #!00# is bearing down on him. The Light-Elf\'s expression quickly changes to a smirk after #!00# trips and falls just short of his feet.\n\n#!00# is cuming her brains out. The surge of rage coupled with her sudden movements, also skyrocketed her arousal. It is what makes the Light-Elf\'s chosen cocktail of elven-narcotics so effective for breaking orcs.\n\n\"Rrrgh...\"\n\n#!00# is trying to maintain her rage and move. However, that just triggers another climax.\n\nThis time the Light-Elf walks around to #!00#\'s butt. The Light-Elf is sneering, as he is not going easy this time. His right hand immediately finds #!00#\'s clitoris and he starts pinching and twisting it. #!00# orgasms a third time.\n\nThe Light-Elf looks over at the Dark-Elf and says something, as he continues to fondle #!00#\'s genitals. The Dark-Elf was dumbfounded by the turn of events, as he seriously expected that the Light-Elf would be dead already by #!00#\'s hands.\n\nThe Dark-Elf starts casting an enchantment as the Light-Elf violently twists and pinches #!00#\'s clitoris again. #!00# climaxes a fourth time, just as the darkness of the cast Dream-Vision takes hold.\n\nThen #!00# finds that she is staring at the same Tentacle Monster again... however... this time... the Tentacle Monster is going \"all out\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"I should wipe that smile clean off of his face\", then tries to get up, only to have her legs give out because of a sudden heightened arousal and her butt slaps back down on the bed.\n\nThe dildos shift and her clitoris is stimulated. #!00# then cums her brains out and falls back onto the bed.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1145 (0, cSubFlag + 1);
    return iRet;
}

//
// "Masturbate" Path Selection function.
//
int gamelogic06_scene1142 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1142 >Masturbate}\n\n[set cFMasturbator]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Masturbate\n\n");
        if (iRet != 0) return iRet;
    }

    // set the masturbator flag.
    gstruct_GameVars.cFMasturbator = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Fuck this... an I am not going to let this guy think he has control over me. I\'ll show him.\"\n\n#!00# then flops back on the bed, starts playing with her clitoris with her right hand and teases her right nipple with her left hand.");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep (" The presence of the dildos make it slightly easier.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n\n#!00# then climaxes... hard... and collapses on the bed.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1145 (0, cSubFlag + 1);
    return iRet;
}

//
// "Invite the Light-Elf over" Path Selection function.
//
int gamelogic06_scene1143 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1143 >Invite the Light-Elf over}\n\n[set cFBecomeASexpot]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Invite the Light-Elf over\n\n");
        if (iRet != 0) return iRet;
    }

    // set the become a sexpot flag.
    gstruct_GameVars.cFBecomeASexpot = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides that if she really wants to get back at the Light-Elf, she should screw him senseless first... then kill him.\n\n\"Come over here and fuck me... now...\"\n\nThe Light-Elf looks at #!00# with a blank expression, as if he is trying to make sense out of what #!00# is saying.\n\n#!00# decides to communicate her intentions by sucking and licking her right index finger in a seductive manner. However, while attempting to entice and arouse the Light-Elf, #!00# ends up increasing her own arousal in the process.\n\n#!00# lightly climaxes... and flops back onto the bed.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1145 (0, cSubFlag + 1);
    return iRet;
}

//
// "Let the Light-Elf do as he pleases" Path Selection function.
//
int gamelogic06_scene1144 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1144 >Let the Light-Elf do as he pleases}\n\n[set cFGiveInToLightElf]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Let the Light-Elf do as he pleases\n\n");
        if (iRet != 0) return iRet;
    }

    // set the given in to the light elf flag.
    gstruct_GameVars.cFGiveInToLightElf = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# looks down at the ground and thinks to herself \"I am not going to win against this guy... am I\?..\"\n\n#!00# looks up again at the Light-Elf. The Light-Elf is just standing there, observing her. #!00# thinks to herself \"I... didn\'t say anything !!\"\n\nThe Light-Elf tries to smile... then his smile it vanishes as he looks away from #!00#... almost as if... he is thinking about something... then... he smiles again, looks directly at #!00# and continues walking towards her.\n\n#!00# thinks to herself \"Umm... what\?..\".\n\nThe Light-Elf then crouches down, while staring #!00# directly in the eyes.\n\nHe then reaches out for her breasts with both hands and expertly tweaks both of #!00#\'s nipples. #!00# climaxes and falls back onto the bed.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1146 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1140, 1141, 1142 and 1143 above.
//
int gamelogic06_scene1145 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1145 06 Pre-Scene Merge 10}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Before the #!00# can recover, the Light-Elf has darted over to her side on the bed and starts fondling her breasts. #!00# is powerless to stop the assault, as the Light-Elf is hitting all of the right places.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic06_scene1146 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1144 and 1145 above.
//
int gamelogic06_scene1146 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1146 06 Pre-Scene Merge 11}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("It is only now that #!00# realizes that the Light-Elf is wearing latex rubber gloves. The gloves are rosy-brown in color. While it was possible to limit her sensitive spots coming into direct contact with the black rubber latex of the bed, it isn\'t so easy to avoid the rubber covering his fingers.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTookTheKey != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# glances over at the Dark-Elf, who is standing nearby. He is watching with a smile on his face.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFMasturbator != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFMasturbator is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf then grabs #!00#\'s left hand with his own, guides her left fingers to her clitoris, then helps #!00# masturbate.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFMasturbator is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFMasturbator is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFPullOutDildos2 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPullOutDildos2 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf then reaches down and starts teasing #!00#\'s throbbing clitoris.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPullOutDildos2 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPullOutDildos2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf then reaches down teases #!00#\'s clitoris, then grabs the dildo popped out of #!00#\'s pussy, and shakes it while also fingering her clitoris.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPullOutDildos2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFMasturbator is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The onslaught is too much for #!00#. She climaxes with ease.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFMasturbator != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFMasturbator is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("While #!00# is recovering from her orgasm, the Light-Elf lets go of #!00#\'s left hand, grabs the dildo in her pussy and pulls it out. The Light-Elf then grabs #!00#\'s left hand again and uses it to continue teasing #!00#\'s erect clitoris.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFMasturbator is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFMasturbator is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("While #!00# is recovering from her orgasm, the Light-Elf grabs the dildo in her pussy and pulls it out. The Light-Elf then resumes his assault on #!00#\'s genitals.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFMasturbator is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"Fuuuck... too soon...\"\n\n#!00# tries resisting, but the Light-Elf seems to know her body rather well. The Light-Elf should, as he has been learning #!00#\'s weak spots since the very first encounter.\n\n#!00# is already on the edge of another orgasm, when the Light-Elf resumes playing with #!00#\'s breasts, forcing her to climax again.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFMasturbator != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFMasturbator is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("This time, #!00# successfully pulls her left hand away from her crotch. However, it is only a minor victory.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFMasturbator is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf immediately resumes teasing both of #!00#\'s nipples, giving her hardly anytime to actually rest.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf uses the time between manipulating #!00# to pull the dildo out of her anus and then immediately resumes teasing both of her nipples.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"No... not again...\"\n\nIt does not take very long, as #!00# is literally putty in the hands of the Light-Elf. Within a matter of seconds, the Light-Elf has successfully pushed #!00# to another orgasm.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTookTheKey != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("While #!00# is laying on the bed, trying to catch her breath, without taking his eyes off of #!00#, the Light-Elf calls out to the Dark-Elf. The Dark-Elf, who has been standing nearby the entire time, responds and starts moving around.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTookTheKey is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTookTheKey is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("While #!00# is laying on the bed, trying to catch her breath, without taking his eyes off of #!00#, the Light-Elf calls out to the Dark-Elf. The Dark-Elf gives a quick response. Then the Light-Elf quickly glances at the Dark-Elf, says something with an elevated voice, then looks at #!00#. The two elves have a couple more exchanges and the Dark-Elf starts walking towards the door of the cell.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTookTheKey is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFBecomeASexpot != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBecomeASexpot is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"I can use...\", then she is interrupted by the Light-Elf massaging her breasts and teasing her nipples again. Much to #!00#\'s disapproval.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBecomeASexpot is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBecomeASexpot is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# considers the possibility of punching the Light-Elf away from her, but then he resumes playing with her breasts and nipples. Much to #!00#\'s disapproval.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBecomeASexpot is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to mutter an obscenity, but she does not get far. #!00# can only writhe on the latex rubber bed in ecstasy.\n\nJust after #!00# orgasms for a fifth time, the Dark-Elf is standing next to the bed. The Light-Elf is temporarily distracted from #!00# and tells the Dark-Elf something.\n\n#!00# thinks to herself \"Is it over...\", only to find that once the two elves have finished their short conversation, the Light-Elf turns his attention back to #!00# and works her up close to another orgasm.\n\nJust as #!00# is about to climax, the Light-Elf backs off, allowing #!00# brief respite, before resuming again.\n\nThe Light-Elf repeats the bringing #!00# close to an climax, then backing off another 3 times, before allowing #!00# her sixth and most powerful orgasm.\n\n#!00# is left gasping for air on the bed. Meanwhile, the Dark-Elf has been waiting by #!00#\'s right side and takes over from the Light-Elf.\n\nThe moment that the Dark-Elf starts touching #!00#, she is aroused in a jolt. The most that #!00# can manage is a whimper.\n\n\"It\'s NOT fair...\"\n\nThe Dark-Elf is also wearing latex rubber gloves, which are light-green in color. Other than the gloves the Dark-Elf is now naked and his erection is rather obvious. The Dark-Elf is not as skilled as the Light-Elf, but considering that #!00# has already had her resistance practically obliterated by the Light-Elf, it does not take the Dark-Elf long to bring #!00# to another climax.\n\n#!00# has only a couple of moments to rest, while the two elves have a brief conversation. She opens her eyes to take a look and notices that the Light-Elf is already naked, except for his rosy-brown rubber latex gloves. At that point #!00# wished that both of the elves would ditch their rubber gloves, as those are giving them an unfair advantage.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFGiveInToLightElf != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFGiveInToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf notices that #!00# is looking at him and briefly smiles back at her.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFGiveInToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf resumes playing with both of #!00#\'s nipples, then switches to groping her right breast, while simultaneously sticking 3 of his right fingers into her pussy and toying with her clitoris with his right thumb. Just as #!00# is about to climax, the Light-Elf says something to the Dark-Elf and the Dark-Elf stops.\n\nFrustrated, #!00# tries to reach for her own clitoris, so she could finish the orgasm, but the Dark-Elf got in first and continued is groping and fingering, pushing #!00# over the edge.\n\nThe Light-Elf then opens a small container that he had extracted from a pocket within his robes and started smearing the contents over his gloved fingers, while the Dark-Elf started caressing #!00# again.\n\nThis time, the Dark-Elf was starting to get better at identifying when #!00# was close to climaxing and adjusting how much pleasure to give her. The Dark-Elf managed to hold #!00# right at the precipice, for a minute, before allowing her to orgasm.\n\n#!00#\'s whole body is feeling rather numb, primarily because there is a large amount of elven-concocted substances still coursing throughout her body. Also, despite the fact that she just had several mind-blowing orgasms, #!00#\'s swollen pussy is still drooling, while her clitoris and nipples are itchy and erect.\n\n#!00# can feel the Dark-Elf moving away from her right, so she opens her eyes to see the Light-Elf looming over the top of her.");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFGiveInToLightElf != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFGiveInToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep (" The Light-Elf has a smile on his face... but his smile... isn\'t scary.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFGiveInToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n\nThe Light-Elf immediately starts massaging #!00#\'s breasts and #!00# discovers that her breasts are tingling. #!00#\'s arousal suddenly spikes. In less than a minute the Light-Elf starts playing with #!00#\'s nipples and that is when #!00# has another powerful orgasm.\n\n#!00# comes down from her post-orgasm high, and just lays there on the bed.");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFGiveInToLightElf != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFGiveInToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep (" She calms down and just zones out. Finally after a minute she opens her eyes and sees the Light-Elf. He briefly smiles again, then looks down at #!00#\'s crotch and crouches down between her legs. Then, #!00# feels a strong tingling sensation from her crotch.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFGiveInToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFGiveInToLightElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep (" She only gets half a minute of rest, before she feels a strong tingling sensation from her crotch. #!00# opens her eyes and looks down to see the Light-Elf between her legs.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFGiveInToLightElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf is smearing what is on his fingers all over #!00#\'s labia. He does this for about half a minute, before touching #!00#\'s clitoris. #!00# orgasms again, with the sensation from all of her sensitive spots being stronger than ever before.\n\n#!00#\'s mind is left muddled, as she lays on the bed in a daze. The onslaught has been almost merciless. #!00#\'s clitoris and nipples are even more itchy now. Elves don\'t play fair at all.\n\n#!00# snaps from her stupor when she hears a nearby noise. She manages to open her eyes and looks at the two elves.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf has just returned from the table near the wall, with a couple of dildos.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf has just returned from the dildo collection near the wall, with a couple of dildos.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" The Dark-Elf shows the two dildos to the Light-Elf. Then the Light-Elf looks at #!00#.\n\n#!00# takes a good look at the two dildos and thinks to herself \"they... kinda look smaller than the ones that I just had\".\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLightElfHumilate != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf looks at the dildos, thinks about it and has a minor conversation with the Dark-Elf. The Dark-Elf is surprised and holds up the larger of the dildos he is holding, to get a better look at it, then continues the conversation with the Light-Elf.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFTableStillThere != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFTableStillThere is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("After a few more exchanges and size comparisons, the Dark-Elf nods his head and wanders back over to the table with the two dildos. He places the two dildos back on top of the table.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFTableStillThere is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFTableStillThere is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("After a few more exchanges and size comparisons, the Dark-Elf nods his head and wanders back over to the dildo collection near with the right wall and places the two dildos back amongst the rest.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFTableStillThere is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sighs and thinks to herself \"It would have been a trip to Hades if they put those in... FUCK!!...\"\n\n#!00# notices that the Dark-Elf has just finished picking out another two dildos, that each happen to be the size of a fully erect male orc penis and is walking back over to the Light-Elf with them.\n\nThe Dark-Elf shows the Light-Elf the two new selections and the Light-Elf nods in approval and takes the two dildos from the Dark-Elf. The Light-Elf, after accepting the two enormous over-sized elven sex toys, briefly compares the size of one of the dildos to his own penis... and sighs.\n\nNormally, #!00# would be happy with the idea of accepting dildos that are a proper size inside her vagina and anus. But as she is right now, #!00# cannot feel but anxious when the Light-Elf squats down between her legs and then positions the tips of both of them at her pussy and asshole.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFGiveInToLightElf != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFGiveInToLightElf is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf briefly mentions something to the Dark-Elf. The Dark-Elf nervously responds and jumps on the bed next to #!00#. The Dark-Elf then proceeds to hold onto #!00#\'s hand.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFGiveInToLightElf is set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("Then with everything lined up, the Light-Elf, simultaneously, pushes both of the dildos into #!00#\'s lower orifices.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf looks at the dildos and takes them from the Dark-Elf, then crouches down between #!00#\'s legs.\n\n#!00# has reservations about this... for a start, these dildos are no where near the size of what she would consider to be acceptable and she is still very sensitive right now. So she is going to experience ecstasy and frustration at the same time.\n\nThe Light-Elf positions the top of the small dildo at #!00#\'s anus and pushes it in with great ease. The Light-Elf briefly finds the lack of resistance intriguing.\n\n#!00#, on the other-hand, is less than impressed.\n\nThe Light-Elf then proceeds to position the tip of larger of the two dildos right near the entrance to #!00#\'s swollen pussy.\n\n#!00#\'s only thought just before he pushes it in, is that he is going to be touching her clitoris...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[4 minutes later...]\n\n#!00# is still trying to recover from her last orgasm. Thankfully, the strength seems to be returning to her body.");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFBecomeASexpot != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBecomeASexpot is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep (" However, any thoughts of snapping a couple of elven necks like twigs are completely absent from her mind at the moment. The two elves are standing nearby, having a brief conversation.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBecomeASexpot is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBecomeASexpot is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep (" Then, the two elves have a brief conversation.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBecomeASexpot is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# opens her eyes and notices that the Dark-Elf is moving around. #!00# props herself up on an elbow to get a better view. The Dark-Elf is crawling over into the center of the bed, then laying flat on his back, with his erection pointing at the ceiling. #!00# thinks to herself \"What is he up to\?\", then #!00# notices that the Light-Elf is sitting next to her on the bed.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFMasturbator != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFMasturbator is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts to stroke his own penis and #!00# suddenly has the urge to join in.\n\nThen Light-Elf says something to the Dark-Elf and the Dark-Elf stops stoking himself.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFMasturbator is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFMasturbator is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts to stroke his own penis, but stops when the Light-Elf says something.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFMasturbator is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" The Dark-Elf retreats his right hand and just lays there.\n\nThe Light-Elf looks at #!00# and is about to say something, but stops himself and sighs. The Light-Elf points at the Dark-Elf\'s penis, then starts lightly caressing #!00#\'s clitoris.\n\n#!00#\'s arousal suddenly increases, so the Light-Elf stops and cocks his head, raises his eyebrows and glances at the Dark-Elf\'s penis before looking straight into #!00#\'s eyes.\n\n\"Well... since you asked so nicely\"\n\n #!00# smiles at the Light-Elf.\n\n#!00# crawls over to the crotch of the Dark-Elf and starts eagerly licking his penis. #!00# thinks to herself ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLightElfHumilate != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"At least he is the larger of the two.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Seems this is becoming a habit.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic06_scene1147 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic06_scene1147 (int iSubSceneId, char cSubFlag)
{
    int iRet;
    char cResult;
    char cRandom1;
    char cRandom2;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (iSubSceneId != 0)
    {
        if (gcDebugFlag != 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("{1147 >Suck the Dark-Elf\'s penis up to the hilt}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1147 >Suck the tip of the Dark-Elf\'s penis}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1147 >Lick the shaft of the Dark-Elf\'s penis}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1147 >Lick the hood of the Dark-Elf\'s penis}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1147 >Rub the Dark-Elf\'s balls}\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("{1147 >Tease the Dark-Elf by just breathing on his penis}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1147 >Suck and Lick swirl around the Dark-Elf\'s urethra}\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Suck the Dark-Elf\'s penis up to the hilt\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Suck the tip of the Dark-Elf\'s penis\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Lick the shaft of the Dark-Elf\'s penis\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Lick the hood of the Dark-Elf\'s penis\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep (">Rub the Dark-Elf\'s balls\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep (">Tease the Dark-Elf by just breathing on his penis\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Suck and Lick swirl around the Dark-Elf\'s urethra\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }

        cResult = gamelogiccommon_sexActionPartner1 ((char)iSubSceneId);

        if (cResult == 1)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire shaft of the Dark-Elf\'s penis.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on just the tip of the Dark-Elf\'s penis.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks along the entire shaft of the Dark-Elf\'s penis.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks hood of the Dark-Elf\'s penis.\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# rubs the Dark-Elf\'s testicles.\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# teases the Dark-Elf by just breathing on his penis.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# performs a combination suck and lick around the hood of the Dark-Elf\'s penis.\n\n");
                break;
            }
            if (iRet != 0) return iRet;

            switch (gstruct_GameVars.iClimaxCount1)
            {
            case 1:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax One !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts to lightly thrust his crotch and #!00# realizes that the he is about to ejaculate. The Light-Elf starts to lightly pinch #!00#\'s clitoris, which increases her arousal. ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly sticks the Dark-Elf\'s penis in her mouth.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Here it cums...\"\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf ejaculates in #!00#\'s mouth, and #!00# herself also climaxes. After spraying the inside of #!00#\'s mouth, she greedily licks the Dark-Elf\'s semen and swallows it before realizing what she is doing. #!00# thinks to herself \"That was tasty... oh... wait...\"\n\n#!00# realizes that the Light-Elf is caressing her clitoris again, so she decides that she might as well go along with the pace of the elves anyway.\n\n");

                break;

            case 2:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Two !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("Just as the Dark-Elf starts to stiffen up, #!00# sticks his penis inside her mouth.");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts to stiffen up, so #!00# keeps his penis inside of her mouth.");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" The Dark-Elf climaxes, and due to the Light-Elf pinching #!00#\'s clitoris again, so does #!00#.\n\nThis time #!00# lets the Dark-Elf\'s penis slide out of her mouth, licks the semen from her mouth, then tilts her head back and swallows it.\n\n#!00# then smiles at the Dark-Elf while the Light-Elf starts caressing #!00#\'s clitoris again.\n\n\"Again?..\"\n\nThe Dark-Elf lightly nods.\n\n");

                break;

            case 3:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Three !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts to stiffen up again and the Light-Elf starts to lightly pinch #!00#\'s clitoris, ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("so #!00# sticks the Dark-Elf\'s penis inside her mouth.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("so #!00# keeps the Dark-Elf\'s penis inside of her mouth.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("This time #!00# cums and starts vacuum sucking the Dark-Elf\'s penis, causing him to also ejaculate.\n\n#!00# decides to sit up, and the Light-Elf lets go of her clitoris. #!00# then proceeds to drool the combination of her saliva and the Dark-Elf\'s semen on her breasts. #!00# then proceeds to smear the liquid all over her breasts.\n\n\"I would give you a titty-fuck, but I have to get used to your penis first...\"\n\nThe Dark-Elf smiles at #!00# as she continues to massage her drool into her own breasts.\n\n#!00# then bends down so that her head is near the Dark-Elf\'s crotch, and the Light-Elf can get to her clitoris. The Light-Elf starts playing with #!00#\'s clitoris again.\n\n\"Mmm... that\'s nice... Yes... just like that...\"\n\n#!00# decides to keep going.\n\n");

                break;

            case 4:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Four !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Dark-Elf\'s penis is starting to twitch. #!00# immediately sticks the Dark-Elf\'s penis inside her mouth.");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Dark-Elf\'s penis is starting to twitch inside her mouth, so she keeps it there.");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" The Light-Elf starts to lightly pinch #!00#\'s clitoris, causing #!00# to climax. #!00# accidentally let\'s the Dark-Elf\'s penis out of her mouth as he ejaculates, and #!00#\'s face ends up being splattered with his semen.\n\n#!00# sits up again, to clear the semen away from her eyes.\n\n\"Don\'t worry... been through this before...\"\n\n#!00# wipes away the semen from her eyes, opens them and looks at the Dark-Elf. The Dark-Elf has an expression of minor concern on his face.\n\n\"I\'m okay... don\'t worry...\"\n\nFirst, #!00# licks off the semen around her mouth, then wipes the rest off of her face with her hands. #!00# then rubs what is on her hands into her breasts again, while also licking her lips.\n\n\"See... no problem...\"\n\n#!00# bends over and puts her head back in the Dark-Elf\'s crotch, just as the Light-Elf starts playing with her clitoris again. #!00# decides to continue.\n\n");

                break;

            case 5:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Five !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# notices the Dark-Elf\'s penis is twitching again, so she immediately sticks the Dark-Elf\'s penis in her mouth and starts to suck on it.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Dark-Elf\'s penis is starting to twitch inside her mouth again, so she keeps it there and keeps sucking on it.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("As usual, the Light-Elf starts pinching #!00#\'s clitoris, setting off her orgasm. This time, #!00# tries to contain her own orgasm, while also licking and sucking the Dark-Elf\'s penis. This time she is rewarded by the Dark-Elf ejaculating first, before #!00# climaxes herself.\n\nAfter getting over her own orgasm, #!00# continues to lick and suck the Dark-Elf\'s penis, coaxing as much semen as she can out of it. Finally, #!00# lets the Dark-Elf\'s penis out of her mouth, so she can show the Dark-Elf the semen that she has collected on her tongue, before swallowing it.\n\n#!00# decides to continue, without even looking at the Dark-Elf\'s face.\n\n");

                break;

            default:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Six !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Dark-Elf\'s penis is twitching, so she quickly sticks the Dark-Elf\'s penis inside her mouth and starts slurping on it again.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Dark-Elf\'s penis is starting to twitch again, so she keeps the Dark-Elf\'s penis inside her mouth and starts noisily slurping on it.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("This time the Light-Elf pulls his hand away from #!00#\'s clitoris and lets her take the lead. The Dark-Elf ejaculates inside #!00#\'s mouth and #!00# herself orgasms right after, without any teasing from the Light-Elf.\n\n");
                if (iRet != 0) return iRet;

                iRet = gamelogic06_scene1148 (0, cSubFlag + 1);
                return iRet;
            }
        }
        else if (cResult == -1)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: not so good]\n");
                if (iRet != 0) return iRet;
            }

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire shaft of the Dark-Elf\'s penis.");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on just the tip of the Dark-Elf\'s penis.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks along the entire shaft of the Dark-Elf\'s penis.");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks hood of the Dark-Elf\'s penis.");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# rubs the Dark-Elf\'s testicles.");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# teases the Dark-Elf by just breathing on his penis.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# performs a combination suck and lick around the hood of the Dark-Elf\'s penis.");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" However, the Dark-Elf\'s penis seems to be going soft.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;

            if (cRandom1 == 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Shit... I have to keep him interested... How stupid of me doing the same thing over and over again...\"\n\n");
            }
            else if (cRandom1 == 1)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"No... don\'t go soft... you need to be a man and stay hard!!.. I need to do things differently...\"\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Crap... I need to change things around to keep him interested...\"\n\n");
            }
            if (iRet != 0) return iRet;
        }
        else if (gstruct_GameVars.cFSexSceneStart == 1)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: normal-start] [clear cFSexSceneStart]\n");
                if (iRet != 0) return iRet;
            }

            // reset the sex scene start flag
            gstruct_GameVars.cFSexSceneStart = 0;
            gstruct_GameVars.iArousalLevel2 = 0;

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by sucking the entire Dark-Elf\'s penis, which isn\'t that hard considering that it is so small. #!00# thinks to herself \"It is a shame that I can\'t stick this thing down my throat.\"\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by sucking on the hood of the Dark-Elf\'s penis.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by licking along the shaft of the Dark-Elf\'s penis.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by lightly licking around the hood of the Dark-Elf\'s penis.\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by rubbing the Dark-Elf\'s testicles with her hands.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by teasing the Dark-Elf, by just blowing on his penis.\n\n");
                break;
            }
            if (iRet != 0) return iRet;

            // action 7 isn't available immediately, so it does not trigger on a start dialog.

            iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf\'s crotch twitches, then settles down. ");
            if (iRet != 0) return iRet;

            if ((iSubSceneId == 1) || (iSubSceneId == 2) || (iSubSceneId == 7))
            {
                iRet = mdialog_addToDialogWithSrchRep ("#!00# let\'s the Dark-Elf\'s penis out of her mouth. ");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts breathing slowly and heavily, in an effort to stay in control.\n\n#!00# thinks to herself \"That\'s cute... and I thought he was...\"\n\n\"Ooooh...\"\n\n#!00#\'s internal monologue is interrupted by the Light-Elf who is now caressing her clitoris. #!00# smiles, as she tries to contain her arousal a little bit.\n\n\"I should... keep going...\"\n\n");
            if (iRet != 0) return iRet;
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: normal]\n");
                if (iRet != 0) return iRet;
            }

            cRandom1 = rand() % 3;
            cRandom2 = rand() % 6;

            if (cRandom1 == 1)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks the entire length of the Dark-Elf\'s penis, while bobbing her head up and down a little bit.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently sucks the hood of the Dark-Elf\'s penis, while teasing the underside and sides of the hood with her tongue.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks up and down the shaft of the Dark-Elf\'s penis with her tongue, kisses the hood, then licks up and down the shaft twice again.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the around the hood of the Dark-Elf\'s penis with her tongue, before darting the tip of her tongue across his urethra a couple of times, before resuming licking around the hood of his penis again.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly teases the Dark-Elf\'s testicles with her right fingers, before running her right index finger up and down the shaft, then resumes teasing his testicles again.\n\n");
                    break;

                case 6:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently breathes on the Dark-Elf\'s penis, before lightly kissing the hood, then gently blows on his penis again.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# performs a combination of sucking on the Dark-Elf\'s penis, while swirling the tip of her tongue around his urethra.\n\n");
                    break;
                }
            }
            else if (cRandom1 == 0)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks the entire length of the Dark-Elf\'s penis and massages the base of his penis, near his balls, with her lips.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently slurps the hood of the Dark-Elf\'s penis, while keeping her tongue stationary against the underside of the hood.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks up and down only the underside the shaft of the Dark-Elf\'s penis with her tongue, 4 times.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# swirls her tongue around the hood of the Dark-Elf\'s penis, counter-clockwise, then clockwise, then counter-clockwise again.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# rubs the Dark-Elf\'s testicles with the palm of her hand right hand, while holding on his penis with her left fingers.\n\n");
                    break;

                case 6:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly blows small bursts of air on the Dark-Elf\'s penis, in random locations along it.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly kisses the hood of the Dark-Elf\'s penis, before suckling on on the hood while exploring around the urethra with her tongue.\n\n");
                    break;
                }
            }
            else
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks the entire length of the Dark-Elf\'s penis, while also exploring the underside of his shaft with her tongue.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly sucks the hood of the Dark-Elf\'s penis, while keeping her tongue back and massaging the edge of the hood with her lips.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks down to the shaft of the Dark-Elf\'s penis, tickles his testicles with her tongue, then licks up and down the length of his penis 3 more times.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the hood of the Dark-Elf\'s penis with her tongue, then gives it a sloppy kiss, before resuming licking the hood again.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# alternates between caressing the Dark-Elf\'s scrotum with her fingers, and blowing air from her mouth on his testicles.\n\n");
                    break;

                case 6:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# parts her lips to blow air up and down the Dark-Elf\'s penis, before lightly teasing the hood with her tongue, then blows on his penis again.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks the entire length of the Dark-Elf\'s penis into her mouth before pulling back, and sucking and licking the hood, then delicately licking the urethra.\n\n");
                    break;
                }
            }
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.iArousalLevel1 > 120)
            {
                if (cRandom2 == 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf lets out a low moan. #!00# thinks to herself \"Sounds like he is happy...\"\n\n");
                    if (iRet != 0) return iRet;
                }
                else if (cRandom2 == 1)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf is breathing heavily, trying to contain his arousal.\n\n");
                    if (iRet != 0) return iRet;
                }
            }
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1147 06a Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene1 (20, 12, 240);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if (cResult != 1)
    {
        if ((cResult != -1) || (iSubSceneId != 1))
        {
            iRet = mutils_addToCommandList ("Suck the Dark-Elf\'s penis up to the hilt", 1147, 1);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 2))
        {
            iRet = mutils_addToCommandList ("Suck the tip of the Dark-Elf\'s penis", 1147, 2);
            if (iRet != 0) return iRet;
        }
    }

    if ((cResult != -1) || (iSubSceneId != 3))
    {
        iRet = mutils_addToCommandList ("Lick the shaft of the Dark-Elf\'s penis", 1147, 3);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 4))
    {
        iRet = mutils_addToCommandList ("Lick the hood of the Dark-Elf\'s penis", 1147, 4);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 5))
    {
        iRet = mutils_addToCommandList ("Rub the Dark-Elf\'s balls", 1147, 5);
        if (iRet != 0) return iRet;
    }

    if ((cResult == 1) || (gstruct_GameVars.iPastActionsNum < 3))
    {
        iRet = mutils_addToCommandList ("Tease the Dark-Elf by just breathing on his penis", 1147, 6);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.iClimaxCount1 > 2)
    {
        if ((cResult != -1) || (iSubSceneId != 7))
        {
            iRet = mutils_addToCommandList ("Suck and Lick swirl around the Dark-Elf\'s urethra", 1147, 7);
            if (iRet != 0) return iRet;
        }
    }

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic06_scene1148 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1148 06a Sex Scene Exit 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# recovers from the last orgasm and is ready to give the Dark-Elf pleasure again. However, the Dark-Elf says something to the Light-Elf. The Light-Elf just nods his head and gently grabs #!00#\'s shoulder.\n\n#!00# looks at the Light-Elf and he says something to #!00#. #!00# looks over at the Dark-Elf and notices that the Dark-Elf\'s penis has gone completely flaccid.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFBecomeASexpot != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBecomeASexpot is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Awww... I could have kept going...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBecomeASexpot is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBecomeASexpot is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Well... he does look rather tired... Okay...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBecomeASexpot is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# crawls away from the Dark-Elf\'s crotch, leaving him laying on the bed. The Dark-Elf is breathing heavily. #!00# finds that her strength is starting to return a little and sits up in a kneeling position. She has to spread her legs a lot, but at least her slit isn\'t coming into contact with the latex rubber covering the bed.\n\nHowever, before #!00# can think of anything else, the Light-Elf is behind her, grabbing her shoulders with both of his hands. #!00# turns her head to the right and thinks to herself \"Just what are...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFGiveInToLightElf != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFGiveInToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Suddenly, the Light-Elf gives #!00# a quick kiss on the lips. An intimate action that throws #!00# off balance, as she wasn\'t expecting it.\n\n#!00# has kissed before, but orcs always refrain from Public Displays of Affection and prefer to engage in such acts of intimacy in private. However, this is definitely a private setting and #!00#\'s experience with kissing has been mostly with other female orcs up till this point, as well as the occasional male orc.\n\n#!00# thinks to herself \"Nice Entree, now for the main course...\"\n\n#!00# suddenly reaches and grabs the back of the Light-Elf\'s head with right hand. The Light-Elf\'s expression quickly changes to one of almost pure terror as the thought that he \"has just fucked up and is going to die\" crosses his mind.\n\nThe Light-Elf briefly tries to struggle, as #!00# drags pulls his lips to hers and proceeds to give him another kiss. #!00#\'s reciprocal kiss is initially more sensual than what she received originally from the Light-Elf. The Light-Elf, realizing that the danger has passed, relaxes. #!00# goes on the offensive and the simple kiss on the lips escalates from a \"rather basic by #!02# standards\" kiss into an \"average by #!02# standards\" kiss, by intertwining her tongue around his.\n\nThe kiss continues for at least 30 seconds, before the Light-Elf starts to get woozy, as he hasn\'t been breathing. #!00# realizes that that the Light-Elf is relatively new to this and finally let\'s him go.\n\nThe Light-Elf collapses onto #!00#\'s back for a few moments and takes a couple of deep breaths. #!00#, despite being in a weakened state, supports his weight, until the Light-Elf regains his composure.\n\n#!00# glances over at the Dark-Elf, who has been watching this from his spot in the center of the bed, while still flat on his back. #!00# thinks to herself \"You will get your turn\", while looking at the Dark-Elf.\n\n#!00# is then distracted by the actions of the Light-Elf, as he has recovered, let go of her shoulders and is now lightly caressing her nipples with his hands.\n\n#!00# flinches as her arousal spikes. She could have easily have crushed both of the Light-Elf\'s forearms between her upper arms and torso, but managed to control her reaction.\n\n\"Oooh... you are getting better at this, aren\'t you\?..\"\n\nThe Light-Elf ignores #!00#\'s statement, as he cannot understand it anyway and just continues keeping her occupied.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFGiveInToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFGiveInToLightElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFKeyToLightElf != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFKeyToLightElf is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf then lets go of #!00#\'s shoulders, reaches under her armpits and starts lightly caressing her nipples.\n\n#!00# flinches as her arousal spikes. #!00# thinks to herself \"This guy is...\".\n\nThe Light-Elf then pinches #!00#\'s nipples... hard.\n\n#!00# climaxes and loses control of her reactions. While also arching her back, she also slams her arms against torso. The combination of movements results in the Light-Elf\'s left hand and right forearm being crushed between #!00#\'s upper arms and torso.\n\n#!00# orgasms again, while unintentionally pinning down both of the Light-Elf\'s hands. #!00# then relaxes and leans forward, allowing the Light-Elf to extract both of his arms.\n\n#!00# then hears chanting from behind her. #!00# thinks to herself \"not this shit again...\".\n\n#!00# turns around and looks at he Light-Elf, who is chanting, but isn\'t looking at her. He is looking at his own gloved hands and tears are streaming down his face.\n\n#!00# sees a brief aura appear around the Light-Elf\'s arms, then the Light-Elf stops chanting and takes a deep breath. #!00# thinks to herself \"Oh... so you are a healer... convenient...\"\n\n#!00# thinks about why the Light-Elf would be healing himself, then remembered that she could feel something near both of her armpits while she was cuming her brains out. #!00# thinks to herself \"I don\'t think just saying sorry by itself is going to be acceptable\".\n\n#!00# then crawls over to the Light-Elf. The Light-Elf looks up just as #!00# reaches his side and kneels up. The Light-Elf realizes that #!00# can reach him and as she grabs his shoulder he starts to panic. As #!00# literally drags the Light-Elf along the bed towards her, an expression of utter \"I should be wearing brown pants right now\" horror appears on his face.\n\nThe #!00# kisses him... in the usual orc way, by forcing her tongue through his lips and roaming around his mouth. It takes a few seconds for the Light-Elf to figure out what #!00# is doing, so he relaxes, just enough for #!00# to force open his jaw with her tongue alone and entwine his tongue with hers.\n\nThe Light-Elf is so overcome with different emotions in such a short timespan that he has forgotten to breathe during the kiss, but he is lucky that #!00# decides to give him a rest after about 40 seconds.\n\n#!00# lets go of the Light-Elf and he collapses on the bed. The Light-Elf is literally gasping for air. #!00#\'s only thought is \"must be his first time, I remember mine\" and then proceeds to start lightly stroking the Light-Elf\'s penis.\n\nAfter 30 seconds the Light-Elf gets it together, glances over at the Dark-Elf, who has been quietly watching the entire spectacle while still flat on his back in the center of the bed.\n\nThe Light-Elf quickly pulls away from #!00#. #!00#\'s initial thought is to grab the Light-Elf, to stop him from getting away, but then remembers that he is rather easy to injure.\n\nThe Light-Elf scampers along the top of the bed and circles around #!00#. #!00# finds it amusing, so she just sits there and observes the Light-Elf.\n\nThe Light-Elf then approaches #!00# from her back, reaches under her armpits and starts lightly caressing #!00#\'s nipples again.\n\n\"dangerous, but nice... as long as you don\'t try to hurt me... I won\'t be hurting you...\"\n\nThe Light-Elf ignores #!00#\'s statement, as he cannot understand what she is saying anyway. The Light-Elf continues lightly caressing #!00#\'s nipples.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFKeyToLightElf is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFKeyToLightElf is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf then lets go of #!00#\'s shoulders, reaches under her armpits and is now lightly caressing her nipples.\n\n#!00# flinches as her arousal spikes. #!00# thinks to herself \"This guy is full of himself, oh well...\".\n\nThe Light-Elf continues keeping #!00# occupied by lightly caressing her nipples.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFKeyToLightElf is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFGiveInToLightElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("About 2 minutes later, the Dark-Elf finally recovers, sits up and talks to the Light-Elf. The Light-Elf stops playing with #!00#\'s nipples and the two elves scamper around on top of the bed, swapping positions. #!00# quietly observes the change over.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFKeyToDarkElf != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf lays down flat on his back. The Dark-Elf looks at #!00#, smiles, says something and glances at the Light-Elf while nodding his head.\n\n#!00# smiles back at the Dark-Elf, as she finds this rather amusing.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf lays down flat on his back. The Dark-Elf looks at #!00#, says something and glances at the Light-Elf while nodding his head.\n\n#!00# smiles, as she finds this rather amusing.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"You know... I could not understand a single word... but I get the idea.\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLightElfHumilate != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# then crawls over to the crotch of the Light-Elf, lightly licks the head of his penis and then she feels that the Dark-Elf is briefly playing with the dildo that is inserted into her pussy. The Dark-Elf then starts playing with #!00#\'s clitoris.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# then crawls over to the crotch of the Light-Elf, lightly licks the head of his penis and then she feels the Dark-Elf playing with her clitoris.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic06_scene1149 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic06_scene1149 (int iSubSceneId, char cSubFlag)
{
    int iRet;
    char cResult;
    char cRandom1;
    char cRandom2;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (iSubSceneId != 0)
    {
        if (gcDebugFlag != 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("{1149 >Suck the Light-Elf\'s penis up to the hilt}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1149 >Suck the tip of the Light-Elf\'s penis}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1149 >Lick the shaft of the Light-Elf\'s penis}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1149 >Lick the hood of the Light-Elf\'s penis}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1149 >Rub the Light-Elf\'s balls}\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("{1149 >Tease the Light-Elf by just breathing on his penis}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1149 >Suck and Lick swirl around the Light-Elf\'s urethra}\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Suck the Light-Elf\'s penis up to the hilt\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Suck the tip of the Light-Elf\'s penis\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Lick the shaft of the Light-Elf\'s penis\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Lick the hood of the Light-Elf\'s penis\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep (">Rub the Light-Elf\'s balls\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep (">Tease the Light-Elf by just breathing on his penis\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Suck and Lick swirl around the Light-Elf\'s urethra\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }

        cResult = gamelogiccommon_sexActionPartner1 ((char)iSubSceneId);

        if (cResult == 1)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire shaft of the Light-Elf\'s penis.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on just the tip of the Light-Elf\'s penis.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks along the entire shaft of the Light-Elf\'s penis.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks hood of the Light-Elf\'s penis.\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# rubs the Light-Elf\'s testicles.\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# teases the Light-Elf by just breathing on his penis.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# performs a combination suck and lick around the hood of the Light-Elf\'s penis.\n\n");
                break;
            }
            if (iRet != 0) return iRet;

            switch (gstruct_GameVars.iClimaxCount1)
            {
            case 1:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax One !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf\'s body starts to stiffen a little and he says something. The Dark-Elf shifts from caressing #!00#\'s clitoris to pinching it.\n\n");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# orgasms and the Light-Elf\'s penis falls out of her mouth as #!00# starts to pull back from the Light-Elf\'s crotch.");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# orgasms as she starts to pull back from the Light-Elf\'s crotch.");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" The Light-Elf then ejaculates all over #!00#\'s breasts.\n\n#!00# looks down and wipes some of the Light-Elf\'s semen off of her breasts with her fingers and tastes it. The Light-Elf and the Dark-Elf exchange a couple of sentences, and the Dark-Elf resumes caressing #!00#\'s clitoris.\n\n#!00# glances back at the Dark-Elf, then looks at the Light-Elf and thinks to herself \"I guess I should continue...\"\n\n");

                break;

            case 2:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Two !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf says something. ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("This time #!00# takes the hint and quickly swallows the Light-Elf\'s penis.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("This time #!00# takes the hint and keeps the Light-Elf\'s penis in her mouth.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts pinching #!00#\'s clitoris, and #!00# holds back her own climax while also sucking on the Light-Elf\'s penis. #!00# is rewarded when the Light-Elf ejaculates inside of her mouth with her own orgasm at the same time.\n\nThe Light-Elf stops thrusting into #!00#\'s mouth and calms down. #!00# sits up, opens her mouth and shows the Light-Elf his semen on her tongue before swallowing it.\n\n#!00# then smiles at the Light-Elf. The Light-Elf responds with his usual poker-face and just nods.\n\n");
                if (iRet != 0) return iRet;

                if (gstruct_GameVars.cFGiveInToLightElf != 0)
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFGiveInToLightElf is set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Aww... I really wanted to see you smile again...\"\n\n");
                    if (iRet != 0) return iRet;

                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFGiveInToLightElf is set]\n");
                        if (iRet != 0) return iRet;
                    }
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# decides that the Light-Elf is good for another round, so she leans back down again. The Dark-Elf resumes caressing #!00#\'s clitoris.\n\n");

                break;

            case 3:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Three !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Light-Elf\'s body is starting to shake again, so she quickly swallows his penis again. #!00# then starts sucking and licking the Light-Elf\'s cock.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# feels that the Light-Elf\'s body is starting to stiffen up again. #!00# then continues to suck and lick the Light-Elf\'s penis.\n\n");
                }
                if (iRet != 0) return iRet;

                if (gstruct_GameVars.cFKeyToDarkElf != 0)
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf says something, but the Dark-Elf ignores him and just continues caressing #!00#\'s clitoris.\n\nThe Light-Elf ejaculates inside #!00#\'s mouth. #!00# orgasms less than a second later.\n\n");
                    if (gcDebugFlag != 0)
                    {
                        if (iRet != 0) return iRet;
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is set]\n");
                    }
                }
                else
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is NOT set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf is about to say something, but the Dark-Elf notices that #!00# was anticipating the Light-Elf\'s orgasm and he starts pinching the #!00#\'s clitoris again.\n\n#!00# tries to hold off her orgasm until just after the Light-Elf starts ejaculating inside of her mouth.\n\n");

                    if (gcDebugFlag != 0)
                    {
                        if (iRet != 0) return iRet;
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is NOT set]\n");
                    }
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("After the Light-Elf and #!00# finish their respective orgasms, #!00# sits up again and spits some of of the Light-Elf\'s semen mixed with her saliva onto her hands. #!00# then starts massaging the semen and saliva into her own breasts.\n\nThe Light-Elf\'s expression almost changes from his poker-face while #!00# sits there massaging her own breasts. ");
                if (iRet != 0) return iRet;

                if (gstruct_GameVars.cFKeyToDarkElf != 0)
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("#!00# looks around at the Dark-Elf and smiles at him, before looking back at the Light-Elf. While looking at the Light-Elf, #!00# cocks her head.\n\n");

                    if (gcDebugFlag != 0)
                    {
                        if (iRet != 0) return iRet;
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is set]\n");
                    }
                }
                else
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is NOT set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("#!00# cocks her head.\n\n");

                    if (gcDebugFlag != 0)
                    {
                        if (iRet != 0) return iRet;
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is NOT set]\n");
                    }
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("\"Are you good for another\?..\"\n\nThe Light-Elf just stares at #!00#.\n\n\"Okay...\"\n\n#!00# kneels back down to the Light-Elf\'s crotch and the Dark-Elf starts caressing #!00#\'s clitoris again.\n\n");

                break;

            case 4:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Four !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Light-Elf\'s penis is starting to twitch as his body stiffens. ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# immediately sticks the Light-Elf\'s penis inside her mouth and starts sucking on it.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# keeps the Light-Elf\'s penis inside her mouth and continues to suck on it.\n\n");
                }
                if (iRet != 0) return iRet;

                if (gstruct_GameVars.cFKeyToDarkElf != 0)
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("This time the Dark-Elf stops caressing #!00#\'s clitoris and lets #!00# orgasm on her own.\n\n");

                    if (gcDebugFlag != 0)
                    {
                        if (iRet != 0) return iRet;
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is set]\n");
                    }
                }
                else
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is NOT set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf takes a hint from the Light-Elf\'s body language and starts lightly pinching #!00#\'s clitoris again.\n\n");

                    if (gcDebugFlag != 0)
                    {
                        if (iRet != 0) return iRet;
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is NOT set]\n");
                    }
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf ejaculates in #!00#\'s mouth again and #!00# has her own orgasm.\n\nAfter the Light-Elf finishes spraying the back of #!00#\'s throat with his semen, #!00# lets the Light-Elf\'s penis slide out of her mouth, tilts her head back and swallows the Light-Elf\'s cum.\n\n#!00# then licks her lips, as the Dark-Elf starts caressing her clitoris again. #!00# decides that if the Light-Elf\'s friend wants her to continue, then it must be okay.\n\n");

                break;

            default:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Five !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2) && (iSubSceneId != 7))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf starts thrusting his crotch, so #!00# quickly swallows and sucks on his penis again.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf starts thrusting his crotch into #!00#\'s face, so #!00# continues to suck his penis.\n\n");
                }
                if (iRet != 0) return iRet;

                if (gstruct_GameVars.cFKeyToDarkElf != 0)
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf stops playing with #!00#\'s clitoris again.\n\n");

                    if (gcDebugFlag != 0)
                    {
                        if (iRet != 0) return iRet;
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is set]\n");
                    }
                }
                else
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is NOT set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf is taken by surprise and stops playing with #!00#\'s clitoris.\n\n");

                    if (gcDebugFlag != 0)
                    {
                        if (iRet != 0) return iRet;
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is NOT set]\n");
                    }
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf arches is back and is practically yelling as he ejaculates in #!00#\'s mouth again. #!00# has her own orgasm a second later as the Light-Elf sprays his semen inside her mouth.\n\n#!00# decides that there wasn\'t as much this time so she starts to suck more of the Light-Elf\'s semen out of his urethra. #!00# lets the Light-Elf\'s penis fall out of her mouth and the gulps down his sperm.\n\n");
                if (iRet != 0) return iRet;

                iRet = gamelogic06_scene1150 (0, cSubFlag + 1);
                return iRet;
            }
            if (iRet != 0) return iRet;

        }
        else if (cResult == -1)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: not so good]\n");
                if (iRet != 0) return iRet;
            }

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire shaft of the Light-Elf\'s penis.");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on just the tip of the Light-Elf\'s penis.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks along the entire shaft of the Light-Elf\'s penis.");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks hood of the Light-Elf\'s penis.");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# rubs the Light-Elf\'s testicles.");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# teases the Light-Elf by just breathing on his penis.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# performs a combination suck and lick around the hood of the Light-Elf\'s penis.");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" However, the Light-Elf\'s penis does not seem to be as excited. The Light-Elf clears his throat.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;

            if (cRandom1 == 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Okay... don\'t be pushy... I will just have to work harder to keep you entertained...\"\n\n");
            }
            else if (cRandom1 == 1)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"This is turning into a disaster... time to change things around...\"\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"I don\'t have much to work with here... Okay... I just need to approach this another way...\"\n\n");
            }
            if (iRet != 0) return iRet;
        }
        else if (gstruct_GameVars.cFSexSceneStart == 1)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: normal-start] [clear cFSexSceneStart]\n");
                if (iRet != 0) return iRet;
            }

            // reset the sex scene start flag
            gstruct_GameVars.cFSexSceneStart = 0;
            gstruct_GameVars.iArousalLevel2 = 0;

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by sucking the entire Light-Elf\'s penis, which is still smaller that the Dark-Elf\'s. #!00# gets over the fact that neither of the elves are going to satisfy her pussy.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by sucking on the hood of the Light-Elf\'s penis.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by licking along the shaft of the Light-Elf\'s penis.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by lightly licking around the hood of the Light-Elf\'s penis.\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by rubbing the Light-Elf\'s testicles with her fingers.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by teasing the Light-Elf, by just blowing on his penis.\n\n");
                break;
            }
            if (iRet != 0) return iRet;

            // action 7 isn't available immediately, so it does not trigger on a start dialog.

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf just lays there, and lets #!00# do as she pleases. #!00# thinks to herself \"You\'re no fun...\"\n\nThe Light-Elf glances at #!00#, then looks up at the ceiling of the room and says something.\n\nThen the Dark-Elf starts lightly caressing #!00#\'s clitoris.\n\n\"Heh... I should continue...\"\n\n");
            if (iRet != 0) return iRet;
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: normal]\n");
                if (iRet != 0) return iRet;
            }

            cRandom1 = rand() % 3;
            cRandom2 = rand() % 6;

            if (cRandom1 == 1)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly sucks the entire length of the Light-Elf\'s penis, while making slurping noises.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently sucks the hood of the Light-Elf\'s penis, while massaging the entire hood with her lips.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tongue roams up and down the entire shaft of the Light-Elf\'s penis, making a swirling motion as she does.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly licks the hood of the Light-Elf\'s penis with her tongue, stops for a couple of seconds, then continues licking the hood of the Light-Elf\'s penis.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly rubs the Light-Elf\'s testicles with the palm of her right hand, before running her left index finger up and down the shaft, before continuing to lightly rub his testicles again.\n\n");
                    break;

                case 6:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# blows on the hood of the Light-Elf\'s penis, before teasing it with her lips, then dries off the hood of his penis again by blowing on it again.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# performs a combination of sucking on the Light-Elf\'s penis, while swirling the tip of her tongue around his urethra.\n\n");
                    break;
                }
            }
            else if (cRandom1 == 0)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# kisses the hood of the Light-Elf\'s penis, before ramming his entire cock inside her mouth. #!00# then continues to suck on the entire shaft.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# alternates between delicately sucking the hood of the Light-Elf\'s penis and lightly breathing on it.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# teases the underside of the Light-Elf\'s penis as she licks up and down his the entire shaft.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# swirls her tongue around the hood of the Light-Elf\'s penis, clockwise, then counter-clockwise, then clockwise again.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# teases the Light-Elf\'s testicles with her right fingers, while holding on his penis with her left fingers.\n\n");
                    break;

                case 6:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly blows air through her mouth up and down the shaft of the Light-Elf\'s penis.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly kisses the hood of the Light-Elf\'s penis, before suckling on on the hood while exploring around the urethra with her tongue.\n\n");
                    break;
                }
            }
            else
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks the entire length of the Light-Elf\'s penis, while also exploring the underside of the hood with her tongue.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly suckles on the hood of the Light-Elf\'s penis, while occasionally teasing alternate sites of the hood with her tongue.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks up and down the shaft of the Light-Elf\'s penis, on alternate sides each time.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by giving the hood of the Light-Elf\'s penis a sloppy kiss, then continues to lightly lick hood as if she is licking a lollipop.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# rubs the Light-Elf\'s scrotum with her right palm while also playing with the hood of his penis with her left fingers.\n\n");
                    break;

                case 6:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# uses her mouth to blow air along the Light-Elf\'s penis, before lightly teasing the tip of his hood with her tongue, then blows on his penis again.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks the entire length of the Light-Elf\'s penis into her mouth before pulling back, and sucking and licking the hood, then delicately licking the urethra.\n\n");
                    break;
                }
            }

            if (iRet != 0) return iRet;

            if (gstruct_GameVars.iArousalLevel1 > 120)
            {
                if (cRandom2 == 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf is breathing steadily through his nose, trying to contain his arousal, while also maintaining his poker faced expression.\n\n");
                    if (iRet != 0) return iRet;
                }
                else if (cRandom2 == 1)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf lets out a low grunt has he lightly twitches, then settles down again.\n\n");
                    if (iRet != 0) return iRet;
                }
            }
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1149 06b Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFGiveInToLightElf == 1)
            gamelogiccommon_initSexScene1 (24, 14, 240);
        else
            gamelogiccommon_initSexScene1 (24, 12, 240);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if (cResult != 1)
    {
        if ((cResult != -1) || (iSubSceneId != 1))
        {
            iRet = mutils_addToCommandList ("Suck the Light-Elf\'s penis up to the hilt", 1149, 1);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 2))
        {
            iRet = mutils_addToCommandList ("Suck the tip of the Light-Elf\'s penis", 1149, 2);
            if (iRet != 0) return iRet;
        }
    }

    if ((cResult != -1) || (iSubSceneId != 3))
    {
        iRet = mutils_addToCommandList ("Lick the shaft of the Light-Elf\'s penis", 1149, 3);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 4))
    {
        iRet = mutils_addToCommandList ("Lick the hood of the Light-Elf\'s penis", 1149, 4);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 5))
    {
        iRet = mutils_addToCommandList ("Rub the Light-Elf\'s balls", 1149, 5);
        if (iRet != 0) return iRet;
    }

    if ((cResult == 1) || (gstruct_GameVars.iPastActionsNum < 4))
    {
        iRet = mutils_addToCommandList ("Tease the Light-Elf by just breathing on his penis", 1149, 6);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.iClimaxCount1 > 0)
    {
        if ((cResult != -1) || (iSubSceneId != 7))
        {
            iRet = mutils_addToCommandList ("Suck and Lick swirl around the Light-Elf\'s urethra", 1149, 7);
            if (iRet != 0) return iRet;
        }
    }

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic06_scene1150 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1150 06b Sex Scene Exit 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("After the fifth orgasm, the Light-Elf calls out to the Dark-Elf. The Dark-Elf responds and he grabs #!00# by the shoulder, guiding her away from the Light-Elf\'s crotch.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFKeyToDarkElf != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Then, just as #!00# is about to close her legs, the Dark-Elf reaches between her legs and starts playing with #!00#\'s clitoris. #!00# is overcome with arousal again and fortunately... relaxes... avoiding crushing the Dark-Elf\'s hand between her thighs.\n\nThe Dark-Elf keeps it up, but eventually decides that he wants to escalate this, so he stops teasing #!00#\'s clitoris and then tries pushing her over.\n\n#!00# looks at the Dark-Elf and thinks \"Okay... I get the idea\". #!00# rolls over onto her back, allowing the Dark-Elf to start fondling her left breast, while also teasing her clitoris again.\n\nThe Dark-Elf works his way up to #!00#\'s left nipple and then lightly pinches both her left nipple and clitoris. #!00# climaxes again.\n\nFinally, just as the Dark-Elf was about to start start playing with #!00# again, the Light-Elf sits up. #!00# notices the Light-Elf is upright and thinks to herself \"that was a quick rest...\"\n\nThe Light-Elf and the Dark-Elf have a brief conversation. The conversation ends with the Dark-Elf about to crawl off, and then he exchanges a couple more phrases with the Light-Elf.\n\nThe Dark-Elf then crawls off the bed, stands up and without putting his robes back on he walks out of the cell. When he reaches the door and turns, he stops. The Dark-Elf looks at #!00# and winks at her, before walking along the hallway. #!00# just lays there, watching as he walks away. After the Dark-Elf is out of sight, #!00# continues to listen to the fading footsteps, that eventually ends with the faint screeching of metal scraping on metal.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToDarkElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# has a short rest after the constant string of orgasms that she has had to endure. This wasn\'t anywhere near record for her as she set back in #!02# years ago, as a result of a dare. However, #!00# has not had to ensure so much while under the influence of elven concoctions back in #!02#. Sure... she dabbled with aphrodisiacs in the past... but not with these sort of effects. Still... this is a good rest.\n\nThen the Light-Elf, while still flat on his back, has a brief conversation with the Dark-Elf. The Dark-Elf tries pushing #!00# over, but it isn\'t easy considering the difference in strength. #!00# looks at the Dark-Elf.\n\n\"You want me to roll over\?.. sure\"\n\n#!00# rolls over onto her back.\n\n\"You could have just asked...\"\n\nThe Dark-Elf starts fondling #!00#\'s left breast, while lightly playing with her clitoris. #!00# just lays there, thinking \"That\'s it... keep making me feel good\".\n\nThe Light-Elf then sits upright and says something to the Dark-Elf. The Dark-Elf stops playing with #!00# to look at the Light-Elf. The Light-Elf says something else to the Dark-Elf, then the Dark-Elf responds, while also twisting #!00#\'s left nipple and clitoris.\n\n#!00# orgasms again.\n\n#!00# just lays there on the bed, as the Light-Elf and the Dark-Elf have another lengthy conversation.\n\nThe Dark-Elf then crawls off the bed, stands up and without putting his robes back on, he walks out of the cell. When he reaches the door and turns, he stops. The Dark-Elf looks at #!00# for a couple of seconds, before walking along the hallway. #!00# just lays there, watching as the Dark-Elf walks past the right wall of the cell, then listens to the fading footsteps, that eventually end with the faint screeching of metal scraping on metal.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToDarkElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("This leaves #!00# wondering what is going to happen next. She looks at the Light-Elf and notices that he is not doing anything to her, other than just looking at her quietly, while sitting in the middle of the bed.\n\n#!00# decides to roll over, push herself up into a kneeling position, then looks down at her crotch... where she knows where the two dildos still are.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLearntHardWay1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLearntHardWay1 is set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFLightElfHumilate != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFLightElfHumilate is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# remembers that it wasn\'t long ago that she wanted to clobber the Light-Elf, but that attempt ended in a dismal failure. This time, she has two orc sized Dildos in her, so there is no way it is going to end any differently.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFLightElfHumilate is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFLightElfHumilate is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# remembers that it wasn\'t long ago that she wanted to pummel the Light-Elf, but it did not work out too well. And that was after having a rest, she is still rather wobbly from the stream of orgasms right now.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFLightElfHumilate is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLearntHardWay1 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLearntHardWay1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFGiveInToLightElf != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFGiveInToLightElf is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# can still feel her clitoris and pussy buzzing. Her nipples aren\'t calm either. #!00# considers the fact that she is alone with the Light-Elf in the cell and it might be possible to overpower him... however...\n\n#!00# thinks to herself \"He is rather cute\" and smiles at the Light-Elf.\n\nThe Light-Elf continues to observe #!00# while wearing a poker-face expression.\n\n#!00# thinks about knocking him over and screwing his brains out, but decides that she is rather tired right now. Besides, she might get a chance to see his smile again later.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFGiveInToLightElf is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFGiveInToLightElf is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            if (gstruct_GameVars.cFLightElfHumilate != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFLightElfHumilate is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# considers her options. While she might be alone with the Light-Elf right now. She has a rather large handicap, being the two orc sized dildos stuffed inside of her. Also... she can slowly feel them starting to cling to her insides.\n\n");
                if (iRet != 0) return iRet;

                if (gstruct_GameVars.cFKeyToLightElf != 0)
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-04:cFKeyToLightElf is set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Besides... I am rather tired... and he can heal himself...\"\n\n");
                    if (iRet != 0) return iRet;

                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-04:cFKeyToLightElf is set]\n");
                        if (iRet != 0) return iRet;
                    }
                }
                else
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-04:cFKeyToLightElf is NOT set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Besides... I am rather tired\".\n\n");
                    if (iRet != 0) return iRet;

                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-04:cFKeyToLightElf is NOT set]\n");
                        if (iRet != 0) return iRet;
                    }
                }

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFLightElfHumilate is set]\n");
                    if (iRet != 0) return iRet;
                }
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFLightElfHumilate is NOT set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# considers possible openings. She sits there quietly sizing up the Light-Elf and thinks about her own condition. While she could try making a move on him now, it is too risky.\n\n");
                if (iRet != 0) return iRet;

                if (gstruct_GameVars.cFKeyToLightElf != 0)
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-04:cFKeyToLightElf is set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("Even if she got in a good hit, if he got away, she won\'t be fast enough to get to him before he knocked her out anyway. Any injuries she inflicts on him... he can heal. While she would normally be faster than him, she would normally not be under the influence of \'whatever shit\' they have been loading her up with while she has been here.\n\n");
                    if (iRet != 0) return iRet;

                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-04:cFKeyToLightElf is set]\n");
                        if (iRet != 0) return iRet;
                    }
                }
                else
                {
                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[if-04:cFKeyToLightElf is NOT set]\n");
                        if (iRet != 0) return iRet;
                    }

                    iRet = mdialog_addToDialogWithSrchRep ("Then there is that crap that is still on his hands and the fact that he knows how to use them. He would not have to run away... he knows how to retaliate. All of this relying upon the Dark-Elf not being here. The Dark-Elf might not be that far away.\n\n");
                    if (iRet != 0) return iRet;

                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[endif-04:cFKeyToLightElf is NOT set]\n");
                        if (iRet != 0) return iRet;
                    }
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# sighs... and thinks to herself \"Let\'s see where this goes. I might as well have a rest.\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFLightElfHumilate is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFGiveInToLightElf is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLearntHardWay1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# lays back down and waits. She and the Light-Elf continue watching each other.\n\nAfter a few minutes, #!00# hears the usual faint screeching of metal scraping on metal in the distance, #!00# starts to stir and props herself up on an elbow as she can hear the approaching footsteps again.\n\n#!00# looks over at the right side of the cell, just as the Dark-Elf comes back into view.\n\nThe Dark-Elf is still naked, except for the light-green latex gloves that he is still wearing. But now, the Dark-Elf is carrying a tray. #!00# notices that there is at least a glass on it, filled with water. Not that she can immediately recognize what the glass is.\n\nIn #!02#, drinking glasses don\'t really exist, as the usual containers for liquids to be drunk are usually metal tankards, unless you are wealthy, then it is an over-sized mug made out of granite. Civilians and off-duty soldiers normally guzzle ale. Orcs do drink water, but normally water is only consumed by on-duty soldiers from a field canteen.\n\nWhile #!00# contemplates what exactly is on the tray the Dark-Elf continues striding along the hallway outside of the cell and slows down when he reaches the cell door. This is when #!00# realizes that the Dark-Elf is walking around a little bit faster than when he was fully clothed.\n\nAs the Dark-Elf enters the cell while carrying the tray, #!00# pushes herself up so that she is kneeling on the bed again. As the Dark-Elf stops walking, she notices that there is a bowl on the tray as well as what appears to be bread.\n\n#!00# briefly considers the fact that this is the first time she has seen an actual meal since she woke up inside the cell.\n\nThe Dark-Elf then, while still holding onto the tray, presses a switch on the side of it with his right thumb. #!00# just sits there as a set of legs unfold and extend by themselves from the bottom of the tray, as the Dark-Elf just stands there holding it.\n\nAfter few seconds, the tray has finished changing into a floor standing tray-table and the Dark-Elf sets it down on the floor. For some reason, the Dark-Elf is looking pretty happy with himself.\n\n#!00# glances over at the Light-Elf, who is starting to move...\n\n\n[4 minutes later...]\n\nWith the help of both of the elves, #!00# has managed to sit at the edge of the bed and gotten over the fact that she orgasmed twice because of the stimulation that the rubber latex sheets on the bed gave her pussy. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLightElfHumilate != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The presence of the two large dildos did not make it any easier.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The presence of the two dildos did not offer much help either.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("After #!00# finally managed to calm down, the Dark-Elf positioned the tray table in front of her. Pieces of sliced up bread next a bowl of soup. #!00# finally recognizes the glass of water for what it is.\n\nThe Dark-Elf says something and #!00# looks at him. The Dark-Elf has a smile on his face and is making hand gestures towards the meal on the tray.\n\n\"Yes... thank you for the food.\"\n\n#!00# picks up a piece of bread and eats it by itself. #!00# thinks to herself \"Strange taste... unusual for bread\".\n\n#!00# then takes her finger, sticks it into the soup and tastes it. #!00# tries to imagine what sort of soup it is, then comes to the conclusion that is more than just two vegetables present as the main ingredients. However, she cannot pin down what those are.\n\nFinally, #!00# picks up a piece of bread, dunks it in the soup and eats it. #!00# finds that the combination of the weird bread and the strange soup is a rather unusual taste... but edible.\n\n#!00# then looks at the glass of water, she picks it up, takes a sip and sets it back down. #!00# briefly considers the fact that she should be dehydrated after not eating or drinking anything while being in the cell, unaware that the two elves had been force feeding her while she had slept during two previous occasions.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFKeyToLightElf != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# then continues eating her meal, as the Light-Elf starts a conversation with the Dark-Elf. The conversation does not last long and at the end of it, the Dark-Elf picks up his robes and walks out of the cell.\n\nThe Dark-Elf stops at the door of the cell and looks back. #!00# decides it would be rude to not not acknowledge his departure, so she waves at him. The Dark-Elf briefly smiles back, before walking at a quick pace along the hallway.\n\n#!00# watches the Dark-Elf walk out of sight while still eating the meal. #!00# then looks at the Light-Elf, who is still standing there, naked, watching her eat. The Light-Elf still has a poker-face expression.\n\n#!00# decides to have another gulp of water before she resumes eating, just as she hears the footsteps in the hallway stop with the usual faint screeching of metal scraping on metal in the distance.\n\nFor a couple of minutes, #!00# sits there quietly eating, while thinking that there isn\'t much to talk about with the Light-Elf, considering the language barrier. Besides, the Light-Elf does not seem to be the type that is into talking over dinner.\n\n#!00# finishes off all of the bread and there isn\'t much soup left. So she decides to guzzle the rest of the water to wash down her throat. Just as #!00# finishes the glass of water, she notices a slight change in the demeanor of the Light-Elf, almost... as if he is expecting something to happen.\n\n#!00# looks at the almost empty class, as there is a trickle of water flowing back into the bottom of it. That is when she notices something that looks like grains of sand at the bottom of the glass.\n\nSuddenly, #!00# starts to feel very sleepy. Just as she starts to fall backward, someone grabs her left shoulder and tries to slow her decent onto the bed.\n\nJust before she passes out, #!00# opens her eyes, to see a blurry Light-Elf standing over her.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToLightElf is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFKeyToLightElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFKeyToDarkElf != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFKeyToDarkElf is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# then continues eating her meal, as the Dark-Elf starts a conversation with the Light-Elf. The conversation does not last long and at the end of it, the Light-Elf picks up his robes, looks over at #!00# and the Dark-Elf and walks out of the cell.\n\n#!00# thinks to herself \"Wait... he\'s leaving\?\", and stops eating.\n\nThe Light-Elf passes through the door of the cell, turns without breaking his stride and continues to walk along the corridor outside the cell. #!00# wonders if the Light-Elf is angry about something.\n\nWhen the Light-Elf walks out of sight, #!00# decides that it probably isn\'t important and to wash down some of the food with another sip of water, before resuming eating again. #!00# listens to the footsteps in the hallway, which end with the usual soft screeching of metal scraping on metal.\n\n#!00# glances over at the Dark-Elf, who is still standing nearby. He has a smile on his face. #!00# smiles back and continues eating.\n\nFor a couple of minutes, #!00# sits there quietly eating, while trying to figure out why the Dark-Elf is smiling at her. Asking what he is thinking is going to be pointless, as they cannot understand what each other is saying.\n\n#!00# finishes off all of the bread and there isn\'t much soup left. So she decides to guzzle the rest of the water to wash down her throat. Just as #!00# finishes the glass of water, she glances over at the Dark-Elf and notices the smile is no longer there... in fact... he seems to be concerned... but it does not seem to be about himself.\n\n#!00# starts to feel a little drowsy and then looks at the almost empty drinking glass. Because it is glass, she can see the droplets of water still in it... but the droplets do not look that clean... there appear to be grains of sand that have collected at the bottom of the glass.\n\nSuddenly, #!00# starts to feel very sleepy. Just before she starts to fall backward, someone grabs her right shoulder, holds her upright and takes the glass from her hand.\n\n#!00# opens her eyes and sees that the Dark-Elf is holding her upright. He is holding her with both of his arms and is trying his best to lower her back on the bed. Before #!00#\'s back hits the rubber latex sheets covering the bed, she passes out.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFKeyToDarkElf is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFKeyToDarkElf is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            if (gstruct_GameVars.cFGiveInToLightElf != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFGiveInToLightElf is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# then continues eating her meal, as the Light-Elf starts a conversation with the Dark-Elf. The conversation lasts a while, so #!00# decides to watch the two of them interact with each other. At the very end of the conversation the Dark-Elf looks at the Light-Elf with an \"are you sure\?\" expression on his face and the Light-Elf responds by just nodding.\n\n#!00# stops eating and thinks to herself \"What was that about\?\". The Dark-Elf notices that #!00# has stopped eating, so he just smiles at her. #!00# decides to have a gulp of water from the drinking glass, then smiles back at the Dark-Elf. #!00# then glances at the Light-Elf, who is still watching her with a poker-face expression. #!00# decides to resume eating her meal.\n\nFor a couple of minutes, #!00# sits there quietly eating, while trying to figure out what the exchange was between the two elves. It does not help that she cannot understand a single word that they say, has to rely upon the facial expressions.\n\nThe Dark-Elf... is sort of easy to read.\n\nThe Light-Elf... does not give much in the way of facial feedback. Except for some of the smiles that she has seen from him recently. Still, #!00# cannot figure out what he is thinking.\n\n#!00# finishes off all of the bread and there isn\'t much soup left. So she decides to guzzle the rest of the water to wash down her throat. Just as #!00# finishes the glass of water, the Dark-Elf is walking over to her.\n\n#!00# thinks to herself \"Okay... what do they have... planned... next...\"\n\n#!00# starts to feel sleepy, just as the drinking glass is snatched away from her right hand by the Dark-Elf. #!00# looks at the Light-Elf and finds that it is difficult to focus.\n\n#!00# closes her eyes and feels two pairs of hands grab her and gently lower her backwards. She passes out just as her back comes into contact with the rubber latex sheets of the bed.\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFGiveInToLightElf is set]\n");
                    if (iRet != 0) return iRet;
                }
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFGiveInToLightElf is NOT set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# then continues eating her meal, as the Dark-Elf starts a conversation with the Light-Elf. The conversation does not last that long and ends with the Light-Elf saying something. The Dark-Elf thinks some more and finally nods.\n\n#!00# thinks to herself that it was an unusual exchange between the two of them. She then has a sip of water and then continues eating.\n\nFor a couple of minutes, #!00# sits there quietly eating, while trying to figure out why they are giving her a meal now... is this a test... or is there something in the food\?\n\n#!00# briefly stops eating and thinks to herself \"If there is something in this, it probably isn\'t much worse than the shit they have been using on me while I have been asleep\".\n\n#!00# notices that the two elves are watching her again, so she decides to have another sip of water and continues eating.\n\nFor a couple of minutes, #!00# sits there quietly eating, trying to figure out what their motives are, other than just using her as a convenient fuck-toy. It is not as if she could ask them, they would not be able to understand the question and even if they did figure out what she was asking them, she would not be able to understand the answer that they give back to her.\n\n#!00# finishes off all of the bread and there isn\'t much soup left. So she decides to guzzle the rest of the water to wash down her throat. #!00# is about to put the glass down, when she starts to feel both drowsy and light-headed.\n\n#!00# looks at the drinking glass and wonders \"Why only now\?\?\". #!00# then notices that there are what appears to be grains of sand at the bottom of the glass and she starts to topple over backwards.\n\n#!00# falls back onto the bed and passes out.\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFGiveInToLightElf is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFKeyToDarkElf is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFKeyToLightElf is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    //
    // It is here that most of the storyline branches out.
    //

    // Ending 009 branch.
    if (gstruct_GameVars.cFGiveInToLightElf == 1)
    {
        iRet = gamelogic07_scene1200 (0, cSubFlag + 1);
        return iRet;
    }

    // key back to the dark elf
    if (gstruct_GameVars.cFKeyToDarkElf == 1)
    {
        iRet = gamelogic07_scene1250 (0, cSubFlag + 1);
        return iRet;
    }

    // key back to the light elf
    if (gstruct_GameVars.cFKeyToLightElf == 1)
    {
        iRet = gamelogic07_scene1270 (0, cSubFlag + 1);
        return iRet;
    }

    // the door had been closed
    if (gstruct_GameVars.cFClosedTheDoor1 == 1)
    {
        iRet = gamelogic07_scene1220 (0, cSubFlag + 1);
        return iRet;
    }

    // everything else

    iRet = gamelogic07_scene1240 (0, cSubFlag + 1);
    return iRet;
}


