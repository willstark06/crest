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

controllernoroute_Text_0:
	.string "It's too dangerous to go any further\n"
	.string "without borrowing one of DAD's\l"
	.string "POKEMON.$"
