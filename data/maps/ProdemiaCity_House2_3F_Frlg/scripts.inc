ProdemiaCity_House2_3F_Frlg_MapScripts::
	.byte 0


ProdemiaCity_House2_3F_EventScript_FloorSign::
# 9 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lock
# 10 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_3F_EventScript_FloorSign_Text_0, MSGBOX_SIGN
# 11 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_3F_EventScript_Gamer1::
# 19 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lock
# 20 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_3F_EventScript_Gamer1_Text_0
# 21 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_3F_EventScript_Gamer2::
# 25 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lock
# 26 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_3F_EventScript_Gamer2_Text_0
# 27 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_3F_EventScript_Nerd::
# 31 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lock
# 32 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	faceplayer
# 33 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_3F_EventScript_Nerd_Text_0
# 34 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	applymovement 3, ProdemiaCity_House2_3F_EventScript_Nerd_Movement_0
# 35 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	waitmovement 3
# 36 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_3F_EventScript_Upgrade::
# 45 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	lockall
# 46 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	removeobject 4
# 47 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	giveitem ITEM_UPGRADE, 1
# 48 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	waitfanfare
# 49 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	setflag FLAG_HIDE_PRODEMIA_CITY_UPGRADE
# 50 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	release
	return


# 34 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
ProdemiaCity_House2_3F_EventScript_Nerd_Movement_0:
# 34 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	face_right
	step_end

ProdemiaCity_House2_3F_EventScript_FloorSign_Text_0:
# 10 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	.string "3F: BOYS' DORMITORY$"

ProdemiaCity_House2_3F_EventScript_Gamer1_Text_0:
# 20 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	.string "Happy feet!$"

ProdemiaCity_House2_3F_EventScript_Gamer2_Text_0:
# 26 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	.string "Wombo combo!$"

ProdemiaCity_House2_3F_EventScript_Nerd_Text_0:
# 33 "data/maps/ProdemiaCity_House2_3F_Frlg/scripts.pory"
	.string "Ugh, my roommates are always so noisy...\p"
	.string "Can't they see I'm trying to study?$"
