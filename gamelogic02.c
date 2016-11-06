//
// gamelogic02.c
//
// This is group 2 of scene ids.
//

#include "common.h"
#include "gamelogic.h"

// external linkage to the game variables.
extern  struct  gamelogic_variablelist  gstruct_GameVars;
extern  char    gcDebugFlag;


//
// "Stay seated" Path Selection function.
//
int gamelogic02_scene1010 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // set the two internal dialog flags.
    gstruct_GameVars.cFIntDialog = 1;
    gstruct_GameVars.cFExtIntDialog = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1010 >Stay seated}\n\n[set cFIntDialog & cFExtIntDialog]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stay seated\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# does consider for a moment that she should stand up from the chair... however...\n\n\"I might be hit with that spell again... if I move around.\"\n\n#!00# decides to remain in the chair and listen for anything moving.\n\n\n[2 minutes Later...]\n\nAfter sitting and waiting patiently for a while, #!00# has a chance to think about her current situation.\n\nHere she is... unusual place... unusual people.\n\n#!00# had not met any elves before, but now she finds that she is locked away in a cell by two of them.\n\nWho knows what is going on in the Outer Village that #!00# was assigned to guard. However, she cannot recall an actual battle.\n\nJust the usual, swapping over with the night shift, end of day report, then going to sleep, and... then...\n\n#!00# opens her eyes and looks at the bed, takes a deep breath and wonders. Did the elves come in the middle of the night\?.. Did anyone else manage to take any out before they were overrun\?.. Was the village overrun\?\n\n#!00# knows that she has encountered two elves so far... are there any more\?.. and what is the purpose of their interrogation\?.. Is this an interrogation\?.. really\?..\n\nIt is not as if they have asked any questions, or even talked to her using Orc. During her #!01# training, #!00# had learned that the elven soldiers take pride in their considerable knowledge, learning 3 or 4 different general battle skills before their human equivalent age of 40.\n\nIn an elven squad, they always have at least one translator for any non-elven language. It is one of the smaller reasons why orcs did not bother learning to speak Elven. The primary reason that orcs did not bother to learn to speak Elven is that #!02# leaders have the notion that the only \"language\" to use with any non-orcs... is to beat the living shit out of whoever it is, then go on a rape and pillage spree.\n\nHeh... there was this one time, when the squad that #!00# was a member of, went all out on a horde of Goblins... that was years ago.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPainMagic1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPainMagic1 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Okay... back to the two elves... It is clear that both the Dark-Elf and Light-Elf are mages.\n\n#!00# has seen the Dark-Elf open a door with an enchantment. The Dark-Elf was also chanting before she backed out and had that vision of the tentacle monster.\n\nAs for the Light-Elf, his chanting paralyzed #!00#, that much she is definitely sure of.\n\nSo... they are both accomplished mages...\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("Okay... back to the two elves... The Dark-Elf, is definitely a mage. Her vision of the tentacle monster was definitely his doing.\n\n#!00# is not sure about the Light-Elf, but he certainly dresses like a mage, but he has not shown what he can do yet.\n\nSo... assuming that they are both accomplished mages...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPainMagic1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Then being mages, using magic, is ALL that they can do\?.. They have no other fields of experience...\n\n\"You have to be kidding me...\"\n\nSo much for the idea of actually talking to these two elven-clowns, as they are barely old enough to master their primary chosen fields... Who said it was just them\?..\n\n\"There should... be more of them...\"\n\n... meaning, there is someone who can talk to her. So why hasn\'t #!00# seen any others yet\?.. It is possible that they have no need for the knowledge that she has. #!00# does not hold a high rank within the #!01#. She is, or was, only a guard stationed in one of the Outer Villages.\n\nThe purpose of the Outer Villages is to act as a buffer to slow down invaders when they venture into #!02# anyway. A tempting target for invaders to take, then try to hold, while the main #!01# armies detect their presence and descend on upon the invaders with the usual orgy of mindless violence.\n\nSo, it is possible, that they have mistaken #!00# as someone who has a higher rank. Then, why haven\'t they sent in a translator yet\?.. They could get more information from her if they just talked to her. Even if she did not answer, which is the only proper way for an orc to respond to any questions from an invader, there is a rumor that elves can extract the tiniest hint of detail from watching how their captives just think about \'not answering\' any question.\n\nSo far... they haven\'t asked #!00# anything, let alone actually talked to her.\n\nBesides... all of this thinking hasn\'t helped her headache at all, so #!00# decides to sit there and listen to the wind.\n\n\n[5 minutes Later...]\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1027 (0, cSubFlag + 1);
    return iRet;
}

//
// "Stand up" Path Selection function.
//
int gamelogic02_scene1011 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1011 >Stand up}\n\n[reset cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stand up\n\n");
        if (iRet != 0) return iRet;
    }

    // reset the actions counter
    gstruct_GameVars.cVActionCounter = 0;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides that she just cannot stay sitting all day.\n\n\"Let\'s see if I am hit with that spell again.\"\n\n#!00# stands up, slowly, and looks around the cell. This time, there is no hissing sound... no mist... and no sudden headache.\n\n\"Okay... so... where should I look next\?..\"\n\n");
    if (iRet != 0) return iRet;

    // note: it is not necessary to use conditional settings here, because the code never comes back to this specific scene after it has passed it.

    iRet = mutils_addToCommandList ("Check out the chair", 1012, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Walk over to the bed", 1013, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Walk over to the table", 1014, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Walk over to the contraption", 1015, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Walk over to the door", 1016, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Check out the chair" Path Selection function.
//
int gamelogic02_scene1012 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have checked out the chair
    gstruct_GameVars.cFCheckTheChair = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1012 >Check out the chair}\n\n[set cFCheckTheChair - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Check out the chair\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# turns around and looks over the chair that she was sitting in.\n\n\"Is this a chair\?.. or... is this a bed\?..\"\n\nThe reason for #!00#\'s intrigue is that in #!02#, furniture is normally spartan. The very concept of a \'Comfortable Chair\' is completely foreign.\n\n#!00# inspects the chair that she was sitting in a bit closer, touching the surface and running her fingers over it.\n\n\"Hmm... some form of rubber... but.. why is it so soft\?..\"\n\n#!00# spends a couple of minutes checking out the chair, before standing up again.\n\n");
    if (iRet != 0) return iRet;

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1028 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    iRet = mdialog_addToDialogWithSrchRep ("\"There has to be something more interesting to look at around here.\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheBed == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the bed", 1013, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheTable == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the table", 1014, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheCon == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the contraption", 1015, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheDoor == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the door", 1016, 0);
        if (iRet != 0) return iRet;
    }

    iRet = mutils_addToCommandList ("Just continue looking around the cell", 1017, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Sit back down in the chair", 1022, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Walk over to the bed" Path Selection function.
//
int gamelogic02_scene1013 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have visited out the bed
    gstruct_GameVars.cFVisitTheBed = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1013 >Walk over to the bed}\n\n[set cFVisitTheBed - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Walk over to the bed\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# walks over to the bed that is in the center of the cell. After a couple of footsteps, #!00# slows down and she glances up at the ceiling, wondering if she is going to trigger the sleep spell again. #!00# reaches the side of the bed and finds that she isn\'t feeling any effect of the spells that she encountered earlier.\n\n\"Hmm... I was expecting... something... to happen.\"\n\n#!00# decides that she is wasting time waiting for something bad, so she decides to look over the bed again.\n\nThe top of the bed is only 2 inches off the floor. The covering fabric appears to be some form of rubber.\n\n\"Why would they make such a thing\?..\"\n\n#!00# continues to look over the bed, but decides not to actually touch it... for now. She walks around it to see if there is anything special about this particular piece of furniture.\n\nAfter a couple of minutes #!00# loses interest in the bed.\n\n");
    if (iRet != 0) return iRet;

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1032 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    iRet = mdialog_addToDialogWithSrchRep ("\"Hmm... I should check out something else...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheTable == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the table", 1014, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheCon == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the contraption", 1015, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheDoor == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the door", 1016, 0);
        if (iRet != 0) return iRet;
    }

    iRet = mutils_addToCommandList ("Walk back to the chair", 1023, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Just continue looking around the cell", 1019, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Walk over to the table" Path Selection function.
//
int gamelogic02_scene1014 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have visited out the table
    gstruct_GameVars.cFVisitTheTable = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1014 >Walk over to the table}\n\n[set cFVisitTheTable - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Walk over to the table\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# walks over to the table, which she saw earlier. Along the way, she looks around cell again, wondering if she is going to be setting off another sleep spell.\n\nWhen she reaches the table, she takes a better look at the table and the clutter on top of it.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLookAroundRoom != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLookAroundRoom is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Thought so... in fact... these are all dildos...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLookAroundRoom is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLookAroundRoom is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"These... are all... dildos\?\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLookAroundRoom is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The concept of sex toys isn\'t anything new to orcs. #!00# lost her vaginal and anal virginity to another female orc, who was wearing a strap-on dildo, both during the same sexual encounter. It wasn\'t particularly enjoyable first time, as it was a standard part of #!01# basic training. Every new recruit goes through it, regardless of their level of previous sexual experience. The forced sexual encounter was primarily to get recruits used to the fact that enemy forces will not treat them kindly if they were captured. This was to either mentally prepare the recruits for such degradation and also as persuasion for the weaker ones to drop out of the #!01# entirely. That was the first of many such training sessions.\n\nSince then, #!00#, like most other #!01# soldiers, have had a very active sex life. However, there is something else on #!00#\'s mind.\n\n\"Half of these... are way too small.\"\n\nOrc males are well hung. Therefore, orc dildos are a rather close match. Of all of the 24 dildos on the table, #!00# can only find 6 that are the right size and 2 that are a little bit too big. The two large ones are each the size of an elven fist.\n\nAll of the dildos were sort of shiny... sort of made of out rubber.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks back at the contraption and considers the fact that it would be better equipped with some of these dildos than then ones it currently has.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1031 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    iRet = mdialog_addToDialogWithSrchRep ("\"I wonder... what else there is to see...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheBed == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the bed", 1013, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheCon == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the contraption", 1015, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheDoor == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the door", 1016, 0);
        if (iRet != 0) return iRet;
    }

    iRet = mutils_addToCommandList ("Walk back to the chair", 1023, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Just continue looking around the cell", 1020, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Walk over to the contraption" Path Selection function.
//
int gamelogic02_scene1015 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have visited out the contraption
    gstruct_GameVars.cFVisitTheCon = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1015 >Walk over to the contraption}\n\n[set cFVisitTheCon - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Walk over to the contraption\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The contraption is right next to the chair. As #!00# walks over towards to the contraption, she takes note of the distance between it and the chair that she woke up in.\n\n\"The... chair thing... is closer to this thing... than the bed is.\"\n\nAs #!00# stands next to the contraption, she looks around the cell... confirming that it is further from the bed in the center of the cell, than to the chair.\n\n\"Those two... didn\'t seem strong. Or maybe there was another reason they dumped me on the chair.\"\n\n#!00# decides to put that aside... and inspects the contraption. It is made out of metal, but doesn\'t seem to be very sturdy.\n\n\"This here... and here... are where my arms were bound... and it looks like my legs... where here\?\"\n\n#!00# examines the contraption and comes to the conclusion that she was in a doggy style position while strapped in. She then notices two appendages where her crotch would have been, with dildos attached to them. #!00# crouches down to get a better look at the dildos.\n\n\"What are these... toothpicks\?\"\n\n#!00# then remembers the vision that she had of a tentacle monster, how when it was violating her and she could barely feel it. #!00# sighs.\n\n\"Nice ta meet\'cha... Mr Monster...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheTable != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# glances back at the table, specifically at the pile of dildos on it and smiles.\n\n\"You could really do with... and upgrade...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# stands up again, contemplating the fact that the contraption is only part of the vision that she had experienced, so it must have been one of the two mages who were creating the rest. or...\n\n\"Or... is there something else that I am missing here\?\"\n\n");
    if (iRet != 0) return iRet;

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1029 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    if (gstruct_GameVars.cFVisitTheBed == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the bed", 1013, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheTable == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the table", 1014, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheDoor == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the door", 1016, 0);
        if (iRet != 0) return iRet;
    }

    iRet = mutils_addToCommandList ("Walk back to the chair", 1023, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Just continue looking around the cell", 1018, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Walk over to the door" Path Selection function.
//
int gamelogic02_scene1016 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have visited out the door
    gstruct_GameVars.cFVisitTheDoor = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1016 >Walk over to the door}\n\n[set cFVisitTheDoor - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Walk over to the door\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly walks over to the door of the cell, it is in the center of the bars. Along the way she looks around regularly, expecting to be hit by another spell.\n\n\"I wonder... if anyone is watching.\"\n\nAs #!00# is one step away from the door, she stops closes her eyes and listens. Nothing but the familiar sound of the wind off in the distance. She then looks to find there is no sign of the weird mist, and is still feeling fine.\n\n#!00# then checks the door. Other than the weird dark-slate-blue color of the metal, it seems to be a standard metal door frame, with bars, hinged at the floor and ceiling, a latch-bolt... and...\n\n\"So much for that...\"\n\nThe latch-bolt is clearly closed and there is no sign of a keyhole on the inside. #!00# then remembers that the Dark-Elf opened the door using an enchantment, so there may not be a keyhole on the other side either.\n\n#!00# does consider that she could try forcing the door open, but she might be hit by the sleep spell if she did. Even if she opened the door, she does not know if there are any other fortifications outside of the cell preventing her from leaving. Then there is the not-so-minor problem of not knowing where she is.\n\n#!00# looks past the bars to the left and right and notices that the hallway continues in both directions on either side of the cell.\n\n\"Hmm...\"\n\n#!00# considers the fact that the two elves walked a short distance until she saw them last time. About... two... times the length of this cell... at least. #!00# looks at the strength of the door lock, but decides against touching it.\n\n\"Well... I can come back to this... later...\"\n\n");
    if (iRet != 0) return iRet;

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1030 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    if (gstruct_GameVars.cFVisitTheBed == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the bed", 1013, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheTable == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the table", 1014, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheCon == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the contraption", 1015, 0);
        if (iRet != 0) return iRet;
    }

    iRet = mutils_addToCommandList ("Walk back to the chair", 1023, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Just continue looking around the cell", 1021, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Just continue looking around the room" Path Selection function (from the chair).
//
int gamelogic02_scene1017 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have looked around the room
    gstruct_GameVars.cFLookAroundRoom = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1017 >Just continue looking around the cell - chair}\n\n[set cFLookAroundRoom - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Just continue looking around the cell\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Still concerned that she could be hit with a sleep spell if she moves around to much, #!00# decides to look around the cell from where she is.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheBed != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheBed is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The bed, #!00# is already familiar with...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheBed is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheBed is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("First... the bed... in the center of the cell, there is nothing special about it that #!00# can see from here...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheBed is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The contraption, #!00# has already had a good look at it...\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("Next... the contraption... it is closest to the chair... it seems to be made out of some sort of metal. #!00# remembers being strapped into that, exactly how isn\'t clear.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheDoor != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheDoor is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The door... does not seem any different from here.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheDoor is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheDoor is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The door... too far away... it would be better if #!00# could get closer to it.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheDoor is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheTable != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The table... #!00# is already familiar with...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The table... is further away than the door, but now that #!00# takes another look at it...\n\n\"is that... a pile of dildos... on top of it\?\"\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFVisitTheDoor != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFVisitTheDoor is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# considers that she could get a better look at the table.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFVisitTheDoor is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFVisitTheDoor is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# considers that she could get a better look at the table and the door.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFVisitTheDoor is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1028 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    iRet = mutils_addToCommandList ("Sit back down in the chair", 1022, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Just continue looking around the room" Path Selection function (from the contraption).
//
int gamelogic02_scene1018 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have looked around the room
    gstruct_GameVars.cFLookAroundRoom = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1018 >Just continue looking around the cell - contraption}\n\n[set cFLookAroundRoom - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Just continue looking around the cell\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Concerned that she should not be moving around too much, #!00# decides to try and observe more about the cell from where she is standing.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheDoor != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheDoor is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The door... does not seem any different from here.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheDoor is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheDoor is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The door... seems to be sturdy. However, #!00# cannot see the lock...\n\n\"Weird color for the metal though.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheDoor is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheBed != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheBed is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The bed, #!00# is already familiar with...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheBed is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheBed is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The bed... the chair is closer, but the bed is where she woke up the first time. #!00# glances back at the contraption and comes to the conclusion that the elves... somehow... had to get her from the bed, over to the contraption, then strapped her in.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheBed is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFCheckTheChair != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is already familiar with the chair, she woke up in it after all...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The chair... it is closer than the bed and where they must have dragged her after she was inside the contraption.\n\n#!00# then notices something familiar about the chair, then glances at the bed.\n\n\"Seems to be... yeah... they are both covered in rubber...\"\n\n#!00# briefly contemplates that fact, but decides that it isn\'t that important.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheTable != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is already familiar with the contents of the table and glances back at the contraption... more specifically the dildos attached to it.\n\n\"Maybe... it is their intention to swap those things over...\"\n\n#!00# decides to move past the fact that the Mr Monster has interchangeable appendages.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The table... is on the other side of the bed. But the bed is only an obstacle for walking, because it is so low to the floor. So #!00# can see from a distance what is on top of it.\n\n\"are those... more dildos \?..\"\n\n#!00# can see at least 4 good sized dildos in the pile, the rest is hard to make out from this distance. #!00# glances back at the contraption... at the tiny dildos that are attached to it... and smiles...\n\n\"Looks like Mr Monster... has some friends.\"\n\n#!00# quickly buries the thought of an upgrade to the contraption... Why is she even contemplating being strapped into this thing again\?.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1029 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    iRet = mutils_addToCommandList ("Walk back to the chair", 1023, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 1);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Just continue looking around the room" Path Selection function (from the bed).
//
int gamelogic02_scene1019 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have looked around the room
    gstruct_GameVars.cFLookAroundRoom = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1019 >Just continue looking around the cell - bed}\n\n[set cFLookAroundRoom - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Just continue looking around the cell\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The bed is ideally placed in the center of the cell. Therefore, this seems like a good place to quickly look around the cell.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheDoor != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheDoor is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The door... does not seem any different from here.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheDoor is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheDoor is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("First... the door... while it is a good distance, #!00# can tell from here that it is a standard metal door frame, with bars, hinged at the floor and ceiling and latch-bolt. The latch-bolt is clearly closed...\n\n\"Where... is the keyhole\?..\"So much for the idea of picking the lock from the inside. Well, no surprises there. #!02# cells cannot be opened from the inside either, so elven cells would not be much different. However, it is not clear if the Dark-Elf even used a key to open it.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheDoor is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The contraption, #!00# is already looked over that...\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("The contraption. Somehow those two elves managed to get #!00# over to it, from the bed that #!00# is currently standing next to.\n\nThe contraption it seems to be made out of some sort of metal. #!00# remembers being strapped into it and her arms were bound.\n\nOtherwise, #!00# isn\'t that interested in it.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFCheckTheChair != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is already familiar with the chair, she woke up in it after all...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The chair... it is near the contraption. #!00# reasons that she woke up in the chair, because that was closer to the contraption... than the bed.\n\nAlso... the chair... #!00# glances down at the bed, then looks at the chair.\n\n\"Same black rubber... I wonder why that is...\"\n\n#!00# decides that whoever made the bed, probably made the chair.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheTable != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# has already visited the table and knows that it has a number of dildos on it. The table does not look any different from over here, than when it did up close.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Finally... the table... is on the opposite side of the bed to the contraption. From this distance...\n\n\"Are those... dildos \?..\"\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFVisitTheCon != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFVisitTheCon is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# can see at least 5 good sized dildos in the pile, the rest is hard to make out from this distance. #!00# looks back at the contraption... and comes to the conclusion that the contraption can be modified.\n\n\"Oh... so that\'s what they are up to...\"\n\n#!00# takes note of the fact that Mr Monster can be upgraded.\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("#!00# can see at least 5 good sized dildos in the pile, the rest is hard to make out from this distance.\n\n\"Nice to know they left some entertainment... whoever they are...\"\n\n#!00# thinks about her encounter with the Tentacle Monster and comes to the conclusion that whatever was fucking her was probably the dildos.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFVisitTheCon is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1032 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    iRet = mutils_addToCommandList ("Walk back to the chair", 1023, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 2);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Just continue looking around the room" Path Selection function (from the table).
//
int gamelogic02_scene1020 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have looked around the room
    gstruct_GameVars.cFLookAroundRoom = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1020 >Just continue looking around the cell - table}\n\n[set cFLookAroundRoom - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Just continue looking around the cell\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to look around the cell from the where the table is.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheDoor != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheDoor is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The door... does not seem any different from here.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheDoor is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheDoor is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The door... seems to be sturdy, no sign of keyhole... from this angle it is obvious that it has hinges at the floor and ceiling.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheDoor is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheBed != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheBed is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The bed, #!00# is already familiar with...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheBed is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheBed is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The bed... isn\'t really any different from here... it is still clear that it is covered in rubber... although #!00# has no idea as to why.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheBed is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFCheckTheChair != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is already familiar with the chair, she woke up in it after all...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The chair... like the bed, it is covered in the same sort of rubber... it is strange that it is so comfy.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The contraption, #!00# is already looked over that...\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("The contraption... it is on the other side of the bed. While the height of the bed does not obscure it, it isn\'t clear what the contraption is for.. or does. #!00# does remember being strapped into it, but it is not clear as to why she was strapped into it.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1031 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    iRet = mutils_addToCommandList ("Walk back to the chair", 1023, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 4);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Just continue looking around the room" Path Selection function (from the door).
//
int gamelogic02_scene1021 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have looked around the room
    gstruct_GameVars.cFLookAroundRoom = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1021 >Just continue looking around the cell - door}\n\n[set cFLookAroundRoom - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Just continue looking around the cell\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheTable != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is already familiar with the contents of the table...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The table... it is up against the wall opposite from the contraption... and...\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFVisitTheCon != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFVisitTheCon is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"More... dildos \?!..\"\n\n#!00# then glances around... she has to be careful, because she does not know if someone might be coming... but still...\n\n#!00#\'s thoughts turn back to the sex-toys on the table and what they might be for. It is possible that they are meant to be inter-changeable parts for the contraption, but it is unusual that they would place those the furthest away from the thing.\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("\"Dildos\?\"\n\nRealizing that in her exclamation of what is on the table, she probably made too much noise near the front of the cell, she quickly glances around and then listens... just the usual sound of the wind.\n\n#!00# takes note of the pile of sex-toys and decides to concentrate observing the remainder of the cell... quietly...\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFVisitTheCon is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheBed != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheBed is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The bed, #!00# is already familiar with...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheBed is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheBed is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The bed... does not look much different from the door... but it is closer than... the chair.\n\n#!00#... quietly... contemplates that the reason that she first woke up on the bed, is because it is closer to the door than the chair.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheBed is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFCheckTheChair != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is already familiar with the chair, she woke up in it after all...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The chair... like the bed, it is covered in the same sort of rubber... and is quite far away from the door.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The contraption, #!00# is already looked over that...\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("The contraption... it is closer to the chair, than it is to the bed... and that distance is probably the reason that she woke up in the chair, instead of on the bed.\n\nHowever, it is still not clear what the purpose of the thing is... #!00# does remember being strapped to it, but she cannot figure out the reason as to why.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1030 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections.

    iRet = mutils_addToCommandList ("Walk back to the chair", 1023, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 3);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Sit back down in the chair" Path Selection function.
//
int gamelogic02_scene1022 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;
    // set the flag to say we have sat back in the chair
    gstruct_GameVars.cFSitInTheChair = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1022 >Sit back down in the chair}\n\n[set cFSitInTheChair - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Sit back down in the chair\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFCheckTheChair != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sits back in the chair, closes her eyes and waits...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sits back in the chair. While doing so, she takes a better look at it.\n\n\"Why... is this so soft... and so big\?..\"\n\nIn #!02#, chairs normally have 4 legs, a hard seat and a hard back... and those are the more comfortable ones. The not-so-comfortable ones can have spikes instead of wood for the seat and the back. #!02# chairs don\'t have padding... while this chair, is mostly padding.\n\nUpon inspecting the chair closer, #!00# is unsure...\n\n\"Is this thing a chair... or a bed\?..\"\n\nAfter a while, #!00# sits still, closes her eyes and waits...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFCheckTheChair is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    // if we have exceeded our allowed actions, take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1027 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections (and add some more text).

    iRet = mdialog_addToDialogWithSrchRep ("There is still the familiar sound of the wind... from somewhere... but no other noise otherwise.\n\n#!00# then looks around the cell... nothing as moved and there is no sign of anyone else present. The cell is sparse otherwise.\n\n#!00# closes her eyes and listens for any movement again.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Stand back up again", 1026, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1024, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Walk back to the chair" Path Selection function.
//
int gamelogic02_scene1023 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // increment the actions counter
    gstruct_GameVars.cVActionCounter++;

    // set the internal dialog flag.
    gstruct_GameVars.cFIntDialog = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1023 >Walk back to the chair}\n\n[set cFIntDialog - increment cVActionCounter]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Walk back to the chair\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to return back to the chair... as it might be dangerous to be anywhere else but near it.\n\nWhile the thought of making her captors angry is a welcome one, she is not entirely sure what purpose that they have her here for.\n\n#!00# walks slowly back to the chair, thinking about the reasons for her current predicament.\n\nHer rank in the #!01# isn\'t high enough for her to have any significant knowledge that any outside invaders would want. Her assigned post was to guard an Outer Village and nothing more. The only strategic value that the village had was to be part of the buffer zone around the center of #!02#. Even if the village was overrun, the main #!01# forces would retaliate quickly... which is why the small Outer Villages were there in the first place.\n\nWhen #!00# reaches the chair, she looks around. Judging by the fact that she has encountered elves and not a single thing about this place is familiar, suggests that she is no longer in #!02#.\n\n");
    if (iRet != 0) return iRet;

    // if we have exceeded our allowed actions. take the route out of here.
    if (gstruct_GameVars.cVActionCounter >= 3)
    {
        iRet = gamelogic02_scene1028 (0, cSubFlag + 1);
        return iRet;
    }
    // otherwise, we setup the next group of selections (and add some more text).

    iRet = mdialog_addToDialogWithSrchRep ("#!00# closes her eyes again and listens... still only the familiar sound of the wind.\n\nNothing changes or anyone coming... So... what do do next\?\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Sit back down in the chair", 1022, 0);
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Wait for a while", 1025, 0);
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFCheckTheChair == 0)
    {
        iRet = mutils_addToCommandList ("Check out the chair", 1012, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheBed == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the bed", 1013, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheTable == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the table", 1014, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheCon == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the contraption", 1015, 0);
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFVisitTheDoor == 0)
    {
        iRet = mutils_addToCommandList ("Walk over to the door", 1016, 0);
        if (iRet != 0) return iRet;
    }

    return 0;
}

//
// "Wait for a while" Path Selection function (while sitting).
//
int gamelogic02_scene1024 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1024 >Wait for a while - sitting}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Wait for a while\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("As boring as it sounds, #!00# decides to remain sitting in the chair.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n[set cFExtIntDialog]\n");
            if (iRet != 0) return iRet;
        }

        // set the extra internal dialog flag.
        gstruct_GameVars.cFExtIntDialog = 1;

        iRet = mdialog_addToDialogWithSrchRep ("#!00# closes her eyes, listens to the wind in the distance, and continues contemplating her situation.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFPainMagic1 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPainMagic1 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("Okay... both the Light-Elf and the Dark-Elf are mages, that is something that #!00# is certain of.\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("Okay... so... the Dark-Elf is definitely a mage... and, the Light-Elf probably is a mage as well.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPainMagic1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("If they are part of an elven squad, they should have at least translator on hand to perform some form of questioning.\n\n#!00#\'s #!01# training taught her that it wasn\'t necessary to learn the Elven when you have an proper elven-squad around, as the elves will always talk to you in Orc. For some strange reason, of all of the possible Orc dialects, elves learn to communicate as if they are an ancient orc princess. Even #!02# royalty don\'t talk like that.\n\nOkay... so maybe the job of these two is to scare her witless giving a better opening for a proper translator to ask some questions.\n\n\"Hmph...\"\n\nWell... that just means that #!00# is going to have to remain resolute.\n\nIt is going to be important to not flinch, show any emotion, other than pure hatred, when the questions are asked. Elves are known to be able to read the slightest hint, even if a question is left unanswered.\n\n#!00# sits there... listening to the sound of the wind in the distance.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("Again, #!00# closes her eyes and listens to the wind in the distance. There is no indication of anything else of interest happening out in the hallway... which gives #!00# time to think... to herself.\n\nWhy is she here\?.. And what plans do her captors have for her\?..\n\n#!00# suspects that she is no longer in #!02#, given the fact that the furniture here is so... different.\n\nIf she is outside of #!02#, then what happened to the village that she is guarding\?.. Possibly overrun by elves...\n\nLet\'s say that the village she was stationed at, has been overrun... well... it won\'t remain that way for long. Orcs position small Outer Villages so they are tempting targets to outside invaders, so that invaders won\'t get far into #!02#, before a counter attack is launched.\n\nThe elves won\'t stand a chance... but... is it really just elves\?..\n\nSo far all she has only met two elves... and they are both mages... they are probably associated with elven military... for the power that they wield, it would make sense.\n\nBut why her\?.. #!00#\'s rank in the #!01# isn\'t high enough for her to be considered to be a worthwhile target to extract important information from. No one in the Outer Villages is of considerable rank to have any vital information.\n\n\"Hmm...\"\n\n#!00# decides to listen to the wind again...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n[set cFIntDialog]\n");
            if (iRet != 0) return iRet;
        }

        // set the internal dialog flag.
        gstruct_GameVars.cFIntDialog = 1;
    }

    // It does not matter how many actions there are still left on the clock, this is going to trigger the exit out of this.
    iRet = gamelogic02_scene1027 (0, cSubFlag + 1);
    return iRet;
}

//
// "Wait for a while" Path Selection function (while standing).
//
int gamelogic02_scene1025 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1025 >Wait for a while - standing}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Wait for a while\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to remain stationary and to listen to the environment around her.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n[set cFExtIntDialog]\n");
            if (iRet != 0) return iRet;
        }

        // set the extra internal dialog flag.
        gstruct_GameVars.cFExtIntDialog = 1;

        iRet = mdialog_addToDialogWithSrchRep ("#!00# stands, without making a noise and listens to the sound of the wind. She doesn\'t bother closing her eyes, as she can clearly hear that nothing has changed.\n\nMeanwhile... she continues to ponder her present situation.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFPainMagic1 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFPainMagic1 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# is certain that both the Light-Elf and the Dark-Elf are mages.\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("So far... #!00# has only encountered two elves... one dark... the other light. The dark one is definitely a mage. The light one is probably as well... unless the \'clown suit\' is for show.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFPainMagic1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("However, neither of them have actually talked to #!00#.\n\nAnd thinking about it... Neither of them would... they are too young.\n\nDespite what many people think, orcs are not all dimwitted brutes. Their leaders are, so the rest of #!02# goes along with it, because who would not mind going on a rape and pillage spree... then at the end of it... say that they did it because the head-honchos said so and because... raping and pillaging is what orcs do!\n\nTo actually get past basic training in the #!01#, you need to have a decent amount of intelligence. The training is less mindless bludgeoning and more reading of training texts. Unless you can pass the basic grade of actually identifying all of the different types of foes you want to kick the living shit out of, you are booted out of the #!01# because you are clearly a danger to the rest of #!02#. The #!01# basic training academy does not believe in retaining idiots for soldiers, when there are more than enough officers to fill the role.\n\nBack to the elves... #!00# knows that if the two elves are accomplished mages, then that is all they are... mages.\n\n\"Neither of them are likely to be a translator...\"\n\nBy the human equivalent age of 40 an elven soldier has usually specialized in 3 or 4 different fields that are of use on the battlefield. Elven soldiers don\'t limit themselves to just casting spells or stabbing things either. Translation of non-elven languages is considered to be a battlefield skill. Especially for intelligence gathering, and interrogation.\n\nA typical Elf usually fully masters their first battlefield skill by the human equivalent of the age of 22, if they concentrate only that one skill alone.\n\nBut that is overlooking the fact that there might be more elves and it is clear that #!00# is not in #!02# anymore.\n\nSo... one possible explanation... is that these mages are sent in first, to wear her down and confuse her... before the actual translators show up... or... maybe...\n\n#!00# looks around the cell, pondering the potential that the experts at intelligence gathering are already here... watching her... somehow.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# closes her eyes... there is nothing out of place with the wind... so she starts to think about her current situation.\n\nThe furniture in the cell... no... the entire cell itself... is an indication that she is not in #!02#. It is too large... spacious...\n\n#!00# opens her eyes and looks around...\n\n\"... and weird ...\"\n\n#!00# closes her eyes again, listens to the wind in the distance and continues contemplating her predicament.\n\nThere seems to be no one else... other than the two young elves.\n\nThere is no indication of what happened to the Outer Village that she was guarding. It is possible that it has been overrun by elves.\n\nBut, #!00# is not certain that happened... For a start, she cannot remember any actual combat, just going to sleep, after her daily guard duties and waking up here... naked, with a migraine that could fell a legendary demon.\n\nWell... one thing is for certain... if the Outer Village was overrun by elves, it won\'t be long before #!02# learns of it and the #!01# responds by kicking elven-butt... as usual.\n\nSo... what of #!00# herself\?.. maybe they think she has some sort of important information that they need to get out of her.\n\nThe thing is... the #!01# do not station anyone of critical importance in any of their Outer Villages. #!00# herself would not be a suitable subject to extract information from.\n\n\"... But... they must be after something...\"\n\n#!00# stands there, silently... listening to the sound of the wind...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n[set cFIntDialog]\n");
            if (iRet != 0) return iRet;
        }

        // set the internal dialog flag.
        gstruct_GameVars.cFIntDialog = 1;
    }

    //
    // This is the complex bit: "Wait for a while" dialog is generic, but the next function that is linked to is not.
    // here is how I am going to process this: the "iSubSceneId" flag is going to specify where the PC is in the room.
    // Basically, the scene function that links the menu item here, is specific to the location; so I just set the iSubSceneId variable there..
    //
    // 0 = chair
    // 1 = contraption
    // 2 = bed
    // 3 = door
    // 4 = table
    //

    switch (iSubSceneId)
    {
        case 1:
            iRet = gamelogic02_scene1029 (0, cSubFlag + 1);
            return iRet;

        case 2:
            iRet = gamelogic02_scene1032 (0, cSubFlag + 1);
            return iRet;

        case 3:
            iRet = gamelogic02_scene1030 (0, cSubFlag + 1);
            return iRet;

        case 4:
            iRet = gamelogic02_scene1031 (0, cSubFlag + 1);
            return iRet;

        default: // default is the chair, this covers 0.
            iRet = gamelogic02_scene1028 (0, cSubFlag + 1);
            return iRet;
    }

    return 0;
}

//
// "Stand back up again" Path Selection function.
//
int gamelogic02_scene1026 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1026 >Stand back up again}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Stand back up again\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"Argh... this is silly...\"\n\n#!00# stands up again from the chair, turns around and looks at it... She then turns around and looks at the cell.\n\n\"There is nothing IN here that is going to bother me...\"\n\n#!00# sighs, remains still and listens to the wind in the distance again. But loses her patience...\n\n\"Nothing...\"\n\n#!00# then paces quickly from the chair over to the bed...\n\n\"Still Nothing...\"\n\nWithout checking on her surroundings, she quickly walks back to the chair, then looks around.\n\n\"Really\?.. Still Nothing...\"\n\nThere is no evidence of any spells... no mist... no headaches... just... her... frustration...\n\n\"Grr...\"\n\n#!00# paces back over to the bed again... Stops at the edge of the bed and looks around... silently... listening... for anything that indicates a change in what is happening.\n\nThen #!00# realizes... she is doing IT again... worrying...\n\n#!01# soldiers do NOT get worried...\n\n\"Shit...\"\n\nOnly #!01# generals get worried... #!00# isn\'t some dimwitted idiot general.\n\n\"Rrgh...\"\n\n#!00# leaps onto the bed. She hits the top of the bed with her full weight and it springs back at her. The entire bed lifting over an inch off the ground before it and her come back down with a sudden thump.\n\n\"This is SO...\"\n\nThen... #!00# can hear the footsteps in the corridor... and she thinks to herself \"Well... it is about time someone showed up...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1034 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection (while sitting down) dialog function.
//
int gamelogic02_scene1027 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1027 Finish inspection 2 (sitting down)}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("In the distance, #!00# hears the faint screeching of metal scraping on metal. Well... this isn\'t a problem as she is already sitting in the chair.\n\n#!00# takes one quick look around the cell as the sound of metal scraping ends and the echoing of footsteps begin.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1036 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection (while standing near the chair) dialog function.
//
int gamelogic02_scene1028 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1028 Finish inspection 2 - chair}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("In the distance, #!00# hears the faint screeching of metal scraping on metal. #!00#\'s initial thoughts are \"Okay... maybe I should... sit down\".\n\n#!00# sits back on the chair while trying to hear what is happening, but it isn\'t easy to hear the faint sound of footsteps while the rubber surface of the chair is screeching and squealing against her butt. By the time her body is still and the rubber is silent, the footsteps are rather close.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1036 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection (while standing near the contraption) dialog function.
//
int gamelogic02_scene1029 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1029 Finish inspection 2 - contraption}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("In the distance, #!00# hears the faint screeching of metal scraping on metal.\n\n\"Shit...\"\n\n#!00# glances at the contraption, then the chair. #!00#\'s following thoughts are \"That is where I should be...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1035 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection (while standing near the door) dialog function.
//
int gamelogic02_scene1030 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1030 Finish inspection 2 - door}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("In the distance, #!00# hears the faint screeching of metal scraping on metal. #!00#\'s initial thoughts are \"Uh... Oh...\".\n\nThe sound of the metal is clearly coming from the right... so...\n\n#!00# backs away from the door, while also moving to her right at the same time. As she passes the edge of the bed, she glances back at the chair in the corner, then looks down at the bed.\n\n#!00# thinks to herself \"This will have to do\".\n\n#!00# crouches down and crawls onto the bed, while the rubber sheet on top of the bed squeals.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1033 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection (while standing near the table) dialog function.
//
int gamelogic02_scene1031 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1031 Finish inspection 2 - table}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("In the distance, #!00# hears the faint screeching of metal scraping on metal.\n\n\"What...\"\n\n#!00# sighs... and thinks to herself \"They just HAD to return now...\"\n\n#!00# looks around as the metal scraping finishes and the footsteps start. #!00# sees the bed and thinks to herself \"The bed it is.\"\n\n#!00# quickly darts over to the bed, crouching as she reaches it. She then crawls onto the top of the bed. While crawling on top of the rubber it makes a squealing sound.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1033 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection (while standing near the bed) dialog function.
//
int gamelogic02_scene1032 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1032 Finish inspection 2 - bed}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("In the distance, #!00# hears the faint screeching of metal scraping on metal. #!00# looks at the bed...\n\n\"Or...\"\n\n#!00# looks at the chair and thinks \"They would be expecting me there\".\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1035 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection merge point 1 function.
//
int gamelogic02_scene1033 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1033 Finish inspection 2 Merge 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"Why is this stuff so damn noisy\".\n\n#!00# manages to stretch out on the bed and tries to remain as still as possible so that she can hear the footsteps.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1034 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection merge point 2 function.
//
int gamelogic02_scene1034 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // sets the pain magic 3 flag
    gstruct_GameVars.cFPainMagic3 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1034 Finish inspection 2 Merge 2}\n\n[set cFPainMagic3]\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Then, from the her position on the bed in the middle of the cell, #!00# can see the source of the footsteps.\n\nBoth Dark-Elf and Light-Elf come into view.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPainMagic1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPainMagic1 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is thinking to herself \"Just the two...\"\n\n#!00# then notices that the Light-Elf is chanting again. \"Oh No...\"\n\nAgain... her body is wracked with pain and she cannot move...\n\n\"Argh... DammIT...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is thinking to herself \"Just the two of them again\"... when suddenly... she feels excruciating pain all over her body and the inability to move.\n\nThen #!00# notices the Light-Elf is chanting and thinks to herself \"You LITTLE pile of SHIT !!\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPainMagic1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf walks towards the door of the cell... as before, the Dark-Elf chants... the door unlocks and swings open. Just as he passes through the door of the cell, the Dark-Elf starts chanting again.\n\n");

    iRet = gamelogic02_scene1037 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection merge point 3 function.
//
int gamelogic02_scene1035 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1035 Finish inspection 2 Merge 3}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# darts back over to the chair and sits down.\n\n#!00# sits, hastily on the chair, which isn\'t possible to do quietly, because it is covered in latex rubber. Latex rubber, being SHINY latex rubber, absolutely has to make noise.\n\n#!00# quietly curses herself for choosing the chair and tries to sit still. By the time that she has settled down into the chair, the echoing footsteps are rather loud.\n\n");

    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1036 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection merge point 4 function.
//
int gamelogic02_scene1036 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // sets the pain magic 2 flag
    gstruct_GameVars.cFPainMagic2 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1036 Finish inspection 2 Merge 4}\n\n[set cFPainMagic2]\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Then, from the her position sitting in the chair, in the corner of the cell, #!00# can see the source of the footsteps.\n\nBoth Dark-Elf and Light-Elf come into view.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPainMagic1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPainMagic1 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sits there... looking at the two elves... the Dark-Elf starts to walk along the corridor... but the Light-Elf is starting to chant... #!00# already suspects what is going to happen... but it does not make it any less painful.\n\nThe sudden pain and the paralysis hits her hard. #!00# thinks \"Dammit... ASSHOLE...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sits there... observing the two elves... then she notices the Light-Elf is doing something... and thinks to herself \"What is he...\"\n\nSuddenly... #!00# feels excruciating pain all over her body and cannot move.\n\n\"What the... Ergh...\"\n\n#!00# then realizes that she is being hit with an enchantment from the Light-Elf.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPainMagic1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf walks towards the door of the cell, chanting. The door unlocks and swings open for him and the Dark-Elf continues to walk into the cell. The Dark-Elf continues to walk directly towards the chair in the corner of the room and #!00#. When 3 footsteps away from #!00#, the Dark-Elf starts chanting again.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic02_scene1037 (0, cSubFlag + 1);
    return iRet;
}

//
// Finish inspection merge point 5 function.
//
int gamelogic02_scene1037 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1037 Finish inspection 2 Merge 5}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Again... suddenly... #!00#\'s vision goes dark.\n\n\"Okay... what sort of monster is it going to be THIS time\?..\"\n\nTime seems to pass at a different pace... #!00# notices this time that while her senses are being dulled, it as if she is being moved. She thinks to herself \"Well... this explains how they moved me from the bed the first time\".\n\nThen, an unusual Tentacle Monster appears. Unlike the last time, #!00# does not freak out.\n\n\"Oh come on... couldn\'t you at least get a little bit more creative\?.\"\n\nThe tentacles proceed to bind her arms and legs, but #!00# is well aware that outside of the illusion, she is currently being strapped into the contraption by the left wall.\n\n\"Even an #!01# Shaman knows they cannot use the same illusion more than twice in a row...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# starts to doubt her earlier assessment that the Dark-Elf has fully mastered his choice of battle skill.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Meanwhile, the tentacles proceed to penetrate #!00#\'s vaginal and anal orifices. However, while the penetration is happening within the Dream-Vision, #!00# cannot feel anything filling either her pussy or anus.\n\nThen, #!00# feels something, in her ass only, then it pulls out. But in her vision, the tentacle monster, which is now completely motionless as if frozen in time, is clearly still piercing both of her lower orifices.\n\n#!00# sighs \"Amateurs... They have no clue as to what they are doing.\"\n\nAnd to think that #!00# was genuinely worried about what the pair of them were going to do to her.\n\nThe image of the Tentacle Monster starts moving again. Some smaller tentacles reach forward and force her mouth open. #!00# starts to consider the possibilities of what is happening in the real world... She thinks \"The little pricks are forcing my mouth open with that rubber thing again... I get it... that\'s what I am feeling... it\'s their cocks\".\n\nInside her vision, a tentacle snakes it\'s way into #!00#\'s mouth and #!00# can now not only feel something there, but something else is also penetrating her butt.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheTable != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00#, finds the lack of size frustrating and thinks to herself \"Surely you could have retrieved a larger FUCKING dildo from the damn table by NOW !!\".\n\nThen... #!00# realizes... that it is only something in her anus and whatever it is, it is small. There is nothing that is actually in her vagina.\n\nInside her vision #!00# sighs and thinks \"The books always said that elves had small cocks... nice to know they weren\'t wrong\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks \"Nice to know that in reality, it is one of their penises in my mouth.\"\n\nThen #!00# notices that her vagina is empty, despite the fact that there is a tentacle monster in her vision that is filling it... meaning... Something else in is filling her anus.\n\n#!00# thinks \"One from the front and the other from behind... No idea which is which\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Inside the vision, the tentacle monster starts thrusting it\'s appendages.\n\n#!00# thinks to herself \"I might as well play along with this... it is not as if I have anything better to do right now\".\n\n");
    if (iRet != 0) return iRet;

    // before returning, call the 1038 function point (below), to setup the variables and parameters for the sex scene.
    iRet = gamelogic02_scene1038 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic02_scene1038 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1038 >Suck front tentacle}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1038 >Lick front tentacle}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1038 >Anal-clamp rear tentacle}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1038 >Wiggle butt}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1038 >Swallow tentacle semen}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1038 >Spit out tentacle semen}\n\n");
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

        // these are the front climax results.
        if ((iSubSceneId == 5) || (iSubSceneId == 6))
        {
            if (gstruct_GameVars.iClimaxCount1 > 2)
            {
                // It was either repeat these from below. or contort the logic even further (so I altered them a little).
                if (iSubSceneId == 5)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# swallows the mouthful of tentacle semen.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to spit out the mouthful of tentacle semen.\n\n");
                if (iRet != 0) return iRet;

                // reset the flag to say that partner 1 is still active
                gstruct_GameVars.cPartner1Active = 0;

                if (gstruct_GameVars.cPartner2Active == 0)
                {
                    iRet = gamelogic02_scene1042 (0, cSubFlag + 1);
                    return iRet;
                }

                iRet = gamelogic02_scene1040 (0, cSubFlag + 1);
                if (iRet != 0) return iRet;

                cResult = 0;
                // the purpose of this is to skipjack all of the dialog processing below, and override the result so that the menu items are included.
                cOverride = 1;

                // however, that means that I need dialog here. (will 1040 be enough ?)

                // the good news. this reduces the complexity of the dialog logic below.
                // the bad news is that the final front climax is not included in the list of actions performed, so it could result in an unexpected debuff from the user perspective.
                // (re bad news) However, given that partner 1 has dropped the need to continue with this has reduced anyway.
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
        // otherwise this is favoring parter 1
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

            if (gstruct_GameVars.iClimaxCount2 > 2)
            {
                // reset the flag to say that partner 2 is still active
                gstruct_GameVars.cPartner2Active = 0;

                iRet = mdialog_addToDialogWithSrchRep ("The tentacle in #!00#\'s mouth ejaculates and so does the tentacle in #!00#\'s anus. ");
                if (iRet != 0) return iRet;

                if (gstruct_GameVars.cPartner1Active == 0)
                {
                    iRet = gamelogic02_scene1041 (0, cSubFlag + 1);
                    return iRet;
                }

                iRet = gamelogic02_scene1039 (0, cSubFlag + 1);
                if (iRet != 0) return iRet;
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("The tentacle in #!00#\'s mouth ejaculates and so does the tentacle in #!00#\'s anus.\n\n#!00# thinks to herself \"Well... that was unexpected... Are the pair of them working together\?\"\n\n");
                if (iRet != 0) return iRet;
            }
        }
        // rear only climax
        else if (cResult == 2)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Rear only Climax !]\n");
                if (iRet != 0) return iRet;
            }

            if (gstruct_GameVars.iClimaxCount2 > 2)
            {
                // reset the flag to say that partner 2 is still active
                gstruct_GameVars.cPartner2Active = 0;

                iRet = mdialog_addToDialogWithSrchRep ("After ejaculating a third time, ");
                if (iRet != 0) return iRet;

                if (gstruct_GameVars.cPartner1Active == 0)
                {
                    iRet = gamelogic02_scene1041 (0, cSubFlag + 1);
                    return iRet;
                }

                iRet = gamelogic02_scene1039 (0, cSubFlag + 1);
                if (iRet != 0) return iRet;
            }
            else
            {
                cRandom1 = rand() % 3;

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle penetrating #!00#\'s anus stiffens up, then ejaculates.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle in #!00#\'s anus starts to thrust in and out erratically. It then ejaculates in #!00#\'s butt.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("The tentacle penetrating #!00#\'s ass starts to twitch, then ejaculates.\n\n");
                    break;
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself ");
                if (iRet != 0) return iRet;

                cRandom1 = rand() % 3;

                switch (cRandom1)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("\"Tentacle semen enema... how delightful...\"\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("\"Thanks for creampie in my butt... do it in my pussy next time...\"\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("\"Nice to know that elves like my butt just as much as the guys back home do...\"\n\n");
                    break;
                }
                if (iRet != 0) return iRet;
            }
        }
        // front only climax
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
                iRet = mdialog_addToDialogWithSrchRep ("The tentacle in #!00#\'s mouth starts hasten its thrusting and then ejaculates.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("The tentacle that is violating #!00#\'s mouth slows down its pistoning little bit, then climaxes.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("The tentacle that is in #!00#\'s mouth starts to shake and pulsate. #!00# then notices that her mouth is full of tentacle semen.\n\n");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep ("However, the tentacle stays in #!00#\'s mouth. She thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;

            switch (cRandom1)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("\"Great... now what am I supposed to do with this stuff...\"\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("\"Oh come on... get out of my mouth so I can do something with this...\"\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("\"Talk about rude... get out of my mouth... moron...\"\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("However, the two tentacles seem to be uninterested.\n\n#!00# thinks to herself ");
            else
                iRet = mdialog_addToDialogWithSrchRep ("However, the remaining tentacle seems to be uninterested.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;

            switch (cRandom1)
            {
            case 1:
                if ((gstruct_GameVars.cPartner1Active != 0) && (gstruct_GameVars.cPartner2Active != 0))
                    iRet = mdialog_addToDialogWithSrchRep ("\"Sorry for being boring... but neither of you are not giving me much options here...\"\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("\"Sorry for being boring... but you are not giving me much in the way of options here...\"\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("\"If I could actually move, I could make this more interesting... Okay... I need to change things around here...\"\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("\"Nice to know that tentacles can get bored... but, tentacles don\'t get bored... stupid elves with an illusion spell do...\"\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("Both tentacles respond by continuing to thrust lightly in and out of #!00#\'s mouth and anus. #!00# thinks to herself \"I had better hold off trying to bite them this time... it might cause problems later...\"\n\n#!00# then realizes that it feels like something is holding her mouth open and concludes that trying to bite is going to be pointless anyway.\n\n");
            if (iRet != 0) return iRet;
        }
        else if (cOverride == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                cRandom1 = rand() % 2;

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# vacuum sucks on the tentacle in her mouth.");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks, then blows on, the tentacle in her mouth.");
                break;

            case 2:
                cRandom1 = rand() % 2;

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the tip of the tentacle that is in her mouth.");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the shaft of the tentacle that is in her mouth.");
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
                    iRet = mdialog_addToDialogWithSrchRep (" The tentacle in #!00#\'s mouth seems to like the attention,");
                else
                    iRet = mdialog_addToDialogWithSrchRep (" The tentacle in #!00#\'s mouth is a little bit more excited,");
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" and continues thrusting away inside of #!00#\'s mouth.\n\n");

                break;

            case 3:
            case 4:
                cRandom1 = rand() % 2;

                if (cRandom1 != 0)
                    iRet = mdialog_addToDialogWithSrchRep (" The tentacle in #!00#\'s anus seems to pulsate,");
                else
                    iRet = mdialog_addToDialogWithSrchRep (" The tentacle in #!00#\'s butt throbs a little bit,");
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" and then continues thrusting away inside of #!00#\'s asshole.\n\n");

                break;

            case 5:
                if (gstruct_GameVars.iClimaxCount1 != 1)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tilts her head back to try and swallow the tentacle semen that is in her mouth.\n\nShe is largely successful in swallowing the tentacle semen, despite the fact that the tentacle in her mouth is still thrusting in and out of it. Some of the tentacle semen trickles out of the corners of her mouth.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to swallow the tentacle semen that is in her mouth, which isn\'t easy considering that her mouth is held open and the tentacle in her mouth isn\'t giving her any respite.\n\nOnly half of the tentacle semen slides down her throat, with the rest spilling out her mouth.\n\n");
                break;

            default:
                if (gstruct_GameVars.iClimaxCount1 != 1)
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to spit the tentacle semen out of her mouth.\n\n#!00# decides to tilt her head forward and lets some of it drool out of her mouth as she tries spitting it out.\n\nMeanwhile, the tentacle in her mouth is still thrusting away.\n\n");
                else
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tries to spit out the tentacle semen in her mouth.\n\nMost of the tentacle semen is drooling out of #!00#\'s mouth, while #!00# ended up swallowing a small amount.\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1038 02 Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene2 (24, 12, 180, 20, 14, 180);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if (gstruct_GameVars.cFOralDropFirst1 == 0)
    {
        if ((cResult == 1) || (cResult == 3))
        {
            iRet = mutils_addToCommandList ("Swallow tentacle semen", 1038, 5);
            if (iRet != 0) return iRet;
            iRet = mutils_addToCommandList ("Spit out tentacle semen", 1038, 6);
            if (iRet != 0) return iRet;
        }
        else
        {
            if ((cResult != -1) || (iSubSceneId != 1))
            {
                iRet = mutils_addToCommandList ("Suck front tentacle", 1038, 1);
                if (iRet != 0) return iRet;
            }

            if ((cResult != -1) || (iSubSceneId != 2))
            {
                iRet = mutils_addToCommandList ("Lick front tentacle", 1038, 2);
                if (iRet != 0) return iRet;
            }
        }
    }

    if (gstruct_GameVars.cFAnalDropFirst1 == 0)
    {
        if ((cResult != -1) || (iSubSceneId != 3))
        {
            iRet = mutils_addToCommandList ("Anal-clamp rear tentacle", 1038, 3);
            if (iRet != 0) return iRet;
        }

        if ((cResult != -1) || (iSubSceneId != 4))
        {
            iRet = mutils_addToCommandList ("Wiggle butt", 1038, 4);
            if (iRet != 0) return iRet;
        }
    }

    return 0;
}

//
// This is a sex scene sub-dialog point.
//
int gamelogic02_scene1039 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // set the anal drop frst 1 flag
    gstruct_GameVars.cFAnalDropFirst1 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1039 02 Sex Scene Change 1}\n\n[set cFAnalDropFirst1]\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# feels that the thing inside her butt disappears. The Tentacle Monster in front of her disappears for a little bit... as if the caster has lost their concentration briefly, then it returns. Meanwhile, the tentacle in her mouth is still thrusting away.\n\n#!00# thinks \"well, that confirms that was one of them back there... and the math sort of makes sense\".\n\n#!00# is grinning inside her vision.\n\n");
    if (iRet != 0) return iRet;

    return 0;
}

//
// This is a sex scene sub-dialog point.
//
int gamelogic02_scene1040 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // set the oral drop frst 1 flag
    gstruct_GameVars.cFOralDropFirst1 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1040 02 Sex Scene Change 2}\n\n[set cFOralDropFirst1]\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("After ejaculating a third time, #!00# feels that the thing inside her mouth disappears... meanwhile her butt is still being violated... if you could call being assaulted by a small twig being violated by anything.\n\n#!00# thinks \"Looks like 3 is their limit... considering the first time it was 6 in total, the little shits must have swapped places\".\n\n#!00# is grinning inside her vision. Meanwhile... the phantom tentacle inside her mouth is still violating #!00#\'s mouth, oblivious to the fact that its real world associate has since stepped away.\n\n");
    if (iRet != 0) return iRet;

    return 0;
}

//
// This is a sex scene exit point.
//
int gamelogic02_scene1041 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1041 02 Sex Scene Exit 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# feels the thing inside her butt pull out and the vision of the Tentacle Monster suddenly disappears.\n\n");
    if (iRet != 0) return iRet;

    // before returning, call the 1043 function point (below), to merge the storyline.
    iRet = gamelogic02_scene1043 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene exit point.
//
int gamelogic02_scene1042 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1042 02 Sex Scene Exit 2}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("After ejaculating for a third time, #!00# feels the thing inside her mouth pull out. However, her vision of the Tentacle Monster is still continuing and it is still appears to be raping three of her orifices with it\'s phantom tentacles, despite the fact that there is nothing in any of them.\n\nEventually the Tentacle Monster disappears.\n\n");
    if (iRet != 0) return iRet;

    // before returning, call the 1043 function point (below), to merge the storyline.
    iRet = gamelogic02_scene1043 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a post-sex scene merge point.
//
int gamelogic02_scene1043 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1043 02 Sex Scene Merge 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("However, #!00#\'s arms and legs are still restrained and her mouth is still held open.\n\nEventually the darkness dissipates, revealing the cell once more.\n\n#!00# looks around and notices that she is strapped into the contraption by the wall again. #!00# then looks around to see where the two elves are.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFAnalDropFirst1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFAnalDropFirst1 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Light-Elf is sitting down on the edge of the bed and the Dark-Elf is standing next to him. The Light-Elf is talking to the Dark-Elf and again, #!00# cannot understand a single word that they are saying.\n\n#!00# thinks \"Maybe poor little Light-Small-Penis is tired\".\n\n#!00# grins... which isn\'t easy to do when you have a mouth spreader holding your mouth open.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFAnalDropFirst1 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFAnalDropFirst1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sees that the Dark-Elf walks over to the edge of the bed and sits down, while the Light-Elf is talking to him.\n\n#!00# thinks \"I must have worn the Dark-Small-Penis out\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFAnalDropFirst1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mutils_addToCommandList ("Free yourself", 1044, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Just wait", 1045, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Free yourself" Path Selection function.
//
int gamelogic02_scene1044 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1044 >Free yourself}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Free yourself\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFAnalDropFirst1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFAnalDropFirst1 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"While those two are distracted\".\n\n#!00# looks at the two elves, then gives a sudden tug with her left arm. She is rewarded with the sounds of metal bending and snapping of rubber.\n\nImmediately the two elves looking at #!00#. The Light-Elf tries to stand up, but ends up falling backwards on the bed. The Dark-Elf glances has his comrade and is unsure of what to do. Meanwhile, #!00# finds that her left wrist is now free.\n\n#!00# thinks to herself \"That\'s one\".\n\n#!00# gives a sudden tug with her right arm. This time, the results are not as impressive, primarily because to free her left arm, she was able to leverage the fact that her right was held fast. This time, her right wrist is not free.\n\nHowever, #!00# notices that she now has the full attention of the Dark-Elf and he has started chanting.\n\nAs #!00#\'s vision starts to black out... she comes to the conclusion that it was worth a try.\n\nTime passes at a different pace... and the confusion sets in...\n\n#!00# thinks to herself \"What\'s it going to be... another rape session with the mystical tentacle monster\?\".\n\nInstead of seeing a Tentacle Monster, #!00# feels a sudden intense pain... and passes out.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFAnalDropFirst1 is set]\n[set cFBreakBonds2]\n");
            if (iRet != 0) return iRet;
        }

        // set the break bonds 2 flag.
        gstruct_GameVars.cFBreakBonds2 = 1;
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFAnalDropFirst1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well... here goes nothing\".\n\n#!00# looks at the two elves, then gives a sudden tug with her left arm. She is rewarded with the sounds of metal bending and the snapping of rubber and punished with the sudden visual attention of the two elves.\n\nThe Light-Elf starts chanting.\n\nJust as the insurmountable pain starts to take hold, #!00# has one thought \"At least I am getting out of this wretched thing.\"... and then she passes out.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFAnalDropFirst1 is NOT set]\n[set cFBreakBonds1]\n");
            if (iRet != 0) return iRet;
        }

        // set the break bonds 1 flag.
        gstruct_GameVars.cFBreakBonds1 = 1;
    }

    // before returning, call the 1046 function point (below), to merge the storyline.
    iRet = gamelogic02_scene1046 (0, cSubFlag + 1);
    return iRet;
}

//
// "Just wait" Path Selection function.
//
int gamelogic02_scene1045 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1045 >Just wait}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Just wait\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to wait patiently, for the two elves to get it together and let her out of the contraption.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFAnalDropFirst1 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFAnalDropFirst1 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("However, after 1 minute passes, #!00# loses her patience. A single minute feels like an eternity while your body contorted to a rather uncomfortable posture, bound to a weird metal thing, with rubber bindings and a rubber mouth spreader stuck in your mouth...\n\n#!00# grunts to get the attention of the two elves, which isn\'t easy considering there is a mouth spreader still holding her mouth open.\n\nThe Light-Elf stands up, steadies himself and starts his enchantment.\n\n#!00#\'s only thought as the pain takes hold is \"about time... cock sucker\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFAnalDropFirst1 is set]\n[set cFGetNoticed1]\n");
            if (iRet != 0) return iRet;
        }

        // set the get noticed 1 flag.
        gstruct_GameVars.cFGetNoticed1 = 1;
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFAnalDropFirst1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Fortunately, #!00# did not have to wait for long. The Light-Elf noticed that #!00# was staring at both him and the Dark-Elf. The Light-Elf says something to the Dark-Elf and then starts chanting.\n\n#!00# passes out due to the pain.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFAnalDropFirst1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    // before returning, call the 1046 function point (below), to merge the storyline.
    iRet = gamelogic02_scene1046 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a post-sex scene merge point.
//
int gamelogic02_scene1046 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1046 02 Sex Scene Merge 2}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# wakes up... with the usual headache and sighs...\n\n\"This shit... again...\"\n\n#!00# opens her eyes and looks around... She sitting in the chair in the corner again.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFBreakBonds2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBreakBonds2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks over at where the contraption was... it is gone. #!00# smiles.\n\n\"Heh...\"\n\n#!00# stands up from the chair and walks over to the spot where the contraption used to be. Other than some scratch marks on the floor, there isn\'t other any evidence that the contraption was even there.\n\nThen, #!00# notices something... well... somethings... that are out of place, with her body.\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("#!00# looks over at the contraption, part of it is missing.\n\n\"Oh... did they take part of it away\?..\"\n\n#!00# stands up from the chair and walks over to the contraption. #!00# looks over the contraption and ponders.\n\n\"Couldn\'t have they just removed the entire thing\?..\"\n\n#!00# grabs either end of the frame with her hands and then gives it a quick twist. The frame easily buckles.\n\n#!00# stands up and admires her handiwork.\n\n");
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.cFVisitTheCon != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFVisitTheCon is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("\"If only slaying Monsters for real was so easy... Fucking Elf illusions aren\'t anywhere near the real thing.\"\n\n");
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

                iRet = mdialog_addToDialogWithSrchRep ("\"Looks like they will have no choice but to take this away now.\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFVisitTheCon is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

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

            iRet = mdialog_addToDialogWithSrchRep ("#!00# looks over at the contraption. Something about it has... changed.\n\n#!00# gets up from the chair and walks over to the contraption.\n\n\"Okay... so what is so different\?..\"\n\n#!00# looks over the contraption and then notices the appendage with the two small dildos attached to it is missing.\n\n\"So... bits can be removed\?.. well.\"\n\n#!00# reaches over and grabs a section with a rubber restraint attached, with one hand, the frame with her other hand and proceeds to separate part of the contraption from its frame, with surprisingly great ease.\n\n\"Hmph... the writing about elven devices being weak shit seems to be true.\"\n\n#!00# tosses the piece of dark-blue colored metal at bars of the cell and somehow manages to miss actually hitting any of the bars. The piece of metal passes right past the cell bars and smashes into the wall of the corridor. #!00# smiles...\n\n\"20 points.\"\n\n#!00# then looks back down at the frame of the contraption, thinking to herself \"they... could still use this... well... not for much longer\".\n\n#!00# grabs either end of the frame with her hands and then gives it a quick twist. The frame easily buckles, while another appendage breaks free and falls off onto the floor.\n\n#!00# stands up and takes in her minor act of destruction.\n\n");
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.cFVisitTheCon != 0)
            {
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[if-03:cFVisitTheCon is set]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("\"Looks like Mr Monster is looking a little worse off now, maybe the elves would be better off finding a real one.\"\n\n");
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

                iRet = mdialog_addToDialogWithSrchRep ("\"And that... finishes that...\"\n\n");
                if (iRet != 0) return iRet;

                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[endif-03:cFVisitTheCon is NOT set]\n");
                    if (iRet != 0) return iRet;
                }
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# looks over at the piece that she tossed outside of the cell and decides that she might as well leave it to the two elves to clean up this mess. One things that #!01# soldiers are not... are maids.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFBreakBonds1 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("While inspecting the broken contraption, #!00# notices something... well... somethings... that are out of place... with her body.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBreakBonds2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"What the...\"\n\nFor a start, if feels has if bees had stung #!00#\'s nipples and they are hard and erect. Her clitoris feels the same. Then there is... another feeling\?!.\n\n\"What have they... did they put... something...\"\n\n#!00# steps out with her right foot, to part her legs and relaxes her labia. However, despite the fact that she is wet, the small obstruction inside her pussy does not want to budge. #!00# has to spend some time sticking her fingers inside her pussy to grab the object and pull it out.\n\nWhen #!00# finally gets the object out, she looks at it...\n\n\"A dildo\? so... in the back...\"\n\n#!00# reaches around, relaxes her anus... a similar obstruction back there proves to be equally as stubborn to get out...\n\nEventually, she manages to pull the small dildo out of her asshole. #!00# then stands upright and examines the two dildos.\n\n\"Elven... shit...\"\n\n#!00# is surprised that despite the fact that both of them appear to be so shiny and smooth that it felt as if the entire length of each one were firmly clinging onto her insides.\n\nWhat #!00# does not know is that many of the dildos in the cell are infused with elven magic, specifically to only move easily if the host they are embedded in is climaxing.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFBreakBonds2 != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFBreakBonds2 is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# then looks at where the contraption used to be, then at the two dildos again.\n\n\"Well... at least this part of Mr Monster stayed behind.\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFBreakBonds2 is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFBreakBonds2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the broken contraption, then at the two dildos again. She comes to the conclusion that the elves must have removed the two dildos from the contraption and placed them inside of her before they left.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFBreakBonds2 is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

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

        if ((gstruct_GameVars.cFVisitTheTable != 0) || (gstruct_GameVars.cFLookAroundRoom != 0))
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFVisitTheTable or cFLookAroundRoom are set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"Those LITTLE pricks...\"\n\n#!00# then looks at the table on the other side of the cell. Specifically at the pile of dildos on top of it.\n\n#!00# wonders to herself \"did these come from there\?..\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFVisitTheTable or cFLookAroundRoom are set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFVisitTheTable or cFLookAroundRoom are NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"Where did these...\"\n\n#!00# then looks around the cell and finally discovers that there is a pile of dildos on the table on the other side of the bed.\n\n\"of course...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFVisitTheTable or cFLookAroundRoom are NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# then throws the two dildos into the corner of the cell where the chair is. They hit the wall just above the chair and fall onto the floor behind it. #!00# then walks over to the table. This time #!00# is moving around the cell more freely, as she is no longer worried about hit from above by another sleep spell.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheTable != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches the table... still the same pile of dildos that she has seen before. As far as she can tell, nothing appears has moved from when she last looked at it.\n\n#!00# sighs... it is depressing to see so many small dildos.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFLookAroundRoom != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLookAroundRoom is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches the table... and takes a better look at the dildos that are on top of it. There are 24 dildos in total, of which only 6 are an acceptable orc size, 2 are larger than that... and the rest are way to small hold #!00#\'s interest.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLookAroundRoom is set]\n");
                if (iRet != 0) return iRet;
            }
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLookAroundRoom is NOT set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("When she reaches the table, for the first time, #!00# thoroughly checks out the contents.\n\n\"Dildos, dildos... and more dildos...\"\n\nThere is nothing else on the table but dildos. 24 dildos in total. There are only about 6 of them that are the large enough to be comparable an actual orc penis, 2 others that are bigger than that... as for the rest...\n\n\"Too small... how are most of these going to satisfy ANYONE!!..\"\n\n#!00# contemplates what the intentions of the elves are.\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLookAroundRoom is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheTable is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Then #!00# realizes that she woke up with two small dildos inside of her this time.\n\n\"Wait... are they SERIOUSLY planning on... using...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFExtIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFExtIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# stops herself for a moment. Maybe this is part of their plan.\n\nThere is still the possibility that there is more than just 2 of them. Even so, if this was meant to be an intelligence gathering activity, why have they done nothing but piss her off\?.. It is well documented that elves are skillful negotiators. So... maybe they want her to do something. Yeah... it has to be something of strategic importance to the elves, they are reasonably good tacticians both on and off the battlefield.\n\nThen #!00# remembers that her nipples and clitoris have been feeling weird and thinks \"Just what have they been using on me\?.. now I feel itchy... and horny...\"\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("#!00# stops herself... then looks around the cell.\n\n#!00# thinks to herself \"Just what IS the purpose of this place\?\"\n\n#!00# considers that this entire cell could hold at least 15 orcs and still have space for all of those 15 orcs to move around and not actually bump into each other.\n\nThe chair... is large...\n\nThe bed is larger...\n\nHer nipples and clitoris are throbbing and she desperately wants to touch them.\n\n\"Wait... What\?..\"\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("#!00# picks up one of the smaller dildos and looks at it.\n\n\"What is this one for... sex with a hawk\?\"\n\n#!00# does not know it, but the dildo that she is holding is beaded and is meant for initial training of a elven anal orifice. However, what the elves don\'t know is that #!01# sexual experience course, that all orcs partake in when undergoing #!01# basic training, starts with something twice as large. By the end of that course, it is considered to be a passing grade if you can take at least one full sized erect orc penis up your butt and a distinction if you can take 3 of them in your anus at the same time.\n\nOne of the side effects of the training is that over half of the straight male orcs discover and solidify their homosexual desires, resulting in less available straight male orcs enrolled in the #!01# for the female orcs to conquer. Not that it matters much as reverse rape is common in the #!02#, primarily so that single female orcs can get pregnant and have children. \n\nBut right now... #!00# is feeling weird... She puts the dildo back on the table.\n\n\"What the...\"\n\n");
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

    iRet = mdialog_addToDialogWithSrchRep ("#!00# looks down at herself, then notices that her nipples are erect and are craving attention. Her clitoris is as well. #!00# looks at the collection of dildos, then back at the bed.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Try and ignore this sensation and sit down", 1060, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Grab some dildos and head over to the bed", 1061, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Ignore the dildos and head over to the bed", 1062, 0);
    if (iRet != 0) return iRet;

    return 0;
}


