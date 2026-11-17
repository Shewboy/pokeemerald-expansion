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
# 16 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_PRODEMIA_CITY_STATE, 1
	goto_if_eq ProdemiaCity_OnTransition_2
# 22 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_UMBRA_GRUNTS
# 23 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_UMBRA_THIEF
# 24 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_SALLY_HOLLY_PRODEMIA
	return

ProdemiaCity_OnTransition_1:
# 12 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PRODEMIA_UMBRA_GRUNTS
# 13 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_UMBRA_THIEF
# 14 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_SALLY_HOLLY_PRODEMIA
	return

ProdemiaCity_OnTransition_2:
# 17 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_UMBRA_GRUNTS
# 18 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PRODEMIA_UMBRA_THIEF
# 19 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_SALLY_HOLLY_PRODEMIA
	return


ProdemiaCity_EventScript_UmbraGruntM::
# 29 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 30 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntM_Text_0
# 31 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 32 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntM_Text_1
# 33 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 23, ProdemiaCity_EventScript_UmbraGruntM_Movement_0
# 34 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 35 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_UmbraGruntF::
# 39 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 40 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntF_Text_0
# 41 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 42 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_UmbraGruntF_Text_1
# 43 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 22, ProdemiaCity_EventScript_UmbraGruntF_Movement_0
# 44 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 45 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_Trigger_ThiefBottom::
# 49 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lockall
# 50 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 51 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto ProdemiaCity_EventScript_Thief
	end


ProdemiaCity_Trigger_ThiefMidBottom::
# 56 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lockall
# 57 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 58 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto ProdemiaCity_EventScript_Thief
	end


ProdemiaCity_Trigger_ThiefMidTop::
# 63 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lockall
# 64 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 65 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto ProdemiaCity_EventScript_Thief
	end


ProdemiaCity_Trigger_ThiefTop::
# 70 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lockall
# 71 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 72 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto ProdemiaCity_EventScript_Thief
	end


ProdemiaCity_EventScript_Thief::
# 77 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 78 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 79 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	case 0, ProdemiaCity_EventScript_Thief_3
# 81 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	case 1, ProdemiaCity_EventScript_Thief_4
# 83 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	case 2, ProdemiaCity_EventScript_Thief_5
# 85 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	case 3, ProdemiaCity_EventScript_Thief_6
ProdemiaCity_EventScript_Thief_1:
# 88 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 89 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_Thief_Text_0
# 90 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playse SE_PIN
# 91 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 24, ProdemiaCity_EventScript_Thief_Movement_4
# 92 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 93 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	delay 40
# 94 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 24, ProdemiaCity_EventScript_Thief_Movement_5
# 95 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_Thief_Text_1
# 96 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 24, ProdemiaCity_EventScript_Thief_Movement_6
# 97 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 98 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_UMBRA_CLAN_F_PRODEMIA, ProdemiaCity_EventScript_Thief_Text_2
# 99 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_Thief_Text_3
# 100 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	closemessage
# 101 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 24, ProdemiaCity_EventScript_Thief_Movement_7
# 102 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 103 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playse SE_EXIT
# 104 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	removeobject 24
# 105 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	fadedefaultbgm
# 106 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	delay 40
# 107 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_PRODEMIA_CITY_STATE, 2
# 108 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto ProdemiaCity_EventScript_ReceivePokedex
	return

ProdemiaCity_EventScript_Thief_3:
# 80 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaCity_EventScript_Thief_Movement_0
	goto ProdemiaCity_EventScript_Thief_1

ProdemiaCity_EventScript_Thief_4:
# 82 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaCity_EventScript_Thief_Movement_1
	goto ProdemiaCity_EventScript_Thief_1

ProdemiaCity_EventScript_Thief_5:
# 84 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaCity_EventScript_Thief_Movement_2
	goto ProdemiaCity_EventScript_Thief_1

ProdemiaCity_EventScript_Thief_6:
# 86 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaCity_EventScript_Thief_Movement_3
	goto ProdemiaCity_EventScript_Thief_1


ProdemiaCity_EventScript_ReceivePokedex::
# 112 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_0
# 113 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	closemessage
# 114 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	addobject 25
# 115 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	addobject 26
# 116 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaCity_EventScript_Thief_Movement_5
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 25, ProdemiaCity_EventScript_ReceivePokedex_Movement_0
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 26, ProdemiaCity_EventScript_ReceivePokedex_Movement_1
# 119 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 120 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_1
# 121 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 122 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_2
# 123 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 26, ProdemiaCity_EventScript_UmbraGruntM_Movement_0
# 124 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 125 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_3
# 126 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 25, ProdemiaCity_EventScript_UmbraGruntF_Movement_0
# 127 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 128 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_4
# 129 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 25, ProdemiaCity_EventScript_Thief_Movement_1
# 130 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 26, ProdemiaCity_EventScript_Thief_Movement_1
# 131 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 132 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_5
# 133 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 134 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_6
# 135 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmessage
# 136 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitfanfare
# 137 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 138 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_7
# 139 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 25, ProdemiaCity_EventScript_UmbraGruntF_Movement_0
# 140 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 26, ProdemiaCity_EventScript_UmbraGruntM_Movement_0
# 141 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_8
# 142 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 143 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_9
# 144 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmessage
# 145 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitfanfare
# 146 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_10
# 147 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_11
# 148 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 25, ProdemiaCity_EventScript_Thief_Movement_1
# 149 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 150 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_12
# 151 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_13
# 152 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 26, ProdemiaCity_EventScript_Thief_Movement_1
# 153 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 154 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_14
# 155 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_15
# 156 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_16
# 157 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	closemessage
# 158 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 26, ProdemiaCity_EventScript_ReceivePokedex_Movement_2
# 159 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 160 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playse SE_EXIT
# 161 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	removeobject 26
# 162 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	delay 40
# 163 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ReceivePokedex_Text_17
# 164 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	closemessage
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	applymovement 25, ProdemiaCity_EventScript_ReceivePokedex_Movement_3
# 166 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	waitmovement
# 167 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	removeobject 25
# 168 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_PRODEMIA_CITY_STATE, 3
# 169 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	delay 40
# 170 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	releaseall
	return


ProdemiaCity_OnLoad::
# 174 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_OnLoad_1
	return

ProdemiaCity_OnLoad_1:
# 176 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 32, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 177 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 178 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 33, METATILE_ProdemiaCity_TanBrick, FALSE
# 179 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 32, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 180 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 181 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 32, METATILE_ProdemiaCity_TanBrick, FALSE
# 182 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 31, METATILE_ProdemiaCity_TanBrick, FALSE
# 183 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 29, METATILE_ProdemiaCity_TanBrick, FALSE
# 184 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 29, METATILE_ProdemiaCity_TanBrick, FALSE
# 185 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 33, 28, METATILE_ProdemiaCity_TanBrick, FALSE
# 186 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 34, 28, METATILE_ProdemiaCity_TanBrick, FALSE
# 188 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 189 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 190 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 191 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 192 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 193 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 194 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 30, METATILE_ProdemiaCity_PokeMall_CenterWindow, TRUE
# 195 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 30, METATILE_ProdemiaCity_PokeMall_RightWindow, TRUE
# 196 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 30, METATILE_ProdemiaCity_PokeMall_RightWall, TRUE
# 198 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 29, METATILE_ProdemiaCity_PokeMall_LeftWall_Top, TRUE
# 199 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 29, METATILE_ProdemiaCity_PokeMall_LeftWindow_Top, TRUE
# 200 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 201 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 202 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 203 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 204 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 205 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 206 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 207 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 208 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 209 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 210 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 29, METATILE_ProdemiaCity_PokeMall_CenterWindow_Top, TRUE
# 211 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 29, METATILE_ProdemiaCity_PokeMall_RightWindow_Top, TRUE
# 212 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 29, METATILE_ProdemiaCity_PokeMall_RightWall_Top, TRUE
# 214 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 28, METATILE_ProdemiaCity_PokeMall_LeftRoof_Bottom, TRUE
# 215 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 216 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 217 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 218 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 219 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 220 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 221 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 222 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 223 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 224 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 28, METATILE_ProdemiaCity_PokeMall_LeftSky_Bottom, TRUE
# 225 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 28, METATILE_ProdemiaCity_PokeMall_CenterSky_Bottom, TRUE
# 226 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 28, METATILE_ProdemiaCity_PokeMall_RightSky_Bottom, TRUE
# 227 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 28, METATILE_ProdemiaCity_PokeMall_CenterRoof_Bottom, TRUE
# 228 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 28, METATILE_ProdemiaCity_PokeMall_RightRoof_Bottom, TRUE
# 230 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 27, METATILE_ProdemiaCity_PokeMall_LeftRoof_Middle, TRUE
# 231 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 232 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 233 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 234 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 235 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 236 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 237 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 238 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 239 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 240 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 27, METATILE_ProdemiaCity_PokeMall_LeftSky_Middle, TRUE
# 241 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 27, METATILE_ProdemiaCity_PokeMall_CenterSky_Middle, TRUE
# 242 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 27, METATILE_ProdemiaCity_PokeMall_RightSky_Middle, TRUE
# 243 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 27, METATILE_ProdemiaCity_PokeMall_CenterRoof_Middle, TRUE
# 244 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 27, METATILE_ProdemiaCity_PokeMall_RightRoof_Middle, TRUE
# 246 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 35, 26, METATILE_ProdemiaCity_PokeMall_LeftRoof_Top, FALSE
# 247 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 36, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 248 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 37, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 249 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 38, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 250 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 251 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 40, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 252 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 41, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 253 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 42, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 254 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 43, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 255 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 256 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 26, METATILE_ProdemiaCity_PokeMall_LeftSky_Top, FALSE
# 257 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 46, 26, METATILE_ProdemiaCity_PokeMall_CenterSky_Top, FALSE
# 258 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 47, 26, METATILE_ProdemiaCity_PokeMall_RightSky_Top, FALSE
# 259 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 48, 26, METATILE_ProdemiaCity_PokeMall_CenterRoof_Top, FALSE
# 260 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 49, 26, METATILE_ProdemiaCity_PokeMall_RightRoof_Top, FALSE
# 263 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 44, 22, METATILE_ProdemiaCity_PokeMart_ClosedDoor, TRUE
# 266 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 39, 33, METATILE_ProdemiaCity_SilphCoDoor, TRUE
# 267 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setmetatile 45, 33, METATILE_ProdemiaCity_SilphCoDoor, TRUE
# 269 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	special DrawWholeMapView
	return


ProdemiaCity_EventScript_ProdemiaUniversitySign::
# 277 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 278 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_ProdemiaUniversitySign_Text_0, MSGBOX_SIGN
# 279 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_PokeMallSign::
# 283 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 284 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_EventScript_PokeMallSign_2
# 288 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMallSign_Text_1, MSGBOX_SIGN
ProdemiaCity_EventScript_PokeMallSign_1:
# 290 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

ProdemiaCity_EventScript_PokeMallSign_2:
# 285 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMallSign_Text_0, MSGBOX_SIGN
	goto ProdemiaCity_EventScript_PokeMallSign_1


ProdemiaCity_EventScript_PokeMartSign::
# 294 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ProdemiaCity_EventScript_PokeMartSign_1
	return

ProdemiaCity_EventScript_PokeMartSign_1:
# 295 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 296 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_PokeMartSign_Text_0, MSGBOX_SIGN
# 297 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_CitySign::
# 302 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 303 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_CitySign_Text_0, MSGBOX_SIGN
# 304 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


ProdemiaCity_EventScript_DormSign::
# 308 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 309 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox ProdemiaCity_EventScript_DormSign_Text_0, MSGBOX_SIGN
# 310 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor1::
# 318 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 319 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 320 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor1_Text_0
# 321 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor2::
# 325 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 326 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 327 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor2_Text_0
# 328 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor3::
# 332 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 333 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 334 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor3_Text_0
# 335 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Contractor4::
# 339 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 340 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 341 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Contractor4_Text_0
# 342 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Gurdurr::
# 346 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 347 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 348 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	playmoncry SPECIES_GURDURR, CRY_MODE_NORMAL
# 349 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Gurdurr_Text_0
# 350 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Man::
# 354 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 355 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 356 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Man_Text_0
# 357 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanWest::
# 361 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 362 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 363 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanWest_Text_0
# 364 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanEast::
# 368 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 369 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 370 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanEast_Text_0
# 371 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_TrashcanGuy::
# 375 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 376 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 377 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_TrashcanGuy_Text_0
# 378 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_LittleGirl::
# 382 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 383 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 384 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_LittleGirl_Text_0
# 385 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_BaldingMan::
# 389 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 390 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 391 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_BaldingMan_Text_0
# 392 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Lass::
# 396 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 397 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 398 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Lass_Text_0
# 399 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_WomanSouth::
# 403 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 404 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	faceplayer
# 405 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_WomanSouth_Text_0
# 406 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return


EventScript_ProdemiaCity_Trashcan1::
# 414 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 415 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_TEMP_0, FALSE
	goto_if_eq EventScript_ProdemiaCity_Trashcan1_2
# 422 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Trashcan1_Text_0
EventScript_ProdemiaCity_Trashcan1_1:
# 424 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

EventScript_ProdemiaCity_Trashcan1_2:
# 416 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	call Common_EventScript_TrashcanEncounter
# 417 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_ProdemiaCity_Trashcan1_5
	goto EventScript_ProdemiaCity_Trashcan1_1

EventScript_ProdemiaCity_Trashcan1_5:
# 418 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_0, TRUE
	goto EventScript_ProdemiaCity_Trashcan1_1


EventScript_ProdemiaCity_Trashcan2::
# 428 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	lock
# 429 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, FALSE
	goto_if_eq EventScript_ProdemiaCity_Trashcan2_2
# 434 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	msgbox EventScript_ProdemiaCity_Trashcan1_Text_0
EventScript_ProdemiaCity_Trashcan2_1:
# 436 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	release
	return

EventScript_ProdemiaCity_Trashcan2_2:
# 430 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	call Common_EventScript_TrashcanEncounter
# 431 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, TRUE
	goto EventScript_ProdemiaCity_Trashcan2_1


# 33 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_UmbraGruntM_Movement_0:
# 33 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_up
	step_end

# 43 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_UmbraGruntF_Movement_0:
# 43 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_down
	step_end

# 80 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_0:
# 80 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_up
# 80 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_left
	step_end

# 82 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_1:
# 82 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_left
	step_end

# 84 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_2:
# 84 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_down
# 84 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_left
	step_end

# 86 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_3:
# 86 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_down
# 86 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_down
# 86 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_left
	step_end

# 91 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_4:
# 91 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	emote_question_mark
	step_end

# 94 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_5:
# 94 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_right
	step_end

# 96 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_6:
# 96 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_right
	step_end

# 101 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_Thief_Movement_7:
# 101 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
	step_end

# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_ReceivePokedex_Movement_0:
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_up
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_up
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_up
# 117 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_left
	step_end

# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_ReceivePokedex_Movement_1:
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	face_left
	step_end

# 158 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_ReceivePokedex_Movement_2:
# 158 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 158 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
# 158 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_left
	step_end

# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
ProdemiaCity_EventScript_ReceivePokedex_Movement_3:
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_down
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_down
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_down
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_right
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_right
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_right
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_right
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_right
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_right
# 165 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	walk_right
	step_end

ProdemiaCity_EventScript_UmbraGruntM_Text_0:
# 30 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Mutter mutter mutter...$"

ProdemiaCity_EventScript_UmbraGruntM_Text_1:
# 32 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Hey kid, can't you see we're busy\n"
	.string "scheming? Get lost!$"

ProdemiaCity_EventScript_UmbraGruntF_Text_0:
# 40 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Whisper whisper whisper...$"

ProdemiaCity_EventScript_UmbraGruntF_Text_1:
# 42 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Tch! Stop eavesdropping! Scram!$"

ProdemiaCity_EventScript_Thief_Text_0:
# 89 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Hehehehe! Mother is sure to be pleased\n"
	.string "with us for stealing this.$"

ProdemiaCity_EventScript_Thief_Text_1:
# 95 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Hey! This doesn't concern you.\p"
	.string "The motives of the Umbra Clan are far\n"
	.string "beyond what your puny brain can\l"
	.string "comprehend.\p"
	.string "But you look like you came to fight, so a\n"
	.string "fight is what you'll get!$"

ProdemiaCity_EventScript_Thief_Text_2:
# 98 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "What?! Impossible!$"

ProdemiaCity_EventScript_Thief_Text_3:
# 99 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Grrr, you're stronger than you look.\p"
	.string "But you're too late. My partner has the\n"
	.string "book, and he's long gone!\p"
	.string "The Umbra Clan will not rest until\n"
	.string "Meddoh is engulfed in darkness!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_0:
# 112 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "{PLAYER}!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_1:
# 120 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "SALLY: Are your Pokémon hurt?\p"
	.string "Here, let me heal them.$"

ProdemiaCity_EventScript_ReceivePokedex_Text_2:
# 122 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "HOLLY: Judging by your expression, I\n"
	.string "assume you couldn't get the book back.\p"
	.string "Don't be hard on yourself, {PLAYER}. Your\n"
	.string "bravery speaks volumes!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_3:
# 125 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "SALLY: Professor, who was that hooded\n"
	.string "thief? And why do they want that book?$"

ProdemiaCity_EventScript_ReceivePokedex_Text_4:
# 128 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "HOLLY: I'm not sure, Sally. I can't say\n"
	.string "I've even noticed a book like that in\l"
	.string "the library.$"

ProdemiaCity_EventScript_ReceivePokedex_Text_5:
# 132 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "HOLLY: Regardless! {PLAYER}, I've just\n"
	.string "met you, but your actions today have\l"
	.string "proven to me that you are more than\l"
	.string "deserving of this.$"

ProdemiaCity_EventScript_ReceivePokedex_Text_6:
# 134 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Received the Pokédex!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_7:
# 138 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "SALLY: Wow, a real Pokédex!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_8:
# 141 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "HOLLY: Sally, I stand by what I said\n"
	.string "earlier. You're ready to embark on a\l"
	.string "journey of your own. You take one as\l"
	.string "well.$"

ProdemiaCity_EventScript_ReceivePokedex_Text_9:
# 143 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Sally received the Pokédex!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_10:
# 146 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "SALLY: Th-thank you, Professor! I'll\n"
	.string "make you proud!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_11:
# 147 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "HOLLY: You already have, my dear!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_12:
# 150 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "HOLLY: My mission to you both is to\n"
	.string "record as much information on Pokémon\l"
	.string "as you can.\p"
	.string "Explore every inch of the Meddoh region\n"
	.string "and take in all that it has to offer.\p"
	.string "But most importantly, have fun! And\n"
	.string "support each other when you can.$"

ProdemiaCity_EventScript_ReceivePokedex_Text_13:
# 151 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "SALLY: We will, Professor!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_14:
# 154 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "SALLY: {PLAYER}, I've read that one of\n"
	.string "the best ways to learn about Pokémon is\l"
	.string "through battling.\p"
	.string "Maybe we can plan to meet up and battle\n"
	.string "each other on our journeys. Sorta like\l"
	.string "rivals!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_15:
# 155 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "HOLLY: That's a wonderful idea, Sally!\n"
	.string "Nothing like a little friendly\l"
	.string "competition to keep you motivated.\p"
	.string "While we're on the subject, you can also\n"
	.string "take on the Meddoh League. The first\l"
	.string "gym is just to the west of here, in\l"
	.string "Grodeo Town.$"

ProdemiaCity_EventScript_ReceivePokedex_Text_16:
# 156 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "SALLY: Sounds like a plan! Come to\n"
	.string "Route 2 once you're ready, {PLAYER}!$"

ProdemiaCity_EventScript_ReceivePokedex_Text_17:
# 163 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "HOLLY: I've never seen her so excited!\p"
	.string "{PLAYER}, do watch out for her, will you?\n"
	.string "She's a smart girl, but a bit sheltered.\p"
	.string "A fault of my own overprotectiveness, I\n"
	.string "suppose.\p"
	.string "Anyway, best of luck to you. I look\n"
	.string "forward to hearing about your\l"
	.string "accomplishments!$"

ProdemiaCity_EventScript_ProdemiaUniversitySign_Text_0:
# 278 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia University\l"
	.string "“The brightest minds in Meddoh.”$"

ProdemiaCity_EventScript_PokeMallSign_Text_0:
# 285 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "NOW OPEN!\l"
	.string "The Prodemia Poké Mall!\p"
	.string "Shop til you drop!$"

ProdemiaCity_EventScript_PokeMallSign_Text_1:
# 288 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "COMING SOON!\l"
	.string "The Prodemia Poké Mall!\p"
	.string "Shop til you drop!$"

ProdemiaCity_EventScript_PokeMartSign_Text_0:
# 296 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "PERMANENTLY CLOSED\p"
	.string "Thank you to our dedicated customers!$"

ProdemiaCity_EventScript_CitySign_Text_0:
# 303 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia City\l"
	.string "“Always moving forward.”$"

ProdemiaCity_EventScript_DormSign_Text_0:
# 309 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia University Dormitories$"

EventScript_ProdemiaCity_Contractor1_Text_0:
# 320 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You don't have a hard hat? Be careful!$"

EventScript_ProdemiaCity_Contractor2_Text_0:
# 327 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "These steel girders are called “I”\n"
	.string "beams because of their shape.\p"
	.string "I wonder if they have beams for the\n"
	.string "other letters of the alphabet?$"

EventScript_ProdemiaCity_Contractor3_Text_0:
# 334 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Working in construction is great!\p"
	.string "I get to literally make my mark on the\n"
	.string "world.$"

EventScript_ProdemiaCity_Contractor4_Text_0:
# 341 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "What? No, the mall won't be completed\n"
	.string "for a while.\p"
	.string "The Poké Mart is still open, though.$"

EventScript_ProdemiaCity_Gurdurr_Text_0:
# 349 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Gurr!$"

EventScript_ProdemiaCity_Man_Text_0:
# 356 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You came from Shaydwell Town? I heard\n"
	.string "it's quaint there.\p"
	.string "But I like the hustle and bustle. That's\n"
	.string "why I moved to Prodemia.$"

EventScript_ProdemiaCity_WomanWest_Text_0:
# 363 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia used to be a slow, quiet town\n"
	.string "before the University got so big.\p"
	.string "Now I can barely hear myself think!$"

EventScript_ProdemiaCity_WomanEast_Text_0:
# 370 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "You look like a Pokémon Trainer. Have\n"
	.string "you met Professor Holly?\p"
	.string "I've heard she's looking for someone to\n"
	.string "help with her research.$"

EventScript_ProdemiaCity_TrashcanGuy_Text_0:
# 377 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I wasn't trash picking, I swear!\p"
	.string ".....\l"
	.string "Alright, you got me.\p"
	.string "But don't knock it til you try it! I've\n"
	.string "found some pretty neat stuff.$"

EventScript_ProdemiaCity_LittleGirl_Text_0:
# 384 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "College sounds like so much fun! It's\n"
	.string "like school but with more play time.$"

EventScript_ProdemiaCity_BaldingMan_Text_0:
# 391 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "Prodemia City doesn't have a Gym\n"
	.string "Leader.\p"
	.string "I guess all the college students are\n"
	.string "too bookish for that kind of thing.$"

EventScript_ProdemiaCity_Lass_Text_0:
# 398 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I'm a huge shopper, so I'm super excited\n"
	.string "for the new Poké Mall to be built!$"

EventScript_ProdemiaCity_WomanSouth_Text_0:
# 405 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "I just got back from visiting a friend\n"
	.string "in Silicraft City.\p"
	.string "She owns an art studio that sells glass\n"
	.string "flutes.$"

EventScript_ProdemiaCity_Trashcan1_Text_0:
# 422 "data/maps/ProdemiaCity_Frlg/scripts.pory"
	.string "There's a foul stench...$"
