trail2_MapScripts::
	.byte 0


lucybattle::
	lockall
	trainerbattle_single TRAINER_LUCY_2, lucyintro, lucyoutro
	msgbox lucybattle_Text_0
	waitmessage
	releaseall
	return


benjaminbattle::
	lockall
	trainerbattle_single TRAINER_ROSE_1, benintro, benoutro
	msgbox benjaminbattle_Text_0
	waitmessage
	releaseall
	return


lucybattle_Text_0:
	.string "Erm... could you ask your dad if he can\n"
	.string "give me a POKéMON too?$"

benjaminbattle_Text_0:
	.string "Huh? Oh, no my YANMA didn't die, I just\n"
	.string "want to use a GRUBBIN instead.$"

lucyintro::
	.string "When trainers' eyes meet, they battle!$"

lucyoutro::
	.string "When all my POKéMON faint, I lose...$"

benintro::
	.string "Hey! Do you wanna see my bug?!!$"

benoutro::
	.string "Nooo... YANMA... Oh well. I'll move on...\n"
	.string "some day...$"
