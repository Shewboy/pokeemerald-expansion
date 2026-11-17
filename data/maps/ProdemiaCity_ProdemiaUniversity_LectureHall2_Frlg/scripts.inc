ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg_MapScripts::
# 2 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ProdemiaUniversity_LectureHall2_OnTransition
# 3 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	map_script_2 VAR_PRODEMIA_CITY_STATE, 0, ProdemiaUniversity_EventScript_ProfessorHollyIntro
	.2byte 0


ProdemiaUniversity_EventScript_ProfessorHollyIntro::
# 13 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_0
# 15 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	waitmovement
# 16 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 1, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_1
# 17 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_0
# 18 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	closemessage
# 19 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	playse SE_EXIT
# 20 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	addobject 2
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_2
# 23 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	waitmovement
# 24 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_3
# 25 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 1, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_3
# 26 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	waitmovement
# 27 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_1
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_2
# 29 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_1
# 30 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_3
# 31 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_4
# 32 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 1, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_5
# 33 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_4
# 34 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_6
# 35 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_5
# 36 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_3
# 37 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 1, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_3
# 38 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_6
# 39 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_7
# 40 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_8
# 41 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 42 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	playse SE_PIN
# 43 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_7
# 44 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 1, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_7
# 45 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_7
# 46 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_9
# 47 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_10
# 48 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	closemessage
# 49 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	addobject 3
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 3, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_8
# 51 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	waitmovement
# 52 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_3
# 53 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	waitmovement
# 54 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_11
# 55 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_12
# 56 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_4
# 57 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 1, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_5
# 58 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_13
# 59 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	setvar VAR_PRODEMIA_CITY_STATE, 1
# 60 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	end


ProdemiaUniversity_LectureHall2_OnTransition::
# 65 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	compare VAR_PRODEMIA_CITY_STATE, 0
	goto_if_eq ProdemiaUniversity_LectureHall2_OnTransition_2
# 68 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	compare VAR_PRODEMIA_CITY_STATE, 1
	goto_if_eq ProdemiaUniversity_LectureHall2_OnTransition_3
# 80 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	setflag FLAG_HIDE_NPCS_PRODEMIA_U
ProdemiaUniversity_LectureHall2_OnTransition_1:
	end

ProdemiaUniversity_LectureHall2_OnTransition_2:
# 66 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	setflag FLAG_HIDE_NPCS_PRODEMIA_U
	goto ProdemiaUniversity_LectureHall2_OnTransition_1

ProdemiaUniversity_LectureHall2_OnTransition_3:
# 70 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	setobjectxyperm 2, 5, 2
# 71 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 73 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 75 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	setobjectxyperm 3, 4, 3
# 76 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 77 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	clearflag FLAG_HIDE_NPCS_PRODEMIA_U
	goto ProdemiaUniversity_LectureHall2_OnTransition_1


ProdemiaUniversity_EventScript_Chalkboard2::
# 89 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 90 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_0
# 91 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_TOD_DESCRIPTIONS, FALSE
# 92 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case 0, ProdemiaUniversity_EventScript_Chalkboard2_3
# 94 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case 1, ProdemiaUniversity_EventScript_Chalkboard2_4
# 95 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case 2, ProdemiaUniversity_EventScript_Chalkboard2_5
# 96 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case MULTI_B_PRESSED, ProdemiaUniversity_EventScript_Chalkboard2_6
ProdemiaUniversity_EventScript_Chalkboard2_1:
# 98 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	end

ProdemiaUniversity_EventScript_Chalkboard2_3:
# 93 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_1
	goto ProdemiaUniversity_EventScript_Chalkboard2_1

ProdemiaUniversity_EventScript_Chalkboard2_4:
# 94 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_2
	goto ProdemiaUniversity_EventScript_Chalkboard2_1

ProdemiaUniversity_EventScript_Chalkboard2_5:
# 95 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_3
	goto ProdemiaUniversity_EventScript_Chalkboard2_1

ProdemiaUniversity_EventScript_Chalkboard2_6:
	end


ProdemiaUniversity_EventScript_ProfHolly::
# 108 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	compare VAR_PRODEMIA_CITY_STATE, 1
	goto_if_eq ProdemiaUniversity_EventScript_ProfHolly_1
# 115 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ProdemiaUniversity_EventScript_ProfHolly_2
# 121 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ProdemiaUniversity_EventScript_ProfHolly_3
	return

ProdemiaUniversity_EventScript_ProfHolly_1:
# 109 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 110 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	faceplayer
# 111 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfHolly_Text_0
# 112 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	end

ProdemiaUniversity_EventScript_ProfHolly_2:
# 116 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 117 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	faceplayer
# 118 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfHolly_Text_1
# 119 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	return

ProdemiaUniversity_EventScript_ProfHolly_3:
# 122 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 123 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	faceplayer
# 124 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfHolly_Text_2
# 125 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_Sally::
# 130 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 131 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	faceplayer
# 132 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Sally_Text_0
# 133 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_DistraughtMan::
# 137 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 138 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	faceplayer
# 139 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_DistraughtMan_Text_0
# 140 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	return


# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_0:
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_right
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_right
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_right
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	face_up
	step_end

# 16 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_1:
# 16 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	face_down
	step_end

# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_2:
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_right
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_right
	step_end

# 24 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_3:
# 24 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	face_left
	step_end

# 31 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_4:
# 31 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	face_up
	step_end

# 32 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_5:
# 32 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	face_player
	step_end

# 34 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_6:
# 34 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	face_right
	step_end

# 43 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_7:
# 43 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	emote_exclamation_mark
# 43 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	delay_16
	step_end

# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_8:
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_fast_up
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_fast_up
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_fast_up
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_fast_up
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_fast_up
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_fast_up
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_fast_up
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_fast_right
	step_end

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_0:
# 17 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "PROFESSOR HOLLY: I'm sorry, but my\n"
	.string "office hours are...\p"
	.string "Oh! My apologies, I thought you were\n"
	.string "one of my students.\p"
	.string "{PLAYER}, is it?\p"
	.string "Did you come to inquire about one of\n"
	.string "the Pokédexes I have?\p"
	.string "Yes, well I'm sorry to say that I don't\n"
	.string "just hand them out to anyone who asks!\l"
	.string "Pokédexes aren't cheap, you know.\p"
	.string "Plus, I already have someone in mind.$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_1:
# 27 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "???: Sorry I'm late, professor!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_2:
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: And here is that someone now!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_3:
# 30 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "???: I don't think we've met. My name is\n"
	.string "Sally! I'm the Professor's teaching\l"
	.string "assistant.$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_4:
# 33 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: Sally has been a tremendous help\n"
	.string "to me this semester.\p"
	.string "Hard to believe that she's already\n"
	.string "grading college papers at age 12!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_5:
# 35 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "SALLY: Oh, Professor, you're too kind!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_6:
# 38 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: But I've kept you cooped up in\n"
	.string "these old, dusty walls for far too long.\p"
	.string "You're young! You should be exploring\n"
	.string "the world and having adventures.$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_7:
# 39 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "SALLY: A-Are you sure, Professor? With\n"
	.string "my wheelchair and all...$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_8:
# 40 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: I'm certain of it. There's only so\n"
	.string "much a person can learn from books and\l"
	.string "lectures. Experience is the greatest\l"
	.string "teacher!\p"
	.string "That's why I want to give you this-$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_9:
# 46 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "???: EEEEEEEEEEK!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_10:
# 47 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "???: Stop, thief!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_11:
# 54 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "P-Professor! Someone just stole a book\n"
	.string "from the library!\p"
	.string "I tried to stop them, but they\n"
	.string "threatend to attack me with their\l"
	.string "Pokémon.$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_12:
# 55 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: Goodness! That's a bit\n"
	.string "excessive.$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_13:
# 58 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: {PLAYER}, I know I am asking a lot\n"
	.string "of you, but please stop that thief!$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_0:
# 90 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Various Pokémon are categorized into\n"
	.string "lists.\p"
	.string "Which description would you like to\n"
	.string "read?$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_1:
# 93 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Diurnal Pokémon are primarily active\n"
	.string "during the day and inactive at night.\p"
	.string "Humans are also diurnal, which is why\n"
	.string "many diurnal Pokémon make for great\l"
	.string "pets.\p"
	.string "Most bird Pokémon are diurnal, as well\n"
	.string "as Ledyba, Skwovet, and Hoppip.$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_2:
# 94 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Nocturnal Pokémon are primarily active\n"
	.string "at night and inactive during the day.\p"
	.string "Research has shown that nocturnal\n"
	.string "Pokémon have highly developed senses\l"
	.string "of hearing, smell, and eyesight.\p"
	.string "Zubat, Kricketot, and Hoothoot are\n"
	.string "well-known examples of nocturnal\l"
	.string "Pokémon.$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_3:
# 95 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Crepuscular Pokémon are primarily\n"
	.string "active during the transition hours of\l"
	.string "dawn and dusk.\p"
	.string "As a result, many of these Pokémon are\n"
	.string "mistaken for being nocturnal.\p"
	.string "Crepuscular Pokémon include Deerling,\n"
	.string "Vulpix, and Stunky.$"

ProdemiaUniversity_EventScript_ProfHolly_Text_0:
# 111 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "{PLAYER}, I know I am asking a lot of\n"
	.string "you, but please stop that thief!$"

ProdemiaUniversity_EventScript_ProfHolly_Text_1:
# 118 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "{PLAYER}! What are you waiting for?\p"
	.string "There's a vast region to explore and\n"
	.string "endless Pokémon to discover!$"

ProdemiaUniversity_EventScript_ProfHolly_Text_2:
# 124 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "{PLAYER}! It's nice to see you.\p"
	.string "How is your Pokédex coming along?$"

ProdemiaUniversity_EventScript_Sally_Text_0:
# 132 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Please be careful, {PLAYER}!$"

ProdemiaUniversity_EventScript_DistraughtMan_Text_0:
# 139 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "It's one thing to steal a library book,\n"
	.string "but to threaten me with violence?!$"
