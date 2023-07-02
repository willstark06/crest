Playershouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, controllershouse_ontransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


controllershouse_ontransition::
	setrespawn HEAL_LOCATION_CONTROLLERS_HOUSE
	end


controllershouse_eventscript_fridge::
	lockall
	msgbox controllershouse_eventscript_fridge_Text_0
	releaseall
	return


controllershouse_eventscript_bed::
	lockall
	msgbox controllershouse_eventscript_bed_Text_0
	releaseall
	return


controllershouse_eventscript_shelf::
	lockall
	msgbox controllershouse_eventscript_shelf_Text_0
	releaseall
	return


controllershouse_eventscript_hermiebed::
	lockall
	msgbox controllershouse_eventscript_hermiebed_Text_0
	releaseall
	return


controllershouse_eventscript_fridge_Text_0:
	.string "Looks yummy.$"

controllershouse_eventscript_bed_Text_0:
	.string "It's your bed. It could be comfier.$"

controllershouse_eventscript_shelf_Text_0:
	.string "It's DAD's research instruments.$"

controllershouse_eventscript_hermiebed_Text_0:
	.string "It's Hermie's bed.$"
