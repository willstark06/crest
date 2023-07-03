dadlab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, dadlabontransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, dadlab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

dadlab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_DAD_NICKNAMETIME, 0, dadinlab
	.2byte 0


dadinlab::
	setvar VAR_DAD_NICKNAMETIME, 1
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	turnobject 1, DIR_EAST
	compare VAR_GLENDALE_STATE, 1
	goto_if_eq dadinlab_2
dadinlab_1:
	end

dadinlab_2:
	lock
	msgbox dadinlab_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq dadinlab_5
dadinlab_4:
	msgbox dadinlab_Text_1
	waitmessage
	release
	goto dadinlab_1

dadinlab_5:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto dadinlab_4


dadfindyourbrother::
	lockall
	msgbox dadfindyourbrother_Text_0, MSGBOX_NPC
	waitmessage
	releaseall
	return


dadlabontransition::
	end


controllerlookup:
	face_up
	step_end

dadbed::
	lockall
	msgbox dadbed_Text_0
	waitmessage
	releaseall
	return


dadlabmachine::
	lockall
	msgbox dadlabmachine_Text_0
	waitmessage
	releaseall
	return


dadcomputer1::
	lockall
	msgbox dadcomputer1_Text_0
	waitmessage
	releaseall
	return


dadcomputer2::
	lockall
	msgbox dadcomputer2_Text_0
	waitmessage
	releaseall
	return


dadlabbooks::
	lockall
	msgbox dadlabbooks_Text_0
	waitmessage
	releaseall
	return


dadcomputer3::
	lockall
	msgbox dadcomputer3_Text_0
	waitmessage
	releaseall
	return


dadinlab_Text_0:
	.string "DAD: I gotta say I'm impressed.\p"
	.string "You and that POKéMON were completely\n"
	.string "in sync.\l"
	.string "I think it's time I let you and your\l"
	.string "brother have POKéMON of your own.\p"
	.string "Which means you could give a name to\n"
	.string "that POKéMON of yours! Whadd'ya say?$"

dadinlab_Text_1:
	.string "Speaking of your brother, can you go\n"
	.string "find him?\p"
	.string "I don't want him running off too far.$"

dadfindyourbrother_Text_0:
	.string "Go find your brother, I don't want\n"
	.string "Hermie running off too far.$"

dadbed_Text_0:
	.string "It's DAD's bed that he dragged in here.$"

dadlabmachine_Text_0:
	.string "Who knows what he uses this for.$"

dadcomputer1_Text_0:
	.string "There's an E-MAIL on screen from\n"
	.string "'samson.oak.mail.pc'.\p"
	.string "It's probably best not to read it.$"

dadcomputer2_Text_0:
	.string "It's some of DAD's field data on the wild\n"
	.string "POKéMON in the area.$"

dadlabbooks_Text_0:
	.string "There's no way he has time to read all of\n"
	.string "these.$"

dadcomputer3_Text_0:
	.string "There's a program called 'infinit.exe'\n"
	.string "running.$"
