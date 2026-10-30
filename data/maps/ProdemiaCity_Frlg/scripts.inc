ProdemiaCity_Frlg_MapScripts::
# 2 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ProdemiaCity_OnLoad
	.byte 0


ProdemiaCity_OnLoad::
# 7 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_OnLoad_1
	return

ProdemiaCity_OnLoad_1:
# 9 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 32, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 10 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 11 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 12 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 32, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 13 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 14 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 15 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 31, METATILE_ProdemiaCity_TanBrick, FALSE
# 16 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 29, METATILE_ProdemiaCity_TanBrick, FALSE
# 17 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 29, METATILE_ProdemiaCity_TanBrick, FALSE
# 18 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 28, METATILE_ProdemiaCity_TanBrick, FALSE
# 19 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 28, METATILE_ProdemiaCity_TanBrick, FALSE
# 21 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 22 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 23 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 24 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 25 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 26 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 27 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 28 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 30, METATILE_ProdemiaCity_PokeMall_RightWindow, TRUE
# 29 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 30, METATILE_ProdemiaCity_PokeMall_RightWall, TRUE
# 31 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 29, METATILE_ProdemiaCity_PokeMall_LeftWall_Top, TRUE
# 32 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 29, METATILE_ProdemiaCity_PokeMall_LeftWindow_Top, TRUE
# 33 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 34 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 35 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 36 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 37 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 38 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 39 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 40 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 41 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 42 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 43 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 44 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 29, METATILE_ProdemiaCity_PokeMall_RightWindow_Top, TRUE
# 45 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 29, METATILE_ProdemiaCity_PokeMall_RightWall_Top, TRUE
# 47 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 28, METATILE_ProdemiaCity_PokeMall_LeftRoof_Bottom, TRUE
# 48 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 49 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 50 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 51 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 52 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 53 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 54 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 55 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 56 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 57 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 58 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 59 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 60 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 61 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 28, METATILE_ProdemiaCity_PokeMall_RightRoof_Bottom, TRUE
# 63 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 27, METATILE_ProdemiaCity_PokeMall_LeftRoof_Middle, TRUE
# 64 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 65 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 66 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 67 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 68 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 69 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 70 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 71 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 72 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 73 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 74 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 75 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 76 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 77 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 27, METATILE_ProdemiaCity_PokeMall_RightRoof_Middle, TRUE
# 79 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 26, METATILE_ProdemiaCity_PokeMall_LeftRoof_Top, FALSE
# 80 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 81 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 82 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 83 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 84 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 85 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 86 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 87 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 88 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 89 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 90 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 91 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 92 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 93 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 26, METATILE_ProdemiaCity_PokeMall_RightRoof_Top, FALSE
# 96 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 22, METATILE_ProdemiaCity_PokeMart_ClosedDoor, TRUE
# 99 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 33, METATILE_ProdemiaCity_SilphCoDoor, TRUE
# 100 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 33, METATILE_ProdemiaCity_SilphCoDoor, TRUE
# 102 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	special DrawWholeMapView
	return


ProdemiaCity_EventScript_ProdemiaUniversitySign::
# 110 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 111 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ProdemiaUniversitySign_Text_0, MSGBOX_SIGN
# 112 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_PokeMallSign::
# 116 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_EventScript_PokeMallSign_2
# 121 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMallSign_Text_1, MSGBOX_SIGN
ProdemiaCity_EventScript_PokeMallSign_1:
# 123 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

ProdemiaCity_EventScript_PokeMallSign_2:
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMallSign_Text_0, MSGBOX_SIGN
	goto ProdemiaCity_EventScript_PokeMallSign_1


ProdemiaCity_EventScript_PokeMartSign::
# 127 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_EventScript_PokeMartSign_1
	return

ProdemiaCity_EventScript_PokeMartSign_1:
# 128 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 129 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMartSign_Text_0, MSGBOX_SIGN
# 130 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_CitySign::
# 135 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 136 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_CitySign_Text_0, MSGBOX_SIGN
# 137 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_DormSign::
# 141 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 142 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_DormSign_Text_0, MSGBOX_SIGN
# 143 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor1::
# 151 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 152 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 153 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor1_Text_0
# 154 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor2::
# 158 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 159 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 160 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor2_Text_0
# 161 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor3::
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 166 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 167 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor3_Text_0
# 168 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor4::
# 172 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 173 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 174 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor4_Text_0
# 175 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Gurdurr::
# 179 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 180 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 181 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playmoncry SPECIES_GURDURR, CRY_MODE_NORMAL
# 182 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Gurdurr_Text_0
# 183 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Man::
# 187 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 188 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 189 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Man_Text_0
# 190 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanWest::
# 194 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 195 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 196 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanWest_Text_0
# 197 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanEast::
# 201 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 202 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 203 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanEast_Text_0
# 204 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_TrashcanGuy::
# 208 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 209 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 210 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_TrashcanGuy_Text_0
# 211 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_LittleGirl::
# 215 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 216 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 217 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_LittleGirl_Text_0
# 218 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_BaldingMan::
# 222 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 223 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 224 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_BaldingMan_Text_0
# 225 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Lass::
# 229 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 230 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 231 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Lass_Text_0
# 232 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanSouth::
# 236 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 237 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 238 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanSouth_Text_0
# 239 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_ProdemiaUniversitySign_Text_0:
# 111 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia University\l"
	.string "“The brightest minds in Meddoh.”$"

ProdemiaCity_EventScript_PokeMallSign_Text_0:
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "NOW OPEN!\l"
	.string "The Prodemia Poké Mall!\p"
	.string "Shop til you drop!$"

ProdemiaCity_EventScript_PokeMallSign_Text_1:
# 121 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "COMING SOON!\l"
	.string "The Prodemia Poké Mall!\p"
	.string "Shop til you drop!$"

ProdemiaCity_EventScript_PokeMartSign_Text_0:
# 129 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "PERMANENTLY CLOSED\p"
	.string "Thank you to our dedicated customers!$"

ProdemiaCity_EventScript_CitySign_Text_0:
# 136 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia City\l"
	.string "“Always moving forward.”$"

ProdemiaCity_EventScript_DormSign_Text_0:
# 142 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia University Dormitories$"

EventScript_ProdemiaCity_Contractor1_Text_0:
# 153 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You don't have a hard hat? Be careful!$"

EventScript_ProdemiaCity_Contractor2_Text_0:
# 160 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "These steel girders are called “I”\n"
	.string "beams because of their shape.\p"
	.string "I wonder if they have beams for the\n"
	.string "other letters of the alphabet?$"

EventScript_ProdemiaCity_Contractor3_Text_0:
# 167 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Working in construction is great!\p"
	.string "I get to literally make my mark on the\n"
	.string "world.$"

EventScript_ProdemiaCity_Contractor4_Text_0:
# 174 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "What? No, the mall won't be completed\n"
	.string "for a while.\p"
	.string "The Poké Mart is still open, though.$"

EventScript_ProdemiaCity_Gurdurr_Text_0:
# 182 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Gurr!$"

EventScript_ProdemiaCity_Man_Text_0:
# 189 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You came from Shaydwell Town? I heard\n"
	.string "it's quaint there.\p"
	.string "But I like the hustle and bustle. That's\n"
	.string "why I moved to Prodemia.$"

EventScript_ProdemiaCity_WomanWest_Text_0:
# 196 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia used to be a slow, quiet town\n"
	.string "before the University got so big.\p"
	.string "Now I can barely hear myself think!$"

EventScript_ProdemiaCity_WomanEast_Text_0:
# 203 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You look like a Pokémon Trainer. Have\n"
	.string "you met Professor Holly?\p"
	.string "I've heard she's looking for someone to\n"
	.string "help with her research.$"

EventScript_ProdemiaCity_TrashcanGuy_Text_0:
# 210 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I wasn't trash picking, I swear!\p"
	.string ".....\l"
	.string "Alright, you got me.\p"
	.string "But don't knock it til you try it! I've\n"
	.string "found some pretty neat stuff.$"

EventScript_ProdemiaCity_LittleGirl_Text_0:
# 217 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "College sounds like so much fun! It's\n"
	.string "like school but with more play time.$"

EventScript_ProdemiaCity_BaldingMan_Text_0:
# 224 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia City doesn't have a Gym\n"
	.string "Leader.\p"
	.string "I guess all the college students are\n"
	.string "too bookish for that kind of thing.$"

EventScript_ProdemiaCity_Lass_Text_0:
# 231 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I'm a huge shopper, so I'm super excited\n"
	.string "for the new Poké Mall to be built!$"

EventScript_ProdemiaCity_WomanSouth_Text_0:
# 238 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I just got back from visiting a friend\n"
	.string "in Silicraft City.\p"
	.string "She owns an art studio that sells glass\n"
	.string "flutes.$"
