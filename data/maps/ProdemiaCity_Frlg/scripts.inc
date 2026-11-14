ProdemiaCity_Frlg_MapScripts::
# 2 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ProdemiaCity_OnLoad
	.byte 0


ProdemiaCity_EventScript_UmbraGruntM::
# 10 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 11 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntM_Text_0
# 12 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 13 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntM_Text_1
# 14 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 23, ProdemiaCity_EventScript_UmbraGruntM_Movement_0
# 15 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 16 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_UmbraGruntF::
# 20 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 21 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntF_Text_0
# 22 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntF_Text_1
# 24 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 22, ProdemiaCity_EventScript_UmbraGruntF_Movement_0
# 25 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 26 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_OnLoad::
# 30 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_OnLoad_1
	return

ProdemiaCity_OnLoad_1:
# 32 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 32, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 33 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 34 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 35 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 32, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 36 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 37 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 38 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 31, METATILE_ProdemiaCity_TanBrick, FALSE
# 39 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 29, METATILE_ProdemiaCity_TanBrick, FALSE
# 40 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 29, METATILE_ProdemiaCity_TanBrick, FALSE
# 41 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 28, METATILE_ProdemiaCity_TanBrick, FALSE
# 42 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 28, METATILE_ProdemiaCity_TanBrick, FALSE
# 44 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 45 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 46 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 47 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 48 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 49 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 50 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 51 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 30, METATILE_ProdemiaCity_PokeMall_RightWindow, TRUE
# 52 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 30, METATILE_ProdemiaCity_PokeMall_RightWall, TRUE
# 54 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 29, METATILE_ProdemiaCity_PokeMall_LeftWall_Top, TRUE
# 55 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 29, METATILE_ProdemiaCity_PokeMall_LeftWindow_Top, TRUE
# 56 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 57 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 58 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 59 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 60 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 61 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 62 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 63 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 64 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 65 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 66 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 67 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 29, METATILE_ProdemiaCity_PokeMall_RightWindow_Top, TRUE
# 68 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 29, METATILE_ProdemiaCity_PokeMall_RightWall_Top, TRUE
# 70 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 28, METATILE_ProdemiaCity_PokeMall_LeftRoof_Bottom, TRUE
# 71 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 72 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 73 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 74 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 75 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 76 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 77 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 78 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 79 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 80 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 81 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 82 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 83 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 84 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 28, METATILE_ProdemiaCity_PokeMall_RightRoof_Bottom, TRUE
# 86 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 27, METATILE_ProdemiaCity_PokeMall_LeftRoof_Middle, TRUE
# 87 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 88 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 89 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 90 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 91 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 92 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 93 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 94 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 95 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 96 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 97 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 98 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 99 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 100 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 27, METATILE_ProdemiaCity_PokeMall_RightRoof_Middle, TRUE
# 102 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 26, METATILE_ProdemiaCity_PokeMall_LeftRoof_Top, FALSE
# 103 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 104 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 105 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 106 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 107 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 108 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 109 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 110 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 111 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 112 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 113 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 114 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 115 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 116 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 26, METATILE_ProdemiaCity_PokeMall_RightRoof_Top, FALSE
# 119 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 22, METATILE_ProdemiaCity_PokeMart_ClosedDoor, TRUE
# 122 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 33, METATILE_ProdemiaCity_SilphCoDoor, TRUE
# 123 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 33, METATILE_ProdemiaCity_SilphCoDoor, TRUE
# 125 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	special DrawWholeMapView
	return


ProdemiaCity_EventScript_ProdemiaUniversitySign::
# 133 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 134 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ProdemiaUniversitySign_Text_0, MSGBOX_SIGN
# 135 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_PokeMallSign::
# 139 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 140 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_EventScript_PokeMallSign_2
# 144 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMallSign_Text_1, MSGBOX_SIGN
ProdemiaCity_EventScript_PokeMallSign_1:
# 146 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

ProdemiaCity_EventScript_PokeMallSign_2:
# 141 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMallSign_Text_0, MSGBOX_SIGN
	goto ProdemiaCity_EventScript_PokeMallSign_1


ProdemiaCity_EventScript_PokeMartSign::
# 150 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_EventScript_PokeMartSign_1
	return

ProdemiaCity_EventScript_PokeMartSign_1:
# 151 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 152 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMartSign_Text_0, MSGBOX_SIGN
# 153 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_CitySign::
# 158 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 159 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_CitySign_Text_0, MSGBOX_SIGN
# 160 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_DormSign::
# 164 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_DormSign_Text_0, MSGBOX_SIGN
# 166 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor1::
# 174 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 175 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 176 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor1_Text_0
# 177 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor2::
# 181 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 182 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 183 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor2_Text_0
# 184 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor3::
# 188 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 189 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 190 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor3_Text_0
# 191 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor4::
# 195 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 196 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 197 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor4_Text_0
# 198 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Gurdurr::
# 202 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 203 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 204 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playmoncry SPECIES_GURDURR, CRY_MODE_NORMAL
# 205 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Gurdurr_Text_0
# 206 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Man::
# 210 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 211 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 212 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Man_Text_0
# 213 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanWest::
# 217 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 218 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 219 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanWest_Text_0
# 220 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanEast::
# 224 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 225 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 226 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanEast_Text_0
# 227 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_TrashcanGuy::
# 231 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 232 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 233 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_TrashcanGuy_Text_0
# 234 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_LittleGirl::
# 238 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 239 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 240 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_LittleGirl_Text_0
# 241 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_BaldingMan::
# 245 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 246 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 247 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_BaldingMan_Text_0
# 248 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Lass::
# 252 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 253 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 254 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Lass_Text_0
# 255 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanSouth::
# 259 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 260 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 261 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanSouth_Text_0
# 262 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Trashcan1::
# 270 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 271 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_TEMP_0, FALSE
	goto_if_eq EventScript_ProdemiaCity_Trashcan1_2
# 278 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Trashcan1_Text_0
EventScript_ProdemiaCity_Trashcan1_1:
# 280 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

EventScript_ProdemiaCity_Trashcan1_2:
# 272 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	call Common_EventScript_TrashcanEncounter
# 273 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_ProdemiaCity_Trashcan1_5
	goto EventScript_ProdemiaCity_Trashcan1_1

EventScript_ProdemiaCity_Trashcan1_5:
# 274 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_0, TRUE
	goto EventScript_ProdemiaCity_Trashcan1_1


EventScript_ProdemiaCity_Trashcan2::
# 284 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 285 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, FALSE
	goto_if_eq EventScript_ProdemiaCity_Trashcan2_2
# 290 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Trashcan1_Text_0
EventScript_ProdemiaCity_Trashcan2_1:
# 292 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

EventScript_ProdemiaCity_Trashcan2_2:
# 286 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	call Common_EventScript_TrashcanEncounter
# 287 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, TRUE
	goto EventScript_ProdemiaCity_Trashcan2_1


# 14 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_UmbraGruntM_Movement_0:
# 14 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_up
	step_end

# 24 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_UmbraGruntF_Movement_0:
# 24 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_down
	step_end

ProdemiaCity_EventScript_UmbraGruntM_Text_0:
# 11 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Mutter mutter mutter...$"

ProdemiaCity_EventScript_UmbraGruntM_Text_1:
# 13 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Hey kid, can't you see we're busy\n"
	.string "scheming? Get lost!$"

ProdemiaCity_EventScript_UmbraGruntF_Text_0:
# 21 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Whisper whisper whisper...$"

ProdemiaCity_EventScript_UmbraGruntF_Text_1:
# 23 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Tch! Stop eavesdropping! Scram!$"

ProdemiaCity_EventScript_ProdemiaUniversitySign_Text_0:
# 134 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia University\l"
	.string "“The brightest minds in Meddoh.”$"

ProdemiaCity_EventScript_PokeMallSign_Text_0:
# 141 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "NOW OPEN!\l"
	.string "The Prodemia Poké Mall!\p"
	.string "Shop til you drop!$"

ProdemiaCity_EventScript_PokeMallSign_Text_1:
# 144 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "COMING SOON!\l"
	.string "The Prodemia Poké Mall!\p"
	.string "Shop til you drop!$"

ProdemiaCity_EventScript_PokeMartSign_Text_0:
# 152 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "PERMANENTLY CLOSED\p"
	.string "Thank you to our dedicated customers!$"

ProdemiaCity_EventScript_CitySign_Text_0:
# 159 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia City\l"
	.string "“Always moving forward.”$"

ProdemiaCity_EventScript_DormSign_Text_0:
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia University Dormitories$"

EventScript_ProdemiaCity_Contractor1_Text_0:
# 176 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You don't have a hard hat? Be careful!$"

EventScript_ProdemiaCity_Contractor2_Text_0:
# 183 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "These steel girders are called “I”\n"
	.string "beams because of their shape.\p"
	.string "I wonder if they have beams for the\n"
	.string "other letters of the alphabet?$"

EventScript_ProdemiaCity_Contractor3_Text_0:
# 190 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Working in construction is great!\p"
	.string "I get to literally make my mark on the\n"
	.string "world.$"

EventScript_ProdemiaCity_Contractor4_Text_0:
# 197 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "What? No, the mall won't be completed\n"
	.string "for a while.\p"
	.string "The Poké Mart is still open, though.$"

EventScript_ProdemiaCity_Gurdurr_Text_0:
# 205 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Gurr!$"

EventScript_ProdemiaCity_Man_Text_0:
# 212 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You came from Shaydwell Town? I heard\n"
	.string "it's quaint there.\p"
	.string "But I like the hustle and bustle. That's\n"
	.string "why I moved to Prodemia.$"

EventScript_ProdemiaCity_WomanWest_Text_0:
# 219 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia used to be a slow, quiet town\n"
	.string "before the University got so big.\p"
	.string "Now I can barely hear myself think!$"

EventScript_ProdemiaCity_WomanEast_Text_0:
# 226 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You look like a Pokémon Trainer. Have\n"
	.string "you met Professor Holly?\p"
	.string "I've heard she's looking for someone to\n"
	.string "help with her research.$"

EventScript_ProdemiaCity_TrashcanGuy_Text_0:
# 233 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I wasn't trash picking, I swear!\p"
	.string ".....\l"
	.string "Alright, you got me.\p"
	.string "But don't knock it til you try it! I've\n"
	.string "found some pretty neat stuff.$"

EventScript_ProdemiaCity_LittleGirl_Text_0:
# 240 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "College sounds like so much fun! It's\n"
	.string "like school but with more play time.$"

EventScript_ProdemiaCity_BaldingMan_Text_0:
# 247 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia City doesn't have a Gym\n"
	.string "Leader.\p"
	.string "I guess all the college students are\n"
	.string "too bookish for that kind of thing.$"

EventScript_ProdemiaCity_Lass_Text_0:
# 254 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I'm a huge shopper, so I'm super excited\n"
	.string "for the new Poké Mall to be built!$"

EventScript_ProdemiaCity_WomanSouth_Text_0:
# 261 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I just got back from visiting a friend\n"
	.string "in Silicraft City.\p"
	.string "She owns an art studio that sells glass\n"
	.string "flutes.$"

EventScript_ProdemiaCity_Trashcan1_Text_0:
# 278 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "There's a foul stench...$"
