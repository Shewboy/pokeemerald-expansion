ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg_MapScripts::
	.byte 0


ProdemiaUniversity_EventScript_LabSign::
# 9 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	lock
# 10 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_LabSign_Text_0, MSGBOX_SIGN
# 11 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_LibrarySign::
# 15 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	lock
# 16 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_LibrarySign_Text_0, MSGBOX_SIGN
# 17 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_LectureHall1Sign::
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	lock
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_LectureHall1Sign_Text_0, MSGBOX_SIGN
# 23 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_LectureHall2Sign::
# 27 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	lock
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_LectureHall2Sign_Text_0, MSGBOX_SIGN
# 29 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_Admin::
# 36 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	lock
# 37 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	faceplayer
# 38 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Admin_Text_0
# 39 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_WanderingStudent::
# 43 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	lock
# 44 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_WanderingStudent_Text_0
# 46 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_LabSign_Text_0:
# 10 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	.string "RESEARCH LAB$"

ProdemiaUniversity_EventScript_LibrarySign_Text_0:
# 16 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	.string "LIBRARY$"

ProdemiaUniversity_EventScript_LectureHall1Sign_Text_0:
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	.string "LECTURE HALL 1$"

ProdemiaUniversity_EventScript_LectureHall2Sign_Text_0:
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	.string "LECTURE HALL 2$"

ProdemiaUniversity_EventScript_Admin_Text_0:
# 38 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	.string "Welcome!\p"
	.string "Lecture halls are down the hallway to\n"
	.string "your right.\p"
	.string "The library and research lab are to the\n"
	.string "left.$"

ProdemiaUniversity_EventScript_WanderingStudent_Text_0:
# 45 "data/maps/ProdemiaCity_ProdemiaUniversity_EntryHall_Frlg/scripts.pory"
	.string "When I'm feeling stressed about my\n"
	.string "classes, I sometimes wander the\l"
	.string "hallways to clear my head.\p"
	.string "As important as it is to study hard, it's\n"
	.string "equally important to take breaks.$"
