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


QuayshadeTown_Trigger_DadGiveMon1::
# 88 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 89 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 92 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 93 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 96 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 97 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 98 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 99 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon1_2
# 105 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon1_3
# 113 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 114 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon1_1:
# 116 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 117 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 118 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 119 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 120 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon1_2:
# 100 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 101 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 102 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 103 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon1_1

QuayshadeTown_Trigger_DadGiveMon1_3:
# 106 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 107 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 108 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 109 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 110 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon1_1


QuayshadeTown_Trigger_DadGiveMon2::
# 124 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 125 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 128 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 129 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 132 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon2_Movement_0
# 135 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 136 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 137 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 138 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon2_2
# 144 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon2_3
# 152 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 153 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon2_1:
# 155 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 156 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 157 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 158 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 159 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon2_2:
# 139 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 140 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 141 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 142 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon2_1

QuayshadeTown_Trigger_DadGiveMon2_3:
# 145 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 147 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 148 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 149 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon2_1


QuayshadeTown_Trigger_DadGiveMon3::
# 163 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 164 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 167 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 168 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 171 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon3_Movement_0
# 174 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 175 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 176 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 177 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon3_2
# 183 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon3_3
# 191 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 192 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon3_1:
# 194 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 195 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 196 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 197 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 198 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon3_2:
# 178 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 180 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 181 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon3_1

QuayshadeTown_Trigger_DadGiveMon3_3:
# 184 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 185 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 186 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 187 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 188 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon3_1


QuayshadeTown_Trigger_DadGiveMon4::
# 202 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 203 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 206 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 207 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 210 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon4_Movement_0
# 213 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 215 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 216 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon4_2
# 222 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon4_3
# 230 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 231 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon4_1:
# 233 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 234 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 235 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 236 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 237 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon4_2:
# 217 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 218 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 219 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 220 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon4_1

QuayshadeTown_Trigger_DadGiveMon4_3:
# 223 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 224 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 225 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 226 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 227 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon4_1


QuayshadeTown_Trigger_DadGiveMon5::
# 241 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 242 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 245 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 246 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 249 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon5_Movement_0
# 252 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 253 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 254 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 255 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon5_2
# 261 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon5_3
# 269 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 270 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon5_1:
# 272 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 273 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 274 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 275 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 276 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon5_2:
# 256 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 257 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 258 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 259 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon5_1

QuayshadeTown_Trigger_DadGiveMon5_3:
# 262 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 263 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 264 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 265 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 266 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon5_1


QuayshadeTown_Trigger_DadGiveMon6::
# 280 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 281 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 284 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 285 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 288 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon6_Movement_0
# 291 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 292 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 293 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 294 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon6_2
# 300 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon6_3
# 308 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 309 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon6_1:
# 311 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 312 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 313 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 314 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 315 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon6_2:
# 295 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 296 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 297 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 298 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon6_1

QuayshadeTown_Trigger_DadGiveMon6_3:
# 301 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 302 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 303 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 304 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 305 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon6_1


QuayshadeTown_Trigger_DadGiveMon7::
# 319 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 320 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 323 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 324 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 327 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon7_Movement_0
# 330 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 331 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 332 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 333 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon7_2
# 339 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon7_3
# 347 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 348 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon7_1:
# 350 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 351 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 352 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 353 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 354 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon7_2:
# 334 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 335 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 336 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 337 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon7_1

QuayshadeTown_Trigger_DadGiveMon7_3:
# 340 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 341 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 342 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 343 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 344 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon7_1


QuayshadeTown_Trigger_DadGiveMon8::
# 358 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 359 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 362 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 363 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 366 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon8_Movement_0
# 369 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 370 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 371 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 372 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon8_2
# 378 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon8_3
# 386 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 387 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon8_1:
# 389 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 390 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 391 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 392 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 393 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon8_2:
# 373 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 374 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 375 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 376 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon8_1

QuayshadeTown_Trigger_DadGiveMon8_3:
# 379 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 381 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 382 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 383 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon8_1


QuayshadeTown_Trigger_DadGiveMon9::
# 397 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 398 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon9_Movement_0
# 401 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 402 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 403 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 404 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon9_2
# 410 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon9_3
# 418 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 419 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon9_1:
# 421 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 422 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 423 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 424 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 425 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon9_2:
# 405 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 406 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 407 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 408 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon9_1

QuayshadeTown_Trigger_DadGiveMon9_3:
# 411 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 412 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 413 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 414 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 415 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon9_1


QuayshadeTown_EventScript_OldWoman::
# 431 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 432 "data/maps/QuayshadeTown/scripts.pory"
	faceplayer
# 433 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_OldWoman_Text_0
# 434 "data/maps/QuayshadeTown/scripts.pory"
	release
	return


QuayshadeTown_Trigger_BlockPathNorth::
# 440 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 441 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_BlockPathNorth_Text_0
# 442 "data/maps/QuayshadeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 443 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 444 "data/maps/QuayshadeTown/scripts.pory"
	release
	return


# 447 "data/maps/QuayshadeTown/scripts.pory"
StopPlayer:
# 448 "data/maps/QuayshadeTown/scripts.pory"
	walk_down
	step_end

# 89 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon1_Movement_0:
# 90 "data/maps/QuayshadeTown/scripts.pory"
	face_right
	step_end

# 93 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon1_Movement_1:
# 94 "data/maps/QuayshadeTown/scripts.pory"
	face_left
	step_end

# 132 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon2_Movement_0:
# 133 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 171 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon3_Movement_0:
# 172 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 172 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 210 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon4_Movement_0:
# 211 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 211 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 211 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 249 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon5_Movement_0:
# 250 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 250 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 250 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 250 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 288 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon6_Movement_0:
# 289 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 289 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 289 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 289 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 289 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 327 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon7_Movement_0:
# 328 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 328 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 328 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 328 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 328 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 328 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 366 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon8_Movement_0:
# 367 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 367 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 367 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 367 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 367 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 367 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 367 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 398 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon9_Movement_0:
# 399 "data/maps/QuayshadeTown/scripts.pory"
	face_player
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

QuayshadeTown_Trigger_DadGiveMon1_Text_0:
# 92 "data/maps/QuayshadeTown/scripts.pory"
	.string "Hey bubby! Did Mom send you out here?$"

QuayshadeTown_Trigger_DadGiveMon1_Text_1:
# 97 "data/maps/QuayshadeTown/scripts.pory"
	.string "Nevermind the yard work. I've got a\n"
	.string "surprise for you.\p"
	.string "I think you're finally old enough to\n"
	.string "have your very own Pokemon.\p"
	.string "I got this from one of my old\n"
	.string "construction buddies. He said to give it\l"
	.string "a good home!$"

QuayshadeTown_Trigger_DadGiveMon1_Text_2:
# 101 "data/maps/QuayshadeTown/scripts.pory"
	.string "Received Tyrogue!$"

QuayshadeTown_Trigger_DadGiveMon1_Text_3:
# 116 "data/maps/QuayshadeTown/scripts.pory"
	.string "It feels like just yesterday you were\n"
	.string "taking your first steps! Time really\l"
	.string "does fly, huh?\p"
	.string "Anyway, why don't you practice battling\n"
	.string "against some of the Pokemon in our\l"
	.string "backyard?$"

QuayshadeTown_EventScript_OldWoman_Text_0:
# 433 "data/maps/QuayshadeTown/scripts.pory"
	.string "Bronzong Lake is so named because of\n"
	.string "an old legend.\p"
	.string "The legend tells of a Bronzong who\n"
	.string "summoned a rainstorm that lasted\l"
	.string "thirty days, thus creating the lake.$"

QuayshadeTown_Trigger_BlockPathNorth_Text_0:
# 441 "data/maps/QuayshadeTown/scripts.pory"
	.string "It's not safe.$"

QuayshadeTown_NotChosen::
# 61 "data/maps/QuayshadeTown/scripts.pory"
	.string "Better leave it then.$"
