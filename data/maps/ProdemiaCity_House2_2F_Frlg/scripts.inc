ProdemiaCity_House2_2F_Frlg_MapScripts::
	.byte 0


ProdemiaCity_House2_2F_EventScript_FloorSign::
# 9 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	lock
# 10 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_FloorSign_Text_0, MSGBOX_SIGN
# 11 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_2F_EventScript_Gossiper1::
# 19 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	lock
# 20 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_Gossiper1_Text_0
# 21 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	playse SE_PIN
# 22 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	applymovement 2, ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_0
# 23 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	waitmovement 2
# 24 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	faceplayer
# 25 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_Gossiper1_Text_1
# 26 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	applymovement 2, ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_1
# 27 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	waitmovement 2
# 28 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_2F_EventScript_Gossiper2::
# 32 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	lock
# 33 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_Gossiper2_Text_0
# 34 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	playse SE_PIN
# 35 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	applymovement 1, ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_0
# 36 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	waitmovement 1
# 37 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	faceplayer
# 38 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_Gossiper2_Text_1
# 39 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	applymovement 1, ProdemiaCity_House2_2F_EventScript_Gossiper2_Movement_0
# 40 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	waitmovement 1
# 41 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	release
	return


# 22 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_0:
# 22 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	emote_exclamation_mark
# 22 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	delay_16
	step_end

# 26 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_1:
# 26 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	face_left
	step_end

# 39 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
ProdemiaCity_House2_2F_EventScript_Gossiper2_Movement_0:
# 39 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	face_right
	step_end

ProdemiaCity_House2_2F_EventScript_FloorSign_Text_0:
# 10 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "2F: GIRLS' DORMITORY$"

ProdemiaCity_House2_2F_EventScript_Gossiper1_Text_0:
# 20 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "Omg! So what happened after you kissed\n"
	.string "him?$"

ProdemiaCity_House2_2F_EventScript_Gossiper1_Text_1:
# 25 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "Excuse me! This is a private\n"
	.string "conversation.$"

ProdemiaCity_House2_2F_EventScript_Gossiper2_Text_0:
# 33 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "Well, we left the party and then...$"

ProdemiaCity_House2_2F_EventScript_Gossiper2_Text_1:
# 38 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "Um, hello? Personal space much?$"
