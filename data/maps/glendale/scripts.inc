glendale_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, glendalescript_ontransition
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
	clearflag FLAG_DAD_NICKNAME
	setvar VAR_GLENDALE_STATE, 1
	setvar VAR_DAD_NICKNAMETIME, 0
	special ChooseStarter
	lockall
	removeobject 1
	setflag FLAG_DAD_STARTERS
	msgbox glendalechoosestarter_Text_0
	waitmessage
	warp MAP_DADLAB, -1, 5, 6
	releaseall
	return


glendalescript_ontransition::
	compare VAR_GLENDALE_STATE, 0
	goto_if_eq glendalescript_ontransition_2
	compare VAR_GLENDALE_STATE, 1
	goto_if_eq glendalescript_ontransition_3
	compare VAR_GLENDALE_STATE, 2
	goto_if_eq glendalescript_ontransition_4
glendalescript_ontransition_1:
	end

glendalescript_ontransition_2:
	setrespawn HEAL_LOCATION_CONTROLLERS_HOUSE
	setflag FLAG_SYS_B_DASH
	setflag FLAG_DAD_NICKNAME
	setflag FLAG_DAD_NORMAL
	setflag FLAG_DAD_GIVE
	goto glendalescript_ontransition_1

glendalescript_ontransition_3:
	setflag FLAG_SYS_B_DASH
	setflag FLAG_DAD_NICKNAME
	setflag FLAG_DAD_GIVE
	clearflag FLAG_DAD_NORMAL
	goto glendalescript_ontransition_1

glendalescript_ontransition_4:
	setflag FLAG_SYS_B_DASH
	setflag FLAG_DAD_NICKNAME
	setflag FLAG_DAD_NORMAL
	goto glendalescript_ontransition_1


glendalelabsign::
	lockall
	msgbox glendalelabsign_Text_0
	waitmessage
	releaseall
	return


glendalefatman::
	lockall
	msgbox glendalefatman_Text_0, MSGBOX_NPC
	waitmessage
	releaseall
	return


glendaleboy::
	lockall
	msgbox glendaleboy_Text_0, MSGBOX_NPC
	waitmessage
	releaseall
	return


controllernoroute_Text_0:
	.string "It's too dangerous to go any further\n"
	.string "without borrowing one of DAD's\l"
	.string "POKéMON.$"

dadintro_Text_0:
	.string "???: Psst.. {PLAYER}!$"

dadintro_Text_1:
	.string "DAD: It's me. Sssh! Be quiet.$"

dadintro_Text_2:
	.string "There's a rare POKéMON up there. I've\n"
	.string "seen it before, but it flees before I\l"
	.string "can attempt to catch it.\p"
	.string "Hey, why don't you try to battle it!\p"
	.string "C'mon, it's easy. Just grab one of the\n"
	.string "POKéMON from my bag there and send it\l"
	.string "out!$"

dadnocomeback_Text_0:
	.string "C'mon kid. Don't be scared!$"

glendalechoosestarter_Text_0:
	.string "DAD: Well, it escaped. But at least we\n"
	.string "got some interesting data.\p"
	.string "What a fascinating creature...\p"
	.string "Let's get inside now, kid.$"

glendalelabsign_Text_0:
	.string "PROF. STERN's Lab$"

glendalefatman_Text_0:
	.string "I've heard there's a META-ZONE where\n"
	.string "you can play the SAFARI GAME in a\l"
	.string "virtual world!\p"
	.string "The power of science is amazing.$"

glendaleboy_Text_0:
	.string "Tell your dad he better give me a\n"
	.string "POKéMON!$"
