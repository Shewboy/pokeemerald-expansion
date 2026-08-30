ShaydwellTown_PlayersHouse_1F_Frlg_MapScripts::
# 2 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShaydwellTown_PlayersHouse_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShaydwellTown_PlayersHouse_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	map_script_2 VAR_SHAYDWELL_INTRO_STATE, 0, ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad
	.2byte 0


ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad::
# 8 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 9 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_0
# 12 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 13 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_0
# 14 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 15 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_1
# 18 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_2
# 21 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_1
# 23 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 1
# 24 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return


ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave::
# 28 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_SHAYDWELL_INTRO_STATE, 1
	goto_if_eq ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_1
	return

ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_1:
# 29 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 30 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0
# 33 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Text_0
# 34 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 35 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_1
# 38 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return


ShaydwellTown_PlayersHouse_1F_EventScript_Mom::
# 46 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_SHAYDWELL_INTRO_STATE, 1
	goto_if_eq ShaydwellTown_PlayersHouse_1F_EventScript_Mom_1
# 52 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_SHAYDWELL_INTRO_STATE, 2
	goto_if_eq ShaydwellTown_PlayersHouse_1F_EventScript_Mom_2
# 63 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 64 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 65 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_3
# 66 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 67 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 68 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_4
# 69 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_1:
# 47 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 48 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 49 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_0
# 50 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_2:
# 53 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 54 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 55 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_1
# 56 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 57 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitfanfare
# 58 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_2
# 59 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 3
# 60 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return


ShaydwellTown_PlayersHouse_1F_Little_Sister::
# 74 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 75 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 76 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_Little_Sister_Text_0
# 77 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return


# 9 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_0:
# 10 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_right
	step_end

# 15 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_1:
# 16 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_left
	step_end

# 18 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_2:
# 19 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 19 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 19 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 19 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 19 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
	step_end

# 30 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0:
# 31 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_player
	step_end

# 35 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_1:
# 36 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
	step_end

ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_0:
# 13 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh good, {PLAYER}, you're awake.$"

ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_1:
# 22 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Your father is in the backyard doing\n"
	.string "yard work. Why don't you lend him a\l"
	.string "hand?$"

ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Text_0:
# 33 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Really? Your dad could use your help!$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_0:
# 49 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Why don't you lend your father a hand?$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_1:
# 55 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "So, were you surprised? I hope I didn't\n"
	.string "spoil it!\p"
	.string "Did Dad give you any Poké Balls?\p"
	.string "He must have gotten so worked up that\n"
	.string "he forgot.$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_2:
# 58 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "The world is your Cloyster now, honey.\p"
	.string "Just don't forget to call us once in a\n"
	.string "while, okay?\p"
	.string "And be safe!$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_3:
# 65 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You look tired. Why don't you rest up\n"
	.string "some?$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_4:
# 68 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Much better! Keep doing your best,\n"
	.string "{PLAYER}.$"

ShaydwellTown_PlayersHouse_1F_Little_Sister_Text_0:
# 76 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "I saw a rare Pokémon in our backyard!\p"
	.string "Mom doesn't believe me though...$"
