glendale_MapScripts::
	.byte 0

controllernoroute::
	lockall
	msgbox controllernoroute_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, leavetrailone
	waitmovement 0
	releaseall
	return


leavetrailone:
	face_down
	walk_down
	step_end

dadintro::
	lockall
	msgbox dadintro_Text_0
	waitmessage
	applymovement 2, dadreveal
	waitmovement 0
	msgbox dadintro_Text_1
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, controllertodad
	waitmovement 0
	msgbox dadintro_Text_2
	waitmessage
	releaseall
	return


dadreveal:
	walk_up
	face_right
	step_end

controllertodad:
	walk_left
	walk_left
	walk_left
	walk_up
	face_left
	step_end

dadnocomeback::
	lockall
	msgbox dadnocomeback_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, comebacktodad
	waitmovement 0
	releaseall
	return


comebacktodad:
	walk_up
	step_end

glendalechoosestarter::
	setflag FLAG_SYS_POKEMON_GET
	special ChooseStarter
	return


controllernoroute_Text_0:
	.string "It's too dangerous to go any further\n"
	.string "without borrowing one of DAD's\l"
	.string "POKEMON.$"

dadintro_Text_0:
	.string "???: Psst.. {PLAYER}!$"

dadintro_Text_1:
	.string "DAD: It's me. Sssh! Be quiet.$"

dadintro_Text_2:
	.string "DAD: There's a rare POKEMON up there.\n"
	.string "I've seen it before, but it flees before\l"
	.string "I can attempt to catch it.\p"
	.string "Hey, why don't you try to battle it!\p"
	.string "C'mon, it's easy.\l"
	.string "Just grab one of the POKEMON from my\l"
	.string "bag there and send it out!$"

dadnocomeback_Text_0:
	.string "DAD: C'mon kid don't be scared!\p"
	.string "$"
