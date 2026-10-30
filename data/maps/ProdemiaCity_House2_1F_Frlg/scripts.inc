ProdemiaCity_House2_1F_Frlg_MapScripts::
	.byte 0


ProdemiaCity_House2_1F_EventScript_FloorSign::
# 9 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	lock
# 10 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_1F_EventScript_FloorSign_Text_0, MSGBOX_SIGN
# 11 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_1F_EventScript_FemaleStudent::
# 19 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	lock
# 20 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_1F_EventScript_FemaleStudent_Text_0
# 22 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_1F_EventScript_MaleStudent::
# 26 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	lock
# 27 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	faceplayer
# 28 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_1F_EventScript_MaleStudent_Text_0
# 29 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_1F_EventScript_FloorSign_Text_0:
# 10 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	.string "1F: COMMON AREA$"

ProdemiaCity_House2_1F_EventScript_FemaleStudent_Text_0:
# 21 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	.string "Aren't you a bit young to be in college?$"

ProdemiaCity_House2_1F_EventScript_MaleStudent_Text_0:
# 28 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	.string "Moving out of my parents' place was\n"
	.string "scary at first.\p"
	.string "But now that I've got the hang of my\n"
	.string "schedule and made new friends, it ain't\l"
	.string "so bad!$"
