ShaydwellTown_PlayersHouse_1F_Frlg_MapScripts::
# 2 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShaydwellTown_PlayersHouse_1F_EventScript_SetRespawn
# 3 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShaydwellTown_PlayersHouse_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShaydwellTown_PlayersHouse_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	map_script_2 VAR_SHAYDWELL_INTRO_STATE, 0, ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad
	.2byte 0


ShaydwellTown_PlayersHouse_1F_EventScript_SetRespawn::
# 9 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SHAYDWELL_TOWN_FRLG
	end


ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad::
# 14 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 15 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_0
# 18 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 19 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_0
# 20 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 21 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_1
# 24 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_2
# 27 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 28 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_1
# 29 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 1
# 30 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return


ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave::
# 34 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 35 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0
# 38 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Text_0
# 39 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 40 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_1
# 43 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return


ShaydwellTown_PlayersHouse_1F_EventScript_Mom::
# 48 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_SHAYDWELL_INTRO_STATE, 1
	goto_if_eq ShaydwellTown_PlayersHouse_1F_EventScript_Mom_1
# 54 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_SHAYDWELL_INTRO_STATE, 2
	goto_if_eq ShaydwellTown_PlayersHouse_1F_EventScript_Mom_2
# 65 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 66 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 67 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_3
# 68 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 69 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 70 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_4
# 71 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_1:
# 49 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 50 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 51 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_0
# 52 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_2:
# 55 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 56 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 57 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_1
# 58 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 59 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitfanfare
# 60 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_2
# 61 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 4
# 62 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return


ShaydwellTown_PlayersHouse_1F_Little_Sister::
# 76 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_SHAYDWELL_INTRO_STATE, 1
	goto_if_eq ShaydwellTown_PlayersHouse_1F_Little_Sister_1
# 83 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 84 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 85 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_Little_Sister_Text_1
# 86 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return

ShaydwellTown_PlayersHouse_1F_Little_Sister_1:
# 77 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 78 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 79 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_1F_Little_Sister_Text_0
# 80 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
	return


# 15 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_0:
# 16 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_right
	step_end

# 21 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_1:
# 22 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_left
	step_end

# 24 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Movement_2:
# 25 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 25 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 25 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 25 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 25 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
	step_end

# 35 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_0:
# 36 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_player
	step_end

# 40 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Movement_1:
# 41 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
	step_end

ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_0:
# 19 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh good, {PLAYER}, you're awake.$"

ShaydwellTown_PlayersHouse_1F_Mom_Go_Help_Dad_Text_1:
# 28 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Your father is in the backyard doing\n"
	.string "yard work. Why don't you lend him a\l"
	.string "hand?$"

ShaydwellTown_PlayersHouse_1F_Trigger_Dont_Leave_Text_0:
# 38 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Really? Your dad could use your help!$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_0:
# 51 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Why don't you lend your father a hand?$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_1:
# 57 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "So, were you surprised? I hope I didn't\n"
	.string "spoil it!\p"
	.string "Did Dad give you any Poké Balls?\p"
	.string "He must have gotten so worked up that\n"
	.string "he forgot.$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_2:
# 60 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "The world is your Cloyster now, honey.\p"
	.string "Just don't forget to call us once in a\n"
	.string "while, okay?\p"
	.string "And be safe!$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_3:
# 67 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You look tired. Why don't you rest up?$"

ShaydwellTown_PlayersHouse_1F_EventScript_Mom_Text_4:
# 70 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Much better! Keep doing your best,\n"
	.string "{PLAYER}.$"

ShaydwellTown_PlayersHouse_1F_Little_Sister_Text_0:
# 79 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Ooooo, {PLAYER} is in trouble.$"

ShaydwellTown_PlayersHouse_1F_Little_Sister_Text_1:
# 85 "data/maps/ShaydwellTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "I want a Pokémon, too!$"
