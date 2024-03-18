trail3_MapScripts::
	.byte 0


lucybattle2::
	lockall
	trainerbattle_single TRAINER_LUCY_2, lucyintro2, lucyoutro2
	msgbox lucybattle2_Text_0
	waitmessage
	releaseall
	return


lucybattle2_Text_0:
	.string "Erm... could you ask your dad if he can\n"
	.string "give me a POKéMON too?$"

lucyintro2::
	.string "When trainers' eyes meet, they battle!$"

lucyoutro2::
	.string "When all my POKéMON faint, I lose...$"
