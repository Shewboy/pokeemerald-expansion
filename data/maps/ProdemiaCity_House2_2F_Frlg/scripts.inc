ProdemiaCity_House2_2F_Frlg_MapScripts::
	.byte 0


ProdemiaCity_House2_2F_EventScript_Gossiper1::
# 5 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	lock
# 6 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_Gossiper1_Text_0
# 7 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	playse SE_PIN
# 8 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	applymovement 2, ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_0
# 9 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	waitmovement 2
# 10 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_Gossiper1_Text_1
# 12 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	applymovement 2, ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_1
# 13 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	waitmovement 2
# 14 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_2F_EventScript_Gossiper2::
# 18 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	lock
# 19 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_Gossiper2_Text_0
# 20 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	playse SE_PIN
# 21 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	applymovement 1, ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_0
# 22 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	waitmovement 1
# 23 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	faceplayer
# 24 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_Gossiper2_Text_1
# 25 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	applymovement 1, ProdemiaCity_House2_2F_EventScript_Gossiper2_Movement_0
# 26 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	waitmovement 1
# 27 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_House2_2F_EventScript_FloorSign::
# 31 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	lock
# 32 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	msgbox ProdemiaCity_House2_2F_EventScript_FloorSign_Text_0, MSGBOX_SIGN
# 33 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	release
	return


# 8 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_0:
# 8 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	emote_exclamation_mark
# 8 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	delay_16
	step_end

# 12 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
ProdemiaCity_House2_2F_EventScript_Gossiper1_Movement_1:
# 12 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	face_left
	step_end

# 25 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
ProdemiaCity_House2_2F_EventScript_Gossiper2_Movement_0:
# 25 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	face_right
	step_end

ProdemiaCity_House2_2F_EventScript_Gossiper1_Text_0:
# 6 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "Omg! So what happened after you kissed\n"
	.string "him?$"

ProdemiaCity_House2_2F_EventScript_Gossiper1_Text_1:
# 11 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "Excuse me! This is a private\n"
	.string "conversation.$"

ProdemiaCity_House2_2F_EventScript_Gossiper2_Text_0:
# 19 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "Well, we left the party and then...$"

ProdemiaCity_House2_2F_EventScript_Gossiper2_Text_1:
# 24 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "Um, hello? Personal space much?$"

ProdemiaCity_House2_2F_EventScript_FloorSign_Text_0:
# 32 "data/maps/ProdemiaCity_House2_2F_Frlg/scripts.pory"
	.string "2F: GIRLS' DORMITORY$"
