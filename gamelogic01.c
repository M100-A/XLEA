//
// gamelogic01.c
//
// This is group 1 of scene ids.
//

#include "common.h"
#include "gamelogic.h"

// external linkage to the game variables.
extern  struct  gamelogic_variablelist  gstruct_GameVars;
extern  char    gcDebugFlag;


//
// Game introduction scene function.
//
int gamelogic01_scene1001 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    //
    // Selectively init all of the game running variables
    //
    gstruct_GameVars.iDtYear = 0;
    gstruct_GameVars.iDtMonth = 0;
    gstruct_GameVars.iDtDay = 0;
    gstruct_GameVars.iDtHour = 0;
    gstruct_GameVars.iDtMin = 0;
    gstruct_GameVars.iDtSec = 0;
    gstruct_GameVars.cFVarsValid = 1; // this one IS set to 1.
    gstruct_GameVars.cFPainMagic1 = 0;
    gstruct_GameVars.cVActionCounter = 0;
    gstruct_GameVars.cFIntDialog = 0;
    gstruct_GameVars.cFExtIntDialog = 0;
    gstruct_GameVars.cFLookAroundRoom = 0;
    gstruct_GameVars.cFVisitTheBed = 0;
    gstruct_GameVars.cFVisitTheTable = 0;
    gstruct_GameVars.cFVisitTheDoor = 0;
    gstruct_GameVars.cFVisitTheCon = 0;
    gstruct_GameVars.cFCheckTheChair = 0;
    gstruct_GameVars.cFSitInTheChair = 0;
    gstruct_GameVars.cFPainMagic2 = 0;
    gstruct_GameVars.cFPainMagic3 = 0;
    gstruct_GameVars.cFAnalDropFirst1 = 0;
    gstruct_GameVars.cFOralDropFirst1 = 0;
    gstruct_GameVars.cFBreakBonds1 = 0;
    gstruct_GameVars.cFBreakBonds2 = 0;
    gstruct_GameVars.cFGetNoticed1 = 0;
    gstruct_GameVars.cFDildoFun1 = 0;
    gstruct_GameVars.cFAnalDropFirst2 = 0;
    gstruct_GameVars.cFOralDropFirst2 = 0;
    gstruct_GameVars.cFAnalDropLast2 = 0;
    gstruct_GameVars.cFTableStillThere = 0;
    gstruct_GameVars.cFDarkElfNeedy1 = 0;
    gstruct_GameVars.cFDarkElfRest1 = 0;
    gstruct_GameVars.cFDarkElfExhaust1 = 0;
    gstruct_GameVars.cFLightElfHumilate = 0;
    gstruct_GameVars.cFPullOutDildos2 = 0;
    gstruct_GameVars.cFTurnedLeftFirst = 0;
    gstruct_GameVars.cFBeenOutAndBack = 0;
    gstruct_GameVars.cFIgnoredTheDoor1 = 0;
    gstruct_GameVars.cFMovedTheDoor1 = 0;
    gstruct_GameVars.cFClosedTheDoor1 = 0;
    gstruct_GameVars.cFTookTheKey = 0;
    gstruct_GameVars.cFLeftDoorWideOpen = 0;
    gstruct_GameVars.cFKeyToDarkElf = 0;
    gstruct_GameVars.cFKeyToLightElf = 0;
    gstruct_GameVars.cFLearntHardWay1 = 0;
    gstruct_GameVars.cFGiveInToLightElf = 0;
    gstruct_GameVars.cFBecomeASexpot = 0;
    gstruct_GameVars.cFMasturbator = 0;
    gstruct_GameVars.cFIgnoredTheDoor2 = 0;
    gstruct_GameVars.cFClosedTheDoor2 = 0;
    gstruct_GameVars.cFEnding7Rollup = 0;
    gstruct_GameVars.cFEnding8Rollup = 0;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1001 ** intro **}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Start new game\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# is laying flat on her back, on a bed... but... something is out of place. The bed isn\'t how #!00# remembers it. Still half asleep, #!00# opens her eyes.\n\nInstead of the more familiar khaki colored wooden planks that #!00# normally sees when she wakes, #!00# is instead staring at some sort of slate-gray slab. #!00# slowly blinks, then closes her eyes again, as her headache is rather uncomfortable and it is a little too bright.\n\n#!00# thinks to herself \"did I go out drinking last night\?... am I in the brig\?..\".\n\nStints of heavy drinking, the night before off-duty, is normal for the proud members of the #!02# Self Defense Force (#!01#). All orc warriors partake in it regardless of their gender. It isn\'t unusual for female warriors, like #!00#, to overdo it and end up being dragged into the brig to sleep off the following hangover.\n\n#!00# is not as careless with #!02# ale as she was when she was younger and tries to avoid waking up in such circumstances nowadays. #!00# is almost the human equivalent of 30 and is thinking of retirement from the #!01#, catching a husband, screwing his brains out, then raising a couple of kids. #!00# has only progressed in rank to sergeant, and does not consider herself to be a career soldier.\n\n#!00# notices that there are a few things that are \'off\' about the situation that she finds herself in. For a start, she is still on guard-shift for the week, so she shouldn\'t have been out drinking the night before. Doing so is one of the fastest ways of being kicked out of the #!01#, then being publicly shamed.\n\nAnd in the brig... the beds are hard stone... and not as comfy as this. Then there is the fact that she is naked... and... a COLLAR\?\?\?!!\n\n#!00#\'s eyes snap open.\n\n\"WHAT THA\' FUCK !!...\"\n\n#!00# is wide awake now, but her head is still throbbing with pain.\n\n#!00# feels her neck and finds some kind of strange collar there. The coolness of the air on her naked body is discomforting, especially when #!00# normally sleeps wearing her armor.\n\n#!00# looks around... three light-gray stone walls... the room is quite large and not a small cell in an #!01# brig.\n\nThe fourth wall is a line of vertical steel bars, with a steel bar door in the center. Beyond the bars, is a corridor, with more light-gray stone walls. But, the light in the cell is sort of... \'off\'.\n\n#!00# looks around. Instead of a floor standing torch stands, there is a row of white-smoke luminescent orbs, embedded into the 3 walls, seven of them for each wall, about three-quarters of the way up wall to the ceiling. There are more of those orbs embedded into the wall along the corridor, outside of the steel bars at the front of the cell. Now that #!00# has had a better look at them, the steel bars are more of a dark-slate-blue color, than the dim-rusty-gray that she would expect. Also, the cells that she is normally used to have stone brick walls... but these walls are smooth, with no sign of any mortar... or any bricks either.\n\nThen... there is the bed that #!00# is now on top of. Normally, #!01# soldiers sleep on canvas, as cotton and silk are reserved for #!01# generals and wealthy asshats... but what #!00# is currently resting on is none of those...\n\n\"Black sheets\?... is this... some sort of rubber\?... What sort of cell... is this\?\"\n\nThe more that #!00# looks around the cell, the more that she concludes that there is no way that this is normal. There is a black table-bench along the right wall, with brightly colored things on it. Some weird dark-blue contraption over by the left wall. Some sort of big chair is sitting in the back-left corner.\n\n#!00# decides that she is going to explore the cell properly and starts to crawl off the bed... then... there is a hissing sound above her head.\n\n\"Huh\?...\"\n\n#!00# looks up to see a pale-violet-red mist that is quickly descending on top of her from the ceiling. Her first thoughts of it is some kind of spell... which is quickly confirmed moments later when it hits her.\n\n\"Caught me... off guard... you little...\"\n\n#!00# slumps back down on the bed. Her headache could now kill a minotaur... and obliterate part of its dungeon. #!00# is unable to move and drifting off to sleep again.\n\n\"Sleep spell!... FUCKINg sh...it...\"\n\n\n[Some time Later...]\n\n#!00# wakes up again... her head is still throbbing, she opens her eyes and looks around at the walls of the cell. The same luminescent orbs embedded into the walls again. She moves her right arm and the rubber sheets squeak. The situation that she finds herself in, has not changed. #!00# concludes that her migraine is a result of a sleep spell, and not overindulging in ale at the local tavern.\n\n#!00# then realizes that she does not know where she is. She is about to get up, but then remembers being hit with by the sleep spell when she tried getting up earlier. It is highly likely that whoever or whatever hurled the spell at her last time will do so again.\n\n\"Fuck it...\"\n\n#!00# continues to lay on the bed, while trying to piece together what happened the last time. It is a rather large cell, practically the size of something that you would expect for a royal bedroom, and not some damp little #!01# cell that is barely large enough for a single orc. She didn\'t remember seeing anyone else being the cell with her.\n\nWithout trying to move her body too much, #!00# tilts her head to try and get a better look around the cell. Unless someone is using some form of invisibility spell, or they are small midgets hiding next to the bed, #!00# is obviously alone in the rather large cell. The top of the bed appears to be only a couple of inches from the floor.\n\n#!00# looks around the ceiling again. With no sign of descending mist that knocked her out last time, #!00# decides that until she understands more about what is going on and recovered from her headache, she is going to wait. #!00# lays back on the bed and closes her eyes.\n\n#!00# had to learn patience when on guard duty. It is a skill that is not common amongst orcs, but one she is going to exercise now.\n\n\n[10 minutes Later...]\n\n#!00# is still resting on the bed and listening to her surroundings. Her headache is slowly subsiding. There is slight sound of the wind in the distance. She is not sure where, but it is constant. She has been trying to make sense out of the movement of the wind. Could it be a clue to where she is\?\n\nNow... #!00# can hear a change... new noises off in the distance... the faint screeching of metal scraping on metal. It is hard to tell how far away it is, but it cannot be too far.\n\nThen... the light echoing of footsteps... slowly getting louder... and closer. Someone is coming.\n\n#!00# opens her eyes and tilts her head to get a better look at the corridor beyond the metal bars. Yes... the footsteps are from that direction... to the right.\n\nSoon, the source of the footsteps, a robed figure, appear in the corridor outside the front-right corner of the cell. The individual momentarily stops when they see #!00#. There is also another pair of footsteps still echoing in the hallway and they stop as well. There is more than one of them.\n\n#!00# looks at the robed figure. While she has only seen drawings of them, she recognizes the face of an elf. The basic training given to every active member of the #!01# ensures that they can recognize every non-orc race at a glance. While it has been over 10 years since #!00# studied her #!01# textbooks, #!00# recognizes the individual as a Dark-Elf, male, young, about 20 years old. The robes he is wearing are practically screaming that he is a mage.\n\nThe young Dark-elf glances around the cell, he looks at #!00# and his expression changes to a smile, which further morphs into a devilish-grin. While continuing to stare #!00#, the Dark-Elf talks...\n\n#!00# cannot understand a word that he is saying, but it is clear that the Dark-elf isn\'t talking to her.\n\n#!00# can hear some more footsteps again and a second robed figure appears next to the Dark-Elf. #!00# looks at the second individual. Light-Elf, male, young, about 20 years old. Robes... with intricate patterns... another mage.\n\nThe Light-Elf looks at #!00# and a smirk briefly appears on his face. It appears that he is talking to his Dark-Elf companion.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Get up", 1002, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Yell at them", 1003, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Stay still", 1004, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Get Up" Path Selection function.
//
int gamelogic01_scene1002 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1002 >Get up}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Get up\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# attempts to get up from the bed, but as she tries to do so.., she is overcome with pain AND the inability to move. As she collapses back down on the black latex sheets on the bed, she notices that the Light-Elf is standing there and chanting.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic01_scene1005 (0, cSubFlag + 1);
    return iRet;
}

//
// "Yell at them" Path Selection function.
//
int gamelogic01_scene1003 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1003 >Yell at them}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Yell at them\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to try introducing herself to them, in the usual orc manner...\n\n\"HEY YOU FUCKERS... Wh... at...\"\n\nSuddenly, #!00# is overcome with pain AND the inability to move. As she collapses back down on the black latex sheets on the bed, she notices that the Light-Elf is standing there and chanting.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic01_scene1005 (0, cSubFlag + 1);
    return iRet;
}

//
// "Stay still" Path Selection function.
//
int gamelogic01_scene1004 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1004 >Stay still}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stay still\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides that it is best to stay still for now and just silently watch the two elves. She then notices that the Light-Elf WAS doing something other than talking, but he has stopped now. The Light-Elf also keeps a close eye on #!00#, while the Dark-Elf...\n\nThe Dark-Elf is shuffling along the hallway towards the door of the cell. He chants something and the door swings open for him. #!00# glances back at the Light-Elf and notices that he is still doing nothing. But she glances only briefly, as the Dark-Elf is chanting again, so #!00# looks at the Dark-Elf.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic01_scene1006 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1002 and 1003 above.
//
int gamelogic01_scene1005 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // set the pain magic flag.
    gstruct_GameVars.cFPainMagic1 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1005 Intro Merge 1}\n\n[set cFPainMagic1]\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("One thought comes to #!00#\'s mind while observing the Light-Elf... \"You little prick...\"\n\nHe continues to chant his paralysis spell, while the Dark-Elf is walking towards the door of the cell. The Dark-Elf chants something and the door of the cell swings open. #!00# only briefly notices that the door of her prison is open, before she is distracted by the chanting of the Dark-Elf.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic01_scene1006 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1004 and 1005 above.
//
int gamelogic01_scene1006 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1006 Intro Merge 2}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("And then... #!00#\'s vision goes dark.\n\nTime seems to pass at a different pace... it is confusing... and #!00# can barely make sense of what she can see... it is as if she is floating. #!00# notices something before her.\n\n\"What the... a Monster\?\?\"\n\n#!00# is indeed looking at a Tentacle Monster... but this situation is rather odd... and so is the Tentacle Monster that is bearing down on her.\n\n#!00#\'s training kicks in and she reaches for her her weapons... only to find that they are not there.\n\n\"Where is... my hammer\?... my sword\?... oh shit...\"\n\n#!00# realizes that she is unarmed and still naked in front of a... thing... that is a combination of light-coral, deep-pink and blue-violet colors, which is weird enough because it is not a monster that #!00# knows about from her #!01# studies.\n\nThere isn\'t time to consider the oddity, because now her arms and legs are restrained by its appendages.\n\nAgain, more inconsistencies, as this tentacle monster is flailing tentacles of multiple types. It is rare that a tentacle monster would have 2 different types of tentacles, but this one seems to have not only all 7 that are documented in the #!01# textbooks, with some more that are not documented. And... it has every single possible texture as well!\?... Every single tentacle on the monster is different... How does such an abomination of a monster even exist\?\n\nA primitive head tentacle, covered in warts, quickly stabs into #!00#\'s vagina, while a tender head tentacle, covered in knobs is assaulting her anus. However, for some reason despite the fact that she can see them, it as if they are not really there. Smaller tentacles pry open #!00#\'s mouth, followed by a penis tentacle quickly forcing it\'s way past her lips and down her throat...\n\nAnd then... all of the other tentacles... just stop moving...\n\n#!00# just hangs there... thinking... \"Am I expected to take the initiative here\?\"\n\n");
    if (iRet != 0) return iRet;

    // before returning, call the 1007 function point (below), to setup the variables and parameters for the sex scene.
    iRet = gamelogic01_scene1007 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic01_scene1007 (int iSubSceneId, char cSubFlag)
{
    int iRet;
    char cResult;
    char cChangeOver = 0;
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
                iRet = mdialog_addToDialogWithSrchRep ("{1007 >Suck tentacle}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1007 >Lick tentacle}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1007 >Bite tentacle}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1007 >Swallow tentacle semen}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1007 >Spit out tentacle semen}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1007 >Chew tentacle semen}\n\n");
                break;

            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Suck tentacle\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Lick tentacle\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Bite tentacle\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Swallow tentacle semen\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep (">Spit out tentacle semen\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Chew tentacle semen\n\n");
                break;

            }
            if (iRet != 0) return iRet;
        }

        // these are the climax results.
        if ((iSubSceneId == 4) || (iSubSceneId == 5) || (iSubSceneId == 6))
        {
            if (gstruct_GameVars.iClimaxCount1 > 2)
            {
                // this is the final climax.
                if (gstruct_GameVars.iClimaxCount2 != 0)
                {
                    cResult = 0;
                    cChangeOver = 2; // this triggers the exit after dialog below.
                }
                else
                {
                    // re-init the sex scene.
                    gamelogiccommon_initSexScene1 (30, 14, 180);

                    if (gcDebugFlag != 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("[Forced-Result: changeover]\n");
                        if (iRet != 0) return iRet;
                    }

                    // and set the flag so that we pick up on it next time.
                    gstruct_GameVars.iClimaxCount2 = 1;

                    cResult = 0;
                    cChangeOver = 1;
                }
            }
            else
            {
                cResult = gamelogiccommon_sexActionPartner1 ((char)iSubSceneId);
            }
        }
        else
        {
            cResult = gamelogiccommon_sexActionPartner1 ((char)iSubSceneId);
        }

        if ((cResult == 1) && (gstruct_GameVars.iClimaxCount2 == 0))
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: climax A]\n");
                if (iRet != 0) return iRet;
            }

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the tentacle in her mouth, rather intensely, and is rewarded with the tentacle climaxing and filling her mouth with tentacle semen.\n\n#!00# thinks to herself \"Couldn\'t you put this somewhere ELSE\?...\".\n\n");

                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the tentacle in her mouth and accidentally sucks it at the same time. The Tentacle Monster climaxes and sprays the inside of her mouth with its semen.\n\n#!00# thinks to herself \"This is DISGUSTING...\".\n\n");

                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# tries biting the penis tentacle hard, only to find that her teeth aren\'t injuring it at all. It is almost as if her teeth are just massaging the tentacle. #!00# tries biting repeatedly, only to find that her actions are just arousing the Tentacle Monster even more, which is confirmed as the penis tentacle ejaculates in her mouth.\n\n#!00# thinks to herself \"This is just NASTY...\".\n\n");

                break;

            }
            if (iRet != 0) return iRet;
        }
        else if (cResult == 1)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: climax B]\n");
                if (iRet != 0) return iRet;
            }

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# vacuum sucks on the tentacle in her mouth, resulting in the tentacle climaxing, and her mouth being filled with tentacle semen.\n\n#!00# thinks to herself \"I could brag about this... no... who wants to brag that they sucked off a monster...\".\n\n");

                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# circle licks the penis tentacle in her mouth, then realizes that she was getting into this too much. Just as #!00# considers backing off, the Tentacle Monster ejaculates in her mouth.\n\n#!00# thinks to herself \"Well... I fucked up there...\".\n\n");

                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# tries attacking the tentacle with her teeth again, only to find that she isn\'t harming it at all. It appears that the tentacle is enjoying the sensation and ejaculates in her mouth.\n\n#!00# thinks to herself \"What is this thing... a masochist?\".\n\n");

                break;

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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks casually on the tentacle in her mouth. However, the tentacle seems to be loosing interest.\n\n");

                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly licks the tentacle in her mouth. However, the tentacle doesn\'t seem to be as excited anymore.\n\n");

                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly bites the tentacle in her mouth. However, the tentacle seems to find this rather boring.\n\n");

                break;

            // I don't need to take into account 4, 5 and 6 here, because those 3 are post climax actions.
            // Given that they don't occur that often, they are unlikely to result in a cResult -1 return

            }
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;
            if (cRandom1 > 1)
            {
                if (gstruct_GameVars.iClimaxCount2 == 0)
                {
                    cRandom1 = 0;
                }
                else
                {
                    cRandom1 = 1;
                }
            }

            if (cRandom1 != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Maybe I should change what I am doing, just to keep things fresh\".\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"That didn\'t go so well... Maybe I should change things around... just to keep this interesting.\".\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("The motionless penis tentacle is just sitting there... in #!00#\'s mouth. ");
            if (iRet != 0) return iRet;

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("\"Maybe if I show it a good time, it will let me go...\" #!00# sucks on the motionless penis tentacle.\n\nThe penis tentacle starts thrusting back and forth inside of #!00#\'s mouth. #!00# thinks to herself \"Okay... so this is what it wants...\"\n\n");

                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("\"Maybe I should tease it...\" then she decides to lightly lick the hood of the penis tentacle.\n\nThe penis tentacle starts thrusting in and out of of #!00#\'s mouth. #!00# thinks to herself \"Oh come on... this is a LOT harder if you move around...\"\n\n");

                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("\"Why is this thing doing nothing?\"... then she decides to bite it to let her go.\n\nThe penis tentacle is still there, but now it is actively thrusting in and out of #!00#\'s mouth. #!00# thinks to herself \"Looks like it isn\'t letting me go till I show it a good time...\"\n\n");

                break;
            }

            if (iRet != 0) return iRet;

            // I don't need to take into account 4, 5 and 6 here either, because these dialog entries are only used once at the start of the sex scene.
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: normal]\n");
                if (iRet != 0) return iRet;
            }

            switch (iSubSceneId)
            {
            case 1:

                // this is a little bit of RNG stuff just to mix up the dialog of some of the common responses.
                cRandom1 = rand() % 3;
                cRandom2 = rand() % 2;

                if (cRandom1 > 1)
                {
                    if (gstruct_GameVars.iClimaxCount2 == 0)
                    {
                        cRandom1 = 0;
                    }
                    else
                    {
                        cRandom1 = 1;
                    }
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# tries sucking the penis tentacle. ");
                if (iRet != 0) return iRet;

                if ((gstruct_GameVars.iClimaxCount2 == 0) && (gstruct_GameVars.iClimaxCount1 == 0) && (gstruct_GameVars.iArousalLevel1 < 90))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("Which isn\'t easy as the tentacle is thrusting inside her mouth. ");
                    if (iRet != 0) return iRet;
                }

                if (cRandom1 == 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# manages to catch and suck the entire shaft of the tentacle when it thrusts deep.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle just ignores what #!00# is doing and continues to thrust back and forth again.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle briefly stops, lets #!00# suck on the entire shaft for a bit, before pulling back out and resuming thrusting in and out of #!00#\'s mouth.\n\n");
                    }
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# manages to catch and suck the hood of the penis tentacle when it pulls back.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle just ignores what #!00# is doing, thrusts back in again and continues its thrusting rhythm.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle briefly stops, lets #!00# suck on the hood for a bit, before slamming its shaft back in and resuming thrusting in and out of #!00#\'s mouth.\n\n");
                    }
                }
                if (iRet != 0) return iRet;

                break;

            case 2:

                // this is a little bit of RNG stuff just to mix up the dialog of some of the common responses.
                cRandom1 = rand() % 6;
                cRandom2 = rand() % 3;

                if (cRandom1 == 5)
                {
                    if (gstruct_GameVars.iClimaxCount2 == 0)
                    {
                        cRandom2 = rand() % 2;
                    }
                    else
                    {
                        cRandom2 = (rand() % 2) + 2;
                    }

                    if (cRandom2 > 1)
                    {
                        cRandom2 = rand() % 2;
                    }
                }
                else if (cRandom1 == 4)
                {
                    if (gstruct_GameVars.iClimaxCount2 == 0)
                    {
                        cRandom2 = (rand() % 2) + 1;
                    }
                    else
                    {
                        cRandom2 = rand() % 2;

                        if (cRandom2 == 1)
                            cRandom2 = 3;
                    }

                    if (cRandom2 > 1)
                    {
                        cRandom2 = rand() % 2;
                    }
                }
                else if (cRandom2 > 1)
                {
                    if (gstruct_GameVars.iClimaxCount2 == 0)
                    {
                        cRandom2 = 1;
                    }
                    else
                    {
                        cRandom2 = 0;
                    }
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# tries licking the penis tentacle. ");
                if (iRet != 0) return iRet;

                if ((gstruct_GameVars.iClimaxCount2 == 0) && (gstruct_GameVars.iClimaxCount1 == 0) && (gstruct_GameVars.iArousalLevel1 < 90))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("Which isn\'t easy as the tentacle is thrusting inside her mouth. ");
                    if (iRet != 0) return iRet;
                }

                switch (cRandom1)
                {
                case 0:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# manages to lick the entire shaft of the tentacle when it thrusts in.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle ignores what #!00# is doing with her tongue and continues to thrust back and forth again.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle briefly stops, lets #!00# lick around the shaft for a bit, before pulling back out and resuming thrusting in and out of #!00#\'s mouth.\n\n");
                    }

                    break;

                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# manages to lick the entire shaft of the tentacle when it pulls back.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The penis tentacle ignores what #!00# is doing and continues to thrust in and out again.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle briefly stops, lets #!00# lick the hood for a bit, before slamming back in and resuming its thrusting motion.\n\n");
                    }

                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks around the shaft of the tentacle after it thrusts in, just before it pulls back.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle stops pulling back halfway, then pushes back in and lets #!00# lick the shaft again. After a couple of seconds, the penis tentacle resumes thrusting in and out of #!00#\'s mouth.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle continues pulling back, ignoring what #!00# is doing with her tongue and continues pistoning in and out of #!00#\'s mouth.\n\n");
                    }

                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks around the shaft of the tentacle as it pulls back, just before it thrusts back in.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle stops a little bit, then pushes back in and lets #!00#\'s mouth again, continuing its thrusting motion in and out of #!00#\'s mouth.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle thrusts back in, rather quickly, letting #!00#\'s tongue lick the entire shaft, then continues pistoning in and out of #!00#\'s mouth at the same pace.\n\n");
                    }

                    break;
                }
                if (iRet != 0) return iRet;

                break;

            case 3:

                // this is a little bit of RNG stuff just to mix up the dialog of some of the common responses.
                cRandom1 = rand() % 5;
                cRandom2 = rand() % 2;

                if (cRandom1 > 3)
                {
                    if (gstruct_GameVars.iClimaxCount2 == 0)
                    {
                        cRandom2 = rand() % 2;
                    }
                    else
                    {
                        cRandom2 = (rand() % 2) + 2;
                    }

                    if (cRandom2 > 1)
                    {
                        if (gstruct_GameVars.iClimaxCount2 == 0)
                        {
                            cRandom2 = 1;
                        }
                        else
                        {
                            cRandom2 = 0;
                        }
                    }
                }
                else if (cRandom2 > 1)
                {
                    cRandom2 = rand() % 2;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# tries biting the penis tentacle. ");
                if (iRet != 0) return iRet;

                if ((gstruct_GameVars.iClimaxCount2 == 0) && (gstruct_GameVars.iClimaxCount1 == 0) && (gstruct_GameVars.iArousalLevel1 < 90))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("Which isn\'t easy as the tentacle is thrusting inside her mouth. ");
                    if (iRet != 0) return iRet;
                }

                switch (cRandom1)
                {
                case 0:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to bite the shaft of the tentacle when it thrusts in.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle briefly stops after thrusting in, before pulling back out and resuming thrusting in and out of #!00#\'s mouth.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("Despite the fact that #!00# is trying to bite the tentacle, the tentacle just continues thrusting in and out of her mouth.\n\n");
                    }

                    break;

                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to bite the hood of the penis tentacle, just after it pulls out, before it thrusts back in.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle briefly makes a couple of shallow thrusts in and out of #!00#\'s mouth, before resuming thrusting in and out as it had before.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle just continues thrusting back into #!00#\'s mouth, as if nothing happened.\n\n");
                    }

                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to bite the shaft of the tentacle when it pulls out.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle just continues pistoning in and out of #!00#\'s mouth.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle briefly stops after pulling out, before resuming its violation of #!00#\'s mouth, as if it wasn\'t injured at all.\n\n");
                    }

                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to bite the shaft of the penis tentacle, just after it thrusts in, before it pulls back out.\n\n");
                    if (iRet != 0) return iRet;

                    if (cRandom2 == 0)
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The tentacle pulls back slightly, then rams back into #!00#\'s mouth, before resuming thrusting in and out of #!00#\'s mouth again.\n\n");
                    }
                    else
                    {
                        iRet = mdialog_addToDialogWithSrchRep ("The penis tentacle just continues pulling out into #!00#\'s mouth, as if nothing happened, continuing its rhythmic pistoning in and out of her mouth.\n\n");
                    }

                    break;

                }
                if (iRet != 0) return iRet;

                break;

            case 4:
                if (gstruct_GameVars.iClimaxCount2 == 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle is not thrusting away in her mouth, but #!00#\'s mouth is now full of tentacle semen, along with the penis tentacle itself. The penis tentacle is clearly not leaving her mouth.\n\nDespite how disgusting it is, #!00# swallows the semen.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("With her mouth full of semen, #!00# decides that she is going to swallow it, as the tentacle doesn\'t seem to want to let her spit it out.\n\n#!00# is successful in gulping down the semen, despite the fact that the penis tentacle does not want to vacate her mouth.\n\n");
                }
                if (iRet != 0) return iRet;

                break;

            case 5:
                if (gstruct_GameVars.iClimaxCount2 == 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("With her mouth full of what appears to be semen... not just semen... but semen from an unknown Tentacle Monster, makes #!00# want to throw up.\n\nJust as #!00# starts to gag on the semen, the penis tentacle pulls out from her mouth and lets her spit the semen out.\n\nBefore #!00# can get over it, the penis tentacle shoves itself back in her mouth.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# is grossed out by the fact that she has a load of tentacle semen in her mouth. She decides to spit it out. The penis tentacle, while motionless does not want to leave.\n\n#!00# decides to just open her mouth further and try and spit as much of the semen out. #!00# is reasonably successful in spitting the semen out of her mouth, and only some of it is left drooling down her chin.\n\n");
                }
                if (iRet != 0) return iRet;

                break;

            default:
                if (gstruct_GameVars.iClimaxCount2 == 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00#\'s mouth is full of tentacle semen and also the penis tentacle. At least the penis tentacle isn\'t pistoning in and out of her mouth right now.\n\nWhile the penis tentacle isn\'t moving, #!00# decides to bite it to get it to leave her mouth, and ends up chewing the semen that is in her mouth as well. The tentacle semen drools out of #!00#\'s mouth.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# finds that her mouth is full of tentacle monster semen, which seems to have some sort of solid-like consistency.\n\n#!00# tries chewing it, and ends up swallowing the semen in the process. #!00# thinks to herself \"strange... it is almost as if I was swallowing something liquid... not solid.\"\n\n");
                }
                if (iRet != 0) return iRet;

                break;
            }
        }

        if ((iSubSceneId == 4) || (iSubSceneId == 5) || (iSubSceneId == 6))
        {
            if (cChangeOver != 0)
            {
                if (cChangeOver == 2)
                {
                    // call the exit scene logic.
                    iRet = gamelogic01_scene1008 (0, cSubFlag + 1);
                    return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("Then something strange happens. It felt as if the penis tentacle has pulled out of #!00#\'s mouth, but #!00# is still staring at the penis tentacle.\n\n#!00# thinks to herself \"what is going on\?...\".\n\nThen #!00# feels the penis tentacle in her mouth again. #!00# can see and feel it thrusting in and out of her mouth again.\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("The penis tentacle resumes thrusting away in #!00#\'s mouth.\n\n");
            }
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1007 01 Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        // initialize.
        gamelogiccommon_initSexScene1 (20, 12, 180);

        // these are things that I override.
        cResult = 0;
        gstruct_GameVars.iClimaxCount2 = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if (cResult == 1)
    {
        iRet = mutils_addToCommandList ("Swallow tentacle semen", 1007, 4);
        if (iRet != 0) return iRet;
        iRet = mutils_addToCommandList ("Spit out tentacle semen", 1007, 5);
        if (iRet != 0) return iRet;
        iRet = mutils_addToCommandList ("Chew tentacle semen", 1007, 6);
        if (iRet != 0) return iRet;
    }
    else
    {
        if ((cResult != -1) || (iSubSceneId != 1))
        {
            iRet = mutils_addToCommandList ("Suck tentacle", 1007, 1);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 2))
        {
            iRet = mutils_addToCommandList ("Lick tentacle", 1007, 2);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 3))
        {
            iRet = mutils_addToCommandList ("Bite tentacle", 1007, 3);
            if (iRet != 0) return iRet;
        }
    }

    return 0;
}

//
// This is a sex scene exit point.
//
int gamelogic01_scene1008 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1008 01 Sex Scene Exit}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# gets over the last ejaculation... she starts to feel something strange about the Tentacle Monster around her.\n\nThen... the Tentacle Monster... just vanishes... but it is as if it is still there and restraining her.\n\n#!00# tries to talk, but for some reason her mouth is held open... then she hears someone talking.\n\nAs #!00# looks around, the darkness dissipates and she finds that she is back inside the cell again. The two elves are standing near her, having a conversation. Not that it does any good to listen to what they have to say, as #!00# cannot understand a single word of spoken Elven.\n\nThe neither of the two elves are even looking at #!00#. As she tries to move, #!00# discovers that there is something in her mouth holding it open. She can feel something rubbery with her tongue. Her next thought is to use her hands, but those seem to be restrained. #!00# can move her head, so she starts looking around.\n\n#!00# glances back at her left hand, then at her right hand and notices that both of them are tied down. #!00# then realizes that she is strapped onto the contraption that she saw against the left wall.\n\n#!00# flexes the muscles in her right arm and comes to the conclusion that the bonds holding her down aren\'t very strong. Unfortunately, by trying to move around, #!00# made a little bit too much noise and the two elves noticed that she was fully coherent again.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPainMagic1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPainMagic1 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf looks at #!00#, quickly says something to the Dark-Elf and starts chanting.\n\n#!00# barely thinks to herself \"Not this shit again...\" just before she passes out due to the sharp pain from the spell.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPainMagic1 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPainMagic1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to check upon her bonds and looks away from the two elves briefly. Just as #!00# starts to gauge the strength of the bonds holding her arms, she is distracted by something that the two elves are up to.\n\nJust as as #!00# is about to look at the two elves, to see what they are doing now, she quickly passes out from an intense pain.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPainMagic1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# starts to regain consciousness, partially due to the pounding in her head.\n\n\"Ugh...\"\n\n#!00# opens her eyes and looks around the cell, then sighs.\n\n\"Well... this is different...\"\n\nThis time, #!00# is sitting in a large lounge chair that is over in the rear-left corner of the cell and is not laying on the bed that is in the center of the room.\n\n#!00# moves her arms on the chair and hears the squealing noises of rubber against her skin. #!00# looks down at the chair to get a better look at it.\n\n\"Some sort of rubber... like the bed...\"\n\n#!00# stays sitting in the chair, and closes her eyes. The faint sound of the wind in the distance hasn\'t changed. She continues to sit in the chair, listening for another 5 minutes. Other than the wind in the distance, there are no other sounds... either metallic or footsteps.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Stay seated", 1010, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Stand up", 1011, 0);
    if (iRet != 0) return iRet;

    return 0;
}

