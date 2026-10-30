ProdemiaCity_House4_Frlg_MapScripts::
	.byte 0


ProdemiaCity_House4_EventScript_Mother::
# 5 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	lock
# 6 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	faceplayer
# 7 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	msgbox ProdemiaCity_House4_EventScript_Mother_Text_0
# 8 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House4_EventScript_Son::
# 12 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	lock
# 13 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	msgbox ProdemiaCity_House4_EventScript_Son_Text_0
# 15 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House4_EventScript_Mother_Text_0:
# 7 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	.string "I can't get him to stop pretending to be\n"
	.string "a Gurdurr.\p"
	.string "He keeps carrying stuff over his head\n"
	.string "and grunting.$"

ProdemiaCity_House4_EventScript_Son_Text_0:
# 14 "data/maps/ProdemiaCity_House4_Frlg/scripts.pory"
	.string "GURR!$"
