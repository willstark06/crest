glendalehouse2up_MapScripts::
	.byte 0


glendalehouse2upshelf::
	lockall
	msgbox glendalehouse2upshelf_Text_0
	waitmessage
	releaseall
	return


glendalehouse2uptrash::
	lockall
	msgbox glendalehouse2uptrash_Text_0
	waitmessage
	giveitem ITEM_POKE_BALL, 5
	releaseall
	return


glendalehouse2upbed::
	lockall
	msgbox glendalehouse2upbed_Text_0
	waitmessage
	releaseall
	return


glendalehouse2upshelf_Text_0:
	.string "It's empty.$"

glendalehouse2uptrash_Text_0:
	.string "It's a trash can.\p"
	.string "There's something inside!$"

glendalehouse2upbed_Text_0:
	.string "It's Henry's old bed from before he left\n"
	.string "town to become a POKéMON trainer...\p"
	.string "Hopefully that worked out for him.$"
