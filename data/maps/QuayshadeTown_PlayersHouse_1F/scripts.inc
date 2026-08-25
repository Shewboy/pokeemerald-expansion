QuayshadeTown_PlayersHouse_1F_MapScripts::
# 2 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, QuayshadeTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

QuayshadeTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_QUAYSHADE_INTRO_STATE, 0, QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad
	.2byte 0


QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad::
# 8 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	lock
# 9 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_0
# 12 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	msgbox QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_0
# 14 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 15 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_1
# 18 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_2
# 21 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	msgbox QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_1
# 23 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 1
# 24 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	release
	return


QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave::
# 28 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	compare VAR_QUAYSHADE_INTRO_STATE, 1
	goto_if_eq QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_1
	return

QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_1:
# 29 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	lock
# 30 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0
# 33 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	msgbox QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Text_0
# 34 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 35 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_1
# 38 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	release
	return


QuayshadeTown_PlayersHouse_1F_EventScript_Mom::
# 46 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	compare VAR_QUAYSHADE_INTRO_STATE, 1
	goto_if_eq QuayshadeTown_PlayersHouse_1F_EventScript_Mom_1
# 54 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	compare VAR_QUAYSHADE_INTRO_STATE, 2
	goto_if_eq QuayshadeTown_PlayersHouse_1F_EventScript_Mom_2
# 67 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	lock
# 68 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0
# 71 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	msgbox QuayshadeTown_PlayersHouse_1F_EventScript_Mom_Text_3
# 72 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	release
	return

QuayshadeTown_PlayersHouse_1F_EventScript_Mom_1:
# 47 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	lock
# 48 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0
# 51 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	msgbox QuayshadeTown_PlayersHouse_1F_EventScript_Mom_Text_0
# 52 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	release
	return

QuayshadeTown_PlayersHouse_1F_EventScript_Mom_2:
# 55 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	lock
# 56 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0
# 59 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	msgbox QuayshadeTown_PlayersHouse_1F_EventScript_Mom_Text_1
# 60 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 61 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 62 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	msgbox QuayshadeTown_PlayersHouse_1F_EventScript_Mom_Text_2
# 63 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 3
# 64 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	release
	return


QuayshadeTown_PlayersHouse_1F_Little_Sister::
# 77 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	lock
# 78 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	applymovement 2, QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0
# 81 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	msgbox QuayshadeTown_PlayersHouse_1F_Little_Sister_Text_0
# 82 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	release
	return


# 9 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_0:
# 10 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	face_right
	step_end

# 15 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_1:
# 16 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	face_left
	step_end

# 18 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_2:
# 19 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 19 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 19 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 19 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 19 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 30 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0:
# 31 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	face_player
	step_end

# 35 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_1:
# 36 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_0:
# 13 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	.string "Oh good, {PLAYER}, you're awake.$"

QuayshadeTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_1:
# 22 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	.string "Your father is in the backyard doing\n"
	.string "yard work. Why don't you lend him a\l"
	.string "hand?$"

QuayshadeTown_PlayersHouse_1F_Trigger_Dont_Leave_Text_0:
# 33 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	.string "Really? Your dad could use your help!$"

QuayshadeTown_PlayersHouse_1F_EventScript_Mom_Text_0:
# 51 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	.string "Why don't you lend your father a hand?$"

QuayshadeTown_PlayersHouse_1F_EventScript_Mom_Text_1:
# 59 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	.string "So, were you surprised? I hope I didn't\n"
	.string "spoil it!\p"
	.string "Did Dad give you any Poké Balls?\p"
	.string "He must have gotten so worked up that\n"
	.string "he forgot.$"

QuayshadeTown_PlayersHouse_1F_EventScript_Mom_Text_2:
# 62 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	.string "Dad has been trying to get you a\n"
	.string "Pokémon for a while now.\p"
	.string "You deserve it!$"

QuayshadeTown_PlayersHouse_1F_EventScript_Mom_Text_3:
# 71 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	.string "The world is your Cloyster now, honey.\p"
	.string "Just don't forget to call us once in a\n"
	.string "while, okay?\p"
	.string "And be safe!$"

QuayshadeTown_PlayersHouse_1F_Little_Sister_Text_0:
# 81 "data/maps/QuayshadeTown_PlayersHouse_1F/scripts.pory"
	.string "I saw a rare Pokémon in our backyard!\p"
	.string "Mom doesn't believe me though...$"
