QuayshadeTown_MapScripts::
	.byte 0


QuayshadeTown_EventScript_Pokeball::
# 7 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 8 "data/maps/QuayshadeTown/scripts.pory"
	showmonpic SPECIES_TYROGUE, 10, 3
# 9 "data/maps/QuayshadeTown/scripts.pory"
	playmoncry SPECIES_TYROGUE, CRY_MODE_NORMAL
# 10 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 11 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuayshadeTown_EventScript_Pokeball_2
# 33 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 34 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_NotChosen
QuayshadeTown_EventScript_Pokeball_1:
# 36 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 37 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 38 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 39 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	end

QuayshadeTown_EventScript_Pokeball_2:
# 12 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 13 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_EventScript_Pokeball_5
# 20 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_EventScript_Pokeball_6
# 28 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 29 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
	goto QuayshadeTown_EventScript_Pokeball_1

QuayshadeTown_EventScript_Pokeball_5:
# 14 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_1
# 16 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 17 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 18 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_EventScript_Pokeball_1

QuayshadeTown_EventScript_Pokeball_6:
# 21 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_1
# 23 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 24 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 25 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_EventScript_Pokeball_1


NicknamePartyMon::
# 44 "data/maps/QuayshadeTown/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 45 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 46 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 47 "data/maps/QuayshadeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 48 "data/maps/QuayshadeTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 53 "data/maps/QuayshadeTown/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 54 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 55 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 58 "data/maps/QuayshadeTown/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 56 "data/maps/QuayshadeTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


QuayshadeTown_Text_TownSign::
# 68 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 69 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Text_TownSign_Text_0
# 70 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	return


QuayshadeTown_Text_PlayerHouseSign::
# 74 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 75 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Text_PlayerHouseSign_Text_0
# 76 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	return


QuayshadeTown_Text_CodyHouseSign::
# 80 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 81 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Text_CodyHouseSign_Text_0
# 82 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	return


QuayshadeTown_Trigger_DadGiveMon::
# 88 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 89 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, DadTurn
# 90 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon_Text_0
# 91 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, DadWalk
# 92 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon_Text_1
# 93 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 94 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon_2
# 100 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon_3
# 108 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 109 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon_1:
# 111 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon_Text_2
# 112 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 113 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 114 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 115 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	return

QuayshadeTown_Trigger_DadGiveMon_2:
# 95 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_1
# 97 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 98 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon_1

QuayshadeTown_Trigger_DadGiveMon_3:
# 101 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_1
# 103 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 104 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 105 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon_1


# 118 "data/maps/QuayshadeTown/scripts.pory"
DadTurn:
# 119 "data/maps/QuayshadeTown/scripts.pory"
	faceplayer
	step_end

# 122 "data/maps/QuayshadeTown/scripts.pory"
DadWalk:
# 123 "data/maps/QuayshadeTown/scripts.pory"
	walk_left
# 124 "data/maps/QuayshadeTown/scripts.pory"
	walk_left
# 125 "data/maps/QuayshadeTown/scripts.pory"
	walk_left
# 126 "data/maps/QuayshadeTown/scripts.pory"
	walk_left
	step_end

QuayshadeTown_EventScript_OldWoman::
# 132 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 133 "data/maps/QuayshadeTown/scripts.pory"
	faceplayer
# 134 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_OldWoman_Text_0
# 135 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	return


QuayshadeTown_Dad_GiveMon::
# 139 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 140 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, DadWalk
	return


QuayshadeTown_Trigger_BlockPathNorth::
# 144 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 145 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_BlockPathNorth_Text_0
# 146 "data/maps/QuayshadeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 147 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	return


# 151 "data/maps/QuayshadeTown/scripts.pory"
StopPlayer:
# 152 "data/maps/QuayshadeTown/scripts.pory"
	walk_down
	step_end

QuayshadeTown_EventScript_Pokeball_Text_0:
# 10 "data/maps/QuayshadeTown/scripts.pory"
	.string "Do you want to choose Tyrogue?$"

QuayshadeTown_EventScript_Pokeball_Text_1:
# 15 "data/maps/QuayshadeTown/scripts.pory"
	.string "Received Tyrogue$"

QuayshadeTown_EventScript_Pokeball_Text_2:
# 29 "data/maps/QuayshadeTown/scripts.pory"
	.string "No more room$"

NicknamePartyMon_Text_0:
# 44 "data/maps/QuayshadeTown/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 58 "data/maps/QuayshadeTown/scripts.pory"
	.string "Transferred to PC$"

QuayshadeTown_Text_TownSign_Text_0:
# 69 "data/maps/QuayshadeTown/scripts.pory"
	.string "Quayshade Town$"

QuayshadeTown_Text_PlayerHouseSign_Text_0:
# 75 "data/maps/QuayshadeTown/scripts.pory"
	.string "Player's House$"

QuayshadeTown_Text_CodyHouseSign_Text_0:
# 81 "data/maps/QuayshadeTown/scripts.pory"
	.string "Cody's House$"

QuayshadeTown_Trigger_DadGiveMon_Text_0:
# 90 "data/maps/QuayshadeTown/scripts.pory"
	.string "Hey bubby! Did Mom send you out here?$"

QuayshadeTown_Trigger_DadGiveMon_Text_1:
# 92 "data/maps/QuayshadeTown/scripts.pory"
	.string "Nevermind the yard work. I've got a\n"
	.string "surprise for you.\p"
	.string "I think you're finally old enough to\n"
	.string "have your very own Pokemon.\p"
	.string "I got this from one of my old\n"
	.string "construction buddies. He said to give it\l"
	.string "a good home!$"

QuayshadeTown_Trigger_DadGiveMon_Text_2:
# 111 "data/maps/QuayshadeTown/scripts.pory"
	.string "It feels like just yesterday you were\n"
	.string "taking your first steps! Time really\l"
	.string "does fly, huh?\p"
	.string "Anyway, why don't you practice battling\n"
	.string "against some of the Pokemon in our\l"
	.string "backyard?$"

QuayshadeTown_EventScript_OldWoman_Text_0:
# 134 "data/maps/QuayshadeTown/scripts.pory"
	.string "Bronzong Lake is so named because of\n"
	.string "an old legend.\p"
	.string "The legend tells of a Bronzong who\n"
	.string "summoned a rainstorm that lasted\l"
	.string "thirty days, thus creating the lake.$"

QuayshadeTown_Trigger_BlockPathNorth_Text_0:
# 145 "data/maps/QuayshadeTown/scripts.pory"
	.string "It's not safe.$"

QuayshadeTown_NotChosen::
# 61 "data/maps/QuayshadeTown/scripts.pory"
	.string "Better leave it then.$"
