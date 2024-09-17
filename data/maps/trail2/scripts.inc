trail2_MapScripts::
	.byte 0


lucybattle::
	trainerbattle_single TRAINER_LUCY_2, lucyintro, lucyoutro
	msgbox lucybattle_Text_0
	waitmessage
	releaseall
	return


benjaminbattle::
	trainerbattle_single TRAINER_BENNAMIN, benintro, benoutro
	msgbox benjaminbattle_Text_0
	waitmessage
	releaseall
	return


momtalk1::
	lockall
	checkitem ITEM_POKE_BALL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq momtalk1_2
	msgbox momtalk1_Text_3
	waitmessage
momtalk1_1:
	releaseall
	return

momtalk1_2:
	setflag FLAG_MOM_AND_KID_ONE
	msgbox momtalk1_Text_0
	waitmessage
	giveitem ITEM_POTION, 2
	msgbox momtalk1_Text_1
	waitmessage
	msgbox momtalk1_Text_2
	applymovement 4, kidrun
	waitmovement 0
	removeobject 4
	applymovement 3, momwalk
	waitmessage
	waitmovement 0
	removeobject 3
	goto momtalk1_1


kidrun:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

momwalk:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

kidtalk1::
	lockall
	msgbox kidtalk1_Text_0
	waitmessage
	releaseall
	return


lucybattle_Text_0:
	.string "Erm... could you ask your dad if he can\n"
	.string "give me a POKéMON too?$"

benjaminbattle_Text_0:
	.string "Huh? Oh, no my YANMA didn't die, I just\n"
	.string "want to use a GRUBBIN instead.$"

momtalk1_Text_0:
	.string "Oh my gosh, thank you for the POKéBALL,\n"
	.string "you're a life saver. Here, take these.$"

momtalk1_Text_1:
	.string "Okay Jimmy, let's go catch a PIDGEY!$"

momtalk1_Text_2:
	.string "JIMMY: Yippee!!!$"

momtalk1_Text_3:
	.string "Hey there, could you do me a favor? My\n"
	.string "kid says he won't move until I catch him\l"
	.string "a POKéMON. Could you get me a\l"
	.string "POKéBALL? Please? Please? I'm so\l"
	.string "tired.$"

kidtalk1_Text_0:
	.string "WAAAAHHH!!! WGGAAAAAAH!!! PIDDGEY!!!$"

lucyintro::
	.string "When trainers' eyes meet, they battle!$"

lucyoutro::
	.string "When all my POKéMON faint, I lose...$"

benintro::
	.string "Hey! Do you wanna see my bug?!!$"

benoutro::
	.string "Nooo... YANMA... Oh well. I'll move on...\n"
	.string "some day...$"
