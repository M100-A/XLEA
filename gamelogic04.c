//
// gamelogic04.c
//
// This is group 4 of scene ids.
//

#include "common.h"
#include "gamelogic.h"

// external linkage to the game variables.
extern  struct  gamelogic_variablelist  gstruct_GameVars;
extern  char    gcDebugFlag;


//
// This is a sex scene process point.
//
int gamelogic04_scene1090 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1090 >Suck the Dark-Elf\'s penis up to the hilt}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1090 >Suck the tip of the Dark-Elf\'s penis}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1090 >Lick the shaft of the Dark-Elf\'s penis}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1090 >Lick the hood of the Dark-Elf\'s penis}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1090 >Swallow the Dark-Elf\'s semen}\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("{1090 >Spit out the Dark-Elf\'s semen}\n\n");
                break;

            case 7:
                iRet = mdialog_addToDialogWithSrchRep ("{1090 >Drool the Dark-Elf\'s semen on own breasts and massage it in}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1090 >Rub the Dark-Elf\'s balls}\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep (">Swallow the Dark-Elf\'s semen\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep (">Spit out the Dark-Elf\'s semen\n\n");
                break;

            case 7:
                iRet = mdialog_addToDialogWithSrchRep (">Drool the Dark-Elf\'s semen on own breasts and massage it in\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Rub the Dark-Elf\'s balls\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the hood of the Dark-Elf\'s penis.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the entire shaft of the Dark-Elf\'s penis with her tongue.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the hood of the Dark-Elf\'s penis with her tongue.\n\n");
                break;

            // 5, 6 & 7 are post climax actions, so they don't appear here.

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# rubs the Dark-Elf\'s testicles.\n\n");
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

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts to twitch and thrust his hips. ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# realizes that the Dark-Elf is about to climax so she quickly sticks the Dark-Elf\'s penis in her mouth.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"That\'s it... give it to me...\"\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts stroking the Dark-Elf\'s penis with her fingers and the Dark-Elf ejaculates a few times in #!00#\'s mouth.\n\n");

                break;

            case 2:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Two !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts to stiffen up and lightly thrust his hips again, so ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly sticks the Dark-Elf\'s penis in her mouth.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# keeps the Dark-Elf\'s penis inside her mouth.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("#!00# strokes the Dark-Elf\'s penis with her fingers again, and the Dark-Elf ejaculates inside of #!00#\'s mouth.\n\n");

                break;

            case 3:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Three !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf suddenly collapses on the bed, so ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly sticks the Dark-Elf\'s penis in her mouth.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# keeps the Dark-Elf\'s penis inside her mouth.\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("#!00# finds that she does not have to stroke the Dark-Elf\'s penis, as he is thrusting his cock in #!00#\'s mouth. The Dark-Elf climaxes and #!00# receives a couple more spurts of his semen.\n\nAfter his orgasm, the Dark-Elf just lays flat on the bed, breathing heavily.\n\n");

                break;

            default:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Four !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Dark-Elf is starting to tense up again. ");
                if (iRet != 0) return iRet;

                if ((iSubSceneId != 1) && (iSubSceneId != 2))
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sticks the Dark-Elf\'s penis in her mouth again.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"That\'s it... again...\"\n\n");
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf orgasms and ejaculates inside of #!00#\'s mouth. The Dark-Elf\'s body goes limp again.\n\n");

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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire shaft of the Dark-Elf\'s penis,");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the hood of the Dark-Elf\'s penis,");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the entire shaft of the Dark-Elf\'s penis with her tongue,");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the hood of the Dark-Elf\'s penis with her tongue,");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# swallows the Dark-Elf\'s semen,");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# spits the Dark-Elf\'s semen out,");
                break;

            case 7:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# drools the Dark-Elf\'s semen on her breasts and massages it in,");
                break;

            //Note: it is unlikely but NOT impossible for 5, 6 and 7 to trigger here. so I put in some basic text for them, to have something to cover if they are.

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# rubs the Dark-Elf\'s testicles,");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" but the Dark-Elf isn\'t as excited.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;

            if (cRandom1 == 1)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Not only tiny, but soft as well... You WILL get bigger for me...\"\n\n");
            }
            else if (cRandom1 == 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"This is proving to be difficult... I will just have to try harder then...\"\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Oh no you don\'t... Be a man and get big for me...\"\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by easily sucking the entire length of the Dark-Elf\'s penis. #!00# thinks to herself \"Definitely... Tiny...\"\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by sucking on the hood of the Dark-Elf\'s penis. #!00# thinks to herself \"If only he was bigger... This would be a lot easier...\"\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by licking the entire shaft of the Dark-Elf\'s penis, which does not take very long because there isn\'t as much of a penis for #!00# to lick. #!00# thinks to herself \"At least he is hard...\"\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by licking around the hood of the Dark-Elf\'s penis, which is an unusual experience for #!00# due to lack of length of the Dark-Elf\'s penis. #!00# thinks to herself \"To think that something so small would be so much effort...\"\n\n");
                break;

            // 5, 6 & 7 are post climax actions, so they won't be triggered at the start.

            // 8 is a later on in the scene action, so it won't be triggered at the start either.
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf twitches, then starts breathing heavily. #!00# thinks to herself \"Is this guy... a virgin\?..\"\n\n#!00# puts aside the potential for the Dark-Elf\'s inexperience when she remembers that he was using her as an onahole during previous visits.\n\n");
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
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently sucks on the entire shaft of the Dark-Elf\'s penis, then starts lightly twisting her head side to side while still maintaining the suction. #!00# then pulls back from the Dark-Elf\'s penis without sucking on it.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly sucks the entire shaft of the Dark-Elf\'s penis, then slowly pulls back from the Dark-Elf\'s penis while still sucking on it.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately sucks the entire shaft of the Dark-Elf\'s penis, then alternates between sucking harder and backing off, before tilting her head back and letting the Dark-Elf\'s penis slide out of her mouth.\n\n");
                    break;
                }
                break;

            case 2:
                cRandom1 = (rand() % 3);

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly kisses the hood of the Dark-Elf\'s penis, then proceeds to suck the entire hood of his penis into her mouth and lightly moves her head around in small circles, before letting the Dark-Elf\'s penis go.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire hood of the Dark-Elf\'s penis, first softly, then mildly, then softly, then hard, before letting the Dark-Elf\'s penis go.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the entire hood of the Dark-Elf\'s penis, then pulls back while still sucking lightly, letting the tip of Dark-Elf\'s penis almost slide out her mouth. Just as the Dark-Elf\'s penis is about to fall out, #!00# kisses the tip of the hood.\n\n");
                    break;
                }
                break;

            case 3:
                cRandom1 = (rand() % 3);

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00#, slowly and delicately, licks up and down the entire shaft of the Dark-Elf\'s penis with her tongue.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently licks, in random locations, along and around the Dark-Elf\'s penis.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# uses her tongue, licks up and down the top half of the Dark-Elf\'s penis a few times.\n\n");
                    break;
                }
                break;

            case 4:
                cRandom1 = (rand() % 3);

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly licks the hood of the Dark-Elf\'s penis, as if she is licking a lollipop.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently teases the hood of the Dark-Elf\'s penis with her tongue.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# swirls her tongue around the hood of the Dark-Elf\'s penis a few times.\n\n");
                    break;
                }
                break;

            case 5:
                cRandom1 = (rand() % 2);

                if (cRandom1 != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sits upright in front of the Dark-Elf, looks him in the eyes, smacks her lips, then gulps down the Dark-Elf\'s semen.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sits upright in front of the Dark-Elf, looks him in the eyes, licks her lips, then swallows the Dark-Elf\'s semen.\n\n");
                }

                if (gstruct_GameVars.iClimaxCount1 < 4)
                {
                    if (iRet != 0) return iRet;
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# then kneels back down and puts her head back in front of the Dark-Elf\'s crotch.\n\n");
                }

                break;

            case 6:
                cRandom1 = (rand() % 2);

                if (cRandom1 != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lifts her head up from the Dark-Elf\'s crotch, turns to the right and spits the Dark-Elf\'s semen out.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lifts her head up from the Dark-Elf\'s crotch, turns to the left and spits the Dark-Elf\'s semen out.\n\n");
                }

                if (gstruct_GameVars.iClimaxCount1 < 4)
                {
                    if (iRet != 0) return iRet;
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# then puts her head back in front of the Dark-Elf\'s crotch.\n\n");
                }

                break;

            case 7:
                cRandom1 = (rand() % 2);

                if (cRandom1 != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sits upright in front of the Dark-Elf, looks him in the eyes, and drools a combination of his semen and her saliva all over her own breasts. #!00# then starts massaging the liquid into her tits.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sits upright in front of the Dark-Elf, looks him in the eyes, and drools a combination of his semen and her saliva in between her own breasts. #!00# then grabs both of her breasts and starts massaging the liquid in between them. #!00# glances at the Dark-Elf\'s penis and thinks to herself \"It is a shame you are so small, because my tit-fucks are awesome...\"\n\n");
                }

                if (gstruct_GameVars.iClimaxCount1 < 4)
                {
                    if (iRet != 0) return iRet;
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# then kneels back down and puts her head back in front of the Dark-Elf\'s crotch.\n\n");
                }

                break;

            default:
                cRandom1 = (rand() % 3);

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly caresses the Dark-Elf\'s testicles using her fingers.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently rubs the Dark-Elf\'s testicles using the base of her open right palm.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately rubs the Dark-Elf\'s testicles using the base of her open left palm.\n\n");
                    break;
                }
                break;
            }
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.iArousalLevel1 > 120)
            {
                cRandom2 = (rand() % 3);

                if (cRandom2 == 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf lightly twitches, but settles down again.\n\n");
                    if (iRet != 0) return iRet;
                }
            }
        }

        // these are the climax results.
        if ((iSubSceneId == 5) || (iSubSceneId == 6) || (iSubSceneId == 7))
        {
            if (gstruct_GameVars.iClimaxCount1 > 3)
            {
                // call the exit scene logic.
                iRet = gamelogic04_scene1093 (0, cSubFlag + 1);
                return iRet;
            }
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1090 04 Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene1 (20, 12, 210);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if (cResult == 1)
    {
        iRet = mutils_addToCommandList ("Swallow the Dark-Elf\'s semen", 1090, 5);
        if (iRet != 0) return iRet;
        iRet = mutils_addToCommandList ("Spit out the Dark-Elf\'s semen", 1090, 6);
        if (iRet != 0) return iRet;
        iRet = mutils_addToCommandList ("Drool the Dark-Elf\'s semen on own breasts and massage it in", 1090, 7);
        if (iRet != 0) return iRet;
    }
    else
    {
        if ((cResult != -1) || (iSubSceneId != 1))
        {
            iRet = mutils_addToCommandList ("Suck the Dark-Elf\'s penis up to the hilt", 1090, 1);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 2))
        {
            iRet = mutils_addToCommandList ("Suck the tip of the Dark-Elf\'s penis", 1090, 2);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 3))
        {
            iRet = mutils_addToCommandList ("Lick the shaft of the Dark-Elf\'s penis", 1090, 3);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 4))
        {
            iRet = mutils_addToCommandList ("Lick the hood of the Dark-Elf\'s penis", 1090, 4);
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.iClimaxCount1 > 2)
        {
            if ((cResult != -1) || (iSubSceneId != 8))
            {
                iRet = mutils_addToCommandList ("Rub the Dark-Elf\'s balls", 1090, 8);
                if (iRet != 0) return iRet;
            }

            if (gstruct_GameVars.iArousalLevel1 > 110)
            {
                iRet = mutils_addToCommandList ("Stop and leave the Dark-Elf aroused", 1092, 0);
                if (iRet != 0) return iRet;
            }
            else
            {
                iRet = mutils_addToCommandList ("Let the Dark-Elf have a rest", 1091, 0);
                if (iRet != 0) return iRet;
            }
        }
    }

    return 0;
}

//
// "Let the Dark-Elf have a rest" Path Selection function.
//
int gamelogic04_scene1091 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1091 >Let the Dark-Elf have a rest}\n\n[set cFDarkElfRest1]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Let the Dark-Elf have a rest\n\n");
        if (iRet != 0) return iRet;
    }

    // give the dark elf a rest flag
    gstruct_GameVars.cFDarkElfRest1 = 1;

    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf is laying on the Rubber Latex bed, breathing heavily. The sexual encounter has taken its toll on him. #!00# looks at his penis, which is still has some life in it. #!00# decides that it would probably would not work out if she kept going.\n\n#!00# thinks to herself \"I can still kill him later...\"\n\nThen there is the minor problem of the Light-Elf, who #!00# hasn\'t been able to keep track of while she has been slurping the Dark-Elf\'s penis.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic04_scene1094 (0, cSubFlag + 1);
    return iRet;
}

//
// "Stop and leave the Dark-Elf aroused" Path Selection function.
//
int gamelogic04_scene1092 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1092 >Stop and leave the Dark-Elf aroused}\n\n[set cFDarkElfNeedy1]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stop and leave the Dark-Elf aroused\n\n");
        if (iRet != 0) return iRet;
    }

    // give the dark elf is needy flag
    gstruct_GameVars.cFDarkElfNeedy1 = 1;

    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf is on the verge of climaxing again. #!00# thinks to herself \"Maybe I have pushed you around enough...\"\n\nThe Dark-Elf notices that #!00# has stopped. Just as she is pulling away, the Dark-Elf grabs #!00#\'s head and slams his erect penis into her mouth.\n\n#!00# thinks \"Oooh... still has some...\"\n\n#!00#\'s internal monologue is interrupted by the Dark-Elf violently trying to shake #!00#\'s head up and down, while using her mouth as an onahole. Which isn\'t working very well, because #!00# is a lot stronger than he is, so the Dark-Elf is barely able to move her head at all.\n\n#!00# thinks \"Might as well help him blow his load...\"\n\n#!00# then vigorously sucks on the Dark-Elf\'s penis, while also licking the tip of it. Seconds later, the Dark-Elf climaxes, thrusting his crotch into #!00#\'s face and blasts the back of #!00#\'s throat with his semen. It only lasts for a couple of seconds and he collapses back onto the bed.\n\n#!00# thinks \"Not bad... now... for some extra service...\"\n\n#!00# has the option of spitting out his semen, swallowing it, or drooling it on her own breasts, but this time she decides to lean forward, drool his semen and her spit onto the Dark-Elf\'s exposed chest and then she starts to massage it in.\n\nThe moment that the Dark-Elf feels the warm drool come into contact with his chest, he flinches and looks at #!00#. #!00# just smiles at him and continues massaging the liquid into his chest. The Dark-Elf forces a smile, relaxes back onto the bed and closes his eyes, knowing that due to the insane difference in physical strength, he would not be able to stop her anyway. Besides... right now... he is completely fucked.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic04_scene1094 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic04_scene1093 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1093 04 Sex Scene Force End 1}\n\n[set cFDarkElfExhaust1]\n");
        if (iRet != 0) return iRet;
    }

    // give the dark elf is exhausted flag
    gstruct_GameVars.cFDarkElfExhaust1 = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the Dark-Elf, who is laying on the Rubber Latex bed, still breathing heavily. She thinks about continuing, but there is now a small problem and it is quickly getting smaller.\n\nThe Dark-Elf\'s penis is now completely flaccid.\n\n#!00# sighs \"If you were an orc, you would be good for at least 12 rounds... you didn\'t even make it halfway...\"\n\nThe thought crosses #!00#\'s mind that she could ram a finger up the Dark-Elf\'s anus and stimulate his prostrate, but there is the pesky issue of the Light-Elf still being around and she is not sure of what that moron will do.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic04_scene1094 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1091, 1092 and 1093 above.
//
int gamelogic04_scene1094 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1094 04 Sex Scene Merge 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# stands up and thinks \"Now... for the Light-Elf.,.\"\n\n#!00# turns around to see where the Light-Elf is, noticing that he is outside the entrance of the cell, peering around the edge of the door.\n\n#!00# thinks to herself \"Ah... smart\".\n\nThe Light-Elf isn\'t just using the cell bars as a shield, but has positioned himself so that the door is acting as additional protection as well.\n\nHowever, despite the two layers of vertical metal bars, #!00# can still clearly see him. The small bulge in his robes at his crotch is also obvious. #!00# smiles.\n\n\"So... how do you wanna do this \?\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf should have stayed further back, but his curiosity got the better of him, which gives #!00# an opening. From this distance, his enchantment won\'t be effective till after she got a few good punches in. Even if she rushed him, he could try forcing the door shut. #!02# locks don\'t close that quickly. However, this isn\'t an #!02# cell and that door latch has repeatedly been operated by the Dark-Elf quicker than she has seen any #!01# guard open one back in #!02#.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# considers her options. From this distance, his enchantment won\'t be effective till after she got a few good punches in. Even if she rushed him, he could close the door. It would take longer to close the lock... no... elven cell latches are likely to be different to what #!00# is used to back in #!02#.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Okay... this probably isn\'t going to work for me this time\".\n\nThe Light-Elf then speaks to #!00#. #!00# cannot understand Elven, so she has no idea what he is telling her.\n\n\"Eh\?.. what was that...\"\n\nThe Light-Elf starts to get impatient. He briefly steps out from behind the cell bars, repeats what he said and points with his left arm over to the left-rear corner of the cell.\n\n\"Oh...\"\n\n#!00# looks around at the direction that the Light-Elf was pointing.\n\n\"The chair...\"\n\n#!00# smiles and glances back at the Light-Elf...\n\n\"You should have said so...\"\n\n#!00# looks down at the Dark-Elf, who has half opened his eyes and is looking at #!00#. #!00# smiles at him and blows him a kiss. #!00# then walks around the bed, towards the rear corner of the cell where the chair is. As #!00# sits down in the chair, the latex rubber squeals and squelches as usual. She thinks to herself \"I should hide some dildos over here next time...\".\n\n#!00# sits in the chair contemplating that her every move is going to be more than obvious and elves are rumored to have good hearing anyway.\n\nAfter 10 seconds of #!00# remaining as still as she can, the Light-Elf says something and the Dark-Elf starts to stir.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"And here I was expecting the Light-one to wonder in... so much for that\".\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"That just blew the idea of luring the Light-one in\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("It takes a minute for the Dark-Elf to stagger back onto his feet, meanwhile the Light-Elf is regularly talking to him. The Dark-Elf then slowly limps towards the door of the cell. #!00# just watches quietly from her position on the chair in the corner. Just as the Dark-Elf is almost at the door, the Light-Elf quickly moves out from behind his wall and door shield, grabs the Dark-Elf and yanks him out of the cell. With the Dark-Elf collapsed in the hallway, the door is slammed shut and a clicking sound of the latch-bolt clearly fills the cell. #!00# thinks to herself \"As I suspected... Hmm... I wonder how strong that lock is\?\"\n\nThen the Light-Elf starts chanting and #!00# sighs \"Of course... again...\"\n\nThis time #!00# can start to feel the onset of the paralysis spell, as the muscles in her body betray and seize up on her. However, it isn\'t as effective as quickly as it was before, as it takes a while for the spell to properly take hold. Finally, #!00# passes out from the pain.\n\n\n[Some time Later...]\n\n#!00# wakes up. Same throbbing sensation in her head, but it is not as bad this time.\n\nAs she opens her eyes and looks around, #!00# thinks \"Am I getting used to this... or something...\"\n\n#!00# is still sitting on the chair in the corner of the cell. She does not need to check out her nipples and clitoris to know that the elven-pervert-duo did something to them again.\n\n\"This is starting to get monotonous.\"\n\n#!00# glances down at her breasts. At least they are not one size larger like the last time. She then gets up from the chair and decides to check out the cell.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("First the table. #!00# looks at it and notices that it is still there, along with the dildos. She walks over to the table and counts the dildos.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("First, the collection of dildos. #!00# walks over to where the table used to be, where the dildos are arranged on the floor. She counts the dildos.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"25...\"\n\nSo... it would appear that they took away the one that smashed into the wall and put back not only the 2 that she was threatening them with, but the other 3 that she was sitting on as well.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"If they are that concerned about detail...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("\"Okay... so... did they actually...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to check the bed, so she walks over to it and notices the spots where the semen and pussy juices had pooled and dried up. #!00# sighs.\n\n#!00# then looks over at where the contraption was, then checks the rest of the cell. As she turns around, she notices the door. It is closed and appears to be locked.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Hmm... I wonder...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("\"Well... let\'s try it...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# walks over to the door of the cell and touches the dark-slate-blue cell bars for the first time.\n\n\"Seems to be sturdy...\"\n\n#!00# flicks a bar with her index finger and listens to the sound from it.\n\n\"Hmm... sounds brittle... but this is elven shit... so...\"\n\n#!00# then looks over the cell door. There is something strange about the design. Then #!00# remembers that she has only ever seen the door open outwards from the cell. The latch-bolt is exposed inside the cell. And the outside...\n\n#!00# checks around the lock and finds that there is a metal-plate on the outside, preventing the door from opening inwards.\n\n\"Right... how is this thing held in again\?..\"\n\n#!00# looks for where the hinges are. There are only two, one at the top of the door and one at the bottom. #!00# ponders that whoever designed this door wasn\'t worried about the door potentially flexing.\n\n#!00# flicks the frame of the door with her index finger and listens to the sound from it.\n\n\"Same as the bars...\"\n\n#!00# bends down to get a better look at the latch-bolt. It is a solid bolt, made out of the same dark-slate-blue metal as the door, but only slightly smaller than one of the bars. #!00# then crouches down to the ground and inspects the lower door hinge even closer and comes to the conclusion that the door hinges are made of a thinner section of metal than the latch-bolt. #!00# mentally concludes \"the hinges are the weak spots\".\n\n#!00# stands up and lightly bangs the last of the door bars, using the palm of her right hand, near where the hinges are. She watches the resultant door vibration and listens to it.\n\n\"Hmm... quite sturdy...\"\n\n#!00# now hears the faint screeching of metal scraping on metal in the distance, sighs and thinks to herself \"well... I had better get away from the door\".\n\nAs she can hear the footsteps approaching from the corridor, #!00# walks back to the bed and sits on the edge, facing the door. After #!00# sits down... she remembers that she wanted to hide some dildos at the chair in the corner. Right now, she is out of time.\n\n#!00# sees the Dark-Elf first, then the Light-Elf. Then, when they reach the edge of the bars, both of them stop walking.\n\n#!00# thinks to herself \"Okay... what are you pervs up to this time\?..\"\n\nThe elves start by looking at #!00#, then around the cell. They are also talking to each other while doing so.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# cannot understand a word that they are saying, but she does notice that the Light-Elf takes some time looking at the collection of dildos on the table.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# cannot understand a word that they are saying, but she does notice that the Light-Elf spends some time looking at the collection of dildos that are arranged on the floor.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"So much for that idea... But... if they are worried about them being used as weapons... why leave them here\?\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sighs and thinks to herself \"What are they doing\?.. counting them\?.. oh well...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Eventually the Light-Elf looks at the Dark-Elf and mutters something. The Dark-Elf nods and just stands there... looking at #!00#. Then the Light-Elf steps forward.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Oh... taking a risk there... aren\'t you\?..\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Hmm... so it is the Light-one this time...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("After the Light-Elf finishes walking out of way of the Dark-Elf\'s line of sight, #!00# notices that the Dark-Elf is still staring straight at her. #!00# decides to ignore him for now, as she is more interested in what the Light-Elf is up to. Then #!00# remembers something.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Now... exactly how are you going to open the door\?\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Now that I think about it, only the Dark-one has ever opened that door.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Just before the Light-Elf reaches the door, he pulls out a key on a string from a pocket in his robes. #!00# notices that he is holding onto the key.\n\nWhen the Light-Elf arrives at the door, he inserts the key into the lock on the outside and turns it. The latch-bolt slides back with a click. The Light-Elf then opens the door slightly, removes the key from the lock, puts the key and string back into his pocket. He then opens the door partway, just enough for him to slide through. The Light-Elf quickly steps into the cell.\n\n#!00# briefly glances over at the Dark-Elf, who isn\'t doing anything and then looks at the Light-Elf.\n\nThe Light-Elf slams the door shut behind him and #!00# can hear the latch-bolt slide back into place. #!00# thinks to herself \"Nice to know elven stuff works this way... #!02# locks require the key to close them...\"\n\n#!00# considers for a moment that the Dark-Elf can open the door without a key, but anyone can lock it without a key. So, #!00# should also be able to lock the cell door. The Light-Elf is just standing there, looking at #!00#. A bead of sweat rolls down the side of his face. #!00# sighs and pats the bed to the left of her with her left hand.\n\n\"Sit here... I won\'t bite...\"\n\nThe Light-Elf briefly smiles and walks slowly over to #!00#\'s left. While he is doing that, #!00# briefly glances over at the Dark-Elf, who is just watching. #!00# looks at the Light-Elf again, watches him sit down next to her and notices that he already has an erection.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"He is a bit more confident than the Dark-one. He believes that his friend will save him.\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"You are taking quite a risk... so I can suck your cock.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# puts aside the fact that she could have killed the Light-Elf any time after he closed the door and there would have been nothing that the Dark-Elf could do to stop her. While the Dark-Elf seems to be able to cast his enchantments slightly faster than the Light-Elf, it would have been more than enough time for #!00# to leap off the bed and seriously injure, if not kill, the Light-Elf.\n\nThe Light-Elf pulls up his robes, exposing his already erect penis.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Give the Light-Elf an \'Are you kidding\' look", 1100, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Ignore his tiny penis and get to work", 1101, 0);
    if (iRet != 0) return iRet;

    return 0;
}

