ProdemiaCity_House2_1F_Frlg_MapScripts::
	.byte 0


ProdemiaCity_House2_1F_EventScript_FemaleStudent::
# 5 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	lock
# 6 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	faceplayer
# 7 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_1F_EventScript_FemaleStudent_Text_0
# 8 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_1F_EventScript_MaleStudent::
# 12 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_1F_EventScript_MaleStudent_Text_0
# 15 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_1F_EventScript_FemaleStudent_Text_0:
# 7 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	.string "Aren't you a bit young to be in college?$"

ProdemiaCity_House2_1F_EventScript_MaleStudent_Text_0:
# 14 "data/maps/ProdemiaCity_House2_1F_Frlg/scripts.pory"
	.string "Moving out of my parents' place was\n"
	.string "scary at first.\p"
	.string "But now that I've got the hang of my\n"
	.string "schedule and made new friends, it ain't\l"
	.string "so bad!$"
