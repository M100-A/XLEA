//
// gamelogic03.c
//
// This is group 3 of scene ids.
//

#include "common.h"
#include "gamelogic.h"

// external linkage to the game variables.
extern  struct  gamelogic_variablelist  gstruct_GameVars;
extern  char    gcDebugFlag;


//
// "Try and ignore this sensation and sit down" Path Selection function.
//
int gamelogic03_scene1060 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1060 >Try and ignore this sensation and sit down}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Try and ignore this sensation and sit down\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# comes to the conclusion that masturbating, under such circumstances is not a good idea.\n\n\"Rrrgh...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Conflicted, #!00# strides away from the table, along with its dildos. She is about to pass the bed, on the way to the chair, when she looks at the bed then glances at the chair.\n\n\"Oh... FUCK IT...\"\n\n#!00# jumps in the air and body slams into the middle of the bed. The entire bed lifts up, 1 inch off the floor and crashes back down again, with #!00# on top of it.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic03_scene1064 (0, cSubFlag + 1);
        return iRet;
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# strides away from the table, on her way to the chair and is about to pass the bed. #!00# stops and looks at the bed.\n\n#!00# considers things for a moment, glances back at the table, and sighs.\n\n\"To hades with this...\"\n\n#!00# stomps back over to the table, quickly grabs a couple of orc phallus sized dildos from it and storms back to the bed.\n\n#!00# then crouches down next to the bed and crawls into the middle of it.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic03_scene1063 (0, cSubFlag + 1);
        return iRet;
    }
}

//
// "Grab some dildos and head over to the bed" Path Selection function.
//
int gamelogic03_scene1061 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1061 >Grab some dildos and head over to the bed}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Grab some dildos and head over to the bed\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# picks out two dildos that are a convenient size... each one the size of an erect male orc penis.\n\n#!00# then wonders over to the bed in the middle of the cell, crouches down and crawls into the middle of the bed.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1063 (0, cSubFlag + 1);
    return iRet;
}

//
// "Ignore the dildos and head over to the bed" Path Selection function.
//
int gamelogic03_scene1062 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1062 >Ignore the dildos and head over to the bed}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Ignore the dildos and head over to the bed\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Despite the fact that she is feeling... rather horny... and in desperate need for a decent orc cock... or two... #!00# decides that she will make do without the elven toys and will rely upon her own fingers instead.\n\n#!00# walks over to the bed in the center of the cell, crouches down and crawls into the center of the bed.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1064 (0, cSubFlag + 1);
    return iRet;
}

//
// start of a scene where the PC masturbates with dildos.
//
int gamelogic03_scene1063 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // set the extra internal dialog flag.
    gstruct_GameVars.cFDildoFun1 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1063 03 Pre-Scene Merge 1}\n\n[set cFDildoFun1]\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# considers that she should start licking the dildos, but then realizes that her pussy is practically drooling juices already.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"Just what did those two perverts do to me anyway\?..\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"How convenient...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# lays flat on her back, arches her legs and slides the first dildo into her pussy part way. While doing so... her arousal increases. #!00# breathes heavily a couple of times, slowly... to try and reduce her arousal and then takes the dildo out of her pussy. The first half of the dildo is now glistening with her pussy juices.\n\n#!00# then arches her back and pushes the first half of the first dildo into her anus, partway, slowly... not suddenly, so to not try to not increase her arousal too much. She then leaves the first dildo stuffed in her anus and gropes around on the bed nearby for the second dildo.\n\nAfter a few seconds, #!00# manages to successfully grab the second dildo and slowly pushes the first half of it into her pussy. The entire time #!00# is breathing heavily, because her arousal is skyrocketing.\n\n#!00# knows that if she makes any sudden moves, she will mess this up. She has done this before... this IS her favorite dildo masturbation trick.\n\nThen with both of the dildos half way and positioned right, her legs tense up. #!00# lifts her butt off of the bed, grabs the base of the first dildo with her left hand, the base of the second dildo with her right and...\n\n#!00# simultaneously pushes both dildos into each of her lower orifices at the same time, while stimulating her clitoris with her right wrist.\n\nMoments later... #!00# climaxes.\n\nNormally... #!00# would not climax so quickly, but under the influence of a considerable dose of elven aphrodisiacs, it was too easy.\n\n#!00# also squirted pussy juices with such force that it spattered into the wall above the table and left a trail along the floor back to the bed. Normally there would only be a trickle.\n\nIf #!00# had been a human or elf, she could have passed out from the pleasure overload. On the other-hand, orcs are a lot more resilient to both pleasure and pain. It is part of what makes them so formidable on the battlefield.\n\n#!00# collapses onto the bed, giddy in the afterglow. Somewhere in her mind, #!00# knows it was too quick... but she is craving more anyway.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Go another round", 1066, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Stop for now", 1065, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// scene where the PC masturbates without dildos.
//
int gamelogic03_scene1064 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1064 03 Pre-Scene Merge 2}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("As #!00# flips onto her back, she discovers that her pussy is drooling already.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"Damn those fucking elves... making me like this...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"It\'s like a river down there...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("When it comes to masturbating with your fingers, orcs don\'t start with one... or three... so #!00# shoves all 4 fingers of her right hand into her pussy, while her left hand starts to play with her clitoris.\n\nFingering, in the orc sexual context, isn\'t nice and slow, it is rapid, jerky and hard movements with all 4 digits.\n\nThe Orc definition of teasing a clitoris, does not involve lightly touching either. The elven verses orc comparison would be comparing being slapped in the face only once, by an elf, to being punched in the gut, a dozen times, by an orc.\n\nLess than a minute later, #!00# is rewarded with an orgasm. In the process she lifts her butt up into the air and sprays some pussy juices around the cell.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("While #!00# is laying on the bed, recovering from her orgasm... she thinks to herself \"A lot faster... than I was expecting... whatever this shit is... it is dangerous\".\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("While #!00# is laying on the bed, recovering from her orgasm... she thinks \"Okay... that was a lot quicker than I was expecting\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00#\'s breathing slows, but her arousal doesn\'t...\n\n\"Well... shit... okay.\"\n\n#!00# then continues to jill herself off again.\n\n\n[4 minutes later...]\n\n#!00#\'s back arcs back and her legs lift her butt up off the bed, as she climaxes for the eighth time. Her muscles are starting to ache a little, so she collapses back onto the bed.\n\nThis time, #!00# decides to calm down and stop, despite telling herself repeatedly since 2 minutes ago that she should have a break. This time, she hasn\'t given into her libido and started masturbating again.\n\n#!00# lays there, in a pool of her own pussy juices. And there is more of it on the floor. Her third climax was particularly violent, that her juices left a spray arc across the wall, next to the table.\n\nAfter about half a minute, #!00#\'s right hand starts to reach for her clitoris again, but she grabs it with her left. She already knows that just touching her sensitive clitoris again will set her off. That is what lead to her fourth orgasm.\n\n#!00# tries to calm herself down and slow her breathing. It does not help that her sensitive spots still buzzing. Even her anus, which she fingered with her left hand for her fifth and sixth orgasms, is a lot more sensitive than she is used to.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"Yeah... whatever this shit is... definitely dangerous.\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic03_scene1078 (0, cSubFlag + 1);
    return iRet;
}

//
// "Stop for now" Path Selection function.
//
int gamelogic03_scene1065 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1065 >Stop for now}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stop for now\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks about stopping... but...\n\n\"Ah... Fuck it...\"\n\n#!00# decides to have some more fun anyway.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1067 (0, cSubFlag + 1);
    return iRet;
}

//
// "Go another round" Path Selection function.
//
int gamelogic03_scene1066 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1066 >Go another round}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Go another round\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to have some more fun.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1067 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1065 and 1066 above.
//
int gamelogic03_scene1067 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1067 03 Pre-Scene Merge 3}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# starts her second session with rubbing her enlarged clitoris with her right thumb, while grabbing and rotating the base of the two dildos with both of her hands. The second dildo comes free and it starts to slide out of her pussy.\n\n#!00# can feel it running away, so she grabs it and pulls it back, hard. The entire dildo vanishes into her pussy, pops out again. As #!00# grabs the dildo, she accidentally rubs her own clitoris and climaxes again.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Go another round", 1069, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Stop for now", 1068, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Stop for now" Path Selection function.
//
int gamelogic03_scene1068 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1068 >Stop for now}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stop for now\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks about stopping... however...\n\n\"I am NOT satisfied\"\n\nAnd quickly forces each dildo, completely into her anus and pussy... with both hands.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1070 (0, cSubFlag + 1);
    return iRet;
}

//
// "Go another round" Path Selection function.
//
int gamelogic03_scene1069 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1069 >Go another round}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Go another round\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Without any hesitation, #!00# starts again by forcing each dildo, completely into her anus and pussy... with both hands.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1070 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1068 and 1069 above.
//
int gamelogic03_scene1070 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1070 03 Pre-Scene Merge 4}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# then clenches her abdominal muscles and forces the two dildos out, catching them in her hands again.\n\nThen over the course of less than a minute, #!00# repeats that step over and over again. When she feels that she is near she shoves both dildos in, then caresses her clitoris with her right fingers, while her left hand goes for her right nipple. Moments after she accidentally knocks her right nipple with her left hand, she climaxes.\n\nThis time the two dildos shoot out of her anus and pussy, but they catch on the rubber sheets of the bed.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Go another round", 1072, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Stop for now", 1071, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Stop for now" Path Selection function.
//
int gamelogic03_scene1071 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1071 >Stop for now}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stop for now\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Now that the two dildos are out, #!00# briefly considers stopping... only briefly...\n\n\"Fuck that shit...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1072 (0, cSubFlag + 1);
    return iRet;
}

//
// "Go another round" Path Selection function. This is ALSO called by 1071 above.
//
int gamelogic03_scene1072 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1072 >Go another round}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Go another round\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches over and grabs the two dildos, then lays back in the center of the bed. She then shoves the first dildo back into her anus and accidentally knocks her clitoris with her right wrist again. #!00# lightly climaxes.\n\nAfter #!00# she gets over that, she picks up the second dildo again and stuffs it into her pussy, lifts her butt off the bed with her legs and then resumes her humping of the dildos. After 30 seconds, she gets the timing right to also start flicking her clitoris with her right thumb again.\n\n20 seconds later, #!00# climaxes... but this time, she remembers to clamp down her pussy and hold the dildos in, which isn\'t an easy thing to do.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Go another round", 1074, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Stop for now", 1073, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Stop for now" Path Selection function.
//
int gamelogic03_scene1073 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1073 >Stop for now}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stop for now\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# is starting to feel a little tired... but she still has the two dildos inside of her...\n\n\"One more time...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1077 (0, cSubFlag + 1);
    return iRet;
}

//
// "Go another round" Path Selection function.
//
int gamelogic03_scene1074 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1074 >Go another round}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Go another round\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides...\n\n\"Fuck it... one more go...\"\n\nShe lifts her butt off the bed again and holds the two dildos in with her right hand, while her left starts to caress her left breast. After a while she works her way up to her left nipple... and tweaks it.\n\nLess than a second later, #!00# climaxes again.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Go another round", 1076, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Stop for now", 1075, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Stop for now" Path Selection function.
//
int gamelogic03_scene1075 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1075 >Stop for now}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stop for now\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00#\'s body is aching and she is starting to think it would be a good idea to stop. But, there is the small matter of the two dildos that are still lodged in her lower orifices.\n\n\"One more round...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1077 (0, cSubFlag + 1);
    return iRet;
}

//
// "Go another round" Path Selection function.
//
int gamelogic03_scene1076 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1076 >Go another round}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Go another round\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"Okay... let\'s do this...\"\n\n#!00# continues humping away with the two dildos, held in place with her right hand and this time she decides that her right breast could do with the attention, so she starts to caress it with her left hand.\n\nAs before, #!00# works her way up to her right nipple. The ecstasy is wonderful as she repeatedly pinches it. Then she climaxes again.\n\n#!00# decides to rest for a little bit. She is still on top of the bed, still with a dildo in her anus and another in her pussy.\n\n#!00# thinks to herself... \"As wonderful as this was...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1077 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene exit point.
//  scenes 1073, 1075 and 1076 connect here.
//
int gamelogic03_scene1077 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1077 03 Pre-Scene Merge 5}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# starts with caressing her left breast with her left hand, while her right breast is being caressed with her right hand. She is still clamping down with her abdominal muscles on the two foreign objects that are each lodged firmly in her anus and pussy.\n\nThen she works her way to from just her breasts to just her nipples. The sensitivity of just one nipple is incredible, but both are almost too much. #!00# holds it, letting arousal continue to build up, while not giving into the pleasure. Then slowly she lifts her butt off of the bed, to setup her angle.\n\nThen she uses her right hand to pinch her clitoris, while her left hand pinches right nipple, and her left forearm scrapes, then presses down on her left nipple.\n\n#!00# climaxes and her lower abdomen muscles shift from holding the dildos in, to expelling them.\n\nWhile the dildos don\'t manage to reach the wall of the cell, another spray of pussy juices does. Both the dildos hit the ground. The one that was in her pussy continues rolling for a bit, but does not quite make it to the wall. The one that was ejected from her anus, makes it halfway to the wall from the end of the bed.\n\n#!00# collapses back on the bed, the rubber sheets are doing a good job of pooling some of the pussy juices that did not make it off the bed. There is slightly less pussy juices covering the wall where the table is and a lot more all over the floor.\n\n#!00# is still conscious. She lays there on the bed, breathing heavily, her sensitive spots still buzzing.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1078 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1064 and 1077 above.
//
int gamelogic03_scene1078 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1078 03 Pre-Scene Merge 6}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("For 2 minutes, #!00# lays there on the bed, listening to the wind in the distance. The air is heavy with the smell of her pussy juices. The sound of the wind is interrupted by the faint screeching of metal scraping on metal off in the distance.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# just lays there and thinks \"About time they showed up\".\n\n");
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

        if (gstruct_GameVars.cFDildoFun1 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFDildoFun1 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# raises her head and looks around the cell. She notices that there is quite a bit of her pussy juices slowly trickling down the wall. She briefly considers getting up and hiding the dildos. As #!00# hears the footsteps and feels the aching of her muscles... why bother... and sets her head back down.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFDildoFun1 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFDildoFun1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# raises her head and looks at the wall where her pussy juices had sprayed and thinks to herself \"Ah... Fuck it...\"... Her head slaps back down on the wet rubber sheets.\n\n\"I am NOT the maid.\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFDildoFun1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# turns her head to look at the right hand side of the bars, where she can hear the footsteps coming from... She listens carefully to try and identify how many are coming.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Just two... I wonder if it is going to be the usual pair... or if it is going to be someone new this time\".\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Just the two of them... no others\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("As the owners of the footsteps come into sight, #!00# sees the Dark-Elf first, then the Light-Elf.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFBreakBonds2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBreakBonds2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("As both fo the elves come into view, the Light-Elf stops walking and just stands there watching #!00#, while the Dark-Elf keeps walking towards the door. Just as the Dark-Elf is almost at the door, he looks around the cell, chants and the door swings open for him.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBreakBonds2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBreakBonds2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFBreakBonds1 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFBreakBonds1 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("As the pair of them come into view, the Light-Elf stops walking and just stands there, watching #!00#, while the Dark-Elf keeps walking towards the door. Just as the Dark-Elf is almost at the door, he looks over at the contraption and stops walking. He turns around and says something to his companion. The Light-Elf looks at the Dark-Elf and raises a left eyebrow.\n\n");
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.cFVisitTheCon != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFVisitTheCon is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Maybe he was emotionally attached to Mr Monster\".\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFVisitTheCon is set]\n");
                    if (iRet != 0) return iRet;
                }
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFVisitTheCon is NOT set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"I wonder... is he worried\?\".\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFVisitTheCon is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf resumes observing #!00#. The Dark-Elf starts chanting and as usual, the door swings open for him.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFBreakBonds1 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFBreakBonds1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("As the pair of them come into view, they stop... and the Dark-Elf says something to the Light-Elf, while pointing at something further along the corridor.\n\n#!00# thinks to herself \"Looks like they have noticed my handiwork\".\n\nThe Dark-Elf starts walking towards the door again, while the Light-Elf remains stationary, watching #!00#.\n\nJust as the Dark-Elf is almost at the door, he looks over at the contraption and stops walking. He turns around and says something to his companion. The Light-Elf glances at the Dark-Elf and then looks at #!00#, with a poker faced expression.\n\n#!00# thinks to herself \"If the Light-one is angry... he isn\'t showing it\".\n\nThe Light-Elf resumes observing #!00#. The Dark-Elf starts chanting and as usual, the door swings open for him.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFBreakBonds1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBreakBonds2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Okay... what\'s it going to be THIS time\".\n\nThe Dark-Elf starts chanting again and #!00#\'s vision goes dark.\n\nAgain, time seems to pass at a different pace. #!00# isn\'t as confused as she is starting to get used to these illusions.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"If they wanted me unconscious, then the Light-one would have gone first... but when they want me awake... it is always the Dark-one who starts\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Suddenly, the weird Tentacle Monster that #!00# had seen twice before, appeared again.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Looks like tha\' ghost of Mr Monster has returned...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sighs \"Couldn\'t have they thought of something else... this is starting to get incredibly boring...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Similar to the previous two encounters, the tentacle monster wraps itself around #!00#, but instead of binding her arms and legs it goes straight for her crotch and breasts. Then the tentacle monster stops moving, as if completely frozen.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Unfortunately... the ghost of Mr Monster is still nothing more... than a puppet.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"At least... something is different this time.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Then #!00# feels something strange, first with her right nipple.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Knew it... whatever they did before... they are doing it again\".\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# yells in her vision... \"HEY!... what THE...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The strange sensation is repeated with her left nipple, then with her clitoris.\n\nThen there is another slightly stronger sensation, with her entire right breast, then her entire left breast.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"What... are they doing\?\"\n\nThen #!00# realizes that when she is trapped inside this vision, she cannot see what else is happening inside the cell. It is possible that other elves may have shown up.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("\"Rrrgh... Just what are they are up to now\?..\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Then the tentacle monster starts to move again. Small tentacles reach out and force open #!00#\'s mouth. As before, she feels something holding her jaw open.\n\nAnother large tentacle approaches #!00#\'s mouth and forces it\'s way in. Then, the tentacle monster stops moving again. However, other than the \'thing\' that is holding her mouth open, #!00# knows there is nothing else in her mouth.\n\nThen #!00# can feel something enter her anus, followed by something else in her mouth.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Seems to be similar... probably the same 2 elves again\".\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"And... my guests finally make their entrance...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Tentacle monster starts moving and so do the sensations of the penises in #!00#\'s mouth and anus.\n\n#!00# thinks to herself \"Okay... let\'s get this over with...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1079 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic03_scene1079 (int iSubSceneId, char cSubFlag)
{
    int iRet;
    char cResult;
    char cRandom1;
    char cOverride = 0;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (iSubSceneId != 0)
    {
        if (gcDebugFlag != 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("{1079 >Suck front tentacle}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1079 >Lick front tentacle}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1079 >Anal-clamp rear tentacle}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1079 >Wiggle butt}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1079 >Swallow tentacle semen}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1079 >Spit out tentacle semen}\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Suck front tentacle\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Lick front tentacle\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Anal-clamp rear tentacle\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Wiggle butt\n\n");
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

        // these are the climax results.
        if ((iSubSceneId == 5) || (iSubSceneId == 6))
        {
            if (gstruct_GameVars.iClimaxCount1 > 2)
            {
                if (iSubSceneId == 5)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# swallows the load of tentacle semen in her mouth.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to spit out the tentacle semen that is in her mouth.\n\n");
                if (iRet != 0) return iRet;

                // reset the flag to say that partner 1 is still active
                gstruct_GameVars.cPartner1Active = 0;

                if (gstruct_GameVars.cPartner2Active == 0)
                {
                    iRet = gamelogic03_scene1082 (0, cSubFlag + 1);
                    return iRet;
                }

                iRet = gamelogic03_scene1081 (0, cSubFlag + 1);
                if (iRet != 0) return iRet;

                cResult = 0;
                // the purpose of this is to skipjack all of the dialog processing below, and override the result so that the menu items are included.
                cOverride = 1;
            }
            else
                // I want to process this here, that way the result of working with partner 1 is potentially a buff for partner 2.
                cResult = gamelogiccommon_sexActionPartner1 ((char)iSubSceneId);
        }
        // if this is favoring parter 2
        else if ((iSubSceneId == 3) || (iSubSceneId == 4))
        {
            cResult = gamelogiccommon_sexActionPartner2 ((char)iSubSceneId);
        }
        else
        {
            cResult = gamelogiccommon_sexActionPartner1 ((char)iSubSceneId);
        }

        // this is the common dialog for all 3 different types of climaxes (and the not so good result as well).
        if (((cResult == 1) || (cResult == 2) || (cResult == 3) || (cResult == -1)) && (cOverride == 0))
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks on the tentacle in her mouth.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the tentacle in her mouth.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# squeezes the tentacle in her anus between her ass-cheeks.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# wiggles her butt, stimulating the tentacle in her anus.\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# swallows the load of tentacle semen in her mouth.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to spit out the tentacle semen that is in her mouth.\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }

        // now for the front and rear simultanous climax
        if (cResult == 3)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Front and Rear Climax !]\n");
                if (iRet != 0) return iRet;
            }

            if (gstruct_GameVars.iClimaxCount2 > 1)
            {
                // reset the flag to say that partner 2 is still active
                gstruct_GameVars.cPartner2Active = 0;

                iRet = gamelogic03_scene1080 (0, cSubFlag + 1);
                return iRet;
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("The tentacle in #!00#\'s mouth ejaculates and so does the tentacle in #!00#\'s anus.\n\n#!00# thinks to herself \"What are the chances of that happening\?\?\"\n\n");
                if (iRet != 0) return iRet;
            }
        }
        else if (cResult == 2)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Rear Climax !]\n");
                if (iRet != 0) return iRet;
            }

            if (gstruct_GameVars.iClimaxCount2 > 1)
            {
                // reset the flag to say that partner 2 is still active
                gstruct_GameVars.cPartner2Active = 0;

                iRet = gamelogic03_scene1080 (0, cSubFlag + 1);
                return iRet;
            }
            else
            {
                cRandom1 = rand() % 3;

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle penetrating #!00#\'s butt stiffens up, then ejaculates.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle buried in between #!00#\'s asscheeks starts to piston erratically, then it ejaculates in #!00#\'s anus.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle penetrating #!00#\'s butthole starts to twitch, then cums inside #!00#\'s asshole.\n\n");
                    break;
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself ");
                if (iRet != 0) return iRet;

                cRandom1 = rand() % 3;

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("\"Another anal creampie... great...\"\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("\"Yet another elven semen deposit in my ass... ho-hum...\"\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("\"This is starting to get tiresome. Fuck my pussy already...\"\n\n");
                    break;
                }
                if (iRet != 0) return iRet;
            }
        }
        else if (cResult == 1)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Front only Climax !]\n");
                if (iRet != 0) return iRet;
            }

            cRandom1 = rand() % 3;

            switch (cRandom1)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("The tentacle that is violating #!00#\'s mouth starts pulsate and fills her mouth with semen.\n\n#!00# thinks to herself \"This is nasty...\"\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("The tentacle in #!00#\'s mouth slams in suddenly, then ejaculates.\n\n#!00# thinks to herself \"Come on... can\'t you be a little nicer\?..\"\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("The tentacle that is thrusting in and out of #!00#\'s mouth starts to pick up become a bit more enthusiastic.\n\nThen #!00# feels semen flowing into her mouth.\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cResult == -1)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[not so good !]\n");
                if (iRet != 0) return iRet;
            }

            if (gstruct_GameVars.cPartner1Active == 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[force anal finish !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = gamelogic02_scene1041 (0, cSubFlag + 1);
                return iRet;
            }

            if ((gstruct_GameVars.cPartner1Active != 0) && (gstruct_GameVars.cPartner2Active != 0))
                iRet = mdialog_addToDialogWithSrchRep ("However, the both tentacles seem to be going soft.\n\n#!00# thinks to herself ");
            else
                iRet = mdialog_addToDialogWithSrchRep ("However, the remaining tentacle seems to be indifferent.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;

            switch (cRandom1)
            {
            case 1:
                if ((gstruct_GameVars.cPartner1Active != 0) && (gstruct_GameVars.cPartner2Active != 0))
                    iRet = mdialog_addToDialogWithSrchRep ("\"Rrgh... get it up assholes... you aren\'t the only ones who are finding this utterly boring...\"\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("\"Rrgh... get it up asshole... you aren\'t the only one who is finding this FUCKING boring...\"\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("\"Of course this is FUCKING boring... Every time the two of you asswipes come in here, it is the same thing...\"\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("\"SHIT... Looks like I am not getting out of this FUCKING illusion anytime soon...\"\n\n");
                break;
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by sucking on the tentacle in her mouth.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by licking the tentacle that is in her mouth.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by clamping her butt-cheeks on the tentacle that is penetrating her anus.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by stimulating the tentacle that is penetrating her anus, but wiggling her butt.\n\n");
                break;

            //Note: 5 and 6 are not available as starting options.
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep ("Again, both tentacles respond by continuing to thrust lightly in and out of #!00#\'s mouth and anus. #!00# thinks to herself \"Maybe I should just bite... Shit...\"\n\n#!00# then remembers the rubber thing in her mouth.\n\n#!00# thinks \"This is starting to get boring...\"\n\n");
            if (iRet != 0) return iRet;
        }
        else if (cOverride == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                cRandom1 = rand() % 2;

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# vacuum sucks on the tentacle in her mouth. ");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks, then blows on, the tentacle in her mouth. ");
                break;

            case 2:
                cRandom1 = rand() % 2;

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the tip of the tentacle that is in her mouth. ");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the shaft of the tentacle that is in her mouth. ");
                break;

            case 3:
                cRandom1 = rand() % 3;

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# clamps her asshole.");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# squeezes her butt.");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# flexes her anus.");
                    break;
                }
                break;

            case 4:
                cRandom1 = rand() % 3;

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly wiggles her butt.");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# shakes her butt.");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gyrates her hips.");
                    break;
                }
                break;
            }
            if (iRet != 0) return iRet;

            switch (iSubSceneId)
            {
            case 1:
            case 2:
                cRandom1 = rand() % 2;

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep (" The tentacle in #!00#\'s mouth seems to pulsate,");
                else
                    iRet = mdialog_addToDialogWithSrchRep (" The tentacle in #!00#\'s mouth is a little bit more excited,");
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" and then continues thrusting away inside of #!00#\'s mouth.\n\n");

                break;

            case 3:
            case 4:
                cRandom1 = rand() % 2;

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep (" The tentacle in #!00#\'s anus seems to like the attention,");
                else
                    iRet = mdialog_addToDialogWithSrchRep (" The tentacle in #!00#\'s butt throbs a little bit,");
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" and continues thrusting away inside of #!00#\'s butthole.\n\n");

                break;

            case 5:
                if (gstruct_GameVars.iClimaxCount1 != 1)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tilts her head back to try and swallow the tentacle semen that is in her mouth.\n\nThis time the tentacle in her mouth temporarily leaves, to let #!00# gulp down the mouthful of semen.\n\nAfter #!00# finished drinking the semen, the tentacle shoves itself back into her mouth.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("As #!00# tries to swallow the tentacle semen that is in her mouth, the tentacle in her mouth briefly pulls out, letting her drink the semen.\n\nAfter she finishes the tentacle slides back in.\n\n");
                break;

            default:
                if (gstruct_GameVars.iClimaxCount1 != 1)
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# spits out the tentacle semen in her mouth, the tentacle that is inside her mouth quickly pulls away.\n\nAfter #!00# finishes spitting out the semen, the tentacle quickly slides back into her mouth.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# spits the tentacle semen out of her mouth, which is made easier by the tentacle vacating her mouth.\n\n#!00# thinks to herself \"This is a change...\"\n\nThen the tentacle quickly thrusts back into #!00#\'s mouth.\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1079 03 Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene2 (24, 11, 190, 20, 13, 190);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if (gstruct_GameVars.cFOralDropFirst2 == 0)
    {
        if ((cResult == 1) || (cResult == 3))
        {
            iRet = mutils_addToCommandList ("Swallow tentacle semen", 1079, 5);
            if (iRet != 0) return iRet;
            iRet = mutils_addToCommandList ("Spit out tentacle semen", 1079, 6);
            if (iRet != 0) return iRet;
        }
        else
        {
            if ((cResult != -1) || (iSubSceneId != 1))
            {
                iRet = mutils_addToCommandList ("Suck front tentacle", 1079, 1);
                if (iRet != 0) return iRet;
            }

            if ((cResult != -1) || (iSubSceneId != 2))
            {
                iRet = mutils_addToCommandList ("Lick front tentacle", 1079, 2);
                if (iRet != 0) return iRet;
            }
        }
    }

    if (gstruct_GameVars.cFAnalDropFirst2 == 0)
    {
        if ((cResult != -1) || (iSubSceneId != 3))
        {
            iRet = mutils_addToCommandList ("Anal-clamp rear tentacle", 1079, 3);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 4))
        {
            iRet = mutils_addToCommandList ("Wiggle butt", 1079, 4);
            if (iRet != 0) return iRet;
        }
    }

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic03_scene1080 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1080 03 Sex Scene Exit 1}\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFOralDropFirst2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFOralDropFirst2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("After ejaculating a second time, #!00# feels that the thing inside her butt disappears.\n\nThe Tentacle Monster is still there, frozen in #!00#\'s vision, as #!00# starts to wonder what is going to happen next.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFOralDropFirst2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFOralDropFirst2 is NOT set]\n[set cFAnalDropFirst2]\n");
            if (iRet != 0) return iRet;
        }

        // set the flag to say that the anal has dropped first
        gstruct_GameVars.cFAnalDropFirst2 = 1;

        iRet = mdialog_addToDialogWithSrchRep ("After ejaculating a second time, #!00# feels that the thing inside her butt disappears.\n\nHowever, the feeling of something in her mouth also vanishes. #!00# thinks \"This is strange, it is not the same as last time...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFOralDropFirst2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }


    iRet = gamelogic03_scene1083 (0, cSubFlag + 1);
    return iRet;
}

//
// Extra dialog that is included for triggering a state in the sex scene.
//
int gamelogic03_scene1081 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // set the flag to say that the oral has dropped first
    gstruct_GameVars.cFOralDropFirst2 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1081 03 Sex Scene Change 1}\n\n[set cFOralDropFirst2]\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("After ejaculating a third time, #!00# feels that the thing inside her mouth disappears. The Tentacle Monster in front of her flickers a little bit, but starts moving again. Meanwhile the presence in her butt is still moving.\n\n");
    if (iRet != 0) return iRet;

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic03_scene1082 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    // set the flag to say that the anal has dropped last
    gstruct_GameVars.cFAnalDropLast2 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1082 03 Sex Scene Exit 2}\n\n[set cFAnalDropLast2]\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("After ejaculating a second time, #!00# feels that the thing inside her butt disappears.\n\nThe Tentacle Monster is still there in #!00#\'s vision, but isn\'t moving anymore.\n\n#!00# thinks \"Okay... so what now...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic03_scene1083 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1082 and 1080 above.
//
int gamelogic03_scene1083 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1083 03 Sex Scene Merge 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# then feels a sudden and intense pain... and passes out.\n\n\n[Some time Later...]\n\n#!00# wakes up. Usual headache. Usual cell. This time, the smell of pussy juices is still heavy in the air.\n\n\"Assholes...\"\n\n#!00# is on her back in the middle of the bed again, she lifts her head up and looks around the cell. Then #!00# notices, she is laying in a pool of pussy juices, on the bed.\n\n\"Alright... this is full on disgusting.\"\n\nThe latex sheets on the bed, being rubber, do not absorb liquids. #!00#\'s pussy juices just gather wherever the level is at its lowest, which happens to be where #!00# is resting. Also, while #!00# can hear wind off in the distance, there isn\'t much air movement inside the cell either. The cell is starting to reek.\n\n\"Rrrgh...\"\n\n#!00# gets up off the bed, in a fit of rage. She finds that her own pussy juices, mixed with other liquids, are trickling down her back and down her legs. Now that she is upright, she notices something else is slightly out of place.\n\n\"What tha\'...\"\n\n#!00# looks down and observes that her breasts are now slightly larger. She is approximately one cup size larger than she was before. #!00# thinks back to the last vision with the Tentacle Monster and recalls that she felt some strange sensations before the sex started.\n\n#!00# sighs \"So this is what they were up to...\"\n\n#!00#\'s emotions are a little bit conflicted over her sudden mammary growth spurt. She always wanted them to be slightly bigger. While it would appear that she just got her wish, the circumstances by which her wish was fulfilled are less than ideal.\n\n#!00# checks around her body, for any other changes. She is careful to not touch her nipples or clitoris, as they are not only erect and throbbing, but appear to be larger as well.\n\n#!00# decides to look around the cell to see if there are any other changes.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFBreakBonds2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBreakBonds2 is set]\n[set cFTableStillThere]\n");
            if (iRet != 0) return iRet;
        }

        // set the table still there flag
        gstruct_GameVars.cFTableStillThere = 1;

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks around... there does not appear to be anything out of place.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFDildoFun1 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFDildoFun1 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("Except one minor detail, #!00# clearly remembers that there were a couple of dildos on the floor, near the table. #!00# walks over to the table and finds the 2 decent sized dildos are back on the table, along with the other 4.\n\n\"So... wasn\'t there also those...\"\n\n#!00# walks over to the chair in the corner of the cell and finds that the two dildos that she had thrown at the wall are gone. She wanders back over to the table by the wall and finds that there are now a total of 26 dildos on the table.\n\n");
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.cFVisitTheCon != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFVisitTheCon is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("\"Mr Monster\'s new home.\"\n\nThen #!00# realizes that such a small thing could have been overlooked by many orcs in #!02#. However, her captors are elves.\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFVisitTheCon is set]\n");
                    if (iRet != 0) return iRet;
                }
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFVisitTheCon is NOT set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"They noticed something as small as THAT\?\".\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFVisitTheCon is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"True to form... rather thorough... however...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFDildoFun1 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFDildoFun1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# continues to look around the cell, she glances over at the chair, then at the table, still stacked with dildos.\n\n#!00# walks over to the table and notices. \"Something has changed...\"\n\nA quick count... 26...\n\n\"I thought there were only...\"\n\n#!00# looks over at the chair in the corner. She walks over to the chair and checks behind it. The dildos that she threw in this direction earlier, are gone.\n\n#!00# walks back over to the table and counts again, confirming that there are now 26 dildos on the table.\n\n");
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.cFVisitTheCon != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFVisitTheCon is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("\"Even the ones that Mr Monster was using.\"\n\n#!00# looks at the bed and thinks \"So they put away those two dildos, but left me laying... in that. The books said they were arrogant... and the books were right.\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFVisitTheCon is set]\n");
                    if (iRet != 0) return iRet;
                }
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFVisitTheCon is NOT set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the bed and quips \"They went through the effort to find those things... and then left THAT mess.\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFVisitTheCon is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFDildoFun1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sighs, walks from the table over to the cell door and looks around in the hallway.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBreakBonds2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBreakBonds2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("It does not take #!00# long to discover that there have been changes.\n\nFor a start the contraption is gone.\n\n\"Well... I did break it...\"\n\n... and... the table is also gone.\n\n\"What tha\'...\"\n\n#!00# wonders over to where the table once was. The dildos are still there, but they are all standing upright in an arrangement on the floor.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFDildoFun1 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFDildoFun1 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("Also, the dildos that #!00# was using earlier, have been placed with all of the others.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFDildoFun1 is set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly counts the number of dildos that are there... 26... that is two more than...\n\n#!00# looks over at the chair that is in the far corner and thinks to herself \"I wonder\".\n\n#!00# walks over to the chair and checks behind it. The two dildos that she threw into this corner are now gone.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFBreakBonds1 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFBreakBonds1 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"Hmph... they must have found those...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFBreakBonds1 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFBreakBonds1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"Hmph... they must have found them and...\"\n\n#!00# is about to walk back to the table, when she looks outside of the cell, into the hallway. There is a small indent in the wall, where the piece of the contraption hit when she tossed it outside of the cell, but the broken piece of the contraption is also gone.\n\n\"Looks like they cleaned that up that as well...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFBreakBonds1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# walks back to where the table was, past the bed.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFVisitTheCon != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFVisitTheCon is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"They picked up Mr Monster\'s two dildos from behind the chair, dragged away Mr Monster, took away the table... and neatly arranged ALL of the dildos nicely on the floor...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFVisitTheCon is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFVisitTheCon is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"They picked up those two dildos from behind the chair, dragged away that broken THING, took away the table... and neatly arranged ALL of the dildos nicely on the floor...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFVisitTheCon is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches the collection dildos and glances back at the bed...\n\n\"However, they could not even clean THAT...\"\n\n#!00# looks down at the collection of dildos and counts them again... yes... 26. She did not miscount the first time.\n\n#!00# sighs, walks from where the table was over to the cell door and looks around in the hallway.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBreakBonds2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"All they had to do... was this...\"\n\n#!00# turns around, walks up to the side of the bed facing the door, crouches down, grabs the underside of the bed and stands up. All of the liquid that had pooled onto the bed spills off onto the floor.\n\n\"There... done...\"\n\nSteps back while letting go of the bed and the edge she had been holding slams into the floor.\n\n\"Simple...\"\n\nSuddenly, #!00#\'s pussy and breasts, specifically her clitoris and nipples start to ache.\n\n\"Rrrgh...\"\n\n#!00# starts taking slow and deep breaths... and thinks to herself \"Easy... calm down...\".\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\n[5 Minutes later...]\n\n#!00# is sitting on the edge of the bed, facing the door of the cell.\n\n#!00# is reassessing her current situation, primarily because she has the time. #!00# wants to keep her mind off the fact that her nipples and clitoris are itchy, as they want some personal attention.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFDildoFun1 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFDildoFun1 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("While #!00# wants to stand up and stuff her anus and pussy... again... with the dildos that she is sitting on, she wants to keep them hidden... for now.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFDildoFun1 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFDildoFun1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("While #!00# wants to stand up and stuff her anus and pussy with the dildos that she is sitting on, she wants to keep them out of sight... for now.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFDildoFun1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("Besides, these are the smaller ones and they are not going to satisfy her.\n\n#!00# thinks to herself \"There are a few things out of place here...\"\n\nFor a start, the Dark-Elf mage seems to know only one illusion-vision trick. As impressive as the Tentacle Monster appears to be, after you have seen it once, it isn\'t impressive anymore. Also, his abilities to maintain proper continuity with his illusion are severely lacking. A half experienced High-Orc Shaman, who chose the same battle skill, could easily outdo this runt.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFPainMagic1 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPainMagic1 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf mage... he is a lot more dangerous. While the Dark-Elf mage can certainly blind #!00# and immobilize her, the Light-Elf mage is able to restrict her movement and knock her out.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPainMagic1 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPainMagic1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf mage... he is a lot more dangerous. While the Dark-Elf mage can certainly blind #!00# and immobilize her, the Light-Elf mage is able to knock her out. Also, the Light-Elf has immobilized #!00# once.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPainMagic1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("Thinking back over it, on the handful of occasions that #!00# said anything to them, they ignored her. It is also possible that they are limiting what it is that they show her.\n\n\"Or... I am simply over-thinking this\?.\"\n\n#!00# starts to think about some alternative possibilities. She was concerned that there might be more elves nearby, but so far she has only seen these two. If there are more of them, her next encounter with them is likely to reveal that.\n\nBut, for the sake another possibility, what if there were no others\?. What if... the only two elves she was dealing with here were these two. Why are they be away from the rest of their military unit\?\n\nOr... maybe they are not part of a military unit. That would make sense... their aptitude in their chosen respective battle skills would suggest that they are not getting proper guidance in those fields. So far all the two elves have really done is use #!00# as a \'Dutch Wife\'. #!00# thinks to herself \"Nice to know they don\'t think of me being anything more than a blow-up-doll.\".\n\nSo... if they are using her as a sex toy and they are not military... then...\n\n#!00# figures it out and thinks to herself \"They are slave trainers...\"\n\nThinking about it some more, #!00# comes to the conclusion that it must have been due to some unseen abilities of the this pair of elves that she was taken from the Outer Village that she was assigned to. #!00# did remember an obscure part of the #!01# training that said that there were a handful of elves who were occasionally kidnapping orcs, primarily for the slave trade. But they are reported less often than an elven military assault on a village.\n\n#!00# thinks \"however, if their slave target appeared to have just wondered off... then it would treated as desertion anyway... so maybe... just maybe... that this is more common than anyone in #!02# might think...\"\n\n\"Well... Fuck...\"\n\n#!00# ponders the possibility that all she has left to go home to now... is a court-martial.\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("\n[5 Minutes later...]\n\n#!00# is sitting on the edge of the bed, facing the door of the cell. Trying to concentrate on something other than her throbbing nipples and clitoris. It isn\'t easy because she desperately wants to rub and tease them. #!00# finds herself trying to make more sense out of what is going on.\n\nSo far... she has been confined to a very large cell... with no visible guards and is occasionally visited by two elves.\n\n");
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.cFPainMagic1 != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFPainMagic1 is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf\'s battle skill is limited to raping his opponents with a poorly constructed dream-vision of a tentacle monster. The Light-Elf\'s battle skill seems to be something related to paralysis and unconsciousness.\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFPainMagic1 is set]\n");
                    if (iRet != 0) return iRet;
                }
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFPainMagic1 is NOT set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf\'s battle skill involves a poorly constructed dream-vision of a tentacle monster, that rapes his opponents. The Light-Elf\'s battle skill involves inflicting enough pain to make #!00# pass out. The Light-Elf has also immobilized #!00#, which seems to be another variant of the enchantment that he uses to knock her out.\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFPainMagic1 is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

            if (gstruct_GameVars.cFAnalDropFirst1 != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFAnalDropFirst1 is set]\n[set cFExtIntDialog]\n");
                    if (iRet != 0) return iRet;
                }

                // set the extra interna dialog flag
                gstruct_GameVars.cFExtIntDialog = 1;

                iRet = mdialog_addToDialogWithSrchRep ("And both of them have proven themselves to be rather inept with their chosen battle skills. The Dark-Elf\'s dream-vision does not work very well and the Light-Elf did mess up that one time.\n\n#!00# thinks \"So, they are inexperienced... so why send these two\?\".\n\n#!00# thinks about it some more. For a start, there should be more elves around and some rather competent ones. Could it be possible that this is part of a test. If so, then why the perversion\?.. All these two clowns seem to do is use #!00# as a prostitute\?..\n\n\"Wait...\"\n\nMaybe, that is their intention. Breaking an opponent using sex isn\'t unheard of. There are entire class subjects in the #!01# basic training about the use of rape on the battlefield.\n\nThe odd thing is, that if they really wanted to use sex to degrade #!00#...\n\n#!00# looks around the large cell and thinks \"There would be a lot more people here to watch\". Sexual degradation tactics are useless against someone if there isn\'t an audience for them to feel shame.\n\nNot that orcs have any shame in exposing themselves in the first place. Maybe, this is a new tactic\?.. if so... where are the rest of them\?\n\n#!00# looks at the door of the cell, then up and down the hallway. #!00# then thinks \"There are no guards... no other military staff of any kind...\"\n\nOkay... so they should have superiors... a translator even. But if they were attached to a larger unit and had a translator... then...\n\n\"Where are they\?..\"\n\n#!00# has read about elite elven units that consist of a small number of members, but all that these two have ever demonstrated is that they should not have left the classroom yet.\n\n#!00# thinks \"Beyond their capabilities... they are just a couple of horny guys... Oh... that changes the perspective...\"\n\nMaybe, they aren\'t military. So, if they aren\'t military... then... what\?.\n\nThen #!00# realizes and thinks \"Slavers...\"\n\n#!00# then remembers that there is an obscure reference in one of her #!01# training textbooks about small groups of elves that roam around on the battlefield, looking for orcs to capture and train as sex slaves.\n\nHer clitoris and nipples start to throb again. #!00# thinks about the fact that her breasts are now bigger.\n\n#!00# thinks to herself \"So... if that is the case... then their plan is to make me into their docile little fucktoy...\"\n\n#!00# looks to the right of the bars, along the hallway where the pair of elves usually approach from.\n\n\"Hmph... bring it on...\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFAnalDropFirst1 is set]\n");
                    if (iRet != 0) return iRet;
                }
            }
            else
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFAnalDropFirst1 is NOT set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf seems to be reasonably competent. He hasn\'t messed up, unlike the Dark-Elf, who has made some critical mistake every single time. Given the way that the Light-Elf holds back and lets the Dark-Elf go first... means...\n\n\"That light one... is the leader.\"\n\n#!00# sighs. How could have she overlooked such an important aspect of the interaction between the two. Of course there would be a leader and the Light-Elf probably has more subordinates as well.\n\nStill, it isn\'t clear as to what end that they are doing this.\n\n#!00# thinks to herself \"When they come back... I will verify that the Dark-Elf is following instructions of the Light-Elf\".\n\n#!00# thinks about the cache of dildos that she is hiding underneath herself. If they follow their usual procedure, the Dark-Elf will provide her with an opening.\n\nBut until she has some idea of what the pair of them are up to, she has to be wary.\n\nHowever, there must be a hint of what the pair of them want. So far all they have done is made her feel horny, and then... then they used her as a sex toy. #!00# reconsiders the cache of dildos. Then remembers that the #!01# training manuals clearly state that despite their initial appearances, male elven soldiers are usually not homosexual.\n\n#!00# briefly glances down at her swollen breasts, with their throbbing nipples and quickly looks off into the distance, beyond the cell door, trying not to focus on them too much.\n\n\"Rrrgh... I HATE waiting like this...\"\n\n#!00# just sits there and waits in silence for a few more minutes, trying not to focus on the fact that she is aroused and wants a good fuck.\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFAnalDropFirst1 is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

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

            iRet = mdialog_addToDialogWithSrchRep ("\n[10 Minutes later...]\n\nIt has been an uneasy 10 minutes for #!00#. She is sitting on the edge of the bed, facing the cell door, with some small dildos hidden underneath her butt, while her nipples and clitoris are proving to be an itch that she wants to scratch. As much as #!00# wants to masturbate right now, she is trying to avoid giving in.\n\nHer plan is simple. If the elves follow their routine, the Dark-Elf will do the usual of attempting to assault #!00# with his Dream-Vision of a Tentacle Monster. But if #!00# interrupts him, she can at least get out of being subjected to that ridiculous dark-magic illusion.\n\nThe Light-Elf is going to be a bit harder, but as long as she can prove that she isn\'t going to hurt anyone, maybe they will treat her a little bit nicer.\n\n");
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

    iRet = mdialog_addToDialogWithSrchRep ("The faint sound of the wind blowing in the distance is the same as always.\n\nThen, suddenly, there is the sounds of faint screeching of metal scraping on metal. #!00# thinks \"they are coming.\"\n\nAs usual, there is the light echoing of footsteps as they come closer. #!00# just sits there, quietly listening to the echoing footsteps.\n\nEventually the Dark-Elf and then the Light-Elf, walk into #!00#\'s peripheral view. She remains focused on the door in front of her.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPainMagic1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPainMagic1 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("There is the possibility that the Light-Elf will hit her with a paralysis spell even before the Dark-Elf opens the door, but there have been times when that hasn\'t happened.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("There is the possibility that the Light-Elf might hit her with a spell even before the Dark-Elf opens the door. #!00# is willing to take that chance right now.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPainMagic1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Besides, the Dark-Elf is usually starts casting his enchantment just as he is passing through the door.\n\nOne set of footsteps stop, as the Light-Elf stays just at the right side of the cell. The Dark-Elf continues walking towards the cell door. #!00# does not look at the Light-Elf and stays focused on the door. The Light-Elf seems to be standing there... just watching... and not chanting.\n\nThere is chanting happening... but it is from the Dark-Elf as he performs his usual task of unlocking the door. The door swings open, the Dark-Elf comes into view... and just as he is about to start a new enchantment.\n\nOne of the dildos, that #!00# was sitting on, slams into the wall right behind Dark-Elf. The Dark-Elf is distracted and turns around to see what happened.\n\n#!00# quickly glances over at the Light-Elf. The Light-Elf is also concentrating dildo-projectile that is now laying on the floor in the hallway. #!00# concentrates back on the Dark-Elf, who has turned to face her. The Dark-Elf has finally realized where the dildo came from.\n\nThe Dark-Elf opens his mouth... but #!00# gets in first.\n\n\"DON\'T...\"\n\n#!00# pulls out two more dildos, she is now holding one in each hand. She holds up one in her left hand and shows it to the two elves, while her right is poised to throw.\n\nIt was simple tactic on #!00#\'s part. She demonstrated that she can throw a projectile at the Dark-Elf and potentially injure him, faster than either of the two elves can cast their respective enchantments.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"Knew it... if the Dark-Elf was military, he would not hesitate to take the hit... so that his friend can counter-attack\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("There is silence in the cell. No one is talking or chanting. The Dark-Elf, is standing there, his face is as white as a sheet, sweat is starting to roll down his forehead.\n\n#!00# uses her left hand to motion to the Dark-Elf to come forward.\n\n\"Come on... get over here...\"\n\nHowever, the Dark-Elf is still frozen with fear. #!00# sighs.\n\n\"Do I have to repeat myself... get OVER here...\"\n\nThe emphasis on the word \'OVER\' was enough to snap the Dark-Elf out of his mental dysfunction. The Dark-Elf, while wearing a \'what the fuck do I do now\?\' expression on his face, looks at the Light-Elf. The Light-Elf, just shrugs his shoulders, while wearing a \'how the fuck should I know!\' expression on his face back to the Dark-Elf. Finally, the Light-Elf motions to the Dark-Elf that he should \'get going\'.\n\nThe Dark-Elf slowly steps through the cell door and into the cell. Then he hesitates.\n\n#!00# relaxes her posture and points at the floor in front of her with the dildo in her left hand.\n\n\"Just get your ass over here...\"\n\nThe Dark-Elf is still standing there, silent.\n\n#!00# sighs and sets down the dildo she is holding with in her left hand, then pats the bed with her open left hand...\n\n\"Sit here...\"\n\nStill no response. The Dark-Elf is still just standing there, unsure of what to do.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"This guy would not survive long on the battlefield. Okay... let\'s try this...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"This dork has no clue. Well... he is a pervert.. so...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# relaxes her right arm, which puts the Dark-Elf at ease. #!00# then sucks and licks the dildo that she is holding in her right hand, while also patting the bed with her left. She then cocks her head with an \'are you going to make me wait all day \?\' expression on her face.\n\nFinally, the Dark-Elf gets it, and he starts walking over next to #!00#. The Dark-Elf is suddenly a little bit too eager.\n\nDark-Elf sits on the bed next to #!00# and pulls up his robes. His penis is already erect.\n\n#!00# takes one look at the Dark-Elf\'s penis, then at the similar sized small dildo she is holding in her hand. #!00# thinks \"You have to be shitting me... this is a representation how big he is when he is erect\?\?!!.. I know the #!01# textbooks used the term... Small... to describe elven cocks... but this isn\'t... Small... this is... Tiny...\".\n\nWhile #!00# is making her mental comparison, the Dark-Elf starts to get worried, primarily because he has no idea why #!00# started focusing at the dildo that she is holding. The thought briefly crossed his mind that she was planning on violating his virgin anus with it. There was nothing that he could do stop her if she wanted to, because he is easily within her reach. He knows that even if his Light-Elf friend started casting an enchantment at #!00# now, #!00# could easily kill the Dark-Elf with her bare hands before the effects of the spell took hold. He was starting to have second thoughts about entering the cell door, after that she proved that she could hit him sooner. Thinking about it, could have she hit him with the dildos that she was holding at all\? Shit, why did he have to loose is concentration on the enchantment like that!.\n\n#!00# sighs and turns her attention back to the Dark-Elf, which puts him at ease again. #!00# gets up from the edge of the bed, which briefly freaks him out and then kneels in front of his crotch, which both freaks him out more and arouses him at the same time.\n\nIt is a little bit hard to get to the Dark-Elf\'s penis while he is sitting upright, so #!00# gently pushes his torso. The Dark-Elf gets the idea, leans back and props himself up with his elbows.\n\n#!00# then lightly teases on the Dark-Elf\'s penis with her fingers. #!00# would not actually call Dark-Elf\'s penis a penis, as one of her fingers is larger. #!00# finds that she can satisfy this horny Dark-Elf a lot easier now that she can freely move around.\n\nIt would be a lot easier if he was bigger, as that would give #!00# a wider of a range of options.\n\n");
    if (iRet != 0) return iRet;

    // this cross listing call is to init the variables for the sex scene.
    iRet = gamelogic04_scene1090 (0, cSubFlag + 1);
    return iRet;
}
