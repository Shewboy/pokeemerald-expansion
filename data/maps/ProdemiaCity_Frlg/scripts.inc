ProdemiaCity_Frlg_MapScripts::
	.byte 0


EventScript_ProdemiaUniversity_Sign::
# 9 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 10 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaUniversity_Sign_Text_0, MSGBOX_SIGN
# 11 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_PokeMall_Sign::
# 15 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 16 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_PokeMall_Sign_Text_0, MSGBOX_SIGN
# 17 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_CitySign::
# 21 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 22 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_CitySign_Text_0, MSGBOX_SIGN
# 23 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaUniversity_Sign_Text_0:
# 10 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia University\l"
	.string "“The brightest minds in Lumina.”$"

EventScript_PokeMall_Sign_Text_0:
# 16 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "COMING SOON!\l"
	.string "The Prodemia Poké Mall!\p"
	.string "Shop til you drop!$"

EventScript_ProdemiaCity_CitySign_Text_0:
# 22 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia City\l"
	.string "“Always moving forward.”$"
