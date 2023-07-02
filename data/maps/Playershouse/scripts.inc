Playershouse_MapScripts::
	.byte 0

controllershouse_eventscript_fridge::
	lockall
	msgbox controllershouse_eventscript_fridge_Text_0
	releaseall
	return


controllershouse_eventscript_fridge_Text_0:
	.string "Looks yummy.$"
