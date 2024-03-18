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


browhine::
	lockall
	msgbox browhine_Text_0
	waitmessage
	releaseall
	return


dadgive::
	lockall
	applymovement 4, hermiepout
	msgbox dadgive_Text_0
	waitmessage
	waitmovement 0
	applymovement 3, dadfacebro
	waitmovement 0
	msgbox dadgive_Text_1
	waitmessage
	msgbox dadgive_Text_2
	applymovement 4, hermieleavelab
	waitmovement 0
	removeobject 4
	applymovement 3, dadfaceplayer
	waitmovement 0
	msgbox dadgive_Text_3
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox dadgive_Text_4
	waitmessage
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	msgbox dadgive_Text_5
	waitmessage
	giveitem ITEM_POKE_BALL, 10
	msgbox dadgive_Text_6
	waitmessage
	applymovement 3, dadleavelab
	waitmovement 0
	removeobject 3
	releaseall
	return


dadfaceplayer:
	face_player
	step_end

dadfacebro:
	face_left
	step_end

dadleavelab:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	step_end

hermieleavelab:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	step_end

hermiepout:
	walk_fast_up
	walk_fast_left
	walk_fast_down
	walk_fast_right
	walk_fast_up
	walk_fast_left
	walk_fast_down
	walk_fast_right
	walk_fast_up
	walk_fast_left
	walk_fast_down
	walk_fast_right
	walk_fast_up
	walk_fast_left
	walk_fast_down
	walk_fast_right
	walk_fast_up
	walk_fast_left
	walk_fast_down
	walk_fast_right
	walk_fast_up
	walk_fast_left
	walk_fast_down
	walk_fast_right
	step_end

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

browhine_Text_0:
	.string "Daddy please!! Please daddy!! I want a\n"
	.string "strong POKéMON!! Like a fire type!! Or\l"
	.string "ooh! A dragon type! No wait... a steel\l"
	.string "type!! Or a fire type! Or maybe a dragon\l"
	.string "type! Pleeeeeeeaase!!!$"

dadgive_Text_0:
	.string "HERMIE: Daddy please give me a\n"
	.string "stronger POKéMON!! Why does\l"
	.string "{PLAYER} get a cool POKéMON and I\l"
	.string "don't?? You never let me have the cool\l"
	.string "things!! Waaaahh!! Waaaaah!! Waaaaah!!$"

dadgive_Text_1:
	.string "DAD: HERMIE, how many times do I have\n"
	.string "to tell you that POKéMON are only as\l"
	.string "strong as their trainers? That MUDBRAY\l"
	.string "has much potential if raised correctly.\l"
	.string "Now go to your room, I've had enough of\l"
	.string "your whining.$"

dadgive_Text_2:
	.string "HERMIE: Okayyyy...\p"
	.string "let's go, MUDBRAY.$"

dadgive_Text_3:
	.string "DAD: Now, {PLAYER}, I have a very\n"
	.string "important thing to give you. After\l"
	.string "seeing how well you did against that\l"
	.string "ABSOL, I've decided to let you have\l"
	.string "this POKéDEX that a colleage in the\l"
	.string "HOENN region sent me.$"

dadgive_Text_4:
	.string "{PLAYER} received the POKéDEX!$"

dadgive_Text_5:
	.string "DAD: That device will allow you to\n"
	.string "record data on every POKéMON you\l"
	.string "capture.\p"
	.string "Speaking of which, take some of these.$"

dadgive_Text_6:
	.string "Alright, you have fun. I'm going to go\n"
	.string "make sure HERMIE doesn't get himself\l"
	.string "trampled.$"
