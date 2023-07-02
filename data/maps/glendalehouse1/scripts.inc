glendalehouse1_MapScripts::
	.byte 0

glendalehouseone_eventscript_fridge::
	lockall
	msgbox glendalehouseone_eventscript_fridge_Text_0
	releaseall
	return


glendalehouseone_eventscript_fridge_Text_0:
	.string "Looks yummy.$"
