//
// gamelogic07.c
//
// This is group 7 of scene ids.
//
// These are the ending sequences.
//

#include "common.h"
#include "gamelogic.h"

// external linkage to the game variables.
extern  struct  gamelogic_variablelist  gstruct_GameVars;
extern  char    gcDebugFlag;


//
// This is the dialog scene for Ending 001.
//
int gamelogic07_scene1180 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1180 Ending 001}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[much... much later...]\n\nThe Female Orc wakes up. It was a quick nap. A short rest from her duties at the brothel. As usual, she is aroused, ready for the next penis or three.\n\nPenis... Cock... Dick... it does not matter the name. They all belong to her masters and she IS an obedient fucktoy.\n\nIt does not matter how many there are. She loves them all. She wants them all. Size no longer matters.\n\nNothing matters, except, the craving, the itch, for more hot dick-milk... penis-sauce... cock-paste...\n\nShe might have had a name once. She seemed to have one in her dream. A name that she called herself. A name that she answered to. She cannot remember what it was. A name is no longer important.\n\nShe has a lot of new names now... \"<Orc-Slut>\"... \"<Bitch>\"... \"<Fuck-Slave>\"... are just 3 of them. Those names are more meaningful to her. She barely understands them and they are not in her native language. Not that she can speak her native language... or have a conversation with anyone... or understand what is said to her.\n\nThere is only one thing that she understands now, it is all she NEEDS to understand now.\n\nThe door of the room that she is in, opens... her masters enter... they have the one thing that she wants, desires and would die for... She licks her lips in anticipation... the one thing that she only understands is about to happen... again.\n\nShe wants their cocks... pounding her every orifice... filling every nook and cranny of her body... that is all that can fill the empty void... it is all that her heart and soul needs, wants and desires.\n\nThe horny male elves have their way with her... for this this is her sole reason for existing.\n\n\nSleep well... #!00#...\n\n<Ending 1: Total Enslavement>\n\n");
    if (iRet != 0) return iRet;

#ifdef INTERFACE_CURSES
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    return iRet;
#else
    return 0;
#endif // INTERFACE_CURSES
}

//
// This is the dialog scene for Ending 009.
//
int gamelogic07_scene1200 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1200 Ending 009}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# wakes up... there is no throbbing in her head...\n\n... however, this time the aching of her nipples and clitoris is milder. They are still itchy, but not as much as it has been recently. There is still the same sound of the wind in the distance.\n\nThere is still the same familiar feeling of rubber on her back. There is something, odd, about her arms and legs. Something, is tightly wrapping around them.\n\n#!00# opens her eyes and for some reason she sees her reflection. #!00# blinks.\n\n\"Eh\?..\"\n\n#!00# is laying down on a bed and she can see her entire body. Why is that\?\?. The bed is still covered rubber. But, the rubber has changed color. It is now deep-pink\?\?. And the bed is now circular in shape. It is still large. The floor is a different color. Light-coral is a strange color for floor. Is that... carpet\?\?. Then there are her arms and legs.\n\n#!00# blinks again and brings her right hand up to her face to get a better look directly at it. Latex rubber, not quite white. It has a slight brown tint, antique-white. She flexes her hand a couple of times and turns it over. Whatever it is covering her hand is slightly restricting her movement. It seems to be the same as the gloves that saw the two elves wearing. It is just a different color. #!00# then checks her left hand, and finds it is the same. She considers checking her feet and legs, but assumes those are the same.\n\n#!00# turns her head and looks over at the direction where the faint sound of the wind is coming from. A wall... light-gray color... white-smoke luminescent orbs... bars... dark-slate-blue color... a door... she is still inside the cell... #!00# looks at the ceiling... then props herself up on an elbow... #!00# thinks to herself \"that is one BIG mirror... oh... it is actually smaller panels... but... why on the ceiling\?.. is this even... the same cell\?.\"\n\n#!00# looks back at the front of the cell. The same corridor as before. But, there is something about the spacing\?.. #!00# blinks as she looks at the corridor outside and finally realizes that there are now 4 light orbs on either side of the door, instead of 3 with one extra orb shining through the bars of the door. #!00# thinks to herself \"I knew it... there are more of those orb light things... this cell is wider... this IS NOT the same cell.\"\n\n#!00# then concentrates on the cell door. It is not quite the same. There is a handle attached to the latch-plate. It would appear that THIS door could be opened from the inside without a key.\n\nThen #!00# thinks to herself \"what about the rest of this place\?\".\n\n#!00# starts to glance around the cell. Floor standing mirror, chair, drawers, cabinet...\n\nThen, she notices that there is a three person sofa behind her and the two elves are sitting in it.\n\nBoth the Light-Elf and Dark-Elf are sitting on the sofa and are naked, except for their latex gloves. They had been sitting there, quietly, the entire time.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLightElfHumilate != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("As the two elves stand up, #!00# notices that their respective penises are already partially erect and their penises seem to be slightly bigger than before. For some reason, when #!00# sees them, her clitoris and nipples start to ache a little bit more than normal.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("As the two elves stand up, #!00# notices that their respective penises are already partially erect. For some reason, when #!00# sees them, her clitoris and nipples start to ache a little bit more than normal.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("While #!00# sits there, trying to comprehend her emotions, the Dark-Elf walks over to the set of drawers and opens one of them. Meanwhile, the Light-Elf walks over to the edge of the bed and just stands there while smiling at #!00#. #!00# looks at the Light-Elf and thinks to herself \"He... isn\'t scared\?..\"\n\n#!00# considers for a moment that most of her strength has returned and she can overpower both of the elves in a matter of seconds. However, neither of them are keeping their distance, behind the safety of the cell bars, or are using any magic on her. They are not actively using her as a \'Dutch Wife\' either. Then there is the fact that she isn\'t feeling the effects of the elven concoctions that they were using on her recently.\n\n#!00# decides to see what they are up to, so she crawls over to the edge of the bed where the Light-Elf is standing. When she is the edge of the bed, the Light-Elf holds out his open right hand, with the palm facing the ceiling. #!00# stops crawling and glances at his hand, then at his face, then looks at his hand again. #!00# thinks to herself \"I have no idea what he wants... so... maybe...\"\n\n#!00# places her left hand in his right palm and with a little bit of squealing of latex rubber on latex rubber, he curls up his right fingers, bows down and kisses her hand. #!00# blushes a little bit and thinks to herself \"I have no idea what he is doing, but if this is foreplay... I\'m in.\"\n\nWhat the elves don\'t know is that the orc concept of courtship involves knocking down the potential future spouse, overwhelming them with excessive brutal strength, then raping them into submission. In #!02#, it is equally as common for a female orc to make the first move as the male.\n\nAfter standing back up straight, the Light-Elf then helps #!00# get up from the bed, which isn\'t easy for him given the difference in weight and strength. Not that #!00# needs any help as her arousal isn\'t sky-high. She accepts the fact that he wants to help. After #!00# stands up, towering over the Light-Elf, the Dark-Elf bounds towards them, holding what looks to be a series of rubber straps that are stuck together in selected places. The color of the rubber is partially the same as the antique-white colored latex thigh-high stockings and shoulder-length gloves that #!00# is currently wearing. There are what appear to be little crimson colored bows also on parts of the rubber \'thing\' that the Dark-Elf is holding. #!00# looks at the Dark-Elf, he is smiling, but there doesn\'t appear to be any malice behind his expression. She then looks at the rubber \'thing\' he is holding, trying to figure out what it is.\n\nThe Dark-Elf then points over at the large mirror that is next to a wall, then grabs #!00#\'s right hand and leads her towards it. #!00# wonders a number of things while the Dark-Elf is leading her towards the mirror. What is the rubber \'thing\' he is holding\?.. Why is the floor of this cell so soft\?.. Why is she letting the Dark-Elf lead her around\?.. Why isn\'t either of the elves so scared of her right now\?.. Why does she need to go to a mirror against a wall, when the entire ceiling is one big mirror\?.. Why is the ceiling one big mirror\?.. Why did she blush when the Light-Elf kissed her hand\?..\n\n#!00# adds some more questions to her ever growing list when the Dark-Elf has brought her over to the mirror. He is standing there, walking around her, primarily focusing on her torso, but not so much just her breasts. Then the Dark-Elf starts making motions for #!00# to do something. However, she cannot figure out what it is. The Dark-Elf tries talking Elven, then the Light-Elf starts talking. Both #!00# and the Dark-Elf look at the Light-Elf.\n\nThe Light-Elf is walking towards them while holding onto a rather simple looking chair. After the Light-Elf puts the chair down in front of the mirror, #!00# quickly works out that they really want her to sit down, on the chair, in front of the mirror. #!00# thinks to herself \"Okay... I will play along\".\n\n#!00# sits down and the elves proceed to put the rubber \'thing\' on her. Once the elves have finished clipping the harness bra into place, #!00# finds it rather strange that someone would make a chest brace that is so... flimsy...\n\nAfter #!00# stands up, the Light-Elf grabs the chair and takes it away. #!00# looks at her profile in the mirror, then realizes that the Dark-Elf is also walking around her again. He is concentrating on the rubber harness bra. #!00# thinks to herself \"Maybe he made it... wait...\".\n\n#!00# remembers that he took the harness bra from a drawer. #!00# looks at the set of drawers. There are a LOT of individual drawers. She walks over to them opens a drawer and finds that there are a LOT more rubber and rubber latex garments inside of it. Each is different and different colors. #!00# has no idea what they are for, so she opens another drawer... it is full as well.\n\n\"Just... how many\?..\"\n\n#!00#\'s discovery is interrupted by the Dark-Elf clearing his throat to get #!00#\'s attention. He is standing next to a large double cabinet. He opens the door of the cabinet...\n\n... hanging inside are a number of dresses. They are all latex rubber and not a single one will conceal #!00#\'s breasts or genitals, when worn, but there is still a cabinet full of them.\n\n#!00# closes the drawers that she opened and wonders over to the cabinet. She looks at the Dark-Elf and points at herself with a \'is this for me\?\' expression on her face. The Dark-Elf says something short in Elven and nods his head. #!00# then looks at the dresses and then realizes that the Dark-Elf only opened one door of the cabinet.\n\n#!00# then opens the other door of the cabinet. She finds are more rubber and rubber latex dresses inside the other door of the cabinet. #!00# is speechless. Meanwhile the Dark-Elf is rather pleased with himself and the Light-Elf is standing nearby quietly observing.\n\nWhat the elves don\'t know is, in #!02#, a female orc will receive 1 or maybe 2 new dresses from her new husband on their wedding day. Most orcs only have 2-3 outfits that are theirs at any point of time in their life, unless they are extremely wealthy. They have just showered #!00# with more dresses and clothing accessories than an average orc would ever have in a lifetime. Therefore, it was only natural that #!00# would interpret the situation in a rather peculiar way.\n\n#!00# closes the doors of the cabinets and starts crying. The two elves start to get concerned and walk over to #!00#. When the pair of them get within her reach, she grabs both of them and pulls them in close.\n\nInitially, both of the elves are rather afraid, but the concerns for their lives are proven to be needless when she starts tongue kissing both of them.\n\nAfter #!00# gives both of them a good smooch...\n\n\"I am going to keep BOTH of you.\"\n\n\n[10 minutes later...]\n\nThe Light-Elf is in the center of the bed, laying flat on his back. #!00# is in the process of mounting his penis.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLightElfHumilate != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("As the Light-Elf\'s penis slides into #!00#\'s pussy she thinks to herself \"Definitely bigger... I like this.\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("As the Light-Elf\'s penis slides into #!00#\'s pussy she thinks to herself \"Still small... but... I can can get used to this.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# takes the entire Light-Elf\'s shaft with great ease, but does her best to support most of her weight so she does not crush the pelvis of the Light-Elf. The Dark-Elf climbs up behind #!00#, shoves his penis into her anus and grabs her breasts from behind.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLightElfHumilate != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLightElfHumilate is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# marvels at the fact that the Dark-Elf\'s erect penis is also larger than before and the fact that she has managed to score both of them.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# ignores the fact that the Dark-Elf\'s penis is still the same size, choosing to focus on the fact that the pair of them together are as good as any single male orc.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLightElfHumilate is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# finds that all she needs to do is maintain her posture and let the two elves move for her, but it makes it a lot more interesting if she does something as well.\n\n\n[More than half a year later...]\n\n#!00# is sitting on the 3 person sofa, inside the carpeted cell that she calls home. She is lightly fingering her clitoris, while waiting for her two boys to finish their day at work.\n\nWork... for her boys... is in the neighboring cell.\n\nThere is a lot of moaning coming from the next cell and the occasional conversation in Elven, which #!00# understands some of the words from. The human female slut gives out some more moans, as her boys continue breaking her will and make her crave sex even more. Every month they reduce another woman to nothing more than a cock-hungry slut. Humans, Goblins, Gnomes... it does not matter. Recently, there was an Imp. The Imp was was ferocious, but faster to tame than all of the others once they got her in the mood. Where they all go afterwards is unimportant. The elves seem to have this insatiable appetite for non-elven women to use as sexual playthings. There have been no other orcs, and that seems to be more the decision of her boys, rather than #!00#\'s.\n\nToday, #!00# is wearing a combination of violet rubber and dark-violet latex rubber harness-bra camisole, with a salmon toe-less latex thigh high stockings with a matching rubber suspender belt. #!00# prefers toe-less socks and stockings, as she likes the feel of the light-coral shag pile carpet underneath her feet. She has so many outfits that she can wear in so many different combinations, as if she is #!02# royalty.\n\n#!00# looks over at the door handle. It would be easy for her to leave this cell, walk over to the next one and join in the fun. She has keys to all of the doors now, but has no intention of leaving the cell-block. She likes it here. The primary reason that she is waiting in the carpeted cell, is because her belly is swollen, along with her breasts. Her boys don\'t want her risking the life of their child, so #!00# stays here. It makes them less anxious. #!00# isn\'t sure who the father is, as they were both impregnating her at the same time. That isn\'t important... they are both her boys... her husbands. This is their child.\n\nThere is a sudden change in the tempo as the human woman is clearly having another mind-blowing orgasm, then brief a silence which is broken by more conversation between the two elves. #!00# thinks to herself \"sounds like they are done for the day.\"\n\nThere is some more sounds of movement in the next cell, but not too much, followed by the sound of the cell door being closed. But, there is no sound of the latch-bolt. #!00# thinks to herself \"Is it THAT time for this slut already\?\"\n\nThen there are the sounds of shuffling footsteps in the hallway, as the two elves return. It does not take long as they are just in the next cell over. Without hesitation they walk into sight, both of them are naked, except for their gloves. Both are carrying their robes. The Light-Elf is holding a small bowl.\n\nThe Dark-Elf unlocks the door with his magic and, as usual, the elves two enter their home.\n\n\"<Welcome back>.\"\n\n#!00# has learned to speak some Elven from the two elves and the elves have learned some Orc from her. They aren\'t at the level of holding a decent conversation, but they can exchange basic phrases. The essentials are already covered, primarily being anything that is sexual or derogatory in nature.\n\n\"<How was human bitch\?>.\"\n\nThe Light-Elf responds in Orc \"Acceptable Fuck-Slave.\"\n\nWhile #!00# considers the potential for the Light-Elf to become a translator on the battlefield, or at least in organizing a trip to a brothel for some visiting orcs, the Light-Elf steps forward offering the small bowl to #!00#. #!00# glances at the Dark-Elf, then at the bowl.\n\nInside the bowl are four spent condoms, that are tied off, each full of elven semen. #!00# looks up at the Light-Elf, as she would have expected six. It would appear that her boys were holding back with their training today. But this is to be expected, as they always do that just before the \"escape test\".\n\n#!00# takes one of the condoms sticks it in her mouth. She tastes the combination of rubber and elven aphrodisiac mixed into the human pussy juices. #!00# can tell that the recent human is close to graduating from this private school of perversion. The presence of the elven concoction heightens her own arousal, as always.\n\n#!00# does not like the idea of her boys wasting their semen on the sluts that they train, so they wear condoms now. As agreed, #!00# has to consume the semen in front of both of the elves afterwards. #!00# does not have a problem with this, as it means that she selfishly keeps all of their semen to herself.\n\n#!00# then stands up and rips open the condom with her teeth and starts greedily gobbling the contents. She lets some of the semen drip onto her swollen breasts, as a service to her boys. #!00#\'s breasts are starting to lightly ooze breast milk.\n\nThe two elves wonder over and start massaging #!00#\'s breasts. The Dark-Elf takes the left and the Light-Elf takes the right. After a brief massage, then they start sucking on #!00#\'s breasts. #!00# likes this, especially since all that she has to do is stand there and let her boys do the rest. She does not have to finger her own clitoris anymore, as they do that for her.\n\n#!00# lightly climaxes and sprays quite a bit of milk into their mouths, while hugging both of them to her tits. Once her orgasm subsides, #!00# lets go of them and notices their raging erections.\n\n#!00# starts to rub her own belly and the two elves also join in with the rubbing and petting of #!00#\'s belly.\n\n\"Time for baby to meet their daddies... don\'cha think\?\"\n\nThe Light-Elf looks at the Dark-Elf. The Dark-Elf responds in Orc \"Sure.\"\n\nThe trio walk over to their large, circular and covered in deep-pink latex bed. They are slightly more excited than normal, as they partake in a new perversion together.\n\n\nFurther training of the Human woman can wait till later.\n\n<Ending 9: Mamma Orc>\n\n");
    if (iRet != 0) return iRet;

#ifdef INTERFACE_CURSES
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    return iRet;
#else
    return 0;
#endif // INTERFACE_CURSES
}

//
// This is the dialog track leading to Ending 002.
//
int gamelogic07_scene1220 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1220 Ending 002 track}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# wakes up. As usual, her clitoris and nipples are itchy again.\n\n#!00# sighs \"No... this isn\'t... shouldn\'t be normal.\"\n\n#!00# opens her eyes despite the fact that she still has a minor headache. To try and keep her mind off the minor pounding in her head, that her nipples want to be teased, her clitoris pinched and her pussy is drooling for a big thick cock. #!00# and looks at the ceiling, walls and the orb things that light up the cell.\n\n\"This... isn\'t helping.\"\n\n#!00# moves her right arm and the rubber sheets squeal as usual. #!00# feels her feet on the light-gray stone floor and comes to the conclusion that the elves left her in the same spot as before. #!00# decides that she might as well look around the cell to see if anything changed.\n\n#!00# starts to sit up on the bed. The next thing that she notices is that the door is wide open. However, #!00# isn\'t in the mood to make a run for it right now.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Again\?.. they certainly are stubborn about me doing something with this door.\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("\"This... is worrying... what does this prove\?.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# then suddenly hears something behind her. It was as if somebody cleared their throat.\n\n#!00# looks around and sees the Light-Elf. He is sitting on a chair, in the rear-right corner of the cell. The Light-Elf is wearing his robes and... the chair...\n\n#!00# glances over at rear-left corner and can still see the large chair still there. That chair is empty, so... where is...\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks around the cell to see if the Dark-Elf is here, or there is anything else out of place. The table and the dildos are still there. #!00# then looks around her legs... and notices that the tray-table is gone.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks around the cell to see if the Dark-Elf is here, or there is anything else out of place. The collection of dildos is still on the floor next to the wall. #!00# then looks around her legs... and notices that the tray-table is gone.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# then looks at the Light-Elf again and thinks to herself \"It looks like he is here alone... so he probably THINKS he has the upper-hand...\"\n\n#!00#\'s nipples and clitoris throb... and she winces... #!00# continues thinking to herself \"Okay... this elven jerk HAS the upper-hand... I am... in no condition to rush him right now.\"\n\n\"Okay... so... what do yah want\?\"\n\nThe Light-Elf raises his eyebrows and points at the open door of the cell. #!00# looks at the door, then back at the Light-Elf and thinks to herself ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Is this... the door test again\?..\"\n\n#!00# sighs, turns over and manages to stand up from the edge of the bed. As she stands up, #!00# thinks to herself \"There has to be a catch... other than my... reduced mobility.\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("\"Oh you have to be kidding...\"\n\n#!00# sighs, turns over and manages to stand up from the edge of the bed. As she stands up, #!00# thinks to herself \"There has to be a trap here, running... is going to be... a really bad idea.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the Light-Elf again, he isn\'t saying or gesturing anything. #!00# turns around and walks over to the door of the cell. She carefully checks over the ceiling and floor, to see if there is anything weird that stands out. #!00# thinks to herself \"Okay... running isn\'t an option so, so maybe... two things that I can do now\?\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the Light-Elf again, he isn\'t saying or gesturing anything. #!00# turns around and walks over to the door of the cell. She carefully checks over the ceiling and floor, to see if there is anything weird that stands out. #!00# thinks to herself \"Okay... I am not going to run, there is only one thing that I can do now...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1222 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mutils_addToCommandList ("Close the door", 1221, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Ignore the door", 1222, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Close the door" Path Selection function.
//
int gamelogic07_scene1221 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // set closed the door 2 flag.
    gstruct_GameVars.cFClosedTheDoor2 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1221 >Close the door}\n\n[set cFClosedTheDoor2]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Close the door\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"As FUCKING dangerous as this is...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well... here goes nothing...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches out to the door with her left hand and grabs it. #!00# looks around, checks herself and finds that she isn\'t being hit with a spell, or anything strange about the door.\n\n\"Okay... good so far.\"\n\n#!00# pulls the door so that it closes. As soon as the outer latch-plate touches the door-frame, the latch-bolt slides back into place with an audible click.\n\nThen, with a deep breath, #!00# takes her left hand off the door. #!00# then turns around and looks at the Light-Elf.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1223 (0, cSubFlag + 1);
    return iRet;
}

//
// "Ignore the door" Path Selection function.
//
int gamelogic07_scene1222 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // set ignored the door 2 flag.
    gstruct_GameVars.cFIgnoredTheDoor2 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1222 >Ignore the door}\n\n[set cFIgnoredTheDoor2]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Ignore the door\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"What do I know about this Elf... well he likes inflicting pain... If I was to touch this door now...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Well I could touch the door and do nothing... no... too risky...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# backs away from the door leaving it alone. #!00# then turns around and looks at the Light-Elf.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1223 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1221 and 1222 above.
//
int gamelogic07_scene1223 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    iRet = mdialog_addToDialogWithSrchRep ("{1223 Ending 002 Merge 1}\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Well... what\'s next\?\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("\"Okay... your move...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf raises an eyebrow, then immediately stands up from his chair. There is a hissing sound above #!00#\'s head.\n\n\"What\?!\"\n\n#!00# does not need to look up to see the pale-violet-red mist that is descending from just about the entire ceiling of the cell.\n\n\"Shit...\"\n\n#!00# is hit by the sleep spell mist, she starts to collapse and notices that there was a small section of the ceiling just above the Light-Elf where the mist didn\'t appear.\n\n#!00# was about to curse at the Light-Elf, but passed out and collapsed on the floor before she could utter another word.\n\n");
    if (iRet != 0) return iRet;

    // if the PC did not close the door, then switch endings.
    if (gstruct_GameVars.cFClosedTheDoor2 == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-and-endif-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# starts to wake up. There is a slight throbbing in her head again.\n\n#!00# sighs \"Nope... definitely not... Huh\?\"\n\nFor the first time in a while, #!00#\'s nipples and clitoris aren\'t crying for attention. Also, her pussy isn\'t as swollen.\n\n#!00# opens her eyes and thinks about touching her nipples, just to be sure, but then realizes that there is something constraining her hands.\n\n\"What... is...\"\n\n#!00# looks at her left and right hands and notices that they are both covered in black latex gloves. #!00# decides to not touch herself, but look around instead.\n\nThe next thing that she notices is that she isn\'t on the bed in the center of the cell, but laying on the large chair in the back-left corner.\n\n\"Where... is...\"\n\n#!00# immediately looks to the other rear corner of the cell, where the Light-Elf was sitting on his chair. Neither the Light-Elf or the chair he was sitting on is there anymore. But... there is...\n\n#!00# looks over at the bed in the center of the cell. There is another woman sleeping in the middle of it. #!00# stands up from the chair, quickly looks around the cell and through the bars to the hallway outside of the cell. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the table and the collection of dildos on it.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the collection of dildos against the right wall.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" The door is closed and the latch-bolt is clearly visible. Obviously, the door is locked.\n\n#!00# then looks behind her, at the chair. While she turns around, #!00# finds that she can move a lot more freely now.\n\n#!00# decides to check out the woman laying in the center of the bed. #!00# slowly walks over to the bed and crouches down beside it.\n\nFor a start, the woman is clearly a Gnome. #!00# hasn\'t seen a Gnome before, as she was never stationed anywhere near the Gnome Kingdom, but the height and rough facial features of the woman matches what she had read in the #!01# textbooks all those years ago.\n\n#!00# then notices that the Gnome-woman\'s nipples are erect, #!00# stands up and notices that the Gnome-woman\'s clitoris is also erect and her legs are slightly apart. #!00# thinks to herself \"That is a strange position to sleep in\". #!00# walks around the bed, to get a better view of the Gnome-woman\'s pussy.\n\nWhile #!00# continues walking around the bed, she notices that there are two dildos, laying on the bed, between the thighs of the Gnome-woman. #!00# then notices that the Gnome-woman\'s pussy is swollen and moist.\n\n\"Well... someone is excited.\"\n\n#!00# looks around the cell, out into the hallway again, then at her gloved hands. #!00# thinks to herself \"Okay... what are those two elven perverts trying to tell me here\?\"\n\n#!00# looks at her right hand and lightly touches her left nipple. Then lifts her hand off again. #!00# compares her left and right nipples. There is hardly any change, even though she touched it with elven rubber. #!00# considers the fact that she is now back in control of her own sexual urges.\n\n#!00# is distracted from her discovery by the Gnome-woman in the center of the bed, who starts to moan and finger herself.\n\n\"I thought... you were asleep.\"\n\n#!00# walks around the bed to the side closest to the door and looks at the Gnome-woman\'s face. She is appears to be still asleep.\n\nBut the Gnome-woman is clearly, masturbating, in her sleep\?\n\n\"Sleep-masturbation... who would have thought...\"\n\n#!00# squats down and crawls along the surface of the bed, to get a better look at the Gnome-woman. The Gnome-woman lightly tosses her head and licks her lips.\n\n#!00# considers for a second that the elves might be up to something and listens carefully. The only sound that she can hear, other than the Gnome-woman occasionally moaning is the sound of the wind in the distance. There is nothing that sounds like chanting at all.\n\n#!00# suddenly has an idea. If the Gnome-woman is dreaming about sex, then she would be pretty frustrated if she wasn\'t actually getting any. With that in mind, #!00# crawls around the bed till she is between the crotch of the Gnome-woman.\n\n#!00# has had Lesbian sex with Goblin and Human women on separate occasions as part of #!01# battle-raids, but never with a Gnome before. #!00# thinks to herself \"Well... there is a first time for everything...\"\n\n#!00#\'s nipples and clitoris start to harden, but #!00# knows it is because she is genuinely excited about this encounter and not because of \'some elven shit\' that she has been doped up with.\n\n#!00# grabs the two dildos that are laying on the bed and puts them aside, as she won\'t be needing them for the entree.\n\n#!00# then grabs the legs of the Gnome-woman and starts greedily licking and sucking the Gnome-woman\'s clitoris and pussy. Given that the Gnome-woman was so aroused in the first place, it does not take #!00# long to make the Gnome-woman orgasm.\n\nNaturally, the Gnome-woman wakes up. She looks around the cell groggily and then sees #!00#. The Gnome-woman blinks as she tries to focus on #!00#.\n\nMeanwhile, #!00# is holding onto the Gnome-woman\'s legs with a big smile on her face, while also holding the two dildos with her right hand.\n\n\"Hey... are you ready... because I have just gotten started...\"\n\nThe expression of the Gnome-woman\'s face morphs into one of pure fear. She says something to #!00# that #!00# cannot understand. It definitely wasn\'t Elven as #!00# has heard enough of that from the elves recently.\n\nThe Gnome-woman\'s repeats her last statement, while trying to grab the sheets of the bed to pull herself away.\n\n\"Aww... isn\'t that cute... here... let me give you a hand...\"\n\n#!00# then takes one dildo with her left hand and forces it into the Gnome-woman\'s pussy. The Gnome-woman\'s head whips back as she almost orgasms.\n\n#!00# then sticks the second dildo into the Gnome-woman\'s anus causing the Gnome-woman to lightly orgasm.\n\n#!00# then looks at the Gnome-woman\'s face. The Gnome-woman is wearing an expression somewhere between excitement and \'oh fuck, an orc is about to devour me\' worry.\n\n\"Don\'t worry, hun... I\'ll play nice.\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1224 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic07_scene1224 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1224 >Slowly thrust into the Gnome\'s pussy}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1224 >Slowly thrust into the Gnome\'s anus}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1224 >Spin the Gnome\'s anus dildo around}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1224 >Spin the Gnome\'s pussy dildo around}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1224 >Lick the Gnome\'s clitoris}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1224 >Suck the Gnome\'s clitoris}\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Slowly thrust into the Gnome\'s pussy\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Slowly thrust into the Gnome\'s anus\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Spin the Gnome\'s anus dildo around\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Spin the Gnome\'s pussy dildo around\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep (">Lick the Gnome\'s clitoris\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Suck the Gnome\'s clitoris\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# thrusts the dildo in the Gnome-woman\'s pussy in and out.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# thrusts the dildo in the Gnome-woman\'s anus in and out.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# rotates dildo in the Gnome-woman\'s anus around.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# twirls dildo in the Gnome-woman\'s pussy around.\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the Gnome-woman\'s clitoris.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks the Gnome-woman\'s clitoris.\n\n");
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

                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman starts lightly rocking her hips, then arches her back while making a muffled high-pitched squeal.\n\n#!00# thinks to herself \"Hun, that was DEFINITELY from you.\"\n\nThe Gnome-woman starts to relax her body. #!00# decides that she should continue teasing the Gnome-woman.\n\n");
                break;

            case 2:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Two !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman starts bucking her hips, while arching her back again. The Gnome-woman starts to squeal while also trying to say something.\n\nThe Gnome-woman collapses on the bed. #!00# looks at giddy expression on the Gnome-woman\'s face. #!00# thinks to herself \"Aww... isn\'t that cute...\"\n\n#!00# decides that she should continue playing with the Gnome-woman.\n\n");
                break;

            case 3:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Three !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman suddenly starts shaking her butt, while arching her back and digging her hands into the rubber latex sheets and yelling something that #!00# cannot understand. Some droplets of pussy juices hits #!00# in the face.\n\nThe Gnome-woman collapses on the bed, breathing heavily with an after orgasm glow.\n\n#!00# looks at the Gnome-woman and thinks to herself \"Hun, we are just getting started...\"\n\n");
                break;

            case 4:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Four !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman orgasms again and #!00#\'s face receives a brief squirt of pussy juices.\n\nThe Gnome-woman stops digging her fingers into the latex sheets and collapses onto the bed again while breathing heavily.\n\n#!00# looks at the smile on the Gnome-woman\'s face and thinks to herself \"Now that\'s what I want to see.\"\n\n");
                break;

            case 5:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Five !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman quickly climaxes. This time the Gnome-woman\'s pussy juices hits #!00#\'s breasts.\n\n#!00# looks down at her soaked tits while the Gnome-woman calms down from her orgasm. #!00# thinks to herself \"Oh... how thoughtful of you...\"\n\n#!00# then looks at the Gnome-woman\'s face.\n\n\"Let\'s do that again...\"\n\n");
                break;

            case 6:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Six !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman climaxes again, while screaming something that is neither Orc or Elven. #!00# receives yet another spray of pussy juices.\n\nThe Gnome-woman collapses onto the bed again. Her eyes start to close, so #!00# lightly licks her clitoris and stops.\n\nThe Gnome-woman opens her eyes and looks at #!00# again.\n\n\"Well?..\"\n\nThe Gnome-woman licks her lips and smiles at #!00#.\n\n\"Sure, hun...\"\n\n");
                break;

            default:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Seven !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman has a rather vigorous climax, and #!00# receives another spray of pussy juices. This time the Gnome-woman has put aside talking while cuming her brains out, and just makes a high pitched squeal.\n\nThe Gnome-woman collapses onto the bed and closes her eyes.\n\n");
                if (iRet != 0) return iRet;

                iRet = gamelogic07_scene1225 (0, cSubFlag + 1);
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the dildo in the Gnome-woman\'s pussy in and out,");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the dildo in the Gnome-woman\'s anus in and out,");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly spins dildo in the Gnome-woman\'s anus around,");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly spins dildo in the Gnome-woman\'s pussy around,");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly licks the Gnome-woman\'s clitoris,");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly sucks the Gnome-woman\'s clitoris,");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" However the Gnome-woman is looking at #!00#, with a rather concerned expression.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;

            if (cRandom1 == 1)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"This isn\'t good, you should be experiencing pleasure... not fear... I should change things around...\"\n\n");
            }
            else if (cRandom1 != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"You are worried... in the middle of sex... with ME\?\?. Hun, I should change things around to keep you happy...\"\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"I know, I know... the same stuff is getting boring... no need to panic about it... I should shake things up a bit...\"\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by slowing thrusting the dildo in Gnome-woman\'s pussy.");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by slowing thrusting the dildo in Gnome-woman\'s anus.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by lightly spinning dildo in Gnome-woman\'s anus around.");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by gently twisting dildo in Gnome-woman\'s pussy around.");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts with lightly licking the Gnome-woman\'s clitoris.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts with gently sucking the Gnome-woman\'s clitoris.");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" The Gnome-woman starts to relax a little bit and writhe on the latex sheets. Initially #!00# thinks that the squealing is from the Gnome-woman, but then she realizes that the squealing and squelching is from both #!00# and the Gnome-woman moving on top of the latex bed.\n\n#!00# starts to wonder if the Gnome-woman is purposely remaining quiet, then she notices that the Gnome-woman is starting to panic again.\n\n");
            if (iRet != 0) return iRet;

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# gives the dildo in the Gnome-woman\'s pussy a couple more thrusts");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# gives the dildo in the Gnome-woman\'s anus a couple more thrusts");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# rotates dildo in the Gnome-woman\'s anus around another couple of times");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# spins dildo in the Gnome-woman\'s pussy around another couple of times");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# licks the Gnome-woman\'s clitoris another couple of times");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# sucks the Gnome-woman\'s clitoris another couple of times");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" to get the Gnome-woman into a more pliable state again.\n\n#!00# thinks to herself \"You must be on that \'weird elven shit\' that they had me on... well... I can work with that...\"\n\n");
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
            cRandom2 = rand() % 5;

            if (cRandom2 == 4)
            {
                if (gstruct_GameVars.iClimaxCount1 > 3)
                    cRandom2 = 0;
                else
                    cRandom2 = rand() % 4;
            }

            if (cRandom1 == 1)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately pulls back on the dildo in the Gnome-woman\'s pussy, then firmly pushes it all of the way back into the Gnome-woman\'s pussy, before pulling it back out.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly thrusts the dildo in the Gnome-woman\'s anus in and out a couple of times, before pushing the dildo back in while twisting it.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# twists the dildo in the Gnome-woman\'s anus, stops, then lightly pushes the dildo in and pulls it back out again.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly gyrates the dildo in the Gnome-woman\'s pussy a few times.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately licks the Gnome-woman\'s clitoris.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently sucks Gnome-woman\'s clitoris, then lightly blows on the Gnome-woman\'s clitoris, then gently sucks the Gnome-woman\'s clitoris again.\n\n");
                    break;
                }
            }
            else if (cRandom1 != 0)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pushes the dildo in the Gnome-woman\'s pussy all of the way into her vagina, then lets it go. The dildo slides back out and #!00# catches it.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# pushes the dildo in the Gnome-woman\'s anus in, holds it there, then lightly licks the Gnome-woman\'s clitoris, before pulling the dildo in the Gnome-woman\'s anus out and pushing the dildo back in again.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pulls back on the dildo in the Gnome-woman\'s anus, gyrates it around, and pushes the dildo back in.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# pulls the dildo out of the Gnome-woman\'s pussy, teases the Gnome-woman\'s urethra with it, then pushes it back into the Gnome-woman\'s pussy while twisting it dildo around.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly licks the Gnome-woman\'s clitoris up and down, then side to side.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately sucks the Gnome-woman\'s clitoris, while also lightly teasing it with her tongue.\n\n");
                    break;
                }
            }
            else
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently thrusts the dildo in the Gnome-woman\'s pussy in and out a few times.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# pulls the anal dildo half-way out of the Gnome-woman, then firmly pushes it all of the way back into the Gnome-woman\'s anus, holds it there for a couple of seconds while lightly playing with the dildo in the Gnome-woman\'s pussy, before pulling the anal dildo back out again.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently spins dildo in the Gnome-woman\'s anus around, massaging the Gnome-woman\'s anus.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly spins dildo in the Gnome-woman\'s pussy around, while blowing on the Gnome-woman\'s clitoris.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently licks the Gnome-woman\'s clitoris with a swirling motion.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly sucks, then kisses the Gnome-woman\'s clitoris.\n\n");
                    break;
                }
            }

            if (iRet != 0) return iRet;

            switch (cRandom2)
            {
            case 0:
                if (gstruct_GameVars.iArousalLevel1 > 180)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman is lightly arching her back, while clenching her hands. It would appear that the Gnome-woman is trying to control her impending orgasm.\n\n");
                }
                else
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman twitches and then settles down again.\n\n");
                }
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman says something, but #!00# cannot figure out what it is.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman is breathing heavily, while also writhing on the bed.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("The Gnome-woman is lightly clenching the latex bed sheets with both of her hands.\n\n");
                break;
            }

        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1224 Ending 002 Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene1 (24, 14, 250);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if ((cResult != -1) || (iSubSceneId != 1))
    {
        iRet = mutils_addToCommandList ("Slowly thrust into the Gnome\'s pussy", 1224, 1);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 2))
    {
        iRet = mutils_addToCommandList ("Slowly thrust into the Gnome\'s anus", 1224, 2);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 3))
    {
        iRet = mutils_addToCommandList ("Spin the Gnome\'s anus dildo around", 1224, 3);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 4))
    {
        iRet = mutils_addToCommandList ("Spin the Gnome\'s pussy dildo around", 1224, 4);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 5))
    {
        iRet = mutils_addToCommandList ("Lick the Gnome\'s clitoris", 1224, 5);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 6))
    {
        iRet = mutils_addToCommandList ("Suck the Gnome\'s clitoris", 1224, 6);
        if (iRet != 0) return iRet;
    }

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic07_scene1225 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1225 Ending 002 Sex Scene Exit 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the Gnome-woman, who is unconscious, while laying on the bed. The Gnome-woman\'s expression says it all, she is totally satisfied.\n\n\"Good for you, hun...\"\n\n#!00# wonders why the Gnome-woman passed out from just this alone and then remembered a comment in the #!01# textbooks that Gnomes tend to pass out quickly due to sexual over-stimulation.\n\n#!00# was about to make a comment that the #!01# books were right again, when she is distracted by shuffling to her right. #!00# glances at the door.\n\nNot only is the door wide open, but both the Light-Elf and Dark-Elf are standing at the side of the bed. #!00# sighs.\n\n\"With the amount of noise she was making... I wouldn\'t have even heard Fifth #!02# army invading this place.\"\n\nThe two elves smile, and the Light-Elf also nods his head.\n\n#!00# lets go of the Gnome-woman\'s legs and sits up.\n\n\"Okay... you two pervs... where do we go from here\?\"\n\n\n[Just over 4 months later...]\n\n#!00# is licking a Human-woman\'s pussy, while thinking to herself \"that\'s it honey... keep doing that\". The Human-woman is squatting on #!00#\'s face, while Human-woman is massaging #!00#\'s breasts and nipples. #!00#\'s torso is too long for #!00# and the Human-woman to be in a proper 69 position, so this is the next best thing. The Human-woman tenses up as she lightly climaxes due to the cunnilingus she is receiving from #!00#. The Human-woman\'s arousal is being kept elevated by elven aphrodisiacs. Meanwhile, #!00# isn\'t being subjected to the elven concoctions anymore.\n\nThe Human-woman starts to climb off of #!00#. #!00# thinks to herself \"Awww... but I was enjoying that\".\n\nWith the Human-woman out of the way, #!00# looks over at the Dark-Elf. The Dark-Elf is kneeling on the bed, next to #!00# and the Human-woman. He is naked, except for his light-green latex gloves. #!00# figures out that the reason that the Human-woman shifted was because of the Dark-Elf\'s instruction.\n\n#!00# thinks to herself \"I will just have to make sure Dark-Master fucks me later.\"\n\nThe Light-Elf is somewhere else right now and has left the Dark-Elf and #!00# behind to run things.\n\nThe Dark-Elf then crawls over to the middle of the bed and lays flat on his back. His erection is pointing at the ceiling. The Dark-Elf looks at the Human-woman and grunts.\n\nThe Human-woman is beside herself. She eagerly crawls over to the Dark-Elf, while saying the human language equivalent of \"penis\", \"cock\" and \"dick\". #!00# learned those human words from a previous Human-woman, who has long since departed.\n\n#!00# considers the Human-woman\'s worship of the elven phallus to be rather cute and thinks to herself \"Not long know... and she will be gone, just like the others.\" The fact that the Human-woman is in this cell with #!00# at all is an indication that she has become obedient sex slave.\n\nThis is the comfy-cell, with the carpet on the floor and the deep-pink round bed. #!00# calls this her home, but often she sleeps next door in her old cell, where they usually imprison the slaves that they train.\n\nAs the Human-woman mounts the Dark-Elf\'s penis, she lightly climaxes. #!00# decides to join in the fun and crawls around behind the Human-woman, while watching the Dark-Elf just lay there as the Human-woman just bounces up and down on his crotch as if she is in a trance.\n\n#!00# is impressed at how the Dark-Elf is handling this encounter, as it was only a three months ago that he was behaving more like a perverted teenager. Now, the Dark-Elf acts like master that she has come to adore.\n\nJust as #!00# is about to close in on the Human-woman from behind, she hears metal scraping against metal, to the left.\n\n#!00# sighs and looks over at the front-left of the cell. It isn\'t long till she sees the Goblin-woman, who was in the next cell, slow her running to look around inside the cell, then speeds up running along the hallway.\n\n#!00# is certain that the Goblin-woman had seen #!00#, the Dark-Elf and the Human-woman, but decided to try escaping anyway.\n\nOnce the Goblin-woman is out of sight, just past the front-right wall, #!00# thinks to herself \"The Dark-Master can...\"\n\n#!00#\'s thoughts are interrupted by the hissing sound of the hallway trap triggering and the remnants of the pale-violet-red mist from the sleep spell lightly swirling at the right front of the cell. #!00# looks at the Dark-Elf, then continues her line of thought \"... pick her up... later.\"\n\nDark-Elf glances at the Human-woman, then looks at #!00# and just lightly nods.\n\n\"As you wish...\"\n\n#!00# then concentrates on the Human-woman, grabs the Human-woman\'s breasts from behind and starts fondling them. The Human-woman climaxes again, so #!00# switches to playing with the Human-woman\'s nipples.\n\nThe Human-woman is moaning in absolute ecstasy, while #!00# thinks to herself \"That\'s it honey... lose yourself\".\n\n\nThe Human-woman climaxes again, just as #!00# thinks to herself \"Become an obedient fucktoy for the masters\".\n\n<Ending 2: Elven Masters, Orc Help>\n\n");
    if (iRet != 0) return iRet;

#ifdef INTERFACE_CURSES
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    return iRet;
#else
    return 0;
#endif // INTERFACE_CURSES
}

//
// This is the dialog track leading to Ending 003.
//
int gamelogic07_scene1230 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1230 Ending 003 track}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# wakes up. Her clitoris and nipples are on fire and for some reason, her breasts are aching as well.\n\n\"What the fuck... did they do this time\?\"\n\n#!00# opens her eyes. She is laying flat on her back in the middle of the bed. However, the aching in her breasts seems... odd...\n\n#!00# looks down at her breasts. They are easily another size larger again this time. #!00# also finds some wetness around her nipples\?\n\n#!00# tries to sit up, as best as she can, considering that her pussy is drooling and her clitoris is itchy. She has to keep her legs wide open. #!00# notices that she has been laying in puddle of sex juices again, so she decides to crawl to the edge of the bed instead.\n\nOn her way to the edge of the bed, #!00# notices that she has a dildo in her pussy and another shoved up her anus again. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("After the trouble she had removing them last time, she decides to just leave them there... for now.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# decides it is not worth the effort to go after them at the moment and just leaves them where they are.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFPullOutDildos2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("After #!00# reaches the edge of the bed and stands up, she resumes inspecting her breasts. They are definitely bigger and the feeling from both of them is bothering her, so she lightly squeezes her left breast...\n\n... and small streams of breast milk shoots out from, and around, her left nipple.\n\n\"Wait... WHAT\?\"\n\n#!00# checks her belly and finds it is not swollen. She is not carrying a baby, so why is she leaking milk\?.. It has to be something that the elves did to her.\n\n\"Those... little... PERVERTS...\"\n\n#!00# briefly considers what she is going to do the two elves when she sees them and that is when she looks around the cell...\n\n... and finally notices that the cell door is wide open. #!00# walks over to the door of the cell.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself, while looking over the open door \"Okay... this is DEFINITELY leading to a trap of some kind. Those two little elven perverts definitely want me to do something with this door.\".\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the door, then pokes her head outside of the doorway and looks in both directions along the hallway. #!00# then stands back up and thinks to herself \"As tempting as it seems... making a run for it looks to be a really bad idea... However. Why leave the door like this\?\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mutils_addToCommandList ("Close the door", 1231, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Move the door", 1232, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Close the door" Path Selection function.
//
int gamelogic07_scene1231 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    // set closed the door 2 flag.
    gstruct_GameVars.cFClosedTheDoor2 = 1;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1231 >Close the door}\n\n[set cFClosedTheDoor2]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Close the door\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Closing the door... is one way of touching it...\"\n\n#!00# grabs the door and pulls it toward herself.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the door again, then pokes her head outside of the doorway, looks to the right, the left and the right again.\n\n\"I don\'t see anyone... so...\"\n\n#!00# stands up, grabs the door and pulls it toward herself.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The door moves with great ease. So easily that the latch-plate slams into the door-frame. Just as the door is about to bounce open, the latch-bolt slides back into place and catches on the door-frame.\n\nThe entire door, the door-frame and nearby bars of the cell vibrate.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Fuck... I overdid it...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("\"Shit... that was loud.\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# backs away from the closed door.\n\n\n[10 minutes later...]\n\n#!00# is sitting on the edge of the bed, closest to the door of the cell. The door of the cell is still closed.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1233 (0, cSubFlag + 1);
    return iRet;
}

//
// "Move the door" Path Selection function.
//
int gamelogic07_scene1232 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1232 >Move the door}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Move the door\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"If they want me to touch the damn door... then... I will touch the damn door...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the door, then at the floor and ceiling of the hallway outside of the cell.\n\n\"Hmm... how am I going to do this\?\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# then kicks the door, so it swings open even further.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# sighs \"Well... that\'s done now.\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks around and is satisfied that she hasn\'t set off any traps.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# backs away from the open door.\n\n\n[10 minutes later...]\n\n#!00# is sitting on the edge of the bed, closest to the door of the cell. The door of the cell is still wide open.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1233 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1231 and 1232 above.
//
int gamelogic07_scene1233 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1233 Ending 003 Merge 1}\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"I hate waiting like this... I wonder when those two elven morons are going to return.\"\n\n#!00#\'s curiosity is sated when she hears the faint screeching of metal scraping on metal in the distance.\n\n#!00# sighs \"About time...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"I guess those two elves aren\'t gentlemen... because they always seem to be keeping a lady waiting...\"\n\n\"pfft... as if... gentlemen don\'t go locking up women... and then doing obscene things with them... clearly... they are just a couple of pervs...\"\n\n#!00# sits there silently contemplating if all elven men are womanizers, when she hears the faint screeching of metal scraping on metal in the distance.\n\n#!00# sighs and thinks to herself \"I find it worrying that I am looking forward to their return\".\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("As usual, footsteps echo from the hallway at the right-front of the cell. Eventually, #!00# sees the Dark-Elf first, followed by the Light-Elf.\n\nThe only thing different this time, is that the Dark-Elf seems to be carrying something. That something looks to be made out of black rubber.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFClosedTheDoor2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Both of the elves stop walking at the right-front edge of the cell and look around. They talk to each other while they both look at the closed cell door.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Yeah... I moved the door... so now what\?\"\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Rather observant perverts.\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Both of the elves stop walking at the right-front edge of the cell and look around. They talk to each other while they both look at the open door. #!00# can tell, that they both have noticed it the cell door has been moved and wonders what they are going to do next.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf looks at #!00# and starts casting his enchantment.\n\n\"What\?..\"\n\n#!00# has had enough of the Dark-Elf\'s Dream-Vision, as she really hates that the elves can do whatever they want to her body while she is immobilized by it. #!00# considers her options to stop the Dark-Elf and the only thing that immediately comes to her mind is that the Dark-Elf is a pervert... so.\n\n#!00# starts masturbating. She starts by playing her clitoris with her left fingers, while fingering her pussy with her right fingers.\n\nIt does not take long for #!00# to reach an orgasm, as the elven concoctions that she is heavily dosed up on are keeping her arousal substantially elevated. Just as #!00#\'s vision starts to fade, her orgasm hits...\n\n... and she sprays breast milk out across the floor.\n\n#!00# collapses back on the bed, and discovers that her vision has returned. #!00# glances over at the Dark-Elf and notices that he is still standing there outside of the cell, with the expression on his face of \'a drooling idiot\'. On the other-hand, the Light-Elf is still wearing his stoic poker-face expression.\n\n#!00# then props herself up with her left arm and notices that there is something protruding from her pussy. Reaches down and grabs the dildo that was shoved inside of her. #!00# thinks to herself... \"oh.. I have a weapon now\"... then realizes that the fact that she is holding it is going to spook the two elves.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# throws the dildo at the right wall, where the table with the dildo collection on it is.");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# throws the dildo at the right wall, where the collection of dildos are on the floor.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" #!00# sighs and looks at the two elves.\n\n\"There... it\'s out of the way...\"\n\n#!00# flops back down on the bed. It isn\'t so much about being tired. #!00# plays being tired so that the two elves won\'t see her as much of a threat. If pretending to be helpless gets her out of being hit with the Dream-Vision spell again, it is worth swallowing her pride for.\n\n#!00# looks up at the ceiling and just listens. After a few seconds she can hear an Elven conversation off to her lower right, but there is no sound of chanting.\n\nThere is more silence, followed by the light echoing of a single pair of footsteps again. The footsteps go from #!00#\'s lower right to her lower middle... ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFClosedTheDoor2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("then stops. This is followed by the sounds of various bits of metal scraping on metal. #!00# realizes that it is the Light-Elf who is opening the door with his key.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("then briefly stops.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" The footsteps resume again and continue from #!00#\'s lower middle to her lower left.\n\n#!00# turns her head a little to the left, just enough to see the head of the Light-Elf, who is obviously standing on the floor next to her. The Light-Elf says something and #!00# can hear the Dark-Elf respond somewhere off to #!00#\'s lower-right. #!00# thinks to herself \"At least they are not taking their chances.\"\n\n#!00# turns her head to the right, so she is looking straight at the ceiling and closes her eyes. She hears shuffling to her lower left...\n\nThen #!00# feels rubber on her clitoris...\n\n\"What\?..\"\n\n#!00# feels her clitoris being stroked then lightly pinched and realizes that the Light-Elf is having his way with her. #!00# tries to get up, only to almost orgasm the moment that she feels that her left nipple is being played with. #!00# starts arching her back and tries to control her climax. But the Light-Elf is relentless and continues rubbing and pinching. Within seconds #!00# has an orgasm.\n\n#!00# tries to recover, but she feels that the Light-Elf is still rubbing her again. Then #!00# can hear the pounding echo of footsteps. #!00# is to busy trying to stay in control of her arousal to even notice that the Dark-Elf just ran into the cell.\n\n#!00# does notice the Dark-Elf is there, when he slams into the bed to her right. #!00# turns to look at him, while still fighting the next impending orgasm with everything that she has. #!00# then takes a closer at the black rubber thing that the Dark-Elf is holding.\n\n\"What... is THAT\?!!.\"\n\n#!00# only briefly glances at the rubber thing that the Dark-Elf is holding and then is distracted by the devilish-grin that is on his face.\n\n\n[15 minutes later...]\n\n#!00# is laying on the bed, a complete mess. #!00# has no idea of number of times she has orgasmed since the elves strapped their black rubber breast pump to her breasts, because she had trouble focusing on anything due to the overwhelming pleasure.\n\nIt turns out, the elves weren\'t counting either. The Light-Elf is currently operating the two hand-pumps now, as the Dark-Elf found it difficult to keep up his erratic pace. The Dark-Elf is now has the job of fingering #!00#\'s clitoris and pussy.\n\n#!00#\'s breast milk finished running dry a couple of minutes ago, but that didn\'t stop the elves from continuing to torment #!00# with the breast pump.\n\nAs for #!00#\'s breast milk, she is soaking in a pool of it. Most of the milk ended up running down to #!00#\'s butt and then flowed over the edge of the bed onto the floor.\n\nThe Dark-Elf had a taste of #!00#\'s breast milk, despite being warned by the Light-Elf not to.\n\nThe Light-Elf finally decides to stop pumping as both of his hands are rather tired. The Light-Elf says something to the Dark-Elf. The Dark-Elf decides to pinch #!00#\'s clitoris one last time, for a final orgasm, then stands up from the bed.\n\nThe robes that both of the elves are wearing are already splattered with #!00#\'s breast milk and pussy juices. So they are not getting any messier when they unhook the rubber breast pump from #!00#.\n\n#!00#\'s nipples are already numb when they pull the breast pump off of her, so she does not really notice. There is a brief conversation between the two elves, then they walk out of the cell.\n\n#!00# tries to sit up.\n\n\"Rrgh...\"\n\nDespite every muscle in her body screaming out in pain, #!00# manages to sit up, just in time to see the two elves close the door of the cell. #!00# looks at them.\n\n\"I will kill BOTH of you !!\"\n\nThe Light-Elf starts chanting. #!00# starts to topple backwards, but manages to prop herself up with both of her arms.\n\n#!00# does not know if the pain that she is feeling is due to \'the trip to hades\' that she had to experience, or due to the Light-Elf\'s spell. But it does not matter. #!00# is angry.\n\n#!00# manages to sit upright, just as the Light-Elf\'s spell starts to take effect.\n\nSeconds later, #!00# flops onto the bed, already unconscious.\n\n");
    if (iRet != 0) return iRet;


    // if the PC did not close the door. then switch endings.
    if (gstruct_GameVars.cFClosedTheDoor2 == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-and-endif-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# is woken up by a \"sound\" echoing inside the cell.\n\n\"What\?..\"\n\n#!00# opens her eyes and looks around...\n\n\"Where\?..\"\n\nIt takes #!00# a little while to focus and to figure out where she is. She sits up, with a little bit of ease, because she is already sort of sitting down.\n\n#!00# has been moved to the chair in the rear-left corner of the cell again.\n\n#!00#\'s nipples and clitoris are still throbbing, the headache is still there. But, the sound. #!00# listens carefully...\n\n\"Sounds like... a woman\'s voice...\"\n\n#!00# is certain of one thing, what she can hear isn\'t her own voice. Not that #!00# can easily identify her own voice, as she is tone deaf, making her a horrible singer. Some of #!00#\'s previous orc lovers have told her that the best place for her to sing is in the shower.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Meanwhile, #!00# staggers up from the chair and looks around the cell. The table is now gone... so are all of the dildos that were on it.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("Meanwhile, #!00# staggers up from the chair and looks around the cell. The dildo collection by the right side wall is now gone.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"Strange... wait...\"\n\n#!00# checks her abdomen and finds that she isn\'t walking around with a dildo or two inside her anymore. #!00#\'s breasts are still large, but at least she isn\'t lactating right now. #!00# thinks to herself \"Well, that\'s sort of a relief... okay... what else\?\"\n\n#!00# turns around and checks out the chair she woke up on. Nothing different there. The door, is closed and locked, as #!00# can clearly see the latch-bolt. #!00# then walks over to the bed, then she notices...\n\n\"The bed... it has been cleaned...\"\n\n#!00# walks over to the bed to get a better look and was certain there would have been a large areas of dried up, or still wet patches of various liquids that had pooled on the latex sheets, mostly from her. #!00# is distracted from the fact that the elves actually can clean a bed for once, by the fact that the echoing moans are still echoing, and it seems that the moans are coming from outside of the left-front of the cell. #!00# thinks to herself \"Okay... what\'s that way \?\".\n\n#!00# walks over to the left-front of the cell. She never really considered that there was something or someone in that direction before, as she was always had seen the elves approach from the right side. However, the echoing moans are a problem, as #!00# cannot hear the wind in the distance anymore. If #!00# cannot hear the wind, then how is she going to know if the elves are approaching\?.. Then, #!00# realizes there is something else that she can hear, other than the moaning... it is... familiar... it certainly isn\'t wind.\n\n#!00# is suddenly distracted by the sound of echoing footsteps. #!00# just stands there, trying to pinpoint from which direction the footsteps are approaching from. As the footsteps are louder, #!00# is able to get a better bearing on the direction of them. #!00# thinks to herself \"to the left... and approaching\?!!\"\n\n#!00# looks around behind her and considers the possibility of running for the bed or the chair, but decides that the whoever it is, she is about to see them anyway. So #!00# turns around and waits.\n\nThe Light-Elf steps into view.\n\n\"oh... it\'s you...\"\n\nThe Light-Elf stops walking briefly and glances at #!00#\'s breasts, her feet, her crotch, her breasts again, then at her face. The Light-Elf then keeps walking towards the door of the cell. #!00# thinks to herself \"What is he up to now\?\"\n\n#!00# briefly considers following the Light-Elf to the door of the cell, but then remembers that he will probably knock her out before opening the door. #!00# glances over at the bed, then the chair, but decides that she might as well just stay where she is and wait to see what the Light-Elf does.\n\nThe Light-Elf walks up to the door of the cell, reaches into his right pocket, takes out the key with the string still attached. #!00# then hears the latch-bolt slide back, and just watches silently as the Light-Elf puts the key and string back into his right pocket and opens the door of the cell. Then...\n\n... The Light-Elf just stands there. #!00# thinks to herself \"What is he waiting for\?\"\n\nAfter a few seconds the Light-Elf pokes his head in the cell and says something in Elven. The first problem, is that #!00# can barely hear what he just said over the sound of the moaning, and the second problem, she still cannot understand Elven anyway.\n\n#!00# sighs... The Light-Elf waits a few more seconds and then makes a \'come here\' motion with his left hand.\n\n\"Okay... that I sort of understand...\"\n\n#!00# walks over to the door of the cell. The Light-Elf watches as she approaches, stands upright, opens the door of the cell completely and then stands in the hallway, just right to the door.\n\n#!00# reaches the door of the cell, looks at the Light-Elf and thinks to herself \"This jerk is rather sure of himself...\"\n\n#!00# steps out of the cell, into the hallway, for the first time. #!00# looks down at the Light-Elf, who is still has a poker-face expression on his face, while looking up at her. After a couple of seconds, the Light-Elf points along the hallway, to the left of the cell. #!00# thinks to herself \"I might as well look\".\n\n#!00# turns around and looks in the direction that the Light-Elf was pointing. A short distance down the hallway, which does not seem to be very far, is another open door. It appears to be another cell door, similar to the one that is right near #!00#.\n\nThe Light-Elf says something to #!00#, she glances back at him. The Light-Elf repeats what he said again, #!00# sighs and thinks to herself \"He wants me to go this way... I guess...\"\n\n#!00# starts walking and the Light-Elf follows her. After a couple of steps, #!00#\'s suspicions are confirmed, as she can see another row of dark-slate-blue vertical steel bars stretching out from beyond the left side of her cell. There is another cell to the left of hers.\n\n#!00# sighs again and notices as she approaches the left side of her cell, that the moaning is getting louder. Also, she can now see inside the neighboring cell. #!00# slows down as she reaches the corner and looks around the neighboring the cell. There does not appear to be much inside the cell, but she can see that in the center of the cell is, a table, what appears to be dildos on the table, next to a contraption, the Dark-Elf standing next to the contraption, he is chanting and...\n\n... Another woman is strapped into the contraption. Her butt is facing the door of the cell.\n\nThe Light-Elf walks up behind #!00# and says something to her again, which is similar to what he said before. #!00# decides to keep moving to see what this is about. While walking towards the door, #!00# takes another look at the cell and notices that it is mostly devoid of any other furniture. There is nothing special about the Dark-Elf. #!00# recognizes some of dildos on the table from the collection that was originally in her cell. The bigger ones stand out.\n\nThen there is the woman and the fact that there is a bucket... no... two buckets on the floor near the contraption... and something... black rubber... strapped to her breasts\?.. and...\n\n\"Oh... she\'s a Goblin...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("With the revelation that the unfortunate soul that is strapped into \"Mr Monster\"... actually... this doesn\'t appear to be the same contraption... for a start... \"Mr Monster\" was dark-blue, this one is dark-red in color.\n\n\"So there is a different Mr Monster for each person\?..\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("With the revelation that the unfortunate soul that is strapped into the contraption... actually... this doesn\'t appear to be the same contraption... #!00#\'s was dark-blue, this one is dark-red in color.\n\n\"So there is a different contraption for each person\?..\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches the door of the cell and looks back at the Light-Elf.\n\n\"So... what\'s the color of the one that you strap yourself into at night\?\"\n\nThe Light-Elf looks at #!00# with his usual poker-faced expression. Considering that he could not understand a single word that she said, the joke is wasted on him.\n\nThe Light-Elf motions to #!00# to enter the cell. #!00# sighs and looks at the woman strapped to the contraption and the Dark-Elf. #!00# steps into the cell.\n\n\"Poor thing, being made to experience the same vision of a monster.\"\n\n#!00# looks at the Dark-Elf, who isn\'t paying any attention to her or the Light-Elf, as the two of them approach the contraption. #!00# realizes that it is taking a lot of the Dark-Elf\'s concentration to maintain his enchantment.\n\n#!00# then takes a look at the rubber thing attached to the Goblin-woman\'s breasts. There are shining bits that are located part way along the tubes from her breasts and they appear to be expanding and contracting by themselves.\n\n#!00# bends over and takes a better look at the woman... yes... she is a goblin... also... she is rather well endowed for a goblin. #!00#\'s thoughts turns to her own breasts, as she stands back up.\n\n\"Hmm... so... these pervs like big titties...\"\n\n#!00# is then distracted by the Light-Elf who walks up to her and holds out two dildos to #!00#. #!00# just looks at the dildos that the Light-Elf is offering her.\n\n\"Umm... those are rather small... I mean...\"\n\n#!00# then looks at the naked butt of the Goblin-woman. The Goblin-woman\'s pussy is drooling and her anus is relaxed.\n\n#!00# spins back around and looks at the Light-Elf. #!00# points at the Goblin-woman...\n\n\"These... are for her\?\"\n\nThe Light-Elf nods... and says something in Elven, then makes alternative thrusting motions with the dildos in either of his hands.\n\n\"You brought me here... to fuck her... with those\?\"\n\nThe Light-Elf looks at #!00# with a blank stare, as he could not figure out what she is saying. #!00# looks at the Dark-Elf again. Asking the Dark-Elf is going to be pointless, as he is still using his illusion spell on the Goblin-woman. As for the Goblin-woman herself...\n\n#!00# then thinks about the situation for a while.\n\n\"Poor thing... being made to experience that wretched dream. She must be frustrated from feeling nothing...\"\n\n#!00# turns around, grabs the dildos off of the Light-Elf, then steps over to the Goblin-woman, thrusts the first one into her pussy and the second one into her anus.\n\nThe Goblin-woman\'s body shakes as she has a light orgasm. After that, Goblin-woman settles down.\n\n\"Don\'t worry honey, my past girl-lovers call me an expert at this...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1234 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic07_scene1234 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1234 >Slowly thrust into the Goblin\'s pussy}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1234 >Quickly thrust into the Goblin\'s pussy}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1234 >Slowly thrust into the Goblin\'s anus}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1234 >Quickly thrust into the Goblin\'s anus}\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("{1234 >Spin the Goblin\'s anus dildo around}\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("{1234 >Spin the Goblin\'s pussy dildo around}\n\n");
                break;

            case 7:
                iRet = mdialog_addToDialogWithSrchRep ("{1234 >Finger the Goblin\'s clitoris}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1234 >Lightly pinch the Goblin\'s clitoris}\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Slowly thrust into the Goblin\'s pussy\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Quickly thrust into the Goblin\'s pussy\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Slowly thrust into the Goblin\'s anus\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Quickly thrust into the Goblin\'s anus\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep (">Spin the Goblin\'s anus dildo around\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep (">Spin the Goblin\'s pussy dildo around\n\n");
                break;

            case 7:
                iRet = mdialog_addToDialogWithSrchRep (">Finger the Goblin\'s clitoris\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Lightly pinch the Goblin\'s clitoris\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the dildo in and out of Goblin-woman\'s pussy.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the dildo in and out of Goblin-woman\'s pussy.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the dildo in and out of Goblin-woman\'s anus.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the dildo in and out of Goblin-woman\'s anus.\n\n");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# twists dildo in Goblin-woman\'s anus around.\n\n");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# spins the dildo in Goblin-woman\'s pussy around.\n\n");
                break;

            case 7:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# fingers the Goblin-woman\'s clitoris.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Goblin-woman\'s clitoris.\n\n");
                break;

            }
            if (iRet != 0) return iRet;

            switch (gstruct_GameVars.iClimaxCount1)
            {
            case 1:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("<Climax One !>\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Goblin-woman starts shaking her butt and clenches both her pussy and anus as she climaxes.\n\n\"Looks like you enjoyed that, honey...\"\n\n#!00# looks over at the Dark-Elf, who is still subjecting the Goblin-woman to his illusion spell, and thinks to herself \"I hope you are showing her a good time.\"\n\n");
                if (iRet != 0) return iRet;

                break;

            case 2:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("<Climax Two !>\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Goblin-woman lets out a loud moan as she climaxes, and her body shakes inside the contraption.\n\n#!00# then notices that the Light-Elf is walking around to the front of the contraption and crouching down, while looking at the Goblin-woman\'s face. He then glances at the Dark-Elf, who is still concentrating on the Goblin-woman. The Light-Elf then looks at #!00#.\n\n#!00# decides to ignore the Light-Elf and continue pleasuring the Goblin-woman.\n\n");
                if (iRet != 0) return iRet;

                break;

            case 3:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("<Climax Three !>\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Goblin-woman lets out another load moan and climaxes again. This time the Goblin-woman pees herself.\n\n#!00# does not find the fact that the Goblin-woman has just wet herself disgusting, as she has had several past girlfriend-lovers who have done the same thing. #!00# just accepts the waterworks to be a sign that the Goblin-woman is getting into it.\n\nThe Dark-Elf is still engrossed in subjecting the Goblin-woman to his enchantment.\n\nThe Light-Elf is wearing his poker-face expression, and has decided to shift from crouching down, to sitting cross-legged on the floor.\n\n");
                if (iRet != 0) return iRet;

                break;

            case 4:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("<Climax Four !>\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Goblin-woman has another mind-blowing orgasm and #!00# can tell from the tone of her moans that she is enjoying it.\n\nMeanwhile, the Light-Elf is carefully observing the facial expressions of the Goblin-woman.\n\nThe Dark-Elf, as always, is still casting his enchantment.\n\n");
                if (iRet != 0) return iRet;

                break;

            case 5:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("<Climax Five !>\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Goblin-woman has another orgasm. This one is rather powerful as she is shaking the entire contraption. #!00# thinks to herself \"I hope she isn\'t hurting herself inside this thing.\"\n\nThe Light-Elf, decides to stand up from the floor and walks around to #!00#\'s side. #!00# looks at the Light-Elf.\n\n\"Should I... stop\?\"\n\nThe Goblin-woman starts bucking her hips again and the Light-Elf just uses his open right palm to motion #!00# towards the Goblin-woman. #!00# decides that she is going to continue only because the Goblin-woman wants more pleasure and the Light-Elf should just butt out of this.\n\nThe Dark-Elf is still engrossed in subjecting the Goblin-woman to his illusion spell.\n\n");
                if (iRet != 0) return iRet;

                break;

            case 6:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("<Climax Six !>\n");
                    if (iRet != 0) return iRet;
                }

                iRet = gamelogic07_scene1235 (0, cSubFlag + 1);
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the dildo in and out of Goblin-woman\'s pussy.");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the dildo in and out of Goblin-woman\'s pussy.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the dildo in and out of Goblin-woman\'s anus.");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the dildo in and out of Goblin-woman\'s anus.");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# twists dildo in Goblin-woman\'s anus around.");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# spins the dildo in Goblin-woman\'s pussy around.");
                break;

            case 7:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# fingers the Goblin-woman\'s clitoris.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Goblin-woman\'s clitoris.");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" However, the Goblin-woman doesn\'t seem to to be enjoying it. #!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 4;

            switch (cRandom1)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("\"Doing the same thing... over and over again... isn\'t a good idea...\"\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("\"Yeah, that was boring for me too. Let\'s spice things up...\"\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("\"Well... that was a disaster... I should change things around...\"\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("\"This isn\'t working out so well... I need to think of something different...\"\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by slowing thrusting the dildo in and out of Goblin-woman\'s pussy.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by gently thrusting the dildo in and out of Goblin-woman\'s anus.");
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by slowly rotating dildo in Goblin-woman\'s anus around.");
                break;

            case 6:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by gently twisting dildo in Goblin-woman\'s pussy around.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by lightly fingering the Goblin-woman\'s clitoris.");
                break;
            }
            if (iRet != 0) return iRet;

            // I don't need to take into account 2, 4 and 8 here either, because these are not opening actions.

            iRet = mdialog_addToDialogWithSrchRep ("The Goblin-woman responds by lightly rocking her butt. #!00# thinks to herself \"She is really getting into this...\"\n\n#!00# looks over at the Dark-Elf, who is still subjecting the Goblin-woman to his enchantment and thinks to herself \"Hmm... I wonder if this is her first time experiencing this\?.. well... I should make it memorable.\"\n\n");
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

            if (cRandom1 == 0)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# pulls the dildo all of the way out of the Goblin-woman\'s pussy, uses the tip of the dildo to tease the Goblin-woman\'s pussy lips, then firmly pushes the dildo back into the Goblin-woman\'s pussy.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the dildo Goblin-woman\'s pussy, then pulls it out completely while slowly while rotating it. #!00# then quickly thrusts the dildo all of the way into the Goblin-woman\'s pussy again, then pulls it back a little bit while lightly rotating it.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly thrusts into the Goblin-woman\'s anus, pulls it all of the way out of the Goblin-woman\'s anus, then firmly thrusts the anal dildo back in again.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# pistons the dildo in and out of the Goblin-woman\'s anus quickly 5 times in a row.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# erratically, but gently, gyrates dildo in the Goblin-woman\'s anus around.\n\n");
                    break;

                case 6:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# explores the inside of the Goblin-woman\'s pussy using the dildo that is there, while also lightly turning the dildo.\n\n");
                    break;

                case 7:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly rubs the Goblin-woman\'s clitoris with her index finger, while also tickling the Goblin-woman\'s pussy lips.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Goblin-woman\'s clitoris, then traces her finger around the Goblin-woman\'s clitoris, before pinching it again.\n\n");
                    break;
                }
            }
            else if (cRandom1 == 1)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly, but slowly, thrusts the dildo in and out of the Goblin-woman\'s pussy, three times.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the dildo into the Goblin-woman\'s pussy and pulls out, once. Then repeats the thrusting 3 more times, each being harder and faster than the ones before. Finally #!00# the dildo thrusts in and out of the Goblin-woman\'s pussy twice more in quick succession.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly pulls the anal dildo out of the Goblin-woman\'s anus, then firmly forces the dildo back into the Goblin woman\'s butt while lightly rotating the dildo.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thrusts the dildo in and out of the Goblin-woman\'s anus slow, then fast, then slow, then fast again.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly massages the inside of the Goblin-woman\'s anus using the dildo that is protruding from the Goblin-woman\'s butt.\n\n");
                    break;

                case 6:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# rotates the dildo in the Goblin-woman\'s back and forth a few times.\n\n");
                    break;

                case 7:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately plays with the Goblin-woman\'s clitoris with her index finger and thumb.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently caresses with the Goblin-woman\'s clitoris, then lightly pinches it.\n\n");
                    break;
                }
            }
            else
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# pushes the dildo in the Goblin-woman\'s pussy all of the way in, till the Goblin-woman\'s pussy closes around the base of the dildo, and holds it there while playing with the Goblin-woman\'s pussy lips, then pulls the dildo back out again.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the dildo in the Goblin-woman\'s pussy, in and out, twice in a row, then slows down the tempo for the third time, before quickly slamming the dildo back into the Goblin-woman\'s pussy and pulling it back out again.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly, but slowly thrusts the dildo in and out of the Goblin-woman\'s anus, twice, before pulling the dildo out completely the second time, then forcing the anal dildo back in.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the dildo in and out of the Goblin-woman\'s anus twice in a row, then teases the Goblin-woman\'s clitoris a little bit before repeating the quick in and out thrusting with the anal dildo a couple more times.\n\n");
                    break;

                case 5:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly twists the dildo in the Goblin-woman\'s anus, stops, then lightly pushes the anal dildo in, pulls it back out, then firmly twists the dildo in the Goblin-woman\'s anus back the other way.\n\n");
                    break;

                case 6:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly twists the dildo in the Goblin-woman\'s pussy around while also occasionally thrusting the dildo in and out of the Goblin-woman\'s pussy.\n\n");
                    break;

                case 7:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tickles the Goblin-woman\'s clitoris with her index finger.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately pinches the Goblin-woman\'s clitoris with her index finger and thumb, while also playing with the Goblin-woman\'s urethra with her middle finger.\n\n");
                    break;
                }
            }

            if (iRet != 0) return iRet;

            cRandom2 = rand() % 6;

            if (cRandom2 == 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("The Goblin-woman continues to softly moan.\n\n");
                if (iRet != 0) return iRet;
            }

        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1234 Ending 003 Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene1 (24, 14, 250);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if ((cResult != -1) || (iSubSceneId != 1))
    {
        iRet = mutils_addToCommandList ("Slowly thrust into the goblin\'s pussy", 1234, 1);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 2))
    {
        if (gstruct_GameVars.cFSexSceneStart == 0)
        {
            iRet = mutils_addToCommandList ("Quickly thrust into the goblin\'s pussy", 1234, 2);
            if (iRet != 0) return iRet;
        }
    }

    if ((cResult != -1) || (iSubSceneId != 3))
    {
        iRet = mutils_addToCommandList ("Slowly thrust into the Goblin\'s anus", 1234, 3);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 4))
    {
        if (gstruct_GameVars.cFSexSceneStart == 0)
        {
            iRet = mutils_addToCommandList ("Quickly thrust into the Goblin\'s anus", 1234, 4);
            if (iRet != 0) return iRet;
        }
    }

    if ((cResult != -1) || (iSubSceneId != 5))
    {
        iRet = mutils_addToCommandList ("Spin the Goblin\'s anus dildo around", 1234, 5);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 6))
    {
        iRet = mutils_addToCommandList ("Spin the Goblin\'s pussy dildo around", 1234, 6);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 7))
    {
        iRet = mutils_addToCommandList ("Finger the Goblin\'s clitoris", 1234, 7);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 8))
    {
        if (gstruct_GameVars.cFSexSceneStart == 0)
        {
            iRet = mutils_addToCommandList ("Lightly pinch the Goblin\'s clitoris", 1234, 8);
            if (iRet != 0) return iRet;
        }
    }

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic07_scene1235 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1235 Ending 003 Sex Scene Exit 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Goblin-woman yells while also spraying pussy juices, then passes out. The Goblin-woman\'s body goes limp. The Dark-elf stops chanting and looks at #!00#, while #!00# stands up. #!00# does not look at either of the elves.\n\n\"Were you watching you pervs... now that\'s how it\'s done...\"\n\n\n[Just under 4 months later...]\n\n#!00# is woken up by the sound soft moaning all around her. She opens her eyes and looks around the cell and thinks to herself \"Looks like everyone else is up already\".\n\n#!00# stands up and glances around the cell. There is nothing amiss, although it is starting to feel cramped now. The four contraptions are still there, along with the large number of milk pales. The two Goblin-women, the Gnome-woman and the Human-woman, are all still secure and seem to be fine inside their specific contraptions. The elven breast pump thingies are still pumping away and the vibrators stuffed in their pussies and asses haven\'t fallen out.\n\n#!00# glances over at the bed, where a second Human-woman is sleeping soundly. #!00# smiles and looks down at her hands. They are still covered in the sienna colored latex gloves. #!00#s nipples start to ache a little, but she decides to hold out till later. But right now... #!00# licks her lips, as there is work to do.\n\n#!00# looks at a nearby table and grabs an orange colored dildo from it. #!00# looks at the dildo she picked up and considers that the size of it is just about right as it is slightly larger than the one that was used yesterday. There are two other tables in the cell, all loaded with dildos, but this one is convenient for #!00# right now. #!00# then grabs an even smaller spring-green colored dildo, then looks at the Human-woman sleeping on the bed. #!00# thinks to herself \"these will do\".\n\n#!00# then takes a couple of steps and then crouches to crawl onto the bed. Once #!00# is near the Human-woman, #!00# looks over the Human-woman\'s body again.\n\nThe Human-woman\'s crotch is wet and her nipples are erect. Elven aphrodisiacs do a rather good job at keeping everyone aroused. #!00# then marvels at how the Human-woman\'s breasts have grown. The Human-woman used to be a B-cup, but now they are E-cup and she will be ready to be milked soon. But first, #!00# needs to get her new companion in the mood.\n\n#!00# crawls over to the Human-woman\'s crotch. The Human-woman fell asleep with her legs wide open, leaving her swollen pussy exposed. Then #!00# starts fingering the Human-woman\'s pussy, while also playing with the Human-woman\'s clitoris.\n\nThe Human-woman starts to moan in her sleep. #!00# decides that the best way to break the Human-woman even faster is to do this while she is still sleeping.\n\n#!00# has seen that anyone on elven aphrodisiacs tends to sleep a lot longer than normal, but they are constantly aroused while they are asleep resulting in some rather... interesting... side effects.\n\n#!00# starts to finger and pinch the Human-woman\'s clitoris. The Human-woman lightly orgasms in her sleep and milk starts leaking from the Human-woman\'s breasts.\n\n#!00# doesn\'t notice, but her own breasts are lightly lactating as well.\n\n#!00# has no idea what the elves are up to, but she enjoys training more women so that the only thing that they want is pleasure. Pleasure from being toyed with and also being used as dairy cows.\n\nThe Human-woman moans again and so do her neighbors. #!00# looks around and notices that the other women are starting to share in the fun as well, and why not, they all enjoy a good show to get into the mood. In fact, #!00# herself is being turned on from this as well.\n\nAfter a minute of a buildup, everyone in the cell climaxes at the same time... including #!00#.\n\nThis time the Human-woman that #!00# had been fucking in her sleep wakes up. She looks at #!00#. #!00# crawls up to her face and gives her a tongue kiss. The Human-woman is now used to #!00#\'s kisses and seems to enjoy it.\n\n\nAfter the kiss is finished, #!00# says something to the new Human-woman recruit. Not that Human-woman can understand what is being said, because only #!00# understands Orc and no one else does.\n\n\"Welcome to the herd... sister...\"\n\n<Ending 3: Milk Maid>\n\n");
    if (iRet != 0) return iRet;

#ifdef INTERFACE_CURSES
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    return iRet;
#else
    return 0;
#endif // INTERFACE_CURSES
}

//
// This is the dialog track leading to Ending 004.
//
int gamelogic07_scene1240 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1240 Ending 004 track}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# wakes up, with headache. #!00#\'s headache is still mild compared to the throbbing of her nipples and clitoris.\n\n\"Those... FUCKING... idiots...\"\n\n#!00# opens her eyes. She is staring at the same light-gray ceiling... as always.\n\n#!00# slowly sits up, as her clitoris is especially itchy. #!00# looks at the door of the cell. The cell door is wide open.\n\n#!00# sighs ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"And now... for door challenge number 2...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("\"They probably can\'t get anymore obvious... than that...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# manages to stand up from the edge of the bed. She decides to check around the cell first, to see if anything has changed. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The table with it\'s collection of dildos is still there.");
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

        iRet = mdialog_addToDialogWithSrchRep ("The collection of dildos next to the wall is still there by the right wall.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" The bed that #!00# was laying on is an even more disgusting mess now. The chair in the corner is still there. The tray-table, that the Dark-Elf brought in, is gone.\n\n#!00# decides to check herself out. She feels her abdomen and comes to the conclusion that the elves left a couple of dildos inside of her again.\n\n\"They seem to be smaller than the last ones... what is wrong with those elven idiots\?\"\n\n#!00# then checks her crotch, while not trying to stimulate it too much. Her pussy is drooling and her clitoris is now well over an inch long... almost one and a half inches.\n\n#!00# sighs \"no idea...\"\n\n#!00# decides to take her mind off the changes to her body by checking the door of the cell. She walks over to the door, looks around the doorway, then carefully checks the floor and the ceiling in the hallway outside of the door.\n\n#!00# thinks to herself ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFPullOutDildos2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFPullOutDildos2 is set]\n");
            if (iRet != 0) return iRet;
        }

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"It would be... unwise... to cut off my only escape option, but it is clear that those two elven fucktards want me to do something with this door.\"\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("\"Touching this... door... is a bad idea... but I touched it last time... also... it would be an even worse idea if I closed it.\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

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

            iRet = mdialog_addToDialogWithSrchRep ("\"They are definitely testing me...\"\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("\"This... appears to be some sort of test... so just ignoring this... is a bad idea.\"\n\n");
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

    // there should be conditional logic here for these.!!

    if (gstruct_GameVars.cFPullOutDildos2 == 1)
    {
        if (gstruct_GameVars.cFIntDialog == 0)
        {
            iRet = gamelogic07_scene1242 (0, cSubFlag + 1);
            return iRet;
        }
    }

    if (gstruct_GameVars.cFIntDialog == 0)
    {
        iRet = mutils_addToCommandList ("Ignore the door", 1243, 0);
        if (iRet != 0) return iRet;
    }
    else
    {
        iRet = mutils_addToCommandList ("Close the door", 1241, 0);
        if (iRet != 0) return iRet;
    }

    iRet = mutils_addToCommandList ("Move the door", 1242, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Close the door" Path Selection function.
//
int gamelogic07_scene1241 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1241 >Close the door}\n\n[set cFClosedTheDoor2]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Close the door\n\n");
        if (iRet != 0) return iRet;
    }

    // set closed the door 2 flag.
    gstruct_GameVars.cFClosedTheDoor2 = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides, as risky as it seems, closing the door isn\'t going to be a big problem because she knows where the key is.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFLeftDoorWideOpen != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFLeftDoorWideOpen is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# grabs the door and pulls it to herself. It moves easily... in fact too easily... the outer latch-plate slams into the door-frame. The door tries to bounce back out, but the latch-bolt slides back into place.\n\nThe entire door and nearby bars vibrate.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"That... could have gone... slightly better...\"\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("\"Whoa... this thing is light...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("While the vibration of the door dies down, #!00# looks around to see if she can see anyone in the hallway, then quietly listens for any other doors moving or footsteps.");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# grabs the door and pulls it to herself. The door pivots on its hinges with great ease... same as last time. #!00# carefully pulls the door closed.\n\nThe latch-plate lightly touches the door-frame and the latch-bolt slides back into place.\n\n");
        if (iRet != 0) return iRet;

        if (gstruct_GameVars.cFIntDialog != 0)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[if-02:cFIntDialog is set]\n");
                if (iRet != 0) return iRet;
            }

            iRet = mdialog_addToDialogWithSrchRep ("\"Not much noise...\"\n\n");
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

            iRet = mdialog_addToDialogWithSrchRep ("\"Well... that was easy...\"\n\n");
            if (iRet != 0) return iRet;

            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[endif-02:cFIntDialog is NOT set]\n");
                if (iRet != 0) return iRet;
            }
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks around to see if she can see anyone in the hallway, then quietly listens for any other doors moving or footsteps.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFLeftDoorWideOpen is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" There is just the faint sound of the wind in the distance.\n\n#!00# then backs away from the closed door.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1244 (0, cSubFlag + 1);
    return iRet;
}

//
// "Move the door" Path Selection function.
//
int gamelogic07_scene1242 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1242 >Move the door}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Move the door\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Well... if they want me to move the door... then...\"\n\n#!00# lightly kicks the door and it swings open some more...\n\n\"... I will move the door..\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# reaches out with her left hand and pushes the edge of the door. The door swings open some more...\n\n\"Okay... now...\"\n\n#!00# pops her head out into the hallway and looks in both directions along it. There is no one there, she then stands back up and quietly listens for any other doors moving or footsteps. There is just the faint sound of the wind in the distance.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# then backs away from the open door.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1244 (0, cSubFlag + 1);
    return iRet;
}

//
// "Ignore the door" Path Selection function.
//
int gamelogic07_scene1243 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1243 >Ignore the door}\n\n[set cFIgnoredTheDoor2]\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Ignore the door\n\n");
        if (iRet != 0) return iRet;
    }

    // set ignored the door 2 flag.
    gstruct_GameVars.cFIgnoredTheDoor2 = 1;

    iRet = mdialog_addToDialogWithSrchRep ("#!00# sighs... this is too suspicious... there may be a trap set on the door... there may be an Elf hiding in the hallway...\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFIntDialog != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFIntDialog is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# quietly backs away from the door.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks to herself \"Best to just leave this alone.\" and then quietly backs away from the door.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFIntDialog is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = gamelogic07_scene1244 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a pathway merge point called from 1241, 1242 and 1243 above.
//
int gamelogic07_scene1244 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1244 Ending 004 Merge 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[15 minutes later...]\n\n#!00# sits there on the edge of the bed.\n\nThe bed is now a little bit cleaner after #!00# tilted it to try and get some of the nasty stuff that had pooled on the bed off of it... and... onto the floor. So instead of having a messy bed, there is now a slightly less messy bed and a slightly more messy floor around it. #!00# gave up after that and decided to wait for the elves to show up.\n\nIt isn\'t easy for #!00# to wait... especially when her sensitive spots are on fire and are not settling down.\n\nFinally, there is the faint screeching of metal scraping on metal in the distance, followed by echoing footsteps. #!00# sits there, silently hoping that the two elves are bringing a mop and a bucket with them this time.\n\nWhen the footsteps are a lot louder, #!00# looks over at the right-front of the cell, where the footsteps are echoing from and the two elves are likely to appear.\n\nAs usual, the Dark-Elf appears first, followed by the Light-Elf.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFClosedTheDoor2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Then... as usual, the pair of them stop when they reach the bars at the right-front corner of the cell. The two elves look around the cell, at #!00# and also at the closed cell door.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Then... as usual, the pair of them stop when they reach the bars at the right-front corner of the cell. The two elves look around the cell, at #!00# and also at the open cell door.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("There is a brief exchange between the two elves, while #!00# sits there trying to figure out what they are up to. Then... the Light-Elf starts chanting.\n\n\"Eh... WHAT\?\?!!\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFClosedTheDoor2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# glances at the closed door and realizes that she just made a monumental fuckup. However, even if the door was open, there is too much distance between her and the elves to get to the Light-Elf before his enchantment took effect.\n\n\"FUCK!..\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# glances at the open door and tries quickly getting up, only to find that the stimulation is too much and she ends up dropping back on her butt on the edge of the bed anyway. #!00# tries to contain her orgasm.\n\n\"SHIT!..\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("After getting over her initial panic, and waiting for the inevitable, the numbing pain starts to spread throughout #!00#\'s body and she collapses back onto the bed. #!00# finds that she is paralyzed, and is not losing consciousness.\n\n#!00# is in so much pain and cannot really focus on what is around her, that she doesn\'t notice that the Dark-Elf is walking along the corridor. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFClosedTheDoor2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf opens the door with an enchantment of his own and enters the cell...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf enters the cell...\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The first that #!00# notices that the Dark-Elf is even near her is when she starts to feel slightly more pain in her clitoris, as he smears it with something that is already on his light-green rubber gloves.\n\nFor #!00# the pain everywhere but her clitoris subsides, as the Light-Elf stops chanting.\n\nThe Dark-Elf starts to stroke #!00#\'s clitoris. #!00# can\'t tell if she is feeling pleasure of pain as she orgasms. The Dark-Elf doesn\'t let up, as he continues using #!00# as a plaything and moves from stroking to pinching #!00#\'s clitoris.\n\n\n[10 minutes later...]\n\n#!00# is laying on the bed, a complete mess. #!00# has no idea of number of times she has orgasmed since the Dark-Elf started to vigorously attack her clitoris.\n\nThe Dark-Elf stands up and says something to the Light-Elf. The Light-Elf is standing over next to the door, quietly observing the #!00# and the Dark-Elf. The Light-Elf responds and the Dark-Elf walks out of the cell.\n\nMeanwhile, #!00# starts to regain control of her senses and tries to sit up on the bed. It isn\'t easy as her entire crotch is on fire, her pussy is more swollen than before, and she isn\'t even going to think about what has happened to her clitoris.\n\n#!00# manages to prop herself up on her elbows, just as the Dark-Elf exits the cell and the Light-Elf closes the door. #!00# thinks to herself ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFClosedTheDoor2 != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Open... closed... what\'s the FUCKING difference...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"So much for my escape plan...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf starts chanting again.\n\n\"Oh fuck this...\"\n\n#!00# collapses back on the bed and waits for the inevitable.\n\nIt isn\'t long before the pain is shooting throughout her entire body and she passes out.\n\n");
    if (iRet != 0) return iRet;

    // if the PC did not close the door, then switch endings.
    if (gstruct_GameVars.cFClosedTheDoor2 == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-and-endif-01:cFClosedTheDoor2 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# wakes up, she is still sleepy and it is rather noisy... so... naturally...\n\n\"Rrgh... what in hades is that racket...\"\n\n... #!00# is rather unhappy. However, not many orcs are morning people. It is not unusual for a brawls to erupt in most #!01# dorms in the morning.\n\n#!00# rubs her eyes, opens them and does a double take.\n\n\"err... what the fuck\?!..\"\n\nTo say that things have changed... would be an understatement.\n\n#!00# is now sitting in the large chair in the corner of the cell. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("Both of the elves are in the cell, over near the table.");
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

        iRet = mdialog_addToDialogWithSrchRep ("Both of the elves are in the cell, over near the collection of dildos.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" The cell door is wide open. There is a woman... looks to be human... strapped into a contraption.\n\n#!00# thinks to herself ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFVisitTheCon != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFVisitTheCon is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"Mr Monster... has returned...\"\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("\"Oh... they fixed it...\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFVisitTheCon is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    if (gstruct_GameVars.cFBeenOutAndBack != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBeenOutAndBack is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("However, what #!00# does not know yet is that the contraption that she trashed is still sitting in the cell to the left.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBeenOutAndBack is set]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFBeenOutAndBack is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("However, what #!00# does not know yet is that the contraption that she trashed is sitting in another cell.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFBeenOutAndBack is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" The contraption that the Human-woman is strapped into is new.\n\n#!00# then notices that the Dark-Elf is chanting, but he is not looking at #!00#. The Dark-Elf is focusing on the Human-woman. The Light-Elf is looking straight at #!00#...\n\n#!00# thinks to herself \"At least he isn\'t casting an enchantment right now... hold on...\"\n\n#!00# notices, while she has a headache, her nipples aren\'t throbbing anymore. However, her clitoris, is feeling rather itchy... #!00# looks down at her crotch.\n\n\"What the fuck is THIS\?!\"\n\n#!00# is currently wearing a black rubber strap-on dildo. As #!00# grabs it, she feels some stimulation of her own clitoris. As #!00# lets go of the dildo, she thinks to herself \"Calm down... it\'s... just a fake cock...\"\n\n#!00# is then distracted by a change in the noise in the cell. She looks up to see the Light-Elf walking towards her. #!00# thinks to herself \"Fuck... just ruined the element of surprise...\"\n\nThe Light-Elf walks over to #!00# and extends his open right hand to her. His right palm is facing at the ceiling. #!00# glances at his hand, then at his face and thinks to herself \"I don\'t know if I should break this off and shove it up you butt... or to accept your gracious offer\"\n\n#!00# sighs and decides to go with the latter idea, and grabs on to his right hand her her right hand.\n\nThe Light-Elf tries to pull #!00# up from the chair, which #!00# finds amusing as he is clearly not very strong. #!00# decides to stand up by herself and accidentally knocks the dildo while she does.\n\n\"Oooh...\"\n\n#!00# starts to topple, but the Light-Elf grabs her and helps her maintain her balance. #!00# thinks to herself \"Okay... you have stopped being an asshole... but still...\"\n\nThe Light-Elf points over where the Dark-Elf and the Human-woman are. #!00# lets the Light-Elf help her walk over to the contraption that the Human-woman is strapped into. While slowly walking across the cell, #!00# notices that the human woman is not looking around and comes to the conclusion that the Dark-Elf is keeping her inside his Dream-Vision. However, that does not explain why #!00# has a strap-on dildo attached to her crotch.\n\nThe Light-Elf positions #!00# behind the exposed butt of the Human-Woman, next to the wall. #!00# extends her right out and braces herself against the wall, then looks at the Light-Elf.\n\n\"Okay... I am here now... so... what\'s next\?\"\n\nThe Light-Elf looks at #!00# with a blank expression, as he could not understand a thing that she just said to him.\n\nThen, the Light-Elf realizes that #!00# is waiting for him to do something, glances at the #!00#\'s strap-on dildo, then looks at the contraption. The Light-Elf undoes something and part of contraption comes off. Along with part of the contraption, a pair of small dildos slide out of the Human-woman. #!00# glances down at her own strap-on dildo.\n\n\"Oh...\"\n\nThe Light-Elf then walks away from #!00#, around the Dark-Elf and to the mouth of the Human-woman. He then bends over, grabs something that is in the Human-woman\'s mouth and throws it to #!00#. #!00# catches the object, looks at it, discovers that it is a dildo that is coated with saliva. #!00# thinks to herself \"This... was in... her mouth\?..\"\n\n#!00# then looks at the Light-Elf, just in time to see him pull up his robes and then slam his penis into the Human-woman\'s mouth. The Light-Elf then nods at #!00# and starts humping away at the Human-woman\'s face.\n\nUnknown to #!00#, as she couldn\'t see it in the first place, is that the Human-woman\'s mouth is held open with a mouth spreader.\n\n#!00# looks down at the dildo that she is holding, then the strap-on dildo that is attached to her crotch and then nods her head.\n\n\"Okay... let\'s do this...\"\n\n#!00# starts by pushing the dildo that she is holding into the Human-woman\'s anus and holds it there. #!00# then haunches down, then shuffles forward as best as she can while she is crouching, and slides the strap-on dildo into the Human-woman\'s pussy.\n\n\"Fine so far... now...\"\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1245 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic07_scene1245 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1245 >Slowly thrust into the Human\'s pussy}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1245 >Quickly thrust into the Human\'s pussy}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1245 >Wiggle hips from side to side}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1245 >Lightly tease the Human\'s clitoris}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1245 >Lightly pinch the Human\'s clitoris}\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Slowly thrust into the Human\'s pussy\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Quickly thrust into the Human\'s pussy\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Wiggle hips from side to side\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Lightly tease the Human\'s clitoris\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Lightly pinch the Human\'s clitoris\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy. ");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the strap-on dildo in and out of the Human-woman\'s pussy. ");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# wiggles her hips from side-to-side. ");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately teases the Human-woman\'s clitoris. ");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Human-woman\'s clitoris. ");
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
                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf suddenly grabs the Human-woman\'s head and thrusts his crotch in and out of her mouth. #!00# thinks to herself \"Oh... having fun there\?..\"\n\nThe Light-Elf takes another deep breath before letting go of the Human-woman\'s head and resuming his stoic stance of standing in front of the Human-woman, while a Human-woman continues to suck his penis.\n\n");

                break;

            case 2:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Two !]\n");
                    if (iRet != 0) return iRet;
                }
                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf\'s suddenly facial expression changes from poker face to combination of slight ecstasy and gasping for air.\n\n#!00# glances at the Dark-Elf, who is still subjecting the Human-woman to his illusion spell. The Dark-Elf is paying no attention to the Light-Elf\'s sudden movements.\n\nThe Light-Elf returns his stoic stance of standing while a Human-woman continues to lick his cock.\n\n");

                break;

            case 3:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Three !]\n");
                    if (iRet != 0) return iRet;
                }
                iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf\'s facial expression contorts again, as he starts thrusting his penis in and out of the Human-woman\'s mouth. #!00# wonders what condition the Human-woman's nose is in, given that the Light-Elf is repeatedly slamming his crotch into the Human-woman\'s face.\n\nAfter 3 thrusts, the Light-Elf grabs the Human-woman\'s head and holds only her as he keeps his penis stuffed down the Human-woman\'s throat. #!00# stops to allow the Human-woman some respite.\n\nAfter a while, the Light-Elf returns his stoic stance of standing while a Human-woman continues to lick his cock. Light-Elf looks at #!00#.\n\n#!00# thinks to herself \"I guess I should continue...\"\n\n");

                break;

            case 4:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Four !]\n");
                    if (iRet != 0) return iRet;
                }
                iRet = mdialog_addToDialogWithSrchRep ("Again, the Light-Elf starts to thrust is cock in and out of the Human-woman\'s mouth with vigor. #!00# decides to stop what she is doing to allow the Human-woman to deal with the elven oral orifice onslaught.\n\nThe Light-Elf almost collapses on top of the Human-woman, then he glances at #!00#.\n\n\"Was it good for you\?..\"\n\nThe Light-Elf quickly regains his poker-faced composure, stands up straight and looks at the Dark-Elf. The Dark-Elf is still concentrating on the Human-woman, and does not notice his companion. The Light-Elf glances at #!00#\'s face, then at #!00#\'s crotch, at #!00#\'s face again, then utters something in Elven.\n\n#!00# thinks to herself \"Okay... another round then...\"\n\n");

                break;

            default:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Five !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("#!00# notices that the Light-Elf\'s hands are grabbing the Human-woman\'s head again and glances at the Light-Elf. #!00# thinks to herself \"Oh... I thought...\"\n\nThe Light-Elf then starts pistoning his cock in and out of the Human-woman\'s mouth. #!00# stops moving to allow the Human-woman to deal with the renewed elven oral assault.\n\nThe Light-Elf finally reaches out for the nearby wall, and extracts his penis from the Human-woman\'s mouth. He is breathing heavily.\n\n\"Do you need some help\?..\"\n\nThe Light-Elf glances over at #!00#, in less than a second he could read #!00#\'s concern from looking at her facial expression. He waves his hand in a motion indicating that he does not require any assistance, but #!00# got the gist from his facial expression alone.\n\n#!00# thinks to herself \"Typical guy... suit yourself...\"\n\nThe Light-Elf looks at the Dark-Elf, then says something to the him. The Dark-Elf briefly glances up at the Light-Elf, then shifts his focus back to the Human-woman. The Light-Elf then staggers away from the wall, over to the bed.\n\n#!00# is about to wonder about what is going to happen next, when the Dark-Elf starts slowly walking around from the side of the Human-woman, to the front of Human-woman. He then slowly pulls up his robes to reveal his penis, and slides his penis into the Human-woman\'s mouth.\n\n#!00# is distracted by the Light-Elf who is saying something and looks at the Light-Elf who is now sitting on the edge of the bed. The Light-Elf continues talking to #!00# in Elven, so #!00# cannot figure out what he is saying, however he is making motions with his hands again.\n\n#!00# glances at the Dark-Elf, then back at the Light-Elf, then down at the Human-woman.\n\n\"Okay... I get it... I should continue...\"\n\n");
                if (iRet != 0) return iRet;

                iRet = gamelogic07_scene1246 (0, cSubFlag + 1);
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the strap-on dildo in and out of Human-woman\'s pussy.");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the strap-on dildo in and out of Human-woman\'s pussy.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# wiggles her hips from side-to-side.");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly teases the Human-woman\'s clitoris.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Human-woman\'s clitoris.");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" However, the Human-woman isn\'t as aroused by the action. The Light-Elf isn\'t being pleasured by the Human-woman as much either.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;

            if (cRandom1 == 1)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Looks like this is getting rather boring for the human... I should change things around...\"\n\n");
            }
            else if (cRandom1 == 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"What a shame... the Mister Light-Small-Penis isn\'t satisfied anymore. Actually, it means that the human isn\'t happy either... that isn\'t good...\"\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Hmm... this isn\'t going so well... I should spice things up a little bit...\"\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by slowly thrusting the strap-on dildo in and out of the Human-woman\'s pussy.");
                break;

            // case 2: is not here for a first action.
            // case 5: isn't either.

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts be wiggling her hips from side-to-side, causing the strap-on dildo to shift around inside the Human-woman\'s pussy.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by delicately teasing the Human-woman\'s clitoris.");
                break;
            }
            if (iRet != 0) return iRet;

            // I don't need to take into account 2 and 5 for a first action.

            iRet = mdialog_addToDialogWithSrchRep (" The Human-woman starts shaking her hips in response to #!00#\'s actions, and #!00# thinks to herself \"She is really getting into this...\"\n\n#!00# then looks at the face of the Light-Elf. His expression lightly flinches, but otherwise is still trying to appear emotionless. #!00# then realizes that she isn\'t so much entertaining the Human-woman right now, she is really entertaining the Light-Elf, while using the Human-woman as an extension... of her own clitoris.\n\n\"So that\'s how it is...\"\n\nThe Light-Elf looks at #!00#, as he is no longer being stimulated by the Human-woman. #!00# thinks to herself \"Okay... let\'s see how you like this...\"\n\n");
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
            cRandom2 = (rand() % 5) + 1;

            if (cRandom1 == 1)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, while also lightly gyrating her hips. #!00# is certain that the dildo is exploring the Human-woman\'s womb.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# slams the strap-on dildo into the Human-woman\'s pussy, gyrates her hips a little bit, then withdraws the dildo, and slams it back in again, repeating the action 4 more times.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gyrates her hips around, causing the strap-on dildo that is attached to her crotch to roam around inside of the Human-woman\'s pussy.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# circles her index finger around the Human-woman\'s clitoris, only lightly touching the sides of it.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately pinches the Human-woman\'s clitoris with her right index finger and thumb, then rubs the Human-woman\'s clitoris a little bit, before delicately pinching it again.\n\n");
                    break;
                }
            }
            else if (cRandom1 == 0)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, in a slightly erratic fashion, to try and break up monotony.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# quickly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, while also slightly adjusting the angle of the dildo each time to try and give some variance.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# alternates her hips from side to side and up and down jerking motions with the strap-on dildo firmly embedded in the Human-woman\'s pussy.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly touches the Human-woman\'s clitoris with her right index finger, while keeping her crotch perfectly still.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently caresses with the Human-woman\'s clitoris, then lightly pinches it.\n\n");
                    break;
                }
            }
            else
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, while also grabbing the human-woman\'s butt with both her of her hands and massaging it.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# quickly pistons the strap-on dildo in and out of the Human-woman\'s pussy 6 times.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# wiggles her butt while also lightly, but erratically, thrusting her hips, causing the dildo to shift around inside the Human-woman\'s pussy.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly teases the Human-woman\'s clitoris with her right index finger and thumb, while delicately gyrating her hips.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly squeezes the Human-woman\'s clitoris between her fingers, while also lightly slowly thrusting the dildo in and out of the Human-woman\'s pussy a couple of times.\n\n");
                    break;
                }
            }

            if (iRet != 0) return iRet;

            if (gstruct_GameVars.iArousalLevel2 > 12)
            {
                iRet = mdialog_addToDialogWithSrchRep ("The Human-woman makes a muffled moaning noise as she lightly orgasms.\n\n");
                if (iRet != 0) return iRet;

                gstruct_GameVars.iArousalLevel2 = 0;
            }
            else
            {
                gstruct_GameVars.iArousalLevel2 += cRandom2;

                if (cRandom2 == 1)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Human-woman bucks her hips, trying to get more stimulation.\n\n");
                    if (iRet != 0) return iRet;
                }
                else if (cRandom2 == 2)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Human-woman continues sucking and slurping the Light-Elf\'s penis.\n\n");
                    if (iRet != 0) return iRet;
                }
                else if (gstruct_GameVars.iArousalLevel2 > 12)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Human-woman shudders as she lightly orgasms.\n\n");
                    if (iRet != 0) return iRet;

                    gstruct_GameVars.iArousalLevel2 = 0;
                }
            }
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1245 Ending 004a Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene1 (24, 14, 250);

        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;
    }

    if ((cResult != -1) || (iSubSceneId != 1))
    {
        iRet = mutils_addToCommandList ("Slowly thrust into the Human\'s pussy", 1245, 1);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 2))
    {
        if (gstruct_GameVars.cFSexSceneStart == 0)
        {
            iRet = mutils_addToCommandList ("Quickly thrust into the Human\'s pussy", 1245, 2);
            if (iRet != 0) return iRet;
        }
    }

    if ((cResult != -1) || (iSubSceneId != 3))
    {
        iRet = mutils_addToCommandList ("Wiggle hips from side to side", 1245, 3);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 4))
    {
        iRet = mutils_addToCommandList ("Lightly tease the Human\'s clitoris", 1245, 4);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 5))
    {
        if (gstruct_GameVars.cFSexSceneStart == 0)
        {
            iRet = mutils_addToCommandList ("Lightly pinch the Human\'s clitoris", 1245, 5);
            if (iRet != 0) return iRet;
        }
    }

    return 0;
}

//
// This is a sex scene process point.
//
int gamelogic07_scene1246 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1246 >Slowly thrust into the Human\'s pussy}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1246 >Quickly thrust into the Human\'s pussy}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1246 >Wiggle hips from side to side}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1246 >Lightly tease the Human\'s clitoris}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1246 >Lightly pinch the Human\'s clitoris}\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Slowly thrust into the Human\'s pussy\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Quickly thrust into the Human\'s pussy\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Wiggle hips from side to side\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Lightly tease the Human\'s clitoris\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Lightly pinch the Human\'s clitoris\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the strap-on dildo in and out of the Human-woman\'s pussy.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# wiggles her hips from side-to-side.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately teases the Human-woman\'s clitoris.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Human-woman\'s clitoris.\n\n");
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
                iRet = mdialog_addToDialogWithSrchRep ("Without blinking, the Dark-Elf thrusts his penis in and out of the Human-woman\'s mouth a couple of times, then stands still. #!00# thinks to herself \"did he just cum\?\?..\"\n\n#!00# is briefly impressed that the Dark-Elf could ejaculate inside the Human-woman\'s mouth while still maintaining his concentration for the illusion spell.\n\n");

                break;

            case 2:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Two !]\n");
                    if (iRet != 0) return iRet;
                }
                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf\'s body stiffens a little bit, then he quickly resumes his composure and concentration.\n\n#!00# thinks to herself \"This guy... wow...\"\n\n#!00# decides to continue satisfying the Human-woman.\n\n");

                break;

            case 3:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Three !]\n");
                    if (iRet != 0) return iRet;
                }
                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf\'s body stiffens a little bit and he humps his hips a couple of times. The Dark-Elf then quickly resumes his composure and concentration.\n\n#!00# glances over at the Light-Elf, who is still sitting on the edge of the bed and briefly wonders who the more experienced of the two is. The Light-Elf is sitting on the edge of the bed wearing his poker faced expression, which he could hardly maintain during his turn being sucked off by the Human-woman. Meanwhile, it would appear that the Dark-Elf has been maintaining his concentration for his illusion spell the entire time.\n\n#!00# briefly overlooks the Dark-Elf\'s past-immaturity and continues satisfying the Human-woman.\n\n");

                break;

            case 4:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Four !]\n");
                    if (iRet != 0) return iRet;
                }
                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts lightly thrusting in and out of the Human-woman\'s mouth, while still maintaining his concentration, then he stops thrusting, pulls his penis out of the Human-woman\'s mouth and ejaculates on the Human-woman\'s back. Some of the semen hits #!00#\'s stomach.\n\n#!00# thinks to herself \"How considerate...\"\n\nThe Dark-Elf, while still maintaining his concentration sticks his penis back in the Human-woman\'s mouth. #!00# scoops some of the Dark-Elf\'s semen off of her own belly, tastes it and decides to continue.\n\n");

                break;

            case 5:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Five !]\n");
                    if (iRet != 0) return iRet;
                }
                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf starts lightly thrusting in and out of the Human-woman\'s mouth, while still maintaining his concentration, then he stops thrusting, pulls his penis out of the Human-woman\'s mouth and ejaculates all over the Human-woman\'s face.\n\n#!00# thinks to herself \"Well... at least she doesn\'t have to swallow it...\"\n\nThe Dark-Elf, while still maintaining his concentration sticks his penis back in the Human-woman\'s mouth. #!00# decides to continue.\n\n");

                break;

            default:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Six !]\n");
                    if (iRet != 0) return iRet;
                }

                iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf grabs the Human-woman\'s head, and starts violently thrusting in and out of the Human-woman\'s mouth. #!00# thinks to herself \"Aren\'t you a little bit too excited\?\?..\"\n\nThe Dark-Elf\'s back stiffens and he almost falls over. He then puts his arm out and braces himself using the wall. #!00# then notices that the Dark-Elf isn\'t maintaining his concentration anymore.\n\n\"Umm... aren\'t you...\"\n\nThe Dark-Elf then walks away from the head of the Human-woman, over to the bed. The Light-Elf is still sitting there on the edge of the bed, quietly observing #!00# and the Human-woman.\n\n\"Eh\?\?..\"\n\n#!00# glances at the Human-woman, then over at the two elves, then looks at the Human-woman again. The Human-woman is starting to turn her head around, as if she is looking around inside of the cell. #!00# concludes that the Human-woman is no longer trapped inside the illusion spell.\n\nBut Human-woman is still trapped inside of the contraption and #!00# is standing behind her. #!00# decides to continue satisfying the Human-woman.\n\n");
                if (iRet != 0) return iRet;

                iRet = gamelogic07_scene1247 (0, cSubFlag + 1);
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the strap-on dildo in and out of Human-woman\'s pussy.");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the strap-on dildo in and out of Human-woman\'s pussy.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# wiggles her hips from side-to-side.");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly teases the Human-woman\'s clitoris.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Human-woman\'s clitoris.");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" However, the Human-woman isn\'t as aroused by the action. The Dark-Elf isn\'t being pleasured by the Human-woman as much either.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 2;

            if (cRandom1 != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Looks like everyone is falling asleep due to the boredom... I need to keep things interesting...\"\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Poor girl... she isn\'t as excited as she should be...\"\n\n");
            }
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
            cRandom2 = (rand() % 5) + 1;

            if (cRandom1 == 1)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# firmly and slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# slams the strap-on dildo into the Human-woman\'s pussy, gyrates her hips a little bit, then withdraws the dildo and slams it back in again, repeating the action 4 more times.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# uses the strap-on dildo to explore the inside of the Human-woman\'s pussy by lightly gyrating her hips.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately plays with the Human-woman\'s clitoris with her index finger and thumb.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly squeezes the Human-woman\'s clitoris between her fingers, while also lightly slowly thrusting the dildo in and out of the Human-woman\'s pussy a couple of times.\n\n");
                    break;
                }
            }
            else if (cRandom1 == 0)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, while also lightly playing with the dildo inside the Human-woman\'s anus.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# quickly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, while also slightly adjusting the angle of the dildo each time to try and give some variance.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# alternates her hips from up and down and side to side jerking motions with the strap-on dildo firmly embedded in the Human-woman\'s pussy.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly touches the Human-woman\'s clitoris with her right index finger, while lightly rocking her own crotch back and forth.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately pinches the Human-woman\'s clitoris with her index finger and thumb, while also playing with the Human-woman\'s urethra with her middle finger.\n\n");
                    break;
                }
            }
            else
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, while also playing with the Human-woman\'s pussy lips with her fingers.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# quickly pistons the strap-on dildo in and out of the Human-woman\'s pussy a few times.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# twists her butt around, causing the strap-on dildo to shift around inside of the Human-woman\'s pussy.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tickles the Human-woman\'s clitoris with her right index finger.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Human-woman\'s clitoris, then traces her finger around the Goblin-woman\'s clitoris, before pinching it again.\n\n");
                    break;
                }
            }
            if (iRet != 0) return iRet;

            if (gstruct_GameVars.iArousalLevel2 > 12)
            {
                iRet = mdialog_addToDialogWithSrchRep ("The Human-woman makes a muffled moaning noise as she lightly orgasms.\n\n");
                if (iRet != 0) return iRet;

                gstruct_GameVars.iArousalLevel2 = 0;
            }
            else
            {
                gstruct_GameVars.iArousalLevel2 += cRandom2;

                if (cRandom2 == 1)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Human-woman bucks her hips, trying to get more stimulation.\n\n");
                    if (iRet != 0) return iRet;
                }
                else if (cRandom2 == 2)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Human-woman continues sucking and slurping the Dark-Elf\'s penis.\n\n");
                    if (iRet != 0) return iRet;
                }
                else if (gstruct_GameVars.iArousalLevel2 > 12)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("The Human-woman shudders as she lightly orgasms.\n\n");
                    if (iRet != 0) return iRet;

                    gstruct_GameVars.iArousalLevel2 = 0;
                }
            }
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1246 Ending 004b Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene1 (24, 14, 250);

        cResult = 0;
        gstruct_GameVars.iArousalLevel2 = 0;
    }

    if ((cResult != -1) || (iSubSceneId != 1))
    {
        iRet = mutils_addToCommandList ("Slowly thrust into the Human\'s pussy", 1246, 1);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 2))
    {
        iRet = mutils_addToCommandList ("Quickly thrust into the Human\'s pussy", 1246, 2);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 3))
    {
        iRet = mutils_addToCommandList ("Wiggle hips from side to side", 1246, 3);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 4))
    {
        iRet = mutils_addToCommandList ("Lightly tease the Human\'s clitoris", 1246, 4);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 5))
    {
        iRet = mutils_addToCommandList ("Lightly pinch the Human\'s clitoris", 1246, 5);
        if (iRet != 0) return iRet;
    }

    return 0;
}

//
// This is a sex scene process point.
//
int gamelogic07_scene1247 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1247 >Slowly thrust into the Human\'s pussy}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1247 >Quickly thrust into the Human\'s pussy}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1247 >Wiggle hips from side to side}\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("{1247 >Lightly tease the Human\'s clitoris}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1247 >Lightly pinch the Human\'s clitoris}\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Slowly thrust into the Human\'s pussy\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Quickly thrust into the Human\'s pussy\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Wiggle hips from side to side\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep (">Lightly tease the Human\'s clitoris\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Lightly pinch the Human\'s clitoris\n\n");
                break;
            }
            if (iRet != 0) return iRet;
        }

        cResult = gamelogiccommon_sexActionPartner1 ((char)iSubSceneId);

        if (cResult == 1)
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Climax One !]\n");
                if (iRet != 0) return iRet;
            }

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the strap-on dildo in and out of the Human-woman\'s pussy.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# wiggles her hips from side-to-side.\n\n");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately teases the Human-woman\'s clitoris.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Human-woman\'s clitoris.\n\n");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep ("The Human-woman has a mind-blowing orgasm and passes out in the contraption.\n\n");
            if (iRet != 0) return iRet;

            iRet = gamelogic07_scene1248 (0, cSubFlag + 1);
            return iRet;
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slowly thrusts the strap-on dildo in and out of Human-woman\'s pussy.");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly thrusts the strap-on dildo in and out of Human-woman\'s pussy.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# wiggles her hips from side-to-side.");
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly teases the Human-woman\'s clitoris.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly pinches the Human-woman\'s clitoris.");
                break;
            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" However, the Human-woman doesn\'t seem to be as enthusiastic anymore.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 2;

            if (cRandom1 != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"I know... that was boring... so let\'s make this interesting...\"\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"Sorry... my bad... let\'s change things around a bit...\"\n\n");
            }
            if (iRet != 0) return iRet;
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: normal]\n");
                if (iRet != 0) return iRet;
            }

            cRandom1 = rand() % 2;
            cRandom2 = rand() % 6;

            if (cRandom1 == 0)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, while also lightly circling her fingers around the anal dildo that is also inside the Human-woman.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# quickly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, while also lightly gyrating her hips to change the angle of the dildo a little bit each time.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# uses the strap-on dildo to explore the inside of the Human-woman\'s pussy by lightly gyrating her hips, while also occasionally lightly thrusting.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# tickles the Human-woman\'s clitoris using her right index finger and right thumb.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# delicately pinches the Human-woman\'s clitoris with her index finger and thumb, while also playing with the Human-woman\'s urethra with her middle finger.\n\n");
                    break;
                }
            }
            else
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# slowly thrusts the strap-on dildo in and out of the Human-woman\'s pussy, while also lightly teasing the Human-woman\'s clitoris with her index finger.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Using her crotch, #!00# quickly pistons the strap-on dildo in and out of the Human-woman\'s pussy twice, slows down for 2 slow thrusts, then speeds up for 2 more thrusts, in and out of the Human-woman\'s pussy.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# twists her own butt around, causing the strap-on dildo to move around inside of the Human-woman\'s pussy.\n\n");
                    break;

                case 4:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly circles Human-woman\'s clitoris with her right index finger a couple of times, then lightly touches the tip of the Human-woman\'s clitoris, before circling the Human-woman\'s clitoris a couple more times.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly squeezes the Human-woman\'s clitoris between her fingers, while also lightly slowly thrusting the dildo in and out of the Human-woman\'s pussy a couple of times.\n\n");
                    break;
                }
            }
            if (iRet != 0) return iRet;

            if ((cRandom2 == 1) || (cRandom2 == 0))
            {
                iRet = mdialog_addToDialogWithSrchRep ("The Human-woman lightly moans, while shaking her butt, trying to get more stimulation.\n\n");
                if (iRet != 0) return iRet;
            }
            else if (cRandom2 == 2)
            {
                iRet = mdialog_addToDialogWithSrchRep ("The Human-woman rocks her butt back and forth. #!00# thinks to herself \"Oooh... you like this... don\'t you...\"\n\n");
                if (iRet != 0) return iRet;
            }

        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1247 Ending 004c Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        gamelogiccommon_initSexScene1 (24, 14, 250);

        cResult = 0;
    }

    if ((cResult != -1) || (iSubSceneId != 1))
    {
        iRet = mutils_addToCommandList ("Slowly thrust into the Human\'s pussy", 1247, 1);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 2))
    {
        iRet = mutils_addToCommandList ("Quickly thrust into the Human\'s pussy", 1247, 2);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 3))
    {
        iRet = mutils_addToCommandList ("Wiggle hips from side to side", 1247, 3);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 4))
    {
        iRet = mutils_addToCommandList ("Lightly tease the Human\'s clitoris", 1247, 4);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 5))
    {
        iRet = mutils_addToCommandList ("Lightly pinch the Human\'s clitoris", 1247, 5);
        if (iRet != 0) return iRet;
    }

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic07_scene1248 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1248 Ending 004 Sex Scene Exit 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides that this is enough, so she pulls the strap-on dildo out of the Human-woman\'s pussy and also extracts the dildo that she put into the Human-woman\'s anus. #!00# then looks at the two elves.\n\n\"So... what\'s next...\"\n\nThe Light-Elf just stands there with his usual poker-faced expression, however the Dark-Elf just looks in awe at #!00#\'s strap-on dildo. #!00# looks down at the strap-on dildo.\n\n\"You know... this thing has been useful..,\"\n\n#!00# looks at the two elves again.\n\n\"Can either of you perverts think of any improvements\?\"\n\n#!00# smiles. The Dark-Elf does a double-take. Light-Elf lightly laughs.\n\n\n[About 5 months later...]\n\nThe Goblin-woman is eagerly licking #!00#\'s pseudo-phallus. #!00# enjoys the attention her altered clitoris is receiving.\n\nIt has been over a month since her two elven masters stopped injecting her with the \'weird elven shit\' that caused #!00#\'s clitoris to swell and grow in size and it has been half a month since #!00# has been able to feel pleasure from that part of her body without the need for \'other weird elven shit\' to control the pain.\n\n#!00#\'s little clitty is not so little anymore, and is now larger than the erect penises of either the Light-Elf or the Dark-Elf. #!00# would personally have preferred if she kept on growing it to the size of an erect male orc, but her masters insist on it being no bigger than this.\n\nThe Light-Elf has admitted that they fucked up by making #!00#\'s pseudo-phallus larger than their own penises in the first place.\n\n#!00# can understand and speak some Elven now, but it is limited to some very basic expressions. The elves can understand some of her Orc, but choose to not speak it themselves.\n\nMeanwhile the Goblin-woman is still licking #!00#\'s altered clitoris, trying to cajole semen out of something that is just a solid stick of meat, with no urethra or glands of any kind. #!00#\'s two masters are standing nearby, watching the Goblin-woman, evaluating her skills.\n\nThe Light-Elf clears his throat, getting #!00#\'s attention and asks \"<how is it\?>\"\n\n#!00# nods her head and responds in broken Elven \"<Good... no teeth... this time.>\"\n\n#!00# does not need to report that the Goblin-woman swirling her tongue while eagerly sucking, as the her two elven masters can clearly see that.\n\nThree days ago, the Goblin-woman bit #!00#, so they punished her that day, the next day, and then again yesterday, by loading her up with more elven aphrodisiacs, then fucking her senseless... repeatedly.\n\n#!00# ended up sleeping in the cell for a couple of days, while the Goblin-woman was strapped into the contraption and #!00# alternated between fucking the Goblin-woman\'s pussy and anus, over and over again, while the Goblin-woman could do nothing but remain restrained in the doggy position and put up with the repeated violation. The Dark-Elf dropped by and subjected her to his Dream-Vision of the tentacle monster a few times, just to change the pace. However, for every moment that #!00# was awake, #!00# was relentlessly punishing the Goblin-woman\'s two primary lower orifices.\n\nThe Dark-Elf gives his evaluation \"<The Goblin-Slut likes the Orc-slut\'s cock>.\"\n\nThe Light-Elf adds his opinion \"<It would be a problem if the Goblin-Slut only accepts the Orc-Slut>.\"\n\nThe Dark-Elf responds \"<We should test her then... let the Orc-Slut take her pussy, I will do the butt>.\"\n\nThe Light-Elf considers the potential of sticking his penis into the Goblin-woman\'s mouth. Normally, the Light-Elf would insist on the mouth spreader. However, the Dark-Elf face fucked the Goblin-woman yesterday without using the mouth spreader and bragged about it afterwards. The Dark-Elf seems to always be taking stupid risks and it is rare that they backfire, which infuriates the Light-Elf at times.\n\nThe Dark-Elf the bugs the Light-Elf \"<Are you scared that the little Goblin-Slut is going to bite your dick off>\?\"\n\nLight-Elf scowls at the Dark-Elf. #!00# already knows first hand what the Goblin-woman\'s bite is like and the Light-Elf had to heal #!00# 3 days ago when the Goblin-woman bit #!00# then.\n\n#!00# decides to throw in her opinion as she cannot stand her masters bickering, also it does not help when they use complicated terms that #!00# herself cannot understand. \"<Masters, I can take the mouth... if you want\?>\"\n\nLight-Elf looks at #!00#, with his usual poker-faced expression, in a vain attempt to hide his emotions again and responds to #!00# \"<No... I will take the mouth... no restriction... Orc-Slut will take the pussy>\"\n\n#!00# sighs \"very well then...\", as #!00# could just barely understand what the Light-Elf was telling her again and lightly grabs the Goblin-woman by her head and pushes her off her penis. #!00# looks down at the Goblin-woman and speaks in Elven.\n\n\"<Gang-bang>...\"\n\nThe Goblin-woman cocks her head... as she is unfamiliar with this new Elven term. Had #!00# used the Goblin language, she would have understood. For reasons that haven\'t been explained to #!00#, the intention is to train the sex slaves to understand Elven terms related to sex.\n\n#!00# crouches down, crawls over into the center of the bed and lays flat on her back. #!00#\'s permanently erect pseudo-phallus is pointing at the ceiling of the cell. #!00# then looks at the Goblin-woman and talks to her using Elven again.\n\n\"<Come here>.\"\n\nThe blank expression vanishes from the Goblin-woman\'s face, as understands that Elven term and then realizes that she is to mount #!00#\'s \"cock\".\n\nThe Goblin-woman eagerly scampers over to #!00#, using the goblin terms for \"cock\" and \"penis\". #!00# glances at the Light-Elf, who gave up even trying to teach the women that they subject to sex slave training how to use the Elven terms months ago. Something to do with the sex slaves being more exotic if they kept using their native languages.\n\nAs the Goblin-woman slams #!00#\'s cock into her pussy and experiences an orgasm almost immediately, the two elves start moving into position. The Goblin-woman starts pistoning up and down on #!00#\'s pseudo-phallus, as the Dark-Elf creeps up behind the Goblin-woman.\n\nThe Dark-Elf isn\'t happy that #!00# and the Goblin-woman are starting without him \"<These sluts... stop moving, BITCH>\"\n\nThe Light-Elf kneels, with his penis hanging over #!00#\'s face.\n\n#!00# decides to help out... \"<Just a moment>...\" and starts fondling the breasts of the Goblin-woman, causing the Goblin-woman to have an mind-blowing orgasm and to collapse on #!00#.\n\nThe Dark-Elf still isn\'t happy, but takes the opportunity to impale the Goblin-woman\'s anus with his penis, while the Light-Elf is holding off on ramming his penis into the Goblin-woman\'s mouth.\n\nThe Dark-Elf rubs it in \"<Still scared bud\?>...\"\n\nThe Light-Elf responds \"<I am teasing the goblin-bitch>...\"\n\nThe Dark-Elf retorts \"<Whatever man>...\"\n\nThe Goblin-woman finally realizes that she has #!00# in her pussy and the Dark-Elf in her butt, while the Light-Elf\'s penis is hovering in front of her face. The Goblin-woman starts rocking her butt, to get the motion between the Dark-Elf and #!00# going, then reaches out for the Light-Elf\'s penis.\n\n#!00# is simultaneously thrusting her hips while studying the facial expressions of the Goblin-woman and #!00# thinks to herself \"no malice, the Light-Master should be safe\".\n\n#!00# glances up at the Light-Elf, just as he glances at her. #!00#\'s facial expression tells him everything he needed to know from her vantage point, so he shuffles forward on his knees a little bit and lets the Goblin-woman suck on his cock.\n\nAfter a little while the Light-Elf provides his assessment \"<Agreed, good tongue, an acceptable slut>...\"\n\n#!00# continues watching the Goblin-woman as she orgasms over and over again. The Goblin-woman is no threat, but while the Light-Elf still has his delightful penis at risk, #!00# is not taking any chances.\n\n\nEither way... this Goblin-woman will be reaching the end of her stay here... and it will be a new face in more or less a week.\n\n<Ending 4: Third Cock for Training>\n\n");
    if (iRet != 0) return iRet;

#ifdef INTERFACE_CURSES
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    return iRet;
#else
    return 0;
#endif // INTERFACE_CURSES
}

//
// This is the lead in to Endings 005 and 006.
//
int gamelogic07_scene1250 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1250 Ending 005-006 lead in}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# wakes up. There is a minor throbbing in #!00#\'s head and her nipples and clitoris are on fire again.\n\n#!00# sighs \"Those... fuckwads.\"\n\n#!00# opens her eyes. She is staring at the same light-gray stone ceiling, same light-gray stone walls, same white-smoke luminescent orbs embedded into the walls and she can feel with her hand that the she is still laying on latex rubber.\n\n#!00# slowly props herself up on her elbows. She quickly checks her abdomen and comes to the conclusion that she has dildos inside herself again. #!00# thinks to herself \"Just what is it with those two dicks and their obsession with the tiny fake dicks\"\n\nThe tray table is gone. That is to be expected.\n\nThe door is open\?!.. The door isn\'t just open, it is wide open.\n\n\"Why\?\"\n\n#!00# feels that there has to be something out of place, so she glances around the cell. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The table is still there, with the pile of dildos on it.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("The collection of dildos is still next arranged next to the wall, where the table was.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("And, there is someone sitting in the big chair, in the back-left corner. #!00# blinks as she realizes that someone is the Dark-Elf and he is fully clothed. #!00# thinks to herself \"Okay... I wasn\'t expecting this...\"\n\nThe Dark-Elf nods at #!00# and smiles. #!00# glances back at the door, then looks at the Dark-Elf. #!00# considers her options. She has a considerable handicap right now. The Dark-Elf has purposely positioned himself in one of the few spots in the cell where he is the furthest away from #!00#. To get at him, she would have to try and crawl across the bed, which isn\'t going to be quick, or run around the bed, which is going to be difficult given that she cannot walk quickly, or she will cum her brains out while trying to run. He would be able to immobilize her with his Dream-Vision enchantment before she could make it to him.\n\nForget about trying to running away either, as she would not make it out of his sight before his Dream-Vision enchantment kicks in. #!00# then considers that she can only see the Dark-Elf and that the Light-Elf might be hiding nearby.\n\nThe Dark-Elf is further away from the door than #!00# is, so he he did run, #!00# could easily intercept him. #!00# does consider the fact that the Dark-Elf could immobilize her completely using his enchantment, while making his escape. He could get to the door and close it before releasing her from the Dream-Vision. That MUST be his escape plan. #!00# can tell from his facial expression, that he is sort of concerned. But obviously not concerned enough to be hitting #!00# with an enchantment while she just looks at him.\n\n#!00# could try taking the dildos out and throwing them at him. But, that is going to take too long as well and does nothing to resolve the distance problem.\n\n#!00# thinks to herself \"Wait... that\'s it... distance is the problem, I shouldn\'t be thinking about how to get closer to him, but how to get him closer to me... well... mister dark-small-penis IS a pervert and... he always wants to get a closer look... so...\"\n\n#!00# decides to stop looking at the Dark-Elf, flops onto her back and starts masturbating. Her left hand goes for her anus, while her right goes for her pussy. #!00#\'s starts stroking her clitoris with her right thumb and she tries fishing for the dildos.\n\n#!00# looses herself in the pleasure and climaxes quickly and without hesitation keeps going. With her second climax, she is rewarded with the anal dildo, however, the one in her vagina is proving to be stubborn and does not want to come out with her third orgasm. #!00# decides to have a brief rest.\n\nWhile in her giddy post-multi-orgasm state, #!00# thinks that she should get rid of the anal dildo, so she throws it to her right. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("It lands underneath the table.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("The dildo reaches the collection of dildos on the floor and knocks a few of them over.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# then continues to masturbate, orgasming another four times in a row with great ease, but the dildo in her vagina still does not want to come out. #!00# decides to have another rest.\n\n#!00# lays there on the bed, breathing heavily while her eyes are closed. She can hear some rustling sounds to her lower left. #!00# slowly opens her eyes a little and sees the fuzzy silhouette of the Dark-Elf standing there. It would appear that he is at the edge of the bed. #!00# opens her eyes some more, and notices that the Dark-Elf has a grin on his face as he looks at her.\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Grab him", 1251, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Let him watch", 1261, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Grab him" Path Selection function (Ending 005).
//
int gamelogic07_scene1251 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1251 >Grab him}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Grab him\n\n");
        if (iRet != 0) return iRet;
    }

    if (gstruct_GameVars.cFDarkElfNeedy1 == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFDarkElfNeedy1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf bends forward a little bit, then pulls back. Just has he does, #!00# tries to grab hold of him with her left hand, manages to make contact with the hem of his robes, and pulls him on top of her.\n\nThe Dark-Elf yells something in Elven as he falls on top of #!00#.\n\nJust as #!00# is about to pin him down with her right arm, she orgasms again and lets him go. The Dark-Elf\'s right hand came into contact with #!00#\'s clitoris and he started fingering her.\n\n#!00# momentarily thinks about trying again, as she orgasms a second time when the Dark-Elf pinches her clitoris.\n\n\"Rrgh...\"\n\n#!00# tries to calm down, but finds that the Dark-Elf quickly pulls away from her and runs for the door.\n\n\"Shit...\"\n\n#!00# tries to groggily prop herself up on an elbow and looks at the Dark-Elf, who has tripped his robes just as he passed through the doorway of the cell. #!00# curses herself that she should have considered that he can trip up on his robes, as the Dark-Elf scrambles to close the cell door.\n\nWith the cell door closed, the Dark-Elf starts casting an enchantment. #!00# collapses back onto the bed and thinks to herself \"I wonder how this is going to work out\"... just as her vision fades to black.\n\n#!00# thinks to herself... \"what is the worst that can happen now \?\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFDarkElfNeedy1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf bends forward a bit more. With one swipe of her left arm, #!00# manages to grab him by the collar of his robes and pulls him on top of her. The Dark-Elf yelps as he falls on top of #!00#.\n\n#!00# then uses her right arm to pin the Dark-Elf down on top of her. The Dark-Elf takes a deep breath. #!00# thinks to herself \"Oh no you don\'t\". #!00# stops the Dark-Elf from yelling by giving him a tongue kiss.\n\nThe Dark-Elf is caught off guard by the fact that #!00#\'s tongue is now roaming around inside his mouth. For a couple of seconds, he has no idea what is going on, then realizes that he can fight back.\n\nThe Dark-Elf bites, only to discover that #!00# had coaxed his tongue out of his mouth as well. Because of the pain, he tries jerking back, only for #!00# to keep holding his head with her right hand and continue with the tongue kiss. The Dark-Elf now has no choice to keep his jaw wide open. As for #!00#, because she is an orc, she has a higher threshold to pain and this isn\'t the first time that someone has tried biting her while she was sticking her own tongue down their throat.\n\nThe Dark-Elf, with little else to control in this situation, focuses on breathing through his nose. #!00# thinks to herself \"That\'s a shame, I was hoping this little pervert would pass out\".\n\nAfter kissing for at least 2 minutes, #!00# finally retracts her tongue and breaks off the kiss.\n\n\"Wanna cuddle\?.. so do I...\"\n\nThe Dark-Elf does not understand what #!00# is saying, however he does understand that #!00# is now playing with his penis through the fabric of his robes.\n\nThe Dark-Elf takes another deep breath, so #!00# tongue kisses him again. This time the Dark-Elf is a little less tense, so #!00# lets go of him after only a minute.\n\n\"That wasn\'t so scary was it\?..\"\n\n#!00# then pulls the Dark-Elf\'s robes up over his head and rolls him over while pinning him down. #!00#\'s left arm is holding his robes and both of his arms above his head.\n\n#!00# then starts teasing the Dark-Elf\'s right nipple with her tongue, while playing with his penis with her right hand. The Dark-Elf starts to squirm, so #!00# decides to show him exactly who is in charge here.\n\n\"No you don\'t...\"\n\n#!00# grips the Dark-Elf\'s testicles with only her right index and fore fingers. The Dark-Elf starts to whimper due to the pain and stops struggling. #!00# releases her grip...\n\n\"Good boy...\"\n\n#!00# then resumes licking the Dark-Elf\'s right nipple, while rubbing his balls. After a while #!00#\'s right hand works its way up to the Dark-Elf\'s penis and she notices that he is leaking pre-cum. #!00# thinks to herself \"Why don\'t I screw this scrawny little wimp\'s brains out\?.. Yeah... let\'s do that...\"\n\n#!00# decides that she has had enough foreplay and her reflexes have had more than enough time to recover so she releases the Dark-Elf\'s arms. The Dark-Elf notices that his hands are no longer being held, but is unsure of what is going on, so he slowly pulls his robes down, just in time to see that #!00# is mounting his penis, cow-girl style.\n\n#!00# decides to not bother supporting her own weight as much and lets her butt slap into the Dark-Elf\'s crotch. The Dark-Elf cries out in pain a little bit, but that can\'t be helped. Compared to orcs, elves do not have the same level of physical strength.\n\n#!00# then remembers that she still has a dildo stuffed inside her pussy and the Dark-Elf\'s penis pushed it a little deeper. #!00# briefly considers the fact that the elves were thoughtful enough to provide a suitable penis-extension for this situation, so she decides that it\'s continued presence isn\'t going to be a problem. While not as wide, the combination of the Dark-Elf\'s own member and the small dildo are about the length of an erect male orc penis.\n\n#!00# looks at the Dark-Elf\'s face... and can tell he is feeling some discomfort.\n\n\"What\'s that honey\?.. you want me to move\?.. gladly...\"\n\n#!00# decides it is too soon to be hammering her butt onto Dark-Elf\'s pelvis, so she opts for horizontal movements instead. Besides, if she injured him too much it might cause problems later.\n\n");
    if (iRet != 0) return iRet;

    iRet = gamelogic07_scene1252 (0, cSubFlag + 1);
    return iRet;
}

//
// This is a sex scene process point.
//
int gamelogic07_scene1252 (int iSubSceneId, char cSubFlag)
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
                iRet = mdialog_addToDialogWithSrchRep ("{1252 >Twist ass}\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("{1252 >Flex abdominal muscles}\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("{1252 >Shake side-to-side}\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("{1252 >Hump back-and-forth}\n\n");
                break;

            }
            if (iRet != 0) return iRet;
        }
        else if (cSubFlag == 0)
        {
            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep (">Twist ass\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep (">Flex abdominal muscles\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep (">Shake side-to-side\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep (">Hump back-and-forth\n\n");
                break;

            }
            if (iRet != 0) return iRet;
        }

        cResult = gamelogiccommon_sexActionPartner1 ((char)iSubSceneId);

        if (cResult == 1)
        {
            switch (gstruct_GameVars.iClimaxCount1)
            {
            case 1:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax One !]\n");
                    if (iRet != 0) return iRet;
                }

                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# starts to gyrate her hips with a little bit more vigor.");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly clamps the Dark-Elf\'s penis with her vagina while also lightly wiggling her butt.");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# wiggles her butt a little bit too quickly.");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# quickly humps her vagina back and forth.");
                    break;

                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" The Dark-Elf starts to tense up, #!00# realizes her mistake and is about to back off, when the Dark-Elf gropes #!00#\'s breasts with his hands. #!00# climaxes and ends up clamping the Dark-Elf\'s penis, causing him to ejaculate.\n\nThe Dark-Elf\'s hands drop from #!00#\'s breasts back onto the black latex sheets.\n\nAfter recovering from her orgasm, #!00# thinks to herself \"Heh... next time... I am making you go first\". \n\n");
                if (iRet != 0) return iRet;

                break;

            case 2:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Two !]\n");
                    if (iRet != 0) return iRet;
                }

                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly gyrates her hips and notices that the Dark-Elf is close to cuming.");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly clamps the Dark-Elf\'s penis with her vagina and notices that the Dark-Elf is close to cuming.");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly shakes her butt side to side and notices that the Dark-Elf is close to cuming.");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by gently rocking back and forth, when she notices that the Dark-Elf is close to cuming.");
                    break;
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" #!00# smiles and briefly stops moving. The Dark-Elf quickly gropes #!00#\'s breasts again. #!00# feels a wave of pleasure shoot through her body, but manages to hold out till just after the Dark-Elf arches his back and ejaculates inside her pussy. The Dark-Elf lets go of #!00#\'s breasts again.\n\nAfter recovering from her orgasm, #!00# looks down at the Dark-Elf.\n\n\"Let\'s do that again\"\n\nThe Dark-Elf smiles... briefly.\n\n");
                if (iRet != 0) return iRet;

                break;

            case 3:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Three !]\n");
                    if (iRet != 0) return iRet;
                }

                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# starts to lightly gyrate her hips,");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# firmly clamps the Dark-Elf\'s penis with her vagina,");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# lightly wiggles butt side to side,");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# gently humps back and forth,");
                    break;
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" the Dark-Elf\'s hands start pawing #!00#\'s breasts again. This briefly catches #!00# off-guard, but she manages to recover from it without cuming her brains out. #!00# looks down at the Dark-Elf.\n\n\"Oooh... naughty... I like that...\"\n\nThe Dark-Elf smiles, and starts playing with #!00#\'s nipples. #!00# thinks to herself \"nice try\".\n\n#!00# then firmly clamps her vagina on the Dark-Elf while quickly humping back and forth a couple of times. The Dark-Elf lets go of #!00#\'s breasts and ejaculates inside of her pussy. #!00# climaxes shortly afterwards.\n\n#!00# and the Dark-Elf recover from their orgasms. #!00# decides to keep going.\n\n");
                if (iRet != 0) return iRet;

                break;

            case 4:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Four !]\n");
                    if (iRet != 0) return iRet;
                }

                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# starts to lightly gyrate her hips,");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# firmly clamps the Dark-Elf\'s penis with her vagina,");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# lightly wiggles her butt,");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# gently humps back and forth,");
                    break;
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" the Dark-Elf\'s hands start pawing #!00#\'s breasts again. #!00# thinks to herself \"not so\".\n\n#!00#\'s monologue is interrupted as the Dark-Elf switches from fondling #!00#\'s breasts to rubbing her nipples. While barely maintaining her composure, #!00# looks at the Dark-Elf and licks her lips.\n\n\"Heh...\"\n\n#!00# then lightly lifts and slams her butt into the Dark-Elf\'s crotch. The Dark-Elf ejaculates inside of #!00#, while also grabbing #!00#\'s breasts. When #!00# orgasms and arches her back, the Dark-Elf let\'s go of #!00#\'s breasts.\n\nAfter getting over her climax, #!00# decides to keep going.\n\n");
                if (iRet != 0) return iRet;

                break;

            case 5:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Five !]\n");
                    if (iRet != 0) return iRet;
                }

                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("As #!00# is about to gyrate her hips,");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("As #!00# is about to start massaging the Dark-Elf\'s penis with her vagina,");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("As #!00# is about to shake her ass,");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("As #!00# is about to hump back and forth on the Dark-Elf\'s crotch,");
                    break;
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" the Dark-Elf\'s hands start groping #!00#\'s breasts again. #!00# sighs.\n\n\"Someone is eager... I guess you are...\"\n\n#!00# is interrupted again as the Dark-Elf starts playing with #!00#\'s nipples. #!00# then notices that he is trying to hump her crotch with his. #!00# smiles, and clamps the Dark-Elf\'s penis while also humping back and forth. The Dark-Elf climaxes, and he ends up pinching #!00#\'s nipples. #!00# cums as well.\n\n#!00# and the Dark-Elf recover from their orgasms, but this time the Dark-Elf is still holding onto #!00#\'s breasts. #!00# glances down at the Dark-Elf\'s hands.\n\n\"Are you... going to keep holding on all day?\"\n\nThe Dark-Elf notices that #!00# is looking at his hands on her breasts, so he lets go of them. #!00# smiles at the Dark-Elf.\n\n\"Another round?.. good...\"\n\n");
                if (iRet != 0) return iRet;

                break;

            case 6:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Six !]\n");
                    if (iRet != 0) return iRet;
                }

                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks about gyrating her hips,");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks about sucking the Dark-Elf\'s penis with her pussy,");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks about to wiggling her ass on the Dark-Elf\'s crotch,");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# thinks about to humping back and forth,");
                    break;
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" but before she does, the Dark-Elf\'s hands playing with #!00#\'s nipples again. #!00# smiles at the Dark-Elf.\n\n\"You really like my boobies don\'cha...\"\n\n#!00# decides that she isn\'t going to lose to the Dark-Elf so she vigorously moves her butt in a circular motion then humps up and down on the Dark-Elf\'s crotch. Just as the Dark-Elf ejaculates in #!00#\'s pussy, he pinches her nipples, and #!00# climaxes as well.\n\nAfter both #!00# and the Dark-Elf recover from their orgasms, #!00# is about to start again, when she notices that the Dark-Elf is still fondling her breasts. #!00# glances down at his hands on her breasts, then looks at him.\n\nThe Dark-Elf ignores the fact that #!00# is looking at him and continues to fondle #!00#\'s tits.\n\n\"Very well...\"\n\n");
                if (iRet != 0) return iRet;

                break;

            default:
                if (gcDebugFlag != 0)
                {
                    iRet = mdialog_addToDialogWithSrchRep ("[Climax Seven !]\n");
                    if (iRet != 0) return iRet;
                }

                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# starts to lightly gyrate her hips,");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# firmly clamps the Dark-Elf\'s penis with her vagina,");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# lightly wiggles her butt,");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("Just as #!00# gently humps back and forth,");
                    break;
                }
                if (iRet != 0) return iRet;

                iRet = mdialog_addToDialogWithSrchRep (" the Dark-Elf shifts from fondling #!00#\'s breasts to playing with her nipples. #!00# thinks to herself \"He must be...\".\n");
                if (iRet != 0) return iRet;

                iRet = gamelogic07_scene1253 (0, cSubFlag + 1);
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
                iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly gyrates her hips.");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# gently clamps the Dark-Elf\'s cock.");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# softly wiggles her hips.");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# slides her hips back and forth.");
                break;

            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep (" However, she can feel that the Dark-Elf\'s penis is getting softer.\n\n#!00# thinks to herself ");
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 3;

            if (cRandom1 == 1)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"No... don\'t you go small on me now... be a MAN...\".\n\n");
            }
            else if (cRandom1 != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"I should DEFINITELY change the pace here...\".\n\n");
            }
            else
            {
                iRet = mdialog_addToDialogWithSrchRep ("\"As much as would like him to go to sleep, it would be boring...\".\n\n");
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
            gstruct_GameVars.iArousalLimit2++;

            switch (iSubSceneId)
            {
            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by twisting her butt while also lightly gripping the Dark-Elf\'s penis with her vagina.\n\n");
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by firmly clamping her vagina on the Dark-Elf\'s penis.\n\n");
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by lightly shaking her ass from side to side.\n\n");
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("#!00# starts by gently rocking back and forth on the Dark-Elf\'s crotch.\n\n");
                break;

            }
            if (iRet != 0) return iRet;

            iRet = mdialog_addToDialogWithSrchRep ("The concern on the face of the Dark-Elf starts to change to a concerned smile. \"Don\'t worry, honey... I am not a sadist... well... much of a sadist...\"\n\n");
            if (iRet != 0) return iRet;
        }
        else
        {
            if (gcDebugFlag != 0)
            {
                iRet = mdialog_addToDialogWithSrchRep ("[Result: normal]\n");
                if (iRet != 0) return iRet;
            }

            // I use arousal limit2 as a lock on the "dirty talk".
            gstruct_GameVars.iArousalLimit2++;

            switch (gstruct_GameVars.iClimaxCount1)
            {
            case 0:
                iRet = mdialog_addToDialogWithSrchRep ("While the Dark-Elf is just laying on the bed with a concerned expression on his face, ");

                cRandom2 = rand() % 12;
                break;

            case 1:
                iRet = mdialog_addToDialogWithSrchRep ("While the Dark-Elf is just laying on the bed, ");

                cRandom2 = rand() % 10;
                break;

            case 2:
                iRet = mdialog_addToDialogWithSrchRep ("While the Dark-Elf is just laying on the bed with his eyes closed, ");

                cRandom2 = rand() % 6;
                break;

            case 3:
                iRet = mdialog_addToDialogWithSrchRep ("While the Dark-Elf is just laying on the bed with a smile on his face, ");

                cRandom2 = rand() % 5;
                break;

            case 4:
                iRet = mdialog_addToDialogWithSrchRep ("While the Dark-Elf is breathing slowly, ");

                cRandom2 = rand() % 4;
                break;

            case 5:
                iRet = mdialog_addToDialogWithSrchRep ("While the Dark-Elf is breathing heavily, ");

                cRandom2 = rand() % 2;
                break;

            default:
                iRet = mdialog_addToDialogWithSrchRep ("While the Dark-Elf still fondling her breasts, ");

                cRandom2 = 0;
                break;

            }
            if (iRet != 0) return iRet;

            cRandom1 = rand() % 2;

            if (cRandom1 != 0)
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently gyrates her hips, while also holding the Dark-Elf\'s penis with her vagina.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# firmly clamps the Dark-Elf\'s penis with her vagina while also gently humping up and down.\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently shakes her butt, while also holding the Dark-Elf\'s penis with her vagina.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# gently rocks back and forth on the Dark-Elf\'s crotch, while maintaining her butt just above his crotch.\n\n");
                    break;

                }
            }
            else
            {
                switch (iSubSceneId)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# twists her butt with quick and light motions.\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# repeatedly clamps the Dark-Elf\'s penis with her vagina while gently .\n\n");
                    break;

                case 3:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly shakes her ass from side to side, while also gently bobbing up and down with the Dark-Elf\'s penis with her vagina.\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("#!00# lightly humps back and forth while teasing the Dark-Elf\'s penis with her abdominal muscles.\n\n");
                    break;

                }
            }
            if (iRet != 0) return iRet;

            //
            // I decided that the PC can have some "dirty talk" during this sex scene (as it is the ONLY scene where she does not have something in her mouth and the sexual partner is facing her).
            //
            // The problem is that I suck when it comes to dreaming up this stuff.
            //

            if ((cRandom2 == 0) && (gstruct_GameVars.iArousalLimit2 > 3))
            {
                switch (gstruct_GameVars.iClimaxCount2)
                {
                case 1:
                    iRet = mdialog_addToDialogWithSrchRep ("\"Boy... Show me that you can be a Man...\"\n\n");
                    break;

                case 2:
                    iRet = mdialog_addToDialogWithSrchRep ("\"That\'s it... Fuck my pussy...\"\n\n");
                    break;

                default:
                    iRet = mdialog_addToDialogWithSrchRep ("\"Give it to me baby... Give it to me...\"\n\n");
                    break;

                }
                if (iRet != 0) return iRet;

                gstruct_GameVars.iClimaxCount2++;

                if (gstruct_GameVars.iClimaxCount2 > 2)
                    gstruct_GameVars.iClimaxCount2 = 0;

                gstruct_GameVars.iArousalLimit2 = 0;
            }
        }
    }
    else
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("{1252 Ending 005 Sex Scene Middle.setup}\n\n");
            if (iRet != 0) return iRet;
        }

        // initialize.
        gamelogiccommon_initSexScene1 (24, 14, 240);

        // these are things that I override.
        cResult = 0;
        gstruct_GameVars.cFSexSceneStart = 1;

        gstruct_GameVars.iClimaxCount2 = rand() % 3;
        gstruct_GameVars.iArousalLimit2 = 0;
    }

    if ((cResult != -1) || (iSubSceneId != 1))
    {
        iRet = mutils_addToCommandList ("Twist ass", 1252, 1);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 2))
    {
        iRet = mutils_addToCommandList ("Flex abdominal muscles", 1252, 2);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 3))
    {
        iRet = mutils_addToCommandList ("Shake side-to-side", 1252, 3);
        if (iRet != 0) return iRet;
    }

    if ((cResult != -1) || (iSubSceneId != 4))
    {
        iRet = mutils_addToCommandList ("Hump back-and-forth", 1252, 4);
        if (iRet != 0) return iRet;
    }

    return 0;
}

//
// This is a (forced) sex scene exit point.
//
int gamelogic07_scene1253 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    gamelogiccommon_resetSexVars();

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1253 Ending 005 Sex Scene Exit 1}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Then the Dark-Elf starts to lightly pinch #!00#\'s nipples, so she pistons on the Dark-Elf\'s cock. The Dark-Elf ejaculates inside of #!00#\'s pussy, while also starting to pinch #!00#\'s nipples more. #!00# climaxes shortly afterwards.\n\nFinally, the Dark-Elf let\'s go of #!00#\'s breasts.\n\n#!00# is about to start again, when she notices that the Dark-Elf isn\'t as lively as he was before. Then she notices that the Elf is trying to say something to her, while breathing heavily.\n\n\"Maybe we should have a little break...\"\n\nAs #!00# lifts herself off of the Dark-Elf, he does not even try to move.\n\n\"Poor thing... here... let me give you a nice cuddle...\"\n\n#!00# then lays next to the Dark-Elf and starts tongue kissing him again. This time the Dark-Elf does not even bother trying to fight back and goes along with it. After a minute #!00# breaks off the kiss.\n\n\"There... that wasn\'t so bad... was it\?\"\n\n#!00# then turns the Dark-Elf\'s head and starts to stick her tongue inside his ear, while also playing with his left nipple. The Dark-Elf just lays there while #!00# increases his arousal again.\n\n\n[About 30 minutes later...]\n\n#!00# is sitting on the edge of the bed, near to the door of the cell. The cell door is still wide open. Her eyes are closed as she listens to the faint sound of the wind in the distance.\n\nThe sound of the wind is slightly drowned out by the screeching of metal scraping on metal, then the sound of echoing footsteps. The echoing of footsteps are not the same as before, as it appears to be only one pair, not like two pairs in the past. Someone is coming, and it must be HIM.\n\n#!00# opens her eyes and looks at the right side of the cell...\n\nThe Light-Elf steps into view and briefly stops and looks around through the bars. The Light-Elf glances at #!00# several times, then he then continues walking towards the door of the cell. The Light-Elf reaches the door of the cell, stops walking again and takes another look around the cell. #!00# thinks to herself \"What... were you expecting... someone else\?\"\n\nThe Light-Elf then stares at #!00#. #!00# then thinks to herself \"I might as well make the first move here.\"\n\n#!00# seductively sucks on her right index finger and smiles at the Light-Elf. The Light-Elf stands there, with his usual poker-face expression. #!00# knows that she does not have to glance at the crotch of the Light-Elf\'s robes to know that he is aroused.\n\nThe Light-Elf steps forward, carefully sizing up #!00#\'s stance. #!00#\'s nipples and clitoris are still erect, while her pussy is drooling. The Light-Elf crouches down and starts playing with #!00#\'s left breast, then her right breast as well. He then works his way up to #!00#\'s nipples.\n\n#!00# feels as if she is just putty in his hands and starts letting out light moans. #!00# thinks to herself \"Oooh... F-Fuuuccckkk...\"\n\n#!00# lets out a high-pitched squeal, but tries to hold back the impending orgasm with everything that she has.\n\nThen... The Light-Elf stops... there is something out of place... he can hear it.\n\n#!00# collapses back on the bed, breathing heavily. When #!00# stopped squealing... it is more obvious now...\n\n... It\'s the sound of chanting. The Light-Elf looks around the cell... from where\?..\n\nThen... the Light-Elf sees... it... him... the Dark-Elf is squatting behind the large chair in the corner of the cell.\n\nThe Dark-Elf stands up, while still casting his enchantment. The Light-Elf realizes that the Dark-Elf isn\'t concentrating on #!00#... no... The Dark-Elf is concentrating on the Light-Elf...\n\nThe Light-Elf\'s face breaks into a snarl... How DARE he... but then the Light-Elf realizes that while he has been distracted with #!00#, then pissed off that he is the target, he has let the Dark-Elf continue his enchantment.\n\nThe Light-Elf starts chanting himself... but... it is too late.\n\nThe Light-Elf\'s pupils dilate as his vision starts to go dark. Due to the reduction of his senses, the Light-Elf is unable to maintain his balance. Soon, the Light-Elf won\'t be able to control his body and he starts to fall over.\n\n#!00# catches the Light-Elf as he is about to slam into the bed.\n\n#!00# sets the Light-Elf down on the rubber sheets and looks at the Dark-Elf. #!00# thinks to herself \"I can\'t distract him yet\".\n\n#!00# then proceeds to tear the robes off of the Light-Elf. She then stands up, holding onto the Light-Elf\'s robes while leaving the Light-Elf laying on the bed. #!00# notices that the Light-Elf\'s penis is erect and twitching, but puts aside the thought that right now the Light-Elf is probably being raped by a Tentacle Monster inside the Dark-Elf\'s Dream-Vision enchantment.\n\n#!00# reaches into the right pocket of the robes, finds the key attached to the string and tears the key off. #!00# looks at the robes and thinks to herself \"Better bring this with me... no idea what other shit he has hidden inside of this\".\n\n#!00# then walks around to the front-right corner of the bed, lifts it up and throws the key underneath. #!00# then let\'s go of the bed, lets it hit the floor and thinks to herself \"hopefully Mister Light-small-penis will think to look under there\".\n\n#!00# then walks around the bed and over to the large chair and pulls it away from the corner, allowing the Dark-Elf to walk out from behind it.\n\n\"Time to go, Honey...\"\n\nThe Dark-Elf doesn\'t even look at #!00#, carefully crab-walks out from the corner and starts walking out of the cell, while constantly chanting and maintaining his focus on the Light-Elf. #!00# thinks to herself \"Shit... it isn\'t easy for him to do this... is it\?\"\n\n#!00# follows the Dark-Elf over to the door of the cell, she walks through and guides him out. As he is walking backwards, the Dark-Elf, then starts walking backwards up the hallway, while still maintaining his focus on the Light-Elf. Once clear of the doorway, #!00# quietly closes the door and hears the latch-bolt side into place.\n\n#!00# then walks along the hallway and passes the Dark-Elf. As she reaches the right edge of the cell, #!00# notices that there is another cell that is to the right of hers, but that isn\'t important right now.\n\n#!00# turns around and watches as the Dark-Elf slowly backs up the hallway and he stops walking backwards when his line-of-sight is about to be obscured by the edge of the cell.\n\nThe Dark-Elf sighs and stops chanting, turns, grabs #!00#\'s left hand with his right hand and starts running along the hallway. #!00# runs with him. #!00# thinks to herself \"I might as well tag along and see what happens.\"\n\n");
    if (iRet != 0) return iRet;

    iRet = mdialog_addToDialogWithSrchRep ("\n[Just over a year later...]\n\n#!00# is standing in a lecture hall...\n\nHowever, #!00# is the only orc present. Everyone else are elves, including the instructor that #!00# is standing next to.\n\nA young male Wood-Elf walks up to #!00#. He is rather confident when he opens his mouth, looks at #!00#, and speaks to her in Orc \"My dear, humbly surrender and worship my feet...\"\n\n#!00# sighs... she is used to this sort of screwup. The mistakes are to be expected considering what these students have been learning so far.\n\n#!00# responds \"There are so many things wrong with that... for a start... isn\'t this supposed to be an opening line for negotiation\?.\"\n\nThe elven instructor, turns to address the class and repeats what #!00# has said, in Elven.\n\nThe young male Wood-Elf stammers, in Elven, \"<I thought... it was>...\". There is a brief hubbub in the lecture hall as the elves talk amongst themselves, only briefly... then the Lecturer holds up his hand... as a sign for everyone to be quiet. The young male Wood-Elf scurries back to his seat.\n\nThe instructor starts talking to the class again, in Elven. #!00# has trouble keeping up with what he is saying, only understanding one of five of the statements that he is using. The rest she can fill in the gaps over. The entire class are being chewed out. It helps that he repeats what the student said in both Orc and Elven. #!00# is learning from their mistakes.\n\nThe instructor turns to #!00# and addresses her \"<It should be:> Can we negotiate a temporary halt to hostilities\?\"\n\n#!00# responds, standing in a posture as if she is some idiot #!01# commander \"I will consider it.\"\n\nThe instructor turns his attention back to the students and continues. This time it is mostly Elven, with a little bit of Orc again. The instructor then repeats #!00#\'s statement back to her \"I will... consider... it...\".\n\n#!00# nods her head. That was almost perfect Orc, with no hint of any weird dialect or quirky tone. It should be, as the instructor has dedicated the last 15 years of his life trying to study the spoken Orc language better.\n\nThe instructor turns his attention to the class, only briefly, then back to #!00# \"<negative response... multiple forms... please>\".\n\nAgain, #!00# takes the posture of an #!01# commander. \"No. <or> My honor will not allow it. <or>\", then #!00# changes her posture of a normal #!01# soldier, makes an obscene gesture with her right hand and adds \"Fuck you, Asshole.\"\n\nThe instructor does a double take. The students are speechless, as the last line went completely over their heads. Still, they were intrigued by the new combination.\n\nThe instructor resumes addressing the class.\n\n\n[20 minutes later...]\n\nThe students of the class are filing out of the lecture theater, leaving just the instructor and his assistant, #!00#, to have an after class discussion.\n\nThe instructor looks at #!00# and says \"Fuck you... Asshole... <really\?>... and using THAT gesture...\"\n\n#!00# responds \"<Yes>... An orc commander, on the verge of an overwhelming loss, will be neither courteous or humble... to an enemy.\"\n\nThe instructor takes his time to think about what #!00# said. It is far easier for her to say complex things in Orc and allow him time to translate then to mishmash the sentences.\n\nFinally, the instructor nods in agreement \"<Yes>... Yes, they would not...\"\n\n#!00# has considerable respect for the instructor, who has fought on the battlefield against an orc battalion a long time ago, so he has some real world experiences. The instructor found out the hard-way that the elven version of Orc was rubbing orc soldiers the wrong way. He identified the cause of the colossal fuck-up that day was due to his inadequate Orc translation skills, despite being the top of the translation class where he learned to speak Orc. The instructor vowed to resolve the deficiency, so obtaining assistance from #!00#, for him, was important. #!00# was the first actual orc that he had encountered at the academy, who wasn\'t a mind-fucked sex slave. She is a suitable assistant for his elven-class to produce top-class Orc translators. #!00# had no problems going along with it, having heard rumors about how silly the elves were when talking Orc and experiencing the elven atrocity against the Orc language in person.\n\n#!00# continues \"You should make sure that your students brush up on their swearing, it might be useful when circumstances are... hmm... <not as favorable>.\"\n\nThe instructor thinks carefully about #!00#\'s last statement. The fact that she switched to Elven for the final part drove the impact of the statement home. From an elven perspective... \"<not as favorable>\" has the same tone as \'the end of the world\'.\n\n#!00# adds one last thing \"... especially when not dealing with a <commander>...\"\n\nThe instructor nods his head, remembering a close-call from a long time ago. He is in total agreement with #!00#\'s stance. He responds to #!00# \"Yes... <good point>, shall we depart\?...\"\n\n#!00# smiles, it is rare for the instructor to screw-up, but then he has had a lot on his mind in the past couple of minutes. She corrects him \"If you meant... shall we go\?... <definitely>...\"\n\nThe instructor smiles at #!00# \"Sorry... old habit...\"\n\n#!00# quips \"Whoever taught you guys <Orc> in the first place... must have been an <idiot>...\"\n\nThe instructor responds \"Sorry... but...\"\n\n#!00# interjects, as she already knows what he is going to say \"<I know... classified information... I know...>\". The pair walk out of the lecture theater, having run into THE taboo subject... again. Not that the instructor knew enough to answer #!00#\'s question anyway.\n\nUnknown to #!00#, is that the previous Orc language assistant was an Orc Prince, who had fled #!02# a long time ago. It was a touchy subject for the elves because when they gave that Orc Prince sanctuary, it sparked a short all out war between the Elven Territories and #!02#. What the elves eventually discovered is that back in #!02#, the Orc Prince was officially proclaimed dead and that the war was being continued as revenge for his reported death. The elves wanted to keep the details of the Orc Prince being still alive in the Elven Territories a secret. To reveal that they had the Orc Prince to #!02# would have made the situation far worse. To this day, there is hardly anyone in the Elven Territories with knowledge that they had once harbored an Orc Prince from #!02#. The instructor himself does not know that fact, being kept in the dark by the only soul with that knowledge in the entire elven military academy, the academy head-instructor herself.\n\nAs repayment for sanctuary, the Orc Prince became a language instructor, but decided to misdirect the elves in learning the Orc language, as his own personal as payback against #!02#. This resulted in the Orc language translators graduating from the military academy with a rather strange and grating grasp of the language. Long after the Orc Prince had died, the misdirection was followed, resulting in a lot of mishaps in the field whenever the elves and orcs interacted.\n\nThe reason that the elven military themselves could not easily correct the situation is that the Orc Prince destroyed all of the previous Orc language learning material that the elves had, in a large bonfire on the academy lawn, shortly after he took up his position. It didn\'t help that all of the previous competent Orc language translators died in the battles that were triggered by the Orc Prince\'s disappearance from #!02#.\n\nThe elven military had previously tried kidnapping the occasional orc or two in order to help resolve the situation, but most of the captured orcs had a nasty habit of killing themselves rather quickly and none of the captured orcs survived longer than two weeks.\n\n#!00# is different, as she was captured to become a sex slave and had initially been smuggled deep into the Elven Territories. The Dark-Elf, which #!00# has come to know as \'#!03#\' had taken #!00# straight to the military academy, where they treated her arrival much differently than at a border interrogation cell.\n\n#!03# isn\'t the Dark-Elf\'s real name, it is just that she could not be bothered learning his real elven name and \'#!03#\' is a close fit. Unfortunately for the Dark-Elf, his new nickname stuck and now even the elves at the academy call him that.\n\n\n[2 hours later...]\n\n#!00# and #!03#, have returned to their small room, which is inside the staff dorm of the elven military academy.\n\nThe room is small, with just enough space for 2 single beds and a small table. So the pair make do with the space that they do have.\n\nBoth of them have jobs at the military academy. #!00# accepted her position as an assistant to the Orc language studies instructor and became instrumental to resolving the issues with the academy\'s conversational Orc language curriculum.\n\n#!00# knew that she could not return to #!02# without being ostracized as a traitor and condemned to being permanently locked up, if not death, for a deserting her post. Even though she did not voluntarily desert her post, #!02# laws are rather explicit. #!00# decided that she might as well resolve the issue of elven translators talking like complete and utter assholes whenever they attempt to speak Orc. #!00# managed to salvage a little bit of her pride knowing that she was doing something for #!02#, even though she was, and still is, betraying her homeland.\n\n#!03#, now has a job in the academy kitchen. It is a condition of #!00# remaining at the academy that he also be with her. He is now a chef\'s apprentice, as his Dream-Vision magic skills are not enough to even earn him graduation, let alone a staff position to actually teach them to anyone else.\n\n#!00# and #!03# disrobe, as this is now how they end the day. #!03# is already erect and his penis is already leaking pre-cum.\n\n#!03#\'s penis has been enhanced. He had no say in the procedure being performed upon him by the academy mages. It was one of #!00#\'s conditions of remaining at the academy and it was a painful procedure for him at the time. The alternative was a stiff sentence for slave trafficking. However, after enduring the procedure, #!03# lamented that he should have just been arrested and thrown into a damp and dark cell for the rest of his life. #!03#\'s penis, now when erect, is now the same size as an average erect Male orc penis. #!03#\'s nipples have also been pierced, being a recent modification and not a condition of them staying there.\n\nUnder her academy robes, #!00# is wearing a dark-blue rubber open cup basque, with suspenders, attached to midnight-blue latex thigh-high stockings. #!00# does not mind wearing rubber and rubber latex, as a service to #!03#. #!00# and #!03# had gone through the effort of finding latex sheets to put on the two beds.\n\n#!00# has learned a number of Elven words from #!03# himself. As he walks over to #!00# and nuzzles her breasts, he is about to use her favorite Elven expression.\n\n\n#!03# utters \"<Mistress...>\"\n\n#!00# responds back \"<Good... now... we fuck...>\" \n\n<Ending 5: Academy Trainer>\n\n");
    if (iRet != 0) return iRet;

#ifdef INTERFACE_CURSES
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    return iRet;
#else
    return 0;
#endif // INTERFACE_CURSES
}

//
// "Let him watch" Path Selection function (Ending 006).
//
int gamelogic07_scene1261 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1261 >Let him watch}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Let him watch\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# decides to try and get the Dark-Elf more interested by just letting him watch, so she shoves four of her right fingers into her pussy again and starts to use her right thumb on her clitoris.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFDarkElfExhaust1 == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFDarkElfExhaust1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Dark-Elf bends forward a little bit, thinks about something, then pulls back. #!00# keeps fingering her pussy, however the Dark-Elf is worried and starts to back away.\n\n\"What\?..\"\n\n#!00# stops playing with herself, as the Dark-Elf starts to run to the door. #!00# thinks to herself... \"Okay... what has startled him\?.\"\n\n#!00# watches as the Dark-Elf stumbles through the door and closes it. #!00# finally realizes what the Dark-Elf is more concerned about when he worryingly looks along the hall and thinks to herself \"He must be concerned about the other Elf... the Light-one...\".\n\n#!00# looks to the right side of the cell, but cannot see anyone there. Then her attention turns back to the Dark-Elf as he starts chanting again.\n\n\"Not this shit again...\"\n\nThe Dark-Elf is on the other side of the door and #!00# cannot get to him. #!00# starts to notice her vision fade as the Dream-Vision starts to kick in.\n\n#!00# flops back onto the bed and thinks to herself... \"Well... fuck... where to from here\?\"\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFDarkElfExhaust1 is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("Suddenly, the Dark-Elf reaches forward and lightly pinches both of #!00#\'s nipples at the same time.\n\n#!00# orgasms rather hard and arches her back. When it subsides, she collapses back onto the bed, however, the Dark-Elf is relentless, he keeps playing with #!00#\'s nipples.\n\n\"Oh shit...\"\n\n#!00# does think about punching the Dark-Elf, but the moment that she starts to tries to move, he pinches her nipples again.\n\n#!00# climaxes a second time and hazily thinks to herself \"For... much longer...\".\n\n\n[10 minutes later...]\n\n#!00# lost count of how many times that the Dark-Elf made her orgasm. What she does know is she is currently sprawled out on the edge bed. #!00# is panting and unable to move right now.\n\nThe Dark-Elf stands up and grins at his accomplishment, then proceeds to take his robes off. #!00# thinks to herself \"What are you up to now\?\"\n\nThe Dark-Elf then positions his penis at the entrance to #!00#\'s pussy and rams it in. The problem is that despite the constant stream of orgasms that she has had in the past 10 minutes, #!00# wasn\'t able to get the dildo out of her pussy. So the Dark-Elf just rammed the dildo in deeper as well.\n\n#!00# almost climaxes immediately, as she does her best to hold it back. However, #!00#\'s attempts to hold back the impending orgasm is in vain when the Dark-Elf resumes fondling #!00#\'s breasts.\n\nOnce #!00#\'s orgasm has subsided, the Dark-Elf starts thrusting his penis in and out of #!00#\'s pussy, pushing her close to a climax again. It isn\'t being made any easier that every time that the Dark-Elf thrusts in, he is also hitting #!00#\'s clitoris.\n\nThe Dark-Elf continues to fuck #!00# at his own pace. When the Dark-Elf climaxes, he digs his fingers into #!00#\'s swollen breasts, which sets off her orgasm at the same time.\n\n\n[Another 10 minutes later...]\n\nThe Dark-Elf finishes cuming inside #!00# for the seventh time. #!00# has lost count of the number of climaxes that she has had, as she started having light and multiple orgasms throughout the encounter.\n\nHowever, the seventh, is one too many for the Dark-Elf and he collapses on top of #!00#.\n\nFor a couple of minutes, #!00# just stayed still, acting as a pillow for the Dark-Elf. After the first minute, his flaccid penis slid out of #!00#, followed by the dildo.\n\nDuring that time, #!00# considers a few things and thinks to herself \"Despite the fact that this boy was using a penis extension and he only lasted 7 rounds, that was the best sex that I have had with a dick... ever.\"\n\n#!00# looks at the Dark-Elf, who is sleeping on top of her.\n\n\"If you were an orc... you would be my fucking husband already...\"\n\n#!00# rests her head back down and briefly considers the fact that if the Dark-Elf was an orc, then some stuck up rich orc bitch would have him already.\n\n\"Life is just not fair at times...\"\n\n#!00# looks at the Dark-Elf, kisses him on the forehead, then carefully rolls the sleeping Dark-Elf off or her to the left. #!00# manages to sit up and looks around the cell. There is no sign of the Light-Elf. Other than the sound of the Dark-Elf breathing, the only other sound is the wind in the distance.\n\n#!00# just sits there, watching over the Dark-Elf and thinks to herself \"You are STILL inexperienced... so I wonder what sort of beast are you going to be when you get better...\"\n\n#!00# continues to sit there, quietly and watches the Dark-Elf as he rests.\n\nAfter a minute, while #!00# starts to wonder what will happen next, she then hears the faint sound of metal scraping on metal. #!00# then listens carefully, as she can hear the echoing of footsteps approaching. However, the echo is different. It sounds as if only one person is walking along the hallway.\n\n#!00# looks down at the sleeping Dark-Elf and thinks to herself \"I wonder what your partner is going to do... when he sees you here like this\?\".\n\n#!00# then concentrates on the front-right corner of the cell and watches as the Light-Elf comes into view, the Light-Elf stops and looks around the cell. He notices that the Dark-Elf is laying almost motionless on the bed next to #!00# and #!00# is just sitting there.\n\nA scowl appears on the face of the Light-Elf and #!00# thinks to herself \"Anger... should have seen that coming\".\n\nThe Light-Elf starts chanting and #!00# thinks to herself \"I should have saw this coming as well...\"\n\n#!00# considers for a moment that she could try and make this easier and move away from the Dark-Elf, but comes to the conclusion that she can barely move as it is anyway.\n\n#!00# sits there, trying to ready herself for the pain when it hits. Initially she can feel the tingling, then it as if there is pain all over her body... except... while the pain is considerable, #!00# isn\'t passing out from it.\n\n#!00# is forced to open her mouth and cry out. She can\'t really speak, or really think... the pain is everywhere... it isn\'t numbing, it is as if she is being torn apart from the inside and thousands of razorblades are digging into her.\n\n#!00# then screams at the top of her lungs. And then... someone is yelling nearby... to the left... the pain suddenly vanishes. #!00# collapses on the bed.\n\n#!00# takes a couple of deep breaths as the pain quickly subsides, she looks around to see that the Dark-Elf is up, awake, and yelling at the Light-Elf.\n\nThe Light-Elf, obviously distracted from concentrating on #!00#, is yelling back at the Dark-Elf. #!00# cannot understand a word of Elven, but it is clear that the two are rather pissed at each other.\n\n#!00# looks up at the Dark-Elf, who has stopped yelling. He makes a motion to #!00#, to get away, then crawls over to the left edge of the bed himself. #!00# glances over at the Light-Elf, is walking along the hallway outside of the cell. The anger on his face, and in his stride, is rather obvious.\n\n#!00# decides that the best course of action is to get away from the Dark-Elf... for now. So she rolls to the right, repeatedly, off the edge of the bed.\n\n#!00# stands up as the Light-Elf storms into the cell. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("She wonders over to the table.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("She wonders over to collection of dildos.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf walks up to the Dark-Elf, while yelling something in Elven and pushes the Dark-Elf. In response the Dark-Elf pushes the Light-Elf back and screams at the Light-Elf. The pushing, shoving, yelling and screaming continues.\n\n#!00# thinks to herself \"Whenever orcs have a huge disagreement, it is always settled with a knives, swords and a one-on-one deathmatch. Quick kill and get it over with... none of this pointless yelling and screaming crap...\"\n\nThe Light-Elf then pushes the Dark-Elf onto the bed and quickly steps back. Then, both #!00# and the Dark-Elf are surprised when the Light-Elf starts casting an enchantment. #!00# thinks to herself \"Wait... is he... going to do that\?\"\n\nThe Dark-Elf looks at the Light-Elf and says something to the Light-Elf, but the Light-Elf just ignores the Dark-Elf and continues chanting. #!00# thinks to herself \"What the FUCK\?!.. this isn\'t fair... The books weren\'t kidding when they said that elves have no honor and fight dirty.\"\n\nThe Dark-Elf himself starts chanting, but clearly the Light-Elf has a head start. The Dark-Elf then screams out in pain and collapses on the bed. Of course, #!00# is less than impressed by the underhanded move.\n\n\"That was FUCKING dishonorable...\"\n\nThe Light-Elf then turns his attention to #!00# and starts casting a new enchantment. #!00# realizes that she is going to have little chance at reaching him in time, then remembers that she is standing near a large number of throwing weapons.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# picks up two of the largest dildos off the ground and hurls them at the Light-Elf. Both of them hit the Light-Elf, one in the groin and the other in the chest. The Light-Elf stops chanting, breathes in and continues casting again.\n\n\"Well... shit...\"\n\nIn desperation, #!00# starts picking up and hurling as many of the dildos as she can get her hands on at the Light-Elf. Only half of them actually hit the Light-Elf and his chanting is interrupted three more times.\n\nHowever, #!00# finds that she is out of impromptu ammunition. While she has been trying to walk towards him and throw dildos, #!00# hasn\'t covered that much distance. #!00# does the only thing she can do and rushes him with what is left of her speed and stamina.\n\nUnfortunately the pain from the Light-Elf\'s spell is too much for #!00# and she passes out just as she is about to land a punch on the Light-Elf\'s chest.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# picks up two of the largest dildos off the table and hurls them at the Light-Elf. One of them misses, but the other hits him in the lower leg. Unfortunately, it wasn\'t enough to break his concentration. #!00# thinks to herself \"I need something bigger\", then glances at the table itself.\n\n\"That will do.\"\n\n#!00# picks up the entire table, causing the dildos to fly off it and onto the floor. The Light-Elf is briefly distracted by the fact that many of the dildos that were on the table were sent flying towards the back of the cell and that #!00# is now standing there while holding table.\n\nThe Light-Elf resumes chanting. #!00# sizes up the weight of the table, realizing that despite the number of times that she has nailed rowdy orcs using whatever furniture she could get her hands on, during bar-room brawls over the years, she only gets one shot at this. It helps that the Light-Elf isn\'t moving.\n\n#!00# hurls the table. It wasn\'t as good throw as she expected, as she was planning on the underside of the table slamming into his head. Instead, two of the table legs hit him hard in the chest.\n\nThe hit, is enough to distract the Light-Elf, as he doubles over in pain. The only thought on #!00#\'s mind is that she needs to get as close to the Light-Elf as possible and immediately.\n\nIt isn\'t easy for #!00# to run, let alone walk, but she tries to move as quickly as she can. Meanwhile, the Light-Elf isn\'t focused on her, he is focusing more on his own injuries. #!00# can see that a stain is starting to spread on his lightly colored robes. It would appear that #!00# has actually injured him.\n\nAs #!00# approaches the Light-Elf, he starts casting an enchantment again. However, the Light-Elf isn\'t looking at her, #!00# decides that she has to stop him and now.\n\n#!00# increases pace as much as she can, the Light-Elf is still chanting and looks up at #!00#...\n\n... #!00#\'s fist slams into the Light-Elf\'s face and the cell is filled with the sound elven bones breaking.\n\n#!00# does not stop there, as she continues the Light-Elf in the head another three times in quick succession. Her reflex action is as how she was trained in the #!01#, because when you are bare handed, a single hit will not be enough to take down an opponent.\n\nNot that #!00# needed to punch the Light-Elf another three times. He was dead already from the first blow.\n\n#!00# picks up the Light-Elf\'s battered body, looks it over, and comes to the conclusion that he isn\'t going to harm anyone anytime soon. She lets go of the Light-Elf\'s lifeless body and lets it fall on the floor.\n\n#!00# then crouches down and crawls over to the Dark-Elf. #!00# is resolute that she will watch over the Dark-Elf till he wakes up.\n\n\n[Two years later...]\n\nIt is a tense situation... however... these sort of encounters happen often.\n\nThree elven underworld figures are having a meeting, a two on one negotiation. The two elven crime-lords, despite the fact that they brought a total of 10 bodyguards, are sweating.\n\nThe up-and-coming crime-lord, who they are negotiating with, known only as \'the dark-one\' brought along his bodyguard... just the one... it is \'her\'.\n\n\'her glare\' is said to cut through flesh, bone and the strongest of steel. It is no different today, if only \'her\' wasn\'t here... this negotiation would be so much... easier. Unfortunately, \'the dark-one\', is never without \'her\'.\n\nIf \'the dark-one\', which \'her\' addresses as either \'master\' or \'sir\', ordered it, it will be done by \'her\'. There are rumors that \'the dark-one\' once had \'her\' kill one of his old business partners and it was with bare hands. In the elven underworld, you gain respect if you \'off\' a sour business associate with a \'hot chick\'. Despite \'her\' being and orc, she is \'a rather bangable hot chick\'.\n\n#!00# stands there, towering over her master. Despite the fact that she is wearing a black latex catsuit and medium-purple rubber plates over the top of black latex, you cannot miss her. #!00# does not really need the extra plates, as they are only there to enhance her visibility. The catsuit does not restrict her movement at all. The plates serve other purposes, to hide the fact that she is aroused and to also help in maintaining her arousal. You would not know by looking at her face that she is in a constant state of bliss.\n\n#!00# is also wearing jewelery. The stones are slightly more than just precious, because some are infused with magic and arranged in formations to act as as barriers and wards. With her brawn and magical protection, #!00# is a formidable foe.\n\n#!00# understands quite a bit of Elven now, as she was taught by the Dark-Elf, who is now known in the elven underworld as \'the dark-one\'. She only listens to her master. If the Dark-Elf ordered her to, she would suck his penis in public. It is a tactic that is used to reduce the fear of people that he meets with.\n\nThe meeting... has ended, as the deal is done. \'the dark-one\' decides that he won\'t treat his new associates to a free-show of \'her\' sucking his cock, so he bids the other crime-lords farewell and walks out with \'her\' shadowing his every movement. With both of them gone the tension is greatly reduced.\n\nThe pair of them return home, where the house guards take over. Then, \'the dark-one\' will fuck \'her\' senseless, as they always have.\n\nThe Dark-Elf\'s stamina is a lot better now, but #!00# is careful to back-off without wearing him out too much.\n\n\n#!00# does not mind this line of work... actually... she likes it. #!00# likes scaring the shit out of a bunch of creepy elves...\n\n<Ending 6: Underworld Guard>\n\n");
    if (iRet != 0) return iRet;

#ifdef INTERFACE_CURSES
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    return iRet;
#else
    return 0;
#endif // INTERFACE_CURSES
}

//
// This is the lead in to Endings 007 and 008.
//
int gamelogic07_scene1270 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1270 Ending 007-008 lead in}\n\n");
        if (iRet != 0) return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("\n[Some time Later...]\n\n#!00# wakes up. Her nipples and clitoris are on fire again, which sort of distracts her from the minor throbbing in her head.\n\n\"This shit is starting to get REALLY old...\"\n\n#!00# opens her eyes. light-gray stone ceiling, light-gray stone walls, white-smoke luminescent orbs illuminating the cell. #!00# moves her arm and hears a minor squelch from the latex rubber sheets on the bed.\n\n#!00# sighs.\n\n#!00# props herself up on her elbows and looks around the cell. The door, appears to be closed and locked. #!00# can see that the latch-bolt is in place. The tray-table with the meal, is gone. ");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The table with the dildos on it, is still there.");
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

        iRet = mdialog_addToDialogWithSrchRep ("The collection of dildos over by the wall, is still there.");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep (" The large chair in the corner, is still there. Nothing else out of place.\n\n#!00# notices something and feels her abdomen.\n\n\"Feels... like... oh those fucking elven perverts...\"\n\n#!00# flops back down on the bed, as she knows that she has a dildo shoved up her anus and another in her pussy again. #!00# does not need to check to know that these dildos are rather small.\n\n#!00# closes her eyes and just lays there on the bed, listening to the sound of the wind in the distance. #!00# decides to wait for a while and see what happens.\n\n\n[5 minutes Later...]\n\n#!00# can hear the faint screeching of metal scraping on metal in the distance. Which is followed by the echoing of footsteps in the hallway. However, This time, there is something odd about the echoing footsteps. It is almost as if it is only one pair of feet\?!\n\n#!00# opens her eyes, props herself up on her elbows and looks over at the front-right corner of the cell. Eventually, the Light-Elf walks into view. The moment he stops walking, to look around the cell, the echoing of footsteps also stops. #!00# thinks to herself \"Just the Light-one\?!..\".\n\nThe Light-Elf glances at #!00# a couple of times, as well as elsewhere in the cell, then resumes walking towards the door.\n\n#!00# sits up on the edge of the bed, with the heels of her feet still resting on the floor, precisely where the Light-Elf had left her after feeding her the meal. The meal with the glass of water, and the substance that put her to sleep. #!00#\'s legs are still apart, because her pussy is so swollen and her clitoris is so sensitive that she has very little option but to sit like that right now.\n\n#!00# watches the Light-Elf as he walks up to the cell door, takes the key from his right pocket, unlocks the door and puts away the key. The Light-Elf then opens the door completely and steps into the cell. #!00# decides to just sit there and observe what the Light-Elf is up to.\n\n\"Well... what do you want\?\"\n\nThe Light-Elf just stands there, wearing his poker-face expression. However, his controlled facial expression does nothing to hide the small bulge in the robes near his crotch. #!00# thinks to herself \"Should have guessed...\"\n\nThen, the Light-Elf reaches into his left pocket and pulls out a small paper satchel. Initially, #!00# thinks that it is a drug of some kind, then she watches as the Light-Elf tears it open. #!00# thinks to herself \"What... the fuck... are THOSE\?..\"\n\nThe Light-Elf is standing there, holding what appears to be three piercing rings. It takes #!00# a little while to workout what they are. Some orc warriors are into body piercings, but #!00# isn\'t.\n\n\"Erm... why 3 of them\?..\"\n\nThe Light-Elf does not understand what #!00# said, but makes a guess that she is asking what they are for. The Light-Elf is aware that while he could tell #!00#, it will be in Elven and it is very unlikely that #!00# will not understand a single word he says. The Light-Elf decides to point out what they are for, with his right index finger.\n\nFirst, he points at #!00#...\n\n\"Okay... me...\"\n\nThe Light-Elf then in turn points at each of his nipples then at his crotch, then at #!00# again.\n\n#!00# sighs... \"you have to be fucking kidding me.\"\n\nThe Light-Elf briefly smiles, then resumes his poker-face expression. However, #!00# is of the opinion that the Light-Elf\'s cock twitched underneath those robes of his. #!00# thinks to herself \"This elven idiot REALLY seems to have a thing for pain\".\n\n");
    if (iRet != 0) return iRet;

    iRet = mutils_addToCommandList ("Trick the little shit and pierce him instead", 1271, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Allow him to stick the piercings in", 1281, 0);
    if (iRet != 0) return iRet;

    return 0;
}

//
// "Trick the little shit and pierce him instead" Path Selection function (Ending 007).
//
int gamelogic07_scene1271 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1271 >Trick the little shit and pierce him instead}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Trick the little shit and pierce him instead\n\n");
        if (iRet != 0) return iRet;
    }

    if ((gstruct_GameVars.cFPainMagic1 == 0) && (gstruct_GameVars.cFLightElfHumilate == 1) && (gstruct_GameVars.cFPullOutDildos2 == 1))
    {
        gstruct_GameVars.cFEnding7Rollup = 1;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[set cFEnding7Rollup]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        gstruct_GameVars.cFEnding7Rollup = 0;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[clear cFEnding7Rollup]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# glances at the face of the Light-Elf, then at the piercings he is holding, then back at his face again. #!00# smiles and thinks to herself \"I have an idea\".\n\n\"Hmm... interesting...\"\n\nThe eyebrows on the Light-Elf\'s face, briefly flinch. In #!00#\'s peripheral vision, she notices that the bulge in his robes at his crotch twitches as well. #!00# thinks to herself \"I think I have him\".\n\n#!00# lays back on the bed and relaxes her posture.\n\n\"Okay... let\'s do it.\"\n\nThe Light-Elf takes another half step forward and crouches down. He approaches #!00#\'s crotch.\n\n\"Wait...\"\n\nThe Light-Elf looks up and #!00# points at her right nipple.\n\n\"Here first...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFEnding7Rollup == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFEnding7Rollup is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf considers #!00#\'s request, lightly shakes his head and points at #!00#\'s crotch. He says something in Elven, which #!00# can only assume that he wants to pierce her clitoris first. However, #!00# doesn\'t want him to try piercing him there first, she wants him to go for her nipple, so she can grab him.\n\n#!00# props herself up on her left elbow, which startles the Light-Elf. #!00# then points at her right nipple with her right forefinger.\n\n\"No... HERE first.\"\n\nThe Light-Elf freezes, as he realized that he is easily within #!00#\'s reach already. #!00# cocks her head.\n\n\"What\'s wrong\?.. piking out...\"\n\nThe Light-Elf quickly reconsiders what he is doing and begins to step away. #!00# decides that she isn\'t going to waste this opportunity and takes a swipe at the Light-Elf.\n\n\"Oh no you don\'t...\"\n\n#!00# is successful only in grabbing a hem of the Light-Elf\'s robes, but at least she has something that is attached to him. The Light-Elf\'s expression changes to one of pure terror, as he struggles to try and get free. The Light-Elf drops the piercings and is now using both hands to try and pull his robes away from #!00#. #!00# is only using her right hand, as she is still awkwardly propping herself up with her left elbow.\n\n#!00# smiles and realizes that she has both a strength and weight advantage right now, so she decides to use both. #!00# frees up her left arm and flops back on the bed...\n\nHowever, what #!00# wasn\'t counting on was the how flimsy the Light-Elf\'s robes were. There is the sound of tearing fabric and #!00# finds that the Light-Elf\'s robes are flying at her face. #!00# momentarily thinks to herself \"Where is he..\?\"\n\n#!00# throws the robes aside to see the naked Light-Elf running for the door.\n\n\"Shit...\"\n\n#!00# tries to stand and go after him, but her excitement ended up raising her arousal instead. #!00# tries to control her orgasm and ends up falling back on her butt.\n\nMeanwhile the Light-Elf has already closed the door of the cell.\n\n\"Crap...\"\n\n#!00# then realizes that she has the Light-Elf\'s robes now, so that means, she also has his key again. #!00# quickly starts rummaging through the Light-Elf\'s robes to find his right pocket. #!00# finds the pocket and takes out the key.\n\n\"Got it...\"\n\n#!00# looks at the door and sees that the Light-Elf is standing there, naked and chanting while concentrating on her.\n\n#!00# curses herself for not grabbing his arm or leg, just as she feels the pain from the enchantment kick in.\n\nShortly afterwards, #!00# passes out.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFEnding7Rollup is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf considers #!00#\'s request and then nods. The Light-Elf shuffles around to #!00#\'s right side and crawls onto the bed next to her. #!00# tries to remain calm and relaxed as possible so that she doesn\'t spook the Light-Elf.\n\nThe Light-Elf positions himself so that he crouched over #!00#\'s right breast, he briefly shifts is focus from #!00#, to the piercings that he is holding.\n\nThen, just as the Light-Elf isn\'t focusing on her, #!00# grabs both of his hands with her left hand and and flips him over.\n\n\n[5 minutes Later...]\n\nThe Light-Elf is sitting on the bed, naked and chanting. However, #!00# has already seen him heal himself, so she isn\'t as worried that he is going to hit her with a pain spell. Besides, the Light-Elf is focusing on himself and is still well within #!00#\'s reach.\n\nIt wasn\'t easy to stick the piercings into the Light-Elf while he was still struggling, however, after #!00# pierced his left nipple first, he seemed to stop struggling as much.\n\nThe Light-Elf finishes his chanting and aura dissipates from his body. The Light-Elf then looks at #!00#. #!00# smiles at the Light-Elf.\n\n\"They look good on you...\"\n\nThe Light-Elf looks elsewhere around the cell. #!00# can\'t figure out what he is thinking, so she decides to give him a distraction.\n\n\"Hey...\"\n\nThe Light-Elf looks at #!00# again.\n\n\"Come here...\"\n\nThe Light-Elf\'s expression changes from poker-face to concern and then to \'Oh fuck what have I done\' horror as #!00# grabs his shoulder and pulls him to her.\n\n#!00# gives the Light-Elf a tongue kiss, which he does not have a choice about, considering she is holding the back of his head, so he cannot get pull away.\n\nAfter 20 seconds #!00# has to break off from the kiss as the Light-Elf isn\'t breathing. The Light-Elf takes some deep breaths.\n\n\"You should really learn to breathe through your nose...\"\n\n#!00# then starts playing with the Light-Elf\'s penis. The moment that #!00# lightly twists the piercing that she stuck into the hood of the Light-Elf\'s penis, he instantly becomes erect.\n\n\"Hmm... nice... if only you were bigger...\"\n\nThe Light-Elf\'s nipples also become hard. #!00# and the Light-Elf look at each other, each thinking about what to do next...\n\n... however, both of them are distracted by the sounds of metal scraping on metal in the distance. The Light-Elf says a short word in Elven, that #!00# can only assume was a swearword and thinks to herself \"what a pain... and it was getting good too...\"\n\n#!00# lets go of the Light-Elf, the Light-Elf staggers to his feet and quickly starts putting his robes back on as they hear the echoing of footsteps approaching.\n\nThe a number of expressions ranging from surprise to delight appear on the Light-Elf\'s face as he hurriedly straightens out his robes. #!00# notices the bulge at his crotch and thinks to herself \"Someone is having a new experience\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf then tries to rush over to the table at the right side of the cell and picks up a large \"size of an erect male orc\" dildo.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("The Light-Elf then tries to rush over to the collection of dildos at right side of the cell and picks up a large \"size of an erect male orc\" dildo.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("Then the Dark-Elf walks into view and stops at the right-front corner of the cell. The Dark-Elf glances around the cell, at #!00#, then he looks at the Light-Elf.\n\nThe Dark-Elf starts a conversation with the Light-Elf. During that conversation the Light-Elf shows the Dark-Elf the dildo he is holding and the pair of them look at #!00# several times.\n\n#!00# thinks to herself \"I wonder what they are talking about\".\n\nThe Light-Elf then walks over to the door of the cell, while still holding the dildo. #!00# notices that the Light-Elf isn\'t walking as confidently as he was before.\n\nThe Light-Elf walks through the door and closes it. The latch-bolt slides back into place. He then winks at #!00#, before walking along the hallway.\n\nThe two elves have another conversation as the Light-Elf is walking towards the Dark-Elf. The Dark-Elf turns around and walks out of sight before the Light-Elf reaches the front-front corner of the cell.\n\nThe Light-Elf glances back at #!00#. #!00# blows him a kiss. The Light-Elf smiles at her and continues walking out of #!00#\'s sight.\n\n#!00# sits there patiently on the bed, listening to the echoes of the footsteps, which end with the faint screeching of metal scraping on metal. #!00# sits still for a minute, listening to the sound of the wind in the distance.\n\n\"He\'ll be back...\"\n\n\n[More than half a year later...]\n\n#!00# is is thinking to herself \"whatever happened to that little shit... the Dark-Elf\?\", as she had not seen the little creep since just before THAT day.\n\nTHAT day was sort of a start of what could be considered a partnership... or maybe a relationship... it does not really matter... she hasn\'t seen the Dark-Elf with his rather shitty illusion trick in a long time.\n\nOn THAT day, the Light-Elf dragged in an unconscious human woman and the pair of them started playing with her. That human turned out to be the first of many.\n\nEvery-time they broke a woman and turned her into a sex crazed slut, they would replace her with another. They are up to their... seventh woman now\?.. this time, it is a dwarf.\n\nThey did not bother with the contraption thing... or with illusions... it was just #!00# pinning them down to the bed and eating out their pussies for a while, forcing them to cum over and over again, then the REAL fun started.\n\nThe Light-Elf helped a lot, he is a great partner...\n\n#!00# snaps out of her reminiscing and looks over at the Light-Elf, As usual, he has been busy licking her exposed toes. His cock is now a lot bigger, slightly larger than an orc one, just the way that #!00# likes it. She has always wondered what he did to make it grow like that, but all that she knew is that it was painful for him for a while.\n\nHer little Elf-man-bitch seems to really enjoy the pain.\n\n#!00# lightly kicks the Light-Elf with her foot and he looks up. #!00# is sitting there, wearing the leather outfit that he gave her. It does nothing to hide her breasts or genitals, but that isn\'t important. She feels sexy while wearing it. He looks sexy wearing just his rubber gloves, slave collar and piercings.\n\n#!00# has just 2 words for the Light-Elf, \"Up, boy\"\n\nThe Light-Elf stands up, his raging boner is obvious. The Light-Elf knows the routine, as he steps forward and allows #!00# to inspect his penis. His enormous penis is now decorated with lumps and bumps that #!00# helped inflict upon him. She does not know what this stuff was, he gave it to her and instructed her what to do. He seemed enjoyed getting them, just as much as she now enjoys being fucked by his monster cock now. However, given the size of his member, he cannot use it to train the slaves anymore, so #!00# does that herself using a strap-on dildo.\n\n#!00# looks up at the face of the Light-Elf and he backs away, allowing #!00# to stand up from the sofa she is sitting on. Without exchanging a word, the pair of them walk over to the bed. Both of them crouch down and crawl over to the middle of it.\n\n#!00# lays on her back, in the middle of the deep-pink latex sheets. #!00# then bends her knees and parts her legs. She has to be on bottom. Being on the top was nice, a couple of times, but the Light-Elf comes too close to dying whenever she grinds her ass into his crotch. The \'cowgirl position\' is just too risky.\n\n#!00# looks up at the mirrors attached to the ceiling, to get a better view of her Light-Elf slave, as he pushes his penis into her. It felt good... but she wants more.\n\n#!00# wraps her legs around his back, locking him in. Not that she had to do that, but it made her feel even more in control knowing that he could not get away. It is only slightly better than knowing that he wouldn\'t.\n\n\"Faster...\"\n\nThe Light-Elf didn\'t need a prompt... he was thrusting as hard and fast as he could... it was starting to get painful for him... but he enjoyed that... chased it... savored it... like a well aged wine.\n\nNow that the Light-Elf has built up his stamina, as well as slightly more brawn, he could do this for hours with ease, if he just slowed a little... but no... he was after the short term satisfaction more than anything else and kept pounding away with all of his might, as fast has he could.\n\nWith every thrust the piercings on his nipples were banging against his chest and the piercing on the hood of his penis was tickling #!00#\'s insides. It does not take long for the Light-Elf to cum inside of #!00#. However, #!00# clearly hasn\'t climaxed yet, so he quickly resumes for another round. #!00# does not mind as he doesn\'t stop till she has orgasmed at least twice.\n\n\n#!00# thinks to herself \"such a nice calm way to end a hectic day\".\n\n<Ending 7: New Partnership>\n\n");
    if (iRet != 0) return iRet;

#ifdef INTERFACE_CURSES
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    return iRet;
#else
    return 0;
#endif // INTERFACE_CURSES
}

//
// "Allow him to stick the piercings in" Path Selection function (Ending 008).
//
int gamelogic07_scene1281 (int iSubSceneId, char cSubFlag)
{
    int iRet;

    if (cSubFlag > MAXGAMESCENENESTS)
        return 101;

    if (gcDebugFlag != 0)
    {
        iRet = mdialog_addToDialogWithSrchRep ("{1281 >Allow him to stick the piercings in}\n\n");
        if (iRet != 0) return iRet;
    }
    else if (cSubFlag == 0)
    {
        iRet = mdialog_addToDialogWithSrchRep (">Allow him to stick the piercings in\n\n");
        if (iRet != 0) return iRet;
    }

    if ((gstruct_GameVars.cFPainMagic1 == 1) && (gstruct_GameVars.cFLightElfHumilate == 0) && (gstruct_GameVars.cFPullOutDildos2 == 0) && (gstruct_GameVars.cFClosedTheDoor1 == 1))
    {
        gstruct_GameVars.cFEnding8Rollup = 1;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[set cFEnding8Rollup]\n");
            if (iRet != 0) return iRet;
        }
    }
    else
    {
        gstruct_GameVars.cFEnding8Rollup = 0;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[clear cFEnding8Rollup]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# glances at the face of the Light-Elf, then at the piercings he is holding, then back at his face again. #!00# then remembers the circumstances under which some of her fellow soldiers in the #!01# received their piercings and then thinks to herself \"Orcs never back-down from a fight... or from pain.\"\n\n\"I am game... are you\?\"\n\nThe Light-Elf looks at #!00#\'s face and for once his poker-face expression briefly changes to one of concern. Unknown to the Light-Elf, is that orc soldier recruits occasionally undertake the \'piercing challenge\' at the #!01# academy. The only reason that the orc soldier recruits accept being pierced is if there is a question about their resolve, which is crucial in gaining a passing mark and graduating. If an orc with a failing resolve grade can handle the pain inflicted due to the piercings, they are granted a passing grade in that specific subject. It is a test that only applies to 5 percent of all #!01# recruits and more than 80 percent of the orcs who have to undertake it, succeed.\n\nOf course, the \'piercing challenge\' is used only for orcs recruits where there is a concern that they would run from battle. There is no such issue with veteran #!01# soldiers, such as #!00#. However, #!00# knows that her sensitive areas are more sensitive than normal thanks to the elven concoctions that are coursing through her body, so this is going to be a lot more painful than it would normally be.\n\n#!00# lays back on the bed and relaxes her posture.\n\n\"Okay... let\'s get this over with.\"\n\nThe Light-Elf glances at the piercings, then looks at #!00# and realizes he has just made a terrible mistake. #!00# is taking this seriously... too seriously... for his liking. He was thinking something erotic, but #!00#\'s facial and body language as if it is an challenge. #!00# notices his sudden lack of resolve.\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFEnding8Rollup == 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFEnding8Rollup is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("\"What, your cock isn\'t big enough\?\"\n\nThe Light-Elf looks at #!00# and sighs. He steps backwards, walks out of the cell. #!00# props herself up on her elbows again, to watch the Light-Elf as he closes the door of the cell and the latch-bolt slides back into place to lock the door.\n\n\"Clearly... SOMEONE isn\'t in the mood today.\"\n\nThe Light-Elf starts to chant, #!00# sighs \"What is WRONG with you\?.\"\n\n#!00# keeps staring straight at the eyes of the Light-Elf as he continues chanting. #!00# thinks to herself \"One moment he does not want to inflict a lot of pain and the next moment he does... I don\'t understand these fucking elves at all.\"\n\nThe pain and paralysis hits #!00# hard and she collapses back on the bed. #!00# tries to put up with the pain as best as she can.\n\n\"Rrrgh... I took it... seriously... you... SICK... FUCK...\"\n\nThe Light-Elf finds that his concentration is faltering, so he tenses up to try and increase his concentration on #!00#.\n\nIt takes over 15 seconds, but, finally, #!00# passes out.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFEnding8Rollup is NOT set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# finds the Light-Elf\'s sudden change of heart to be funny... and starts to laugh a little, then props herself up on an elbow.\n\n\"Come on... what\'s wrong\?\"\n\nThe Light-Elf sighs, briefly smiles, takes another half step forward and crouches down. He approaches #!00#\'s crotch.\n\n\"Wait...\"\n\nThe Light-Elf looks up and #!00# points at her right nipple.\n\n\"Here first...\"\n\nThe Light-Elf considers #!00#\'s request, lightly shakes his head and points at #!00#\'s crotch. He says something in Elven, which #!00# can only assume that he wants to pierce her clitoris first.\n\n#!00# rolls her eyes and flops back down on the bed.\n\n\"Fine...\"\n\n#!00# closes her eyes.\n\n\"Let\'s get this over with...\"\n\n\n[5 Minutes Later...]\n\n#!00# is standing up and looking down at her pierced nipples, they are throbbing a little bit more than normal, but otherwise are are no different from before. #!00#\'s pierced clitoris is similar. #!00# was expecting to put up with the pain from the piercings for weeks, if not months... not a matter of minutes.\n\n#!00# looks over at the Light-Elf, who is just standing there observing her. It never crossed #!00#\'s mind that the Light-Elf would not only pierce her, but then heal the injuries that he inflicted upon her.\n\nJust as #!00# tries to consider the potential reasons for the Light-Elf\'s actions, she is distracted by the faint sound of metal on metal.\n\nThe Light-Elf sighs. The only thing that #!00# can think of as she can hear footsteps approaching in the hallway is \"huh\?\"\n\n#!00# listens carefully to the footsteps echoing in the hallway again. It seems to be only one person this time. #!00# waits and eventually sees the Dark-Elf appear from the right-front of the cell.\n\nThe Dark-Elf stops walking and looks around inside the cell. He glances at both #!00# and the Light-Elf several times, before continuing to walk towards the open cell door.\n\nAs soon as the Dark-Elf arrives at the doorway of the cell, he looks over #!00# again and that is when the expression on his face changes. #!00# thinks to herself \"Wow... someone isn\'t impressed\".\n\nThe Dark-Elf\'s expression alternates between disbelief, horror and \'what the fuck happened here\?\'. The Dark-Elf\'s expression changes to anger as he looks at the Light-Elf. The Light-Elf, as always is standing there with a poker-faced expression on his face.\n\nThen a rather aggravated conversation in Elven starts. #!00# thinks to herself \"I think... I am just going to leave these two alone.\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# walks over to the right-hand wall, where the table with all of the dildos still is.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# walks over to the right-hand wall, where the collection of dildos on the floor still is.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("She does not need to look back to know that the conversation between the two elves is quite animated, as the voice of the Dark-Elf is reverberating around inside the cell and the Light-Elf is sternly replying. #!00# thinks to herself \"I got some piercings... what\'s the big deal\?.. what are they... my parents\?\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is almost at the table, when the conversation suddenly changes. The elves aren\'t arguing, they are chanting.\n\n");
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

        iRet = mdialog_addToDialogWithSrchRep ("#!00# is almost at the collection of dildos, when the conversation suddenly changes. The elves aren\'t arguing, they are chanting.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is NOT set]\n");
            if (iRet != 0) return iRet;
        }
    }

    iRet = mdialog_addToDialogWithSrchRep ("\"What... Wait...\"\n\n#!00# spins around, expecting her to be the target, however, what she sees are the two elves, staring directly at each other.\n\n\"Oh shit... I have to do something...\"\n\n");
    if (iRet != 0) return iRet;

    if (gstruct_GameVars.cFTableStillThere != 0)
    {
        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[if-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the table and picks it up. All of the dildos that were on it are sent flying and she throws the table at the Dark-Elf.\n\nThe Dark-Elf doesn\'t notice the table hurtling at him till it is too late. The underside of the table hits his head with so much force that the surface of the table splinters as the Dark-Elf is knocked over and tumbles across the floor like a ragdoll.\n\n\"Got\'im...\"\n\nThe Light-Elf is distracted by the fact that his opponent has been eliminated, he briefly surveys the scene of the Dark-Elf, glances back at #!00#, and then...\n\n... the Light-Elf briskly walks out of the cell.\n\n\"Huh\?.. But...\"\n\nThe Light-Elf calmly closes the door of the cell and starts chanting again... #!00# immediately notices that she is the target of the enchantment.\n\n\"But... I...\"\n\n#!00# looks over at the Dark-Elf and that is when she notices that the Dark-Elf is laying in what is an ever expanding pool of blood.\n\nAs the pain starts to course through her entire body, #!00# thinks to herself \"Well... I did manage to kill one of them.\"\n\n#!00# then passes out.\n\n");
        if (iRet != 0) return iRet;

        if (gcDebugFlag != 0)
        {
            iRet = mdialog_addToDialogWithSrchRep ("[endif-01:cFTableStillThere is set]\n");
            if (iRet != 0) return iRet;
        }

        iRet = gamelogic07_scene1180 (0, cSubFlag + 1);
        return iRet;
    }

    iRet = mdialog_addToDialogWithSrchRep ("#!00# looks at the collection of dildos and picks up 2 of the bigger ones. Without thinking too much about it, #!00# throws each of the dildos at the Dark-Elf.\n\nThe first dildo misses completely, but the second hits him square in the nose. The Dark-Elf stumbles backward, completely distracted from casting his enchantment by the mere fact that he was hit by a projectile. Just as he regains his composure, his body stiffens as the Light-Elf\'s enchantment starts to take effect. The Dark-Elf passes out and collapses on the floor.\n\n#!00# thinks to herself \"Oh... so that\'s what it looks like...\"\n\nThe Light-Elf then turns his attention to #!00#, he takes a deep breath.\n\n#!00# just looks over the Light-Elf...\n\n\"Are... you okay\?\"\n\nThe Light-Elf is distracted by #!00#\'s facial and body expressions, looks over himself, then stares directly at #!00# and says something in Elven. A thought crosses #!00#\'s mind and she looks at the Dark-Elf, who is unconscious on the floor.\n\n\"Okay... so were to from here\?\"\n\n\n[Less than half a year later...]\n\n#!00# is walking just ahead of the Light-Elf, as they approach the middle cell of the block. The chains, that are hanging from the multitude of piercings that #!00# has, lightly jingle.\n\n\"Another day, another slut to train.\"\n\nThe Light-Elf asks #!00# \"<What was that\?>\".\n\n#!00# spins around and responds with one of the handful Elven phrases that she she can pronounce properly, \"<not important>\". #!00# continues turning around to walk forward again.\n\n#!00# finds that these short walks are not long enough. While she is living in a nicer cell now, and the cells are rather large, over time she feels rather cramped by the view of the same light-gray stone walls that are illuminated by the same white-smoke orbs that are embedded into them.\n\nThe cell room that she lives in is nice, rather long carpet. But even so... it is the same view... everyday.\n\nAnd it is only a couple of strides and they have reached... her old cell.\n\n#!00# slows briefly to look around the cell, then continues striding towards the door. The Goblin-woman that the Light-Elf and #!00# are training is still inside the cell. The Goblin-woman is laying on the edge of the bed, nearest to the door. The Light-Elf, as always, stops walking at the edge of the cell.\n\nAs #!00# approaches the lock of the door, she pulls out the key from its hiding spot underneath her left breast of her leather half-cup bondage bra. The key held to the bra with a small chain. And would be hard to pick from all of the other chains that #!00# has hanging from her.\n\nIt isn\'t an issue if a slave-in-training tried to take the key, because they would either have to break the chain, or end up ripping the entire leather bondage harness off of her. The women that they train tend to be a lot weaker, so #!00# can always overpower them if they tried anyway. And even if they did manage that, her master, the Light-Elf, usually hits them with his pain magic. While #!00# will be hit with the pain magic as well, she is used to it now.\n\n#!00# unlocks the door and listens to the latch-bolt slide back. She then puts the key back where it was, opens the door of the cell completely and walks in.\n\nShe remembers the Dark-Elf doing this, however, he was weak... and now the Dark-Elf is gone. It is just #!00# and #!00#\'s master, now... oh... and the sluts that they train.\n\nThe Goblin-woman is still too wild to try the \'escape test\' with, but she is a lot more subdued today... well... she appeared to be.\n\n#!00# walks over to the Goblin-woman and is suddenly hit in the abdomen with a dildo.\n\n\"Oh... nice try hun...\"\n\n#!00# remembers this trick, she used it herself. Unlike the Dark-Elf, #!00# isn\'t going to panic or cower.\n\nThe Goblin-woman then tries darting around #!00# for the door, however, #!00# catches her as she tries to run past.\n\n\"Oh no you don\'t.\"\n\nThe Goblin-woman flails her arms and legs in desperation while also yelling and screaming, trying to get #!00# to let her go. In the process, the Goblin-woman grabs a chain that is attached to both of #!00#\'s nipple piercings and yanks it. It does hurt, however, #!00# has endured far worse.\n\n\"Oooh... foreplay... you MUST be in the mood.\"\n\n#!00# then lifts the Goblin-woman up, flips and catches her, so that her legs are spread open and the Goblin-woman\'s snatch is right near #!00#\'s mouth. #!00# then proceeds to lick and lightly bite the Goblin-woman\'s clitoris. It does not take long for the Goblin-woman to climax. The Goblin-woman she is rather aroused already due to the elven concoctions that the Light-Elf has been pumping into her.\n\nThe Goblin-woman quickly starts to struggle again, so #!00# makes her quickly climax another 5 times, while holding the Goblin-woman upside down.\n\n#!00# finds that the Goblin-woman has stopped struggling, so #!00# tosses Goblin-woman onto the bed.\n\n#!00# glances over at the Light-Elf, who just says one word to #!00#... \"<continue>.\"\n\n#!00# responds \"<Yes, Master...>.\"\n\n#!00# crouches and crawls onto the bed. #!00# has a quota to make the Goblin-woman climax 30 times today and it will be un-impressive if the Goblin-woman passes out at 21 again, like she did yesterday.\n\n#!00# sticks one of her black latex covered right index finger into the Goblin-woman\'s pussy and starts finger-fucking the Goblin-woman. The Goblin-woman moans, as she is getting into this.\n\n\"Honey, if you can\'t take my finger, then how are you going to handle a real cock\?..\"\n\n#!00# then sticks her black latex covered left index finger into the Goblin-woman\'s anus and alternates them. The Goblin-woman has a mind blowing climax, as the Light-Elf steps into the cell, armed with his trusty mouth spreader.\n\n\"Be a good little slut and hold out to the end today... okay... that way I can get a good fucking from master later...\"\n\n#!00#\'s nipples harden at the thought, she loves how her master pulls on her nipple piercings while using her as a cock-sleeve.\n\n\nBut right now, #!00# needs to put aside her personal masochistic fantasies and help her master abuse this Goblin-woman.\n\n<Ending 8: Slave to Submission>\n\n");
    if (iRet != 0) return iRet;

#ifdef INTERFACE_CURSES
    iRet = mutils_addToCommandList ("Credits", 3, 0);
    if (iRet != 0) return iRet;
    iRet = mutils_addToCommandList ("Main Menu", 0, 0);
    return iRet;
#else
    return 0;
#endif // INTERFACE_CURSES
}

