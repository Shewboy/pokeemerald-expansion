ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg_MapScripts::
	.byte 0


ProdemiaUniversity_EventScript_Admin::
# 5 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	lock
# 6 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	faceplayer
# 7 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Admin_Text_0
# 8 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_Admin_Text_0:
# 7 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	.string "Welcome!\p"
	.string "Lecture halls are down the hallway to\n"
	.string "your right.\p"
	.string "The library and research lab are to the\n"
	.string "left.$"
