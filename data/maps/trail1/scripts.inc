trail1_MapScripts::
	.byte 0


hermiebattleone::
	applymovement 1, hermieface
	waitmovement 0
	msgbox hermiebattleone_Text_0
	waitmessage
	trainerbattle_single TRAINER_HERMIE_TRAIL_ONE, hermieintro, hermieoutro, hermieleave
	return


hermieleave::
	setflag FLAG_HERMIE_BATTLE_ONE
	setvar VAR_GLENDALE_STATE, 2
	lockall
	msgbox hermieleave_Text_0
	waitmessage
	compare VAR_HERMIE_POS, 0
	goto_if_eq hermieleave_2
	applymovement 1, hermiewalk2
	waitmovement 0
hermieleave_1:
	removeobject 1
	releaseall
	return

hermieleave_2:
	applymovement 1, hermiewalk
	waitmovement 0
	goto hermieleave_1


hermieface:
	face_player
	step_end

hermiewalk:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

hermiewalk2:
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

changehermiewalktoleft::
	setvar VAR_HERMIE_POS, 1
	return


changehermiewalktodown::
	setvar VAR_HERMIE_POS, 0
	return


hermiebattleone_Text_0:
	.string "Hey {PLAYER}! This mud is sick!\p"
	.string "Wait - did DAD give you a POKéMON too?\n"
	.string "Can I see? No wait, I have a better\l"
	.string "idea. Lets battle!\p"
	.string "There's no way you'll beat me.$"

hermieleave_Text_0:
	.string "Your POKéMON is way stronger!!! Why\n"
	.string "does DAD always give you the stronger\l"
	.string "ones!!!\p"
	.string "I'm gonna make him give me a better one!$"

hermieintro::
	.string "'Cause my POKéMON will never lose!$"

hermieoutro::
	.string "No fair!$"
