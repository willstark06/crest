glendalehouse2_MapScripts::
	.byte 0


glendalehousetwo_eventscript_fridge::
	lockall
	msgbox glendalehousetwo_eventscript_fridge_Text_0
	waitmessage
	releaseall
	return


glendalehousetwo_couch::
	lockall
	msgbox glendalehousetwo_couch_Text_0
	waitmessage
	releaseall
	return


glendalehousetwoman::
	lockall
	msgbox glendalehousetwoman_Text_0, MSGBOX_NPC
	waitmessage
	releaseall
	return


glendalehousetwowoman::
	lockall
	msgbox glendalehousetwowoman_Text_0, MSGBOX_NPC
	waitmessage
	releaseall
	return


glendalehousetwo_eventscript_fridge_Text_0:
	.string "Looks yummy.$"

glendalehousetwo_couch_Text_0:
	.string "Looks comfy.$"

glendalehousetwoman_Text_0:
	.string "HERMIE came by earlier, said he was\n"
	.string "going out to see something or other.$"

glendalehousetwowoman_Text_0:
	.string "I miss the days when I could explore\n"
	.string "the great outdoors.$"
