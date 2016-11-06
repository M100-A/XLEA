//
// gamelogic05.c
//
// This is group 5 of scene ids.
//

#include "common.h"
#include "gamelogic.h"

// external linkage to the game variables.
extern  struct  gamelogic_variablelist  gstruct_GameVars;
extern  char    gcDebugFlag;


//
// "Give the Light-Elf an 'Are you kidding' look" Path Selection function.
//
int gamelogic05_scene1100 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1100 >Give the Light-Elf an \'Are you kidding\' look}\n\n[set cFLightElfHumilate]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Give the Light-Elf an \'Are you kidding\' look\n\n");
        if (iRet != 0) return iRet;
    }

    // set the humiliation of the light elf flag.
    gstruct_GameVars.cFLightElfHumilate = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# takes one look at the Light-Elf\'s tiny penis...\n\n\"The Dark-one is bigger\?!..\"\n\n#!00# just sits there, looking at the Light-Elf\'s face. Initially, the Light-Elf does not understand, glances down at his own erection and then at #!00#. The Light-Elf then slightly relaxes his posture and leans back. He props himself up on his elbows and sighs...\n\n#!00# thinks to herself \"Might as well not keep him waiting...\"\n\n#!00# crawls off the edge of the bed and positions herself so that she is in front of the Light-Elf.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic05_scene1102 (0, cSubFlag + 1);
    return iRet;
}

//
// "Ignore his tiny penis and get to work" Path Selection function.
//
int gamelogic05_scene1101 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1101 >Ignore his tiny penis and get to work}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Ignore his tiny penis and get to work\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to get over the fact that the Light-Elf\'s penis is actually smaller than the Dark-Elf\'s. She stands up, steps over in front of the Light-Elf and crouches down in front of him.\n\nTo give #!00# better access to his erection, the Light-Elf leans back and props himself up with his elbows.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic05_scene1102 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1100 and 1101 above.
//
int gamelogic05_scene1102 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1102 05 Pre-Scene Merge 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# starts to lick the Light-Elf\'s penis.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic05_scene1103 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic05_scene1103 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1103 >Suck the Light-Elf\'s penis up to the hilt}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1103 >Suck the tip of the Light-Elf\'s penis}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1103 >Lick the shaft of the Light-Elf\'s penis}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1103 >Lick the hood of the Light-Elf\'s penis}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1103 >Swallow the Light-Elf\'s semen}\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("{1103 >Spit out the Light-Elf\'s semen}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1103 >Drool the Light-Elf\'s semen on own breasts and massage it in}\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep (">Swallow the Light-Elf\'s semen\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep (">Spit out the Light-Elf\'s semen\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Drool the Light-Elf\'s semen on own breasts and massage it in\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the hood of the Light-Elf\'s penis.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the entire shaft of the Light-Elf\'s penis with her tongue.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the hood of the Light-Elf\'s penis with her tongue.\n\n");
                break;

            // 5, 6 and 7 will not appear for a climax action.

            }
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.iClimaxCount1 == 1)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("<Climax A !>\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf\'s body starts to stiffen a little bit, so #!00# ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("quickly swallows the hood of");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("continues to suck on");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" the Light-Elf\'s penis and starts stroking him off.\n\nThe Light-Elf grunts and ejaculates a few times in #!00#\'s mouth.\n\n");
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("<Climax B !>\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf\'s body starts to stiffen again, so #!00# ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("quickly sticks the hood of the Light-Elf\'s penis in her mouth and strokes the shaft of his penis again.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("continues to suck on the Light-Elf\'s penis and strokes him off again.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf grunts and ejaculates a couple more times in #!00#\'s mouth...\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire shaft of the Light-Elf\'s penis,");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the hood of the Light-Elf\'s penis,");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the entire shaft of the Light-Elf\'s penis with her tongue,");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the hood of the Light-Elf\'s penis with her tongue,");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# swallows the Light-Elf\'s semen,");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# spits the Light-Elf\'s semen out,");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# drools the Light-Elf\'s semen on her breasts and massages it in,");
                break;

            //Note: it is unlikely but NOT impossible for 5, 6 and 7 to trigger here. so I put in some basic text for them, to have something to cover if they are.

            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" but the Light-Elf\'s penis is starting to go soft. #!00# glances at the Light-Elf\'s face and notices that there is a hint of displeasure starting to show.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom2 = rand() % 3;

            if (cRandom2 == 1)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Trouble-maker... get hard again already...\"\n\n");
            }
            else if (cRandom2 == 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"So much for being a tough guy... I need to change things a bit...\"\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Mister Difficult is being... Difficult... Okay... I need to keep things interesting...\"\n\n");
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

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# switches to sucking the entire shaft of the Light-Elf\'s penis, which isn\'t easy because he is smaller than the Dark-Elf.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# switches to sucking the hood of the Light-Elf\'s penis.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# continues licking along the shaft of the Light-Elf\'s penis.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# continues licking the hood of the Light-Elf\'s penis.\n\n");
                break;

            //Note: 5, 6 & 7 should not show up for a start.
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep ("#!00# glances at the face of the Light-Elf and notices that he still has his poker-faced expression, despite the fact that he has a boner. #!00# thinks to herself \"So... you\'re tough guy...\"\n\n");
            if (iRet != 0) return iRet;
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
                cRandom1 = (rand() % 3);

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently sucks on the entire shaft of the Light-Elf\'s penis, then starts lightly bobbing her head up and down while still maintaining the suction. #!00# then pulls back from the Light-Elf\'s penis while still sucking on it.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly sucks the entire shaft of the Light-Elf\'s penis, then slowly pulls back from the Light-Elf\'s penis without sucking it, but teasing it with her tongue.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately sucks the entire shaft of the Light-Elf\'s penis, then alternates between sucking harder and backing off, before gently retreating from the Light-Elf\'s penis without sucking or touching it with her lips or tongue.\n\n");
                    break;
                }
                break;

            case 2:
                cRandom1 = (rand() % 3);

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly smooches the hood of the Light-Elf\'s penis, then proceeds to suck the entire hood of his penis into her mouth. #!00# continues to kiss the entire hood of the Light-Elf\'s penis.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire hood of the Light-Elf\'s penis, first softly, then mildly, then softly, then hard, before letting the Light-Elf\'s penis go.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire hood of the Light-Elf\'s penis, then pulls back while still sucking lightly, letting the tip of Light-Elf\'s penis almost slide out her mouth. Just as the Light-Elf\'s penis is about to fall out, #!00# flicks the tip of the hood with her tongue.\n\n");
                    break;
                }
                break;

            case 3:
                cRandom1 = (rand() % 3);

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00#, slowly and delicately, licks up and down the entire shaft of the Light-Elf\'s penis with her tongue.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently licks, in random locations, along and around the Light-Elf\'s penis.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# uses her tongue, licks up and down the top half of the Light-Elf\'s penis a couple of times, before licking along the entire shaft another couple more times.\n\n");
                    break;
                }
                break;

            case 4:
                cRandom1 = (rand() % 3);

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly licks the hood of the Light-Elf\'s penis, as if she is licking a very small ice-cream.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently teases the hood of the Light-Elf\'s penis with her tongue, before giving it a sloppy kiss, then goes back to just teasing the hood with her tongue again.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# swirls her tongue around the hood of the Light-Elf\'s penis a few times.\n\n");
                    break;
                }
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sits up front of the Light-Elf, looks him in the eyes, licks and smacks her lips, then swallows the Light-Elf\'s semen.\n\n#!00# then kneels back down and puts her head back in front of the Light-Elf\'s crotch.\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lifts her head up from the Light-Elf\'s crotch, looks down, and spits the Light-Elf\'s semen out on the floor next to the bed.\n\n#!00# then puts her head back in front of the Light-Elf\'s crotch.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sits upright in front of the Light-Elf, looks him in the eyes, and drools a combination of his semen and her saliva all over her own breasts. #!00# then starts massaging the liquid into her own breasts. The Light-Elf\'s expression does not change while she is doing this, but it it is obvious that he likes what he is seeing because #!00# can see his penis twitching.\n\n#!00# then kneels back down and puts her head back in front of the Light-Elf\'s crotch.\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }

        // these are the climax results.
        if ((iSubSceneId == 5) || (iSubSceneId == 6) || (iSubSceneId == 7))
        {
            if (gstruct_GameVars.iClimaxCount1 > 1)
            {
                // call the exit scene logic.
                iRet = gamelogic05_scene1104 (0, cSubFlag + 1);
                return iRet;
            }
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1103 05a Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene1 (20, 12, 220);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if (cResult == 1)
    {
        iRet = mutils_addToCommandList ("Swallow the Light-Elf\'s semen", 1103, 5);
        if (iRet != 0) return iRet;
        iRet = mutils_addToCommandList ("Spit out the Light-Elf\'s semen", 1103, 6);
        if (iRet != 0) return iRet;
        iRet = mutils_addToCommandList ("Drool the Light-Elf\'s semen on own breasts and massage it in", 1103, 7);
        if (iRet != 0) return iRet;
    }
    else
    {
        if ((cResult != -1) || (iSubSceneId != 1))
        {
            iRet = mutils_addToCommandList ("Suck the Light-Elf\'s penis up to the hilt", 1103, 1);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 2))
        {
            iRet = mutils_addToCommandList ("Suck the tip of the Light-Elf\'s penis", 1103, 2);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 3))
        {
            iRet = mutils_addToCommandList ("Lick the shaft of the Light-Elf\'s penis", 1103, 3);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 4))
        {
            iRet = mutils_addToCommandList ("Lick the hood of the Light-Elf\'s penis", 1103, 4);
            if (iRet != 0) return iRet;
        }
    }

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic05_scene1104 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1104 05a Sex Scene Force End 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf is still leaning back on the bed and his penis is still erect. #!00# comes to the conclusion that he is still good for a few more rounds.\n\n\"Okay... again...\"\n\nThen, #!00# hears chanting from behind her and her vision starts to fade.\n\n\"What...\"\n\n#!00# glances back behind her to see the Dark-Elf chanting, on the other side of the closed door.\n\n\"You little prick...\"\n\n#!00#\'s vision goes dark and she is back inside the Dream-Vision again.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Okay... the Light-one had his cock sucked, was also the diversion... and the Dark-one did his thing.\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sighs and thinks to herself \"Well... this has been another disaster.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# can feel some dulled sensations with her body, which she can only assume means that her real body is being moved again.\n\nThen, the Tentacle Monster appears again.\n\n\"This trick is starting to get old...\"\n\nSimilar to the previous time, the Tentacles wrap around #!00#\'s crotch and breasts. Then #!00#\'s right nipple starts tingling.\n\n\"... very old.\"\n\nThe tingling spreads to #!00#\'s left nipple, then to her clitoris.\n\n\"Is this ALL... this time\?\"\n\nThen the Tentacle Monster starts moving again, but #!00# can start feeling a stronger tingling in her entire right breast.\n\n\"Obviously not...\"\n\nIt is followed by the same feeling in her left breast, then a tentacle reaches up towards her mouth, but stops just in front of her face...\n\n\"This is starting to...\"\n\nSuddenly, #!00# feels something, pushing into her pussy. Then there is something else, forcing itself into her anus.\n\n#!00# thinks \"Not orc sized... but maybe bigger than those tiny dildo things.\"\n\n\"There is no way those are those small dildo things and they are too big to be either of those small-dicks...\"\n\nThen the tentacle that is in front of #!00#\'s face forces it\'s way into her mouth and #!00# can feel something there...\n\nThe vision of the Tentacle Monster flickers.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"This has to be the Dark-one... meaning it is the Light-one at the rear...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Dark-one... very well...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic05_scene1105 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic05_scene1105 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1105 >Suck the tentacle up to the hilt}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1105 >Suck the tip of the tentacle}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1105 >Lick the shaft of the tentacle}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1105 >Lick the hood of the tentacle}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1105 >Swallow tentacle semen}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1105 >Spit out tentacle semen}\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Suck the tentacle up to the hilt\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Suck the tip of the tentacle\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Lick the shaft of the tentacle\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Lick the hood of the tentacle\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep (">Swallow tentacle semen\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Spit out tentacle semen\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the top part of the tentacle.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the hood of the tentacle.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the top part of the tentacle.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the hood of the tentacle.\n\n");
                break;

            //Note: 5 & 6 are post climax actions and should not trigger a climax.
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

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle ignores #!00#\'s licking and tries forcing its way back into #!00#\'s mouth. The tentacle is pulsating. #!00# smiles and lets the tentacle enter her mouth and starts sucking on it.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle starts to twitch and shudder inside of #!00#\'s mouth. #!00# smiles and continues to suck on the tentacle.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("A couple of seconds later, the tentacle ejaculates inside of #!00#\'s mouth.\n\nThis time, rather than just staying inside #!00#\'s mouth, the tentacle pulls out. #!00# thinks to herself \"How considerate... for a change... now... what am I going to do with this stuff\?..\"\n\n");

                break;

            case 2:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Two !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle tries forcing its way into #!00#\'s mouth again. #!00# thinks to herself \"Is it that time already\?..\"\n\n#!00# lets the tentacle enter her mouth and starts sucking on it.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle starts to twitch and pulsate inside of #!00#\'s mouth. #!00# thinks to herself \"Already\?..\"\n\n#!00# continues to suck on the tentacle.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("The tentacle ejaculates inside of #!00#\'s mouth.\n\nAfter finishing filling #!00#\'s mouth with semen, the tentacle withdraws.\n\n");

                break;

            case 3:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Three !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("As she is licking the tentacle, #!00# notices that it is moving erratically again, so she just opens her mouth and lets it enter. #!00# starts sucking on the tentacle.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("While sucking the tentacle, #!00# notices that the tentacle is twitching and moving erratically. #!00# continues to suck on the tentacle.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("Again, the tentacle ejaculates inside of #!00#\'s mouth.\n\nAfter finishing filling #!00#\'s mouth with semen, the tentacle withdraws again.\n\n");

                break;

            case 4:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Four !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("As #!00# licks the tentacle, #!00# notices that it is a little bit hesitant. Then the tentacle tries to force its way into #!00#\'s mouth. #!00# decides to accept the change of plan and suck on the tentacle instead.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# continues to suck on the tentacle, when it starts to twitch again.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("However, it appears to be a little bit too early as the tentacle does not ejaculate. #!00# thinks to herself \"Maybe I should help him out\".\n\n#!00# switches from just lightly sucking on the tentacle, to firmly sucking on the tentacle and swirling her tongue around the hood. Seconds later the tentacle ejaculates in #!00#\'s mouth.\n\nThe tentacle withdraws after filling #!00#\'s mouth with semen.\n\n");

                break;

            default:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Five !]\n");
                    if (iRet != 0) return iRet;
                }

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("Suddenly, the tentacle pulls away from #!00#\'s tongue and tries to force its way back into her mouth. #!00# thinks to herself \"Okay... I get the idea...\"\n\n#!00# opens her mouth and lets the tentacle in. #!00# decides to not bother with just sucking the tentacle, so she sucks and licks the tentacle at the same time.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle starts to pulsate inside #!00#\'s mouth. #!00# wonders if she should help the Tentacle Monster along, and decides to actively suck and lick the tentacle in her mouth again.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("The tentacle ejaculates inside of #!00#\'s mouth, then suddenly pulls away.\n\n");

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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the top part of the tentacle.");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the hood of the tentacle.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the top part of the tentacle.");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the hood of the tentacle.");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# swallows some tentacle semen.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# spits out some tentacle semen.");
                break;

            // Note: 5 & 6 are unlikely to trigger, but I included them here incase the impossible happens.
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" However, it would appear that the tentacle isn\'t very enthusiastic, or as hard as before.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom2 = rand() % 3;

            if (cRandom2 == 1)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"I\'m really starting to get tired of this illusion and so should you... I should change things around... take a hint...\"\n\n");
            }
            else if (cRandom2 == 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"This is going nowhere... I should spice things up a little bit...\"\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"What do you expect... I can\'t work very well under THESE sort of conditions... you should let me do this to you for real... ... I REALLY need to switch things around...\"\n\n");
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

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts sucking on the tentacle and it responds by snaking into her mouth. However, the tentacle stops and does not go any further, despite the fact that there appears to be a lot more of it. #!00# thinks to herself \"So much for deep-throating this thing...\"\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by sucking on the tip of the tentacle that is in her mouth. The tentacle tries to force itself into #!00#\'s mouth, but she blocks it\'s entrance with her tongue. The tentacle just sits there and lets #!00# suck on it. #!00# thinks to herself \"That\'s it... you are getting the idea...\"\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by pushing the tentacle out of her mouth with her tongue and trying to lick the outside of it. After a while the tentacle gets the idea and allows her to lick around the outside of it. #!00# thinks to herself \"This would be a LOT easier if I could actually see what I was doing to YOUR real cock...\"\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by licking the hood of the tentacle that is at her mouth. The tentacle responds by not really doing anything, then trying to force itself into #!00#\'s mouth. #!00# stops the tentacle from forcing it\'s way in using her tongue. #!00# thinks to herself \"Just let me move as I want... and stop pretending to be something that you are not...\"\n\n");
                break;

            //Note: 5 & 6 are post climax actions and will not be triggerable at the start.
            }
            if (iRet != 0) return iRet;
        }
        else
        {
            switch (iSubSceneId)
            {
            case 1:
                cRandom1 = (rand() % 2);

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the tentacle, which for some reason wants to escape. #!00# sucks on the tentacle a little bit more firmly, pulling in as much as possible, to make sure that it isn\'t going anywhere. #!00# then stops sucking on the tentacle, allowing it to retreat.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the tentacle in her mouth. The tentacle goes along with it and also thrusts inside of #!00#\'s mouth. The tentacle then withdraws and thrusts into #!00#\'s mouth again. #!00# stops sucking on the tentacle, to allow it to pull back.\n\n");
                break;

            case 2:
                cRandom1 = (rand() % 2);

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the tip of the tentacle. The tentacle is rather happy with that and just lets #!00# continue to suck it.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the hood of the tentacle, but the tentacle tries to lightly force itself further into her mouth. #!00# stops its advance with her tongue and continues sucking the hood of the tentacle.\n\n");
                break;

            case 3:
                cRandom1 = (rand() % 2);

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# opens her mouth and tries to lick the shaft of the tentacle. The tentacle decides to thrust itself in and out of her open mouth, so #!00# continues licking it as it thrusts in and out.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# opens her mouth and licks the shaft of the tentacle. The tentacle remains almost motionless, allowing #!00# to continue licking it.\n\n");
                break;

            case 4:
                cRandom1 = (rand() % 2);

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently forces the tentacle out of her mouth with her tongue and licks the hood of it. The tentacle goes along with it and lets #!00# lick its tip. #!00# then opens her mouth a little bit, to allow the tentacle back into her mouth.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# pushes the tentacle out of her mouth with her tongue and licks the hood of it. The tentacle seems to have other ideas and tries to force its way back inside her mouth. #!00# does not let the tentacle past her lips and continues to lick just the hood of it. Eventually, #!00# opens her mouth so that the tentacle can enter again.\n\n");
                break;

            case 5:
                cRandom1 = (rand() % 2);

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# opens her mouth and shows off the semen that she had collected there, then closes her mouth and swallows the tentacle semen.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tilts her head back and swallows the tentacle semen.\n\n");

                if (gstruct_GameVars.iClimaxCount1 < 5)
                {
                    if (iRet != 0) return iRet;
                    iRet = mdialog_addToDialogWithSrchRep ("After #!00# finished swallowing the semen, the tentacle presses itself against her lips again.\n\n");
                }

                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# spits out the tentacle semen, not having much in the way of options as to how or where the mouthful of semen is going to go.\n\n");

                if (gstruct_GameVars.iClimaxCount1 < 5)
                {
                    if (iRet != 0) return iRet;
                    iRet = mdialog_addToDialogWithSrchRep ("After #!00# has finished spitting out the semen, the tentacle hovers in front of her mouth again.\n\n");
                }

                break;
            }
            if (iRet != 0) return iRet;
        }

        // these are the climax results.
        if ((iSubSceneId == 5) || (iSubSceneId == 6))
        {
            if (gstruct_GameVars.iClimaxCount1 > 4)
            {
                // call the exit scene logic.
                iRet = gamelogic05_scene1106 (0, cSubFlag + 1);
                return iRet;
            }
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1105 05b Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene1 (20, 12, 220);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if (cResult == 1)
    {
        iRet = mutils_addToCommandList ("Swallow tentacle semen", 1105, 5);
        if (iRet != 0) return iRet;
        iRet = mutils_addToCommandList ("Spit out tentacle semen", 1105, 6);
        if (iRet != 0) return iRet;
    }
    else
    {
        if ((cResult != -1) || (iSubSceneId != 1))
        {
            iRet = mutils_addToCommandList ("Suck the tentacle up to the hilt", 1105, 1);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 2))
        {
            iRet = mutils_addToCommandList ("Suck the tip of the tentacle", 1105, 2);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 3))
        {
            iRet = mutils_addToCommandList ("Lick the shaft of the tentacle", 1105, 3);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 4))
        {
            iRet = mutils_addToCommandList ("Lick the hood of the tentacle", 1105, 4);
            if (iRet != 0) return iRet;
        }
    }

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic05_scene1106 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1106 05b Sex Scene Force End 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The tentacle that #!00# was giving fellatio to, disappears. Then the entire Tentacle Monster vanishes, leaving #!00# floating, alone, inside the Dream-Vision.\n\nHowever, she can still feel something holding open her slit and something else holding open her anus.\n\n#!00# wonders \"what\'s next\?..\"\n\nThen #!00# starts to feel a painful sensation... all over her body...\n\n\"Light-one... has to be.\"\n\nThe pain escalates sharply, till #!00# passes out from it.\n\n\n[Some time Later...]\n\n#!00# wakes up. Her headache is milder this time, but the same cannot be said for her nipples and clitoris.\n\n\"Rrrgh... so fucking HORNY...\"\n\n#!00# is still flat on the bed, her pussy still has a dildo in it and her butt is sitting in a shallow pool of her own pussy juices. There is a dildo still stuffed in her anus.\n\nAs far as #!00# can tell, the dildos that are inside of her are slightly larger than what the elves had used on her before, but are still no where as large as the size of an male orc\'s penis... when flaccid.\n\nEven so, the twin obstructions at her abdomen is causing her issues. Especially when her genitals are swollen and throbbing due to the constant stimulation. The stimulation is caused by illicit elven substances, that are still present within her body.\n\n#!00# has to exert a lot of willpower to not just finger herself for the sake of a quick orgasm. Not that it will do much good, because her libido is so severely elevated, #!00# knows that her arousal won\'t subside anyway.\n\n\'Loosing it\' appears to be something that those two small-dicked elves want.\n\nHowever, the dildos are in the way right now. #!00# considers removing both of them.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Leave the dildos in", 1110, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Pull the dildos out", 1111, 0);
    if (iRet != 0) return iRet;

    return 0;
}

