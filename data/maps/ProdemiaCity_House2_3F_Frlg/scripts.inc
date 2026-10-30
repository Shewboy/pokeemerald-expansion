ProdemiaCity_House2_3F_Frlg_MapScripts::
	.byte 0


ProdemiaCity_House2_3F_EventScript_Gamer1::
# 5 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lock
# 6 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_3F_EventScript_Gamer1_Text_0
# 7 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_3F_EventScript_Gamer2::
# 11 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lock
# 12 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_3F_EventScript_Gamer2_Text_0
# 13 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_3F_EventScript_Nerd::
# 17 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lock
# 18 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	faceplayer
# 19 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_3F_EventScript_Nerd_Text_0
# 20 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	applymovement 3, ProdemiaCity_House2_3F_EventScript_Nerd_Movement_0
# 21 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	waitmovement 3
# 22 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_3F_EventScript_FloorSign::
# 26 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lock
# 27 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_3F_EventScript_FloorSign_Text_0, MSGBOX_SIGN
# 28 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_3F_EventScript_Upgrade::
# 37 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lockall
# 38 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	removeobject 4
# 39 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	giveitem ITEM_UPGRADE, 1
# 40 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	waitfanfare
# 41 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_CITY_UPGRADE
# 42 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


# 20 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
ProdemiaCity_House2_3F_EventScript_Nerd_Movement_0:
# 20 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	face_right
	step_end

ProdemiaCity_House2_3F_EventScript_Gamer1_Text_0:
# 6 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	.string "Happy feet!$"

ProdemiaCity_House2_3F_EventScript_Gamer2_Text_0:
# 12 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	.string "Wombo combo!$"

ProdemiaCity_House2_3F_EventScript_Nerd_Text_0:
# 19 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	.string "Ugh, my roommates are always so noisy...\p"
	.string "Can't they see I'm trying to study?$"

ProdemiaCity_House2_3F_EventScript_FloorSign_Text_0:
# 27 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	.string "3F: BOYS' DORMITORY$"
