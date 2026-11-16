ProdemiaCity_Frlg_MapScripts::
# 2 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ProdemiaCity_OnLoad
# 3 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ProdemiaCity_OnTransition
	.byte 0


ProdemiaCity_OnTransition::
# 11 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_PRODEMIA_CITY_STATE, 0
	goto_if_eq ProdemiaCity_OnTransition_1
# 14 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_PRODEMIA_CITY_STATE, 1
	goto_if_eq ProdemiaCity_OnTransition_2
# 19 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_UMBRA_GRUNTS
# 20 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_UMBRA_THIEF
	return

ProdemiaCity_OnTransition_1:
# 12 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_UMBRA_THIEF
	return

ProdemiaCity_OnTransition_2:
# 15 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_UMBRA_GRUNTS
# 16 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PRODEMIA_UMBRA_THIEF
	return


ProdemiaCity_EventScript_UmbraGruntM::
# 25 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 26 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntM_Text_0
# 27 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 28 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntM_Text_1
# 29 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 23, ProdemiaCity_EventScript_UmbraGruntM_Movement_0
# 30 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 31 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_UmbraGruntF::
# 35 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 36 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntF_Text_0
# 37 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 38 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntF_Text_1
# 39 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 22, ProdemiaCity_EventScript_UmbraGruntF_Movement_0
# 40 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 41 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_Trigger_ThiefLeft::
# 45 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lockall
# 46 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 47 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto ProdemiaCity_EventScript_Thief
	end


ProdemiaCity_Trigger_ThiefMid::
# 52 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lockall
# 53 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 54 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto ProdemiaCity_EventScript_Thief
	end


ProdemiaCity_Trigger_ThiefRight::
# 59 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lockall
# 60 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 61 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto ProdemiaCity_EventScript_Thief
	end


ProdemiaCity_EventScript_Thief::
# 66 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 67 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 68 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	case 0, ProdemiaCity_EventScript_Thief_3
# 70 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	case 1, ProdemiaCity_EventScript_Thief_4
# 72 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	case 2, ProdemiaCity_EventScript_Thief_5
ProdemiaCity_EventScript_Thief_1:
# 75 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 76 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_Thief_Text_0
# 77 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playse SE_PIN
# 78 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 24, ProdemiaCity_EventScript_Thief_Movement_2
# 79 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 80 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	delay 40
# 81 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 24, ProdemiaCity_EventScript_UmbraGruntF_Movement_0
# 82 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_Thief_Text_1
# 83 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 24, ProdemiaCity_EventScript_Thief_Movement_3
# 84 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 85 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_UMBRA_GRUNT_F_PRODEMIA, ProdemiaCity_EventScript_Thief_Text_2
# 86 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_Thief_Text_3
# 87 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 24, ProdemiaCity_EventScript_Thief_Movement_4
# 88 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playse SE_EXIT
# 89 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	removeobject 24
# 90 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar var ( VAR_PRODEMIA_CITY_STATE, 2 )
# 91 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	releaseall
	return

ProdemiaCity_EventScript_Thief_3:
# 69 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaCity_EventScript_Thief_Movement_0
	goto ProdemiaCity_EventScript_Thief_1

ProdemiaCity_EventScript_Thief_4:
# 71 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaCity_EventScript_UmbraGruntM_Movement_0
	goto ProdemiaCity_EventScript_Thief_1

ProdemiaCity_EventScript_Thief_5:
# 73 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaCity_EventScript_Thief_Movement_1
	goto ProdemiaCity_EventScript_Thief_1


ProdemiaCity_OnLoad::
# 95 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_OnLoad_1
	return

ProdemiaCity_OnLoad_1:
# 97 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 32, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 98 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 99 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 100 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 32, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 101 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 102 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 103 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 31, METATILE_ProdemiaCity_TanBrick, FALSE
# 104 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 29, METATILE_ProdemiaCity_TanBrick, FALSE
# 105 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 29, METATILE_ProdemiaCity_TanBrick, FALSE
# 106 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 28, METATILE_ProdemiaCity_TanBrick, FALSE
# 107 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 28, METATILE_ProdemiaCity_TanBrick, FALSE
# 109 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 110 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 111 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 112 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 113 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 114 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 115 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 116 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 30, METATILE_ProdemiaCity_PokeMall_RightWindow, TRUE
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 30, METATILE_ProdemiaCity_PokeMall_RightWall, TRUE
# 119 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 29, METATILE_ProdemiaCity_PokeMall_LeftWall_Top, TRUE
# 120 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 29, METATILE_ProdemiaCity_PokeMall_LeftWindow_Top, TRUE
# 121 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 122 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 123 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 124 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 125 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 126 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 127 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 128 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 129 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 130 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 131 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 132 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 29, METATILE_ProdemiaCity_PokeMall_RightWindow_Top, TRUE
# 133 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 29, METATILE_ProdemiaCity_PokeMall_RightWall_Top, TRUE
# 135 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 28, METATILE_ProdemiaCity_PokeMall_LeftRoof_Bottom, TRUE
# 136 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 137 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 138 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 139 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 140 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 141 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 142 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 143 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 144 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 145 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 146 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 147 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 148 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 149 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 28, METATILE_ProdemiaCity_PokeMall_RightRoof_Bottom, TRUE
# 151 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 27, METATILE_ProdemiaCity_PokeMall_LeftRoof_Middle, TRUE
# 152 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 153 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 154 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 155 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 156 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 157 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 158 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 159 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 160 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 161 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 162 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 163 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 164 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 27, METATILE_ProdemiaCity_PokeMall_RightRoof_Middle, TRUE
# 167 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 26, METATILE_ProdemiaCity_PokeMall_LeftRoof_Top, FALSE
# 168 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 169 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 170 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 171 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 172 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 173 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 174 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 175 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 176 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 177 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 178 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 179 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 180 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 181 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 26, METATILE_ProdemiaCity_PokeMall_RightRoof_Top, FALSE
# 184 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 22, METATILE_ProdemiaCity_PokeMart_ClosedDoor, TRUE
# 187 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 33, METATILE_ProdemiaCity_SilphCoDoor, TRUE
# 188 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 33, METATILE_ProdemiaCity_SilphCoDoor, TRUE
# 190 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	special DrawWholeMapView
	return


ProdemiaCity_EventScript_ProdemiaUniversitySign::
# 198 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 199 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ProdemiaUniversitySign_Text_0, MSGBOX_SIGN
# 200 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_PokeMallSign::
# 204 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 205 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_EventScript_PokeMallSign_2
# 209 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMallSign_Text_1, MSGBOX_SIGN
ProdemiaCity_EventScript_PokeMallSign_1:
# 211 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

ProdemiaCity_EventScript_PokeMallSign_2:
# 206 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMallSign_Text_0, MSGBOX_SIGN
	goto ProdemiaCity_EventScript_PokeMallSign_1


ProdemiaCity_EventScript_PokeMartSign::
# 215 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_EventScript_PokeMartSign_1
	return

ProdemiaCity_EventScript_PokeMartSign_1:
# 216 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 217 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMartSign_Text_0, MSGBOX_SIGN
# 218 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_CitySign::
# 223 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 224 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_CitySign_Text_0, MSGBOX_SIGN
# 225 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_DormSign::
# 229 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 230 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_DormSign_Text_0, MSGBOX_SIGN
# 231 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor1::
# 239 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 240 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 241 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor1_Text_0
# 242 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor2::
# 246 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 247 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 248 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor2_Text_0
# 249 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor3::
# 253 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 254 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 255 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor3_Text_0
# 256 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor4::
# 260 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 261 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 262 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor4_Text_0
# 263 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Gurdurr::
# 267 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 268 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 269 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playmoncry SPECIES_GURDURR, CRY_MODE_NORMAL
# 270 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Gurdurr_Text_0
# 271 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Man::
# 275 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 276 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 277 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Man_Text_0
# 278 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanWest::
# 282 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 283 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 284 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanWest_Text_0
# 285 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanEast::
# 289 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 290 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 291 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanEast_Text_0
# 292 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_TrashcanGuy::
# 296 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 297 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 298 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_TrashcanGuy_Text_0
# 299 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_LittleGirl::
# 303 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 304 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 305 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_LittleGirl_Text_0
# 306 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_BaldingMan::
# 310 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 311 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 312 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_BaldingMan_Text_0
# 313 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Lass::
# 317 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 318 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 319 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Lass_Text_0
# 320 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanSouth::
# 324 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 325 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 326 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanSouth_Text_0
# 327 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Trashcan1::
# 335 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 336 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_TEMP_0, FALSE
	goto_if_eq EventScript_ProdemiaCity_Trashcan1_2
# 343 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Trashcan1_Text_0
EventScript_ProdemiaCity_Trashcan1_1:
# 345 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

EventScript_ProdemiaCity_Trashcan1_2:
# 337 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	call Common_EventScript_TrashcanEncounter
# 338 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_ProdemiaCity_Trashcan1_5
	goto EventScript_ProdemiaCity_Trashcan1_1

EventScript_ProdemiaCity_Trashcan1_5:
# 339 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_0, TRUE
	goto EventScript_ProdemiaCity_Trashcan1_1


EventScript_ProdemiaCity_Trashcan2::
# 349 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 350 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, FALSE
	goto_if_eq EventScript_ProdemiaCity_Trashcan2_2
# 355 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Trashcan1_Text_0
EventScript_ProdemiaCity_Trashcan2_1:
# 357 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

EventScript_ProdemiaCity_Trashcan2_2:
# 351 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	call Common_EventScript_TrashcanEncounter
# 352 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, TRUE
	goto EventScript_ProdemiaCity_Trashcan2_1


# 29 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_UmbraGruntM_Movement_0:
# 29 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_up
	step_end

# 39 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_UmbraGruntF_Movement_0:
# 39 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_down
	step_end

# 69 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_0:
# 69 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_right
# 69 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_up
	step_end

# 73 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_1:
# 73 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 73 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_up
	step_end

# 78 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_2:
# 78 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	emote_question_mark
	step_end

# 83 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_3:
# 83 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_4:
# 87 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 87 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 87 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
	step_end

ProdemiaCity_EventScript_UmbraGruntM_Text_0:
# 26 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Mutter mutter mutter...$"

ProdemiaCity_EventScript_UmbraGruntM_Text_1:
# 28 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Hey kid, can't you see we're busy\n"
	.string "scheming? Get lost!$"

ProdemiaCity_EventScript_UmbraGruntF_Text_0:
# 36 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Whisper whisper whisper...$"

ProdemiaCity_EventScript_UmbraGruntF_Text_1:
# 38 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Tch! Stop eavesdropping! Scram!$"

ProdemiaCity_EventScript_Thief_Text_0:
# 76 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Hehehehe! Mother is sure to be pleased\n"
	.string "with us for stealing this.$"

ProdemiaCity_EventScript_Thief_Text_1:
# 82 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Hey! This doesn't concern you. The\n"
	.string "motives of the Umbra Clan are far\l"
	.string "beyond what your puny brain can\l"
	.string "comprehend.\p"
	.string "But you look like you came to fight, so a\n"
	.string "fight is what you'll get!$"

ProdemiaCity_EventScript_Thief_Text_2:
# 85 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "What?! Impossible!$"

ProdemiaCity_EventScript_Thief_Text_3:
# 86 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Grrr, you're stronger than you look.\p"
	.string "But you're too late. My partner has the\n"
	.string "book, and he's long gone!\p"
	.string "The Umbra Clan will not rest until\n"
	.string "Meddoh is engulfed in darkness!$"

ProdemiaCity_EventScript_ProdemiaUniversitySign_Text_0:
# 199 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia University\l"
	.string "“The brightest minds in Meddoh.”$"

ProdemiaCity_EventScript_PokeMallSign_Text_0:
# 206 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "NOW OPEN!\l"
	.string "The Prodemia Poké Mall!\p"
	.string "Shop til you drop!$"

ProdemiaCity_EventScript_PokeMallSign_Text_1:
# 209 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "COMING SOON!\l"
	.string "The Prodemia Poké Mall!\p"
	.string "Shop til you drop!$"

ProdemiaCity_EventScript_PokeMartSign_Text_0:
# 217 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "PERMANENTLY CLOSED\p"
	.string "Thank you to our dedicated customers!$"

ProdemiaCity_EventScript_CitySign_Text_0:
# 224 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia City\l"
	.string "“Always moving forward.”$"

ProdemiaCity_EventScript_DormSign_Text_0:
# 230 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia University Dormitories$"

EventScript_ProdemiaCity_Contractor1_Text_0:
# 241 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You don't have a hard hat? Be careful!$"

EventScript_ProdemiaCity_Contractor2_Text_0:
# 248 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "These steel girders are called “I”\n"
	.string "beams because of their shape.\p"
	.string "I wonder if they have beams for the\n"
	.string "other letters of the alphabet?$"

EventScript_ProdemiaCity_Contractor3_Text_0:
# 255 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Working in construction is great!\p"
	.string "I get to literally make my mark on the\n"
	.string "world.$"

EventScript_ProdemiaCity_Contractor4_Text_0:
# 262 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "What? No, the mall won't be completed\n"
	.string "for a while.\p"
	.string "The Poké Mart is still open, though.$"

EventScript_ProdemiaCity_Gurdurr_Text_0:
# 270 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Gurr!$"

EventScript_ProdemiaCity_Man_Text_0:
# 277 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You came from Shaydwell Town? I heard\n"
	.string "it's quaint there.\p"
	.string "But I like the hustle and bustle. That's\n"
	.string "why I moved to Prodemia.$"

EventScript_ProdemiaCity_WomanWest_Text_0:
# 284 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia used to be a slow, quiet town\n"
	.string "before the University got so big.\p"
	.string "Now I can barely hear myself think!$"

EventScript_ProdemiaCity_WomanEast_Text_0:
# 291 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You look like a Pokémon Trainer. Have\n"
	.string "you met Professor Holly?\p"
	.string "I've heard she's looking for someone to\n"
	.string "help with her research.$"

EventScript_ProdemiaCity_TrashcanGuy_Text_0:
# 298 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I wasn't trash picking, I swear!\p"
	.string ".....\l"
	.string "Alright, you got me.\p"
	.string "But don't knock it til you try it! I've\n"
	.string "found some pretty neat stuff.$"

EventScript_ProdemiaCity_LittleGirl_Text_0:
# 305 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "College sounds like so much fun! It's\n"
	.string "like school but with more play time.$"

EventScript_ProdemiaCity_BaldingMan_Text_0:
# 312 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia City doesn't have a Gym\n"
	.string "Leader.\p"
	.string "I guess all the college students are\n"
	.string "too bookish for that kind of thing.$"

EventScript_ProdemiaCity_Lass_Text_0:
# 319 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I'm a huge shopper, so I'm super excited\n"
	.string "for the new Poké Mall to be built!$"

EventScript_ProdemiaCity_WomanSouth_Text_0:
# 326 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I just got back from visiting a friend\n"
	.string "in Silicraft City.\p"
	.string "She owns an art studio that sells glass\n"
	.string "flutes.$"

EventScript_ProdemiaCity_Trashcan1_Text_0:
# 343 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "There's a foul stench...$"
