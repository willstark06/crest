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
	setvar VAR_GLENDALE_STATE, 1
	special ChooseStarter
	lockall
	setflag FLAG_DAD_STARTERS
	msgbox glendalechoosestarter_Text_0
	waitmessage
	warp MAP_DADLAB, 5, 9
	releaseall
	return


glendalelabsign::
	lockall
	msgbox glendalelabsign_Text_0
	waitmessage
	releaseall
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
	.string "There's a rare POKEMON up there. I've\n"
	.string "seen it before, but it flees before I\l"
	.string "can attempt to catch it.\p"
	.string "Hey, why don't you try to battle it!\p"
	.string "C'mon, it's easy.\l"
	.string "Just grab one of the POKEMON from my\l"
	.string "bag there and send it out!$"

dadnocomeback_Text_0:
	.string "C'mon kid. don't be scared!$"

glendalechoosestarter_Text_0:
	.string "DAD: Well, it escaped.\p"
	.string "But at least we got some interesting\n"
	.string "data.\p"
	.string "What a fascinating creature...\p"
	.string "Let's get inside now, kid.$"

glendalelabsign_Text_0:
	.string "PROF. JOSHUA's Lab$"
