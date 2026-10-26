ProdemiaCity_House1_Frlg_MapScripts::
	.byte 0


ProdemiaCity_House1_EventScript_Woman::
# 5 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	lock
# 6 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	faceplayer
# 7 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	msgbox ProdemiaCity_House1_EventScript_Woman_Text_0
# 8 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House1_EventScript_Hoothoot::
# 12 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	lock
# 13 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_NORMAL
# 15 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	msgbox ProdemiaCity_House1_EventScript_Hoothoot_Text_0
# 16 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House1_EventScript_Woman_Text_0:
# 7 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	.string "Conifear Forest isn't for the faint of\n"
	.string "heart.\p"
	.string "Not only is it easy to get lost, it's\n"
	.string "teeming with Ghost Pokémon.$"

ProdemiaCity_House1_EventScript_Hoothoot_Text_0:
# 15 "data/maps/ProdemiaCity_House1_Frlg/scripts.pory"
	.string "Who?$"
