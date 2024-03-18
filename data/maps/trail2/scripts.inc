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
	msgbox momtalk1_Text_0
	waitmessage
	releaseall
	return


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
	.string "Hey there, could you do me a favor? My\n"
	.string "kid says he won't move until I catch him\l"
	.string "a POKéMON. Could you get one for him?\l"
	.string "Please? Please? I'm so tired.$"

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
