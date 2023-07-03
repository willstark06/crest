glendalehouse1_MapScripts::
	.byte 0

glendalehouseone_eventscript_fridge::
	lockall
	msgbox glendalehouseone_eventscript_fridge_Text_0
	waitmessage
	releaseall
	return


glendalehouseoneman::
	lockall
	msgbox glendalehouseoneman_Text_0, MSGBOX_NPC
	waitmessage
	releaseall
	return


glendalehouseone_eventscript_fridge_Text_0:
	.string "Looks yummy.$"

glendalehouseoneman_Text_0:
	.string "That dad of yours is one interesting\n"
	.string "fella.$"
