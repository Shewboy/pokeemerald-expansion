QuayshadeTown_MapScripts::
	.byte 0


QuayshadeTown_EventScript_Pokeball::
# 9 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 10 "data/maps/QuayshadeTown/scripts.pory"
	showmonpic SPECIES_TYROGUE, 10, 3
# 11 "data/maps/QuayshadeTown/scripts.pory"
	playmoncry SPECIES_TYROGUE, CRY_MODE_NORMAL
# 12 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 13 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuayshadeTown_EventScript_Pokeball_2
# 35 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 36 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_NotChosen
QuayshadeTown_EventScript_Pokeball_1:
# 38 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 39 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 40 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 41 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	end

QuayshadeTown_EventScript_Pokeball_2:
# 14 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 15 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_EventScript_Pokeball_5
# 22 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_EventScript_Pokeball_6
# 30 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 31 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
	goto QuayshadeTown_EventScript_Pokeball_1

QuayshadeTown_EventScript_Pokeball_5:
# 16 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_1
# 18 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 19 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 20 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_EventScript_Pokeball_1

QuayshadeTown_EventScript_Pokeball_6:
# 23 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_1
# 25 "data/maps/QuayshadeTown/scripts.pory"
	removeobject 5
# 26 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 27 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_EventScript_Pokeball_1


NicknamePartyMon::
# 46 "data/maps/QuayshadeTown/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 47 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 48 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 49 "data/maps/QuayshadeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 50 "data/maps/QuayshadeTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 55 "data/maps/QuayshadeTown/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 56 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 57 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 60 "data/maps/QuayshadeTown/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 58 "data/maps/QuayshadeTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


QuayshadeTown_Text_TownSign::
# 72 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 73 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Text_TownSign_Text_0, MSGBOX_SIGN
# 74 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	return


QuayshadeTown_Text_PlayerHouseSign::
# 78 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 79 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Text_PlayerHouseSign_Text_0, MSGBOX_SIGN
# 80 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	return


QuayshadeTown_Text_CodyHouseSign::
# 84 "data/maps/QuayshadeTown/scripts.pory"
	lockall
# 85 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Text_CodyHouseSign_Text_0, MSGBOX_SIGN
# 86 "data/maps/QuayshadeTown/scripts.pory"
	releaseall
	return


QuayshadeTown_Trigger_DadGiveMon1::
# 94 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, QuayshadeTown_Trigger_DadGiveMon1_1
	return

QuayshadeTown_Trigger_DadGiveMon1_1:
# 95 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 96 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 99 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 100 "data/maps/QuayshadeTown/scripts.pory"
	closemessage
# 101 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 104 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 106 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 107 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon1_5
# 113 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon1_6
# 120 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 121 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon1_4:
# 123 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 124 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 125 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_TOWN_STATE, 1
# 126 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 127 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon1_5:
# 108 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 110 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 111 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon1_4

QuayshadeTown_Trigger_DadGiveMon1_6:
# 114 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 116 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 117 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon1_4


QuayshadeTown_Trigger_DadGiveMon2::
# 134 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, QuayshadeTown_Trigger_DadGiveMon2_1
	return

QuayshadeTown_Trigger_DadGiveMon2_1:
# 135 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 136 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 139 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 140 "data/maps/QuayshadeTown/scripts.pory"
	closemessage
# 141 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 144 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon2_Movement_0
# 147 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 149 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 150 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon2_5
# 156 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon2_6
# 163 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 164 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon2_4:
# 166 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 167 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 168 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 2
# 169 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 170 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon2_5:
# 151 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 153 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 154 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon2_4

QuayshadeTown_Trigger_DadGiveMon2_6:
# 157 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 158 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 159 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 160 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon2_4


QuayshadeTown_Trigger_DadGiveMon3::
# 177 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, QuayshadeTown_Trigger_DadGiveMon3_1
	return

QuayshadeTown_Trigger_DadGiveMon3_1:
# 178 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 179 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 182 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 183 "data/maps/QuayshadeTown/scripts.pory"
	closemessage
# 184 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 187 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon3_Movement_0
# 190 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 191 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 192 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 193 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon3_5
# 199 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon3_6
# 206 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 207 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon3_4:
# 209 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 210 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 211 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 2
# 212 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 213 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon3_5:
# 194 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 196 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 197 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon3_4

QuayshadeTown_Trigger_DadGiveMon3_6:
# 200 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 202 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 203 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon3_4


QuayshadeTown_Trigger_DadGiveMon4::
# 220 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, QuayshadeTown_Trigger_DadGiveMon4_1
	return

QuayshadeTown_Trigger_DadGiveMon4_1:
# 221 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 222 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 225 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 226 "data/maps/QuayshadeTown/scripts.pory"
	closemessage
# 227 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 230 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon4_Movement_0
# 233 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 234 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 235 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 236 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon4_5
# 242 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon4_6
# 249 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 250 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon4_4:
# 252 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 253 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 254 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 2
# 255 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 256 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon4_5:
# 237 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 238 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 239 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 240 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon4_4

QuayshadeTown_Trigger_DadGiveMon4_6:
# 243 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 244 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 245 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 246 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon4_4


QuayshadeTown_Trigger_DadGiveMon5::
# 263 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, QuayshadeTown_Trigger_DadGiveMon5_1
	return

QuayshadeTown_Trigger_DadGiveMon5_1:
# 264 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 265 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 268 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 269 "data/maps/QuayshadeTown/scripts.pory"
	closemessage
# 270 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 273 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon5_Movement_0
# 276 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 277 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 278 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 279 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon5_5
# 285 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon5_6
# 292 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 293 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon5_4:
# 295 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 296 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 297 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 2
# 298 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 299 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon5_5:
# 280 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 281 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 282 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 283 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon5_4

QuayshadeTown_Trigger_DadGiveMon5_6:
# 286 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 287 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 288 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 289 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon5_4


QuayshadeTown_Trigger_DadGiveMon6::
# 306 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, QuayshadeTown_Trigger_DadGiveMon6_1
	return

QuayshadeTown_Trigger_DadGiveMon6_1:
# 307 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 308 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 311 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 312 "data/maps/QuayshadeTown/scripts.pory"
	closemessage
# 313 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 316 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon6_Movement_0
# 319 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 320 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 321 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 322 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon6_5
# 328 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon6_6
# 335 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 336 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon6_4:
# 338 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 339 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 340 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 2
# 341 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 342 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon6_5:
# 323 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 324 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 325 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 326 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon6_4

QuayshadeTown_Trigger_DadGiveMon6_6:
# 329 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 330 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 331 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 332 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon6_4


QuayshadeTown_Trigger_DadGiveMon7::
# 349 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, QuayshadeTown_Trigger_DadGiveMon7_1
	return

QuayshadeTown_Trigger_DadGiveMon7_1:
# 350 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 351 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 354 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 355 "data/maps/QuayshadeTown/scripts.pory"
	closemessage
# 356 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 359 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon7_Movement_0
# 362 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 363 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 364 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 365 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon7_5
# 371 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon7_6
# 378 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 379 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon7_4:
# 381 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 382 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 383 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 2
# 384 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 385 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon7_5:
# 366 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 367 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 368 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 369 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon7_4

QuayshadeTown_Trigger_DadGiveMon7_6:
# 372 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 373 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 374 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 375 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon7_4


QuayshadeTown_Trigger_DadGiveMon8::
# 392 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, QuayshadeTown_Trigger_DadGiveMon8_1
	return

QuayshadeTown_Trigger_DadGiveMon8_1:
# 393 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 394 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon1_Movement_0
# 397 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 398 "data/maps/QuayshadeTown/scripts.pory"
	closemessage
# 399 "data/maps/QuayshadeTown/scripts.pory"
	applymovement LOCALID_PLAYER, QuayshadeTown_Trigger_DadGiveMon1_Movement_1
# 402 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon8_Movement_0
# 405 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 406 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 407 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 408 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon8_5
# 414 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon8_6
# 421 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 422 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon8_4:
# 424 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 425 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 426 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 2
# 427 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 428 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon8_5:
# 409 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 410 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 411 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 412 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon8_4

QuayshadeTown_Trigger_DadGiveMon8_6:
# 415 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 416 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 417 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 418 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon8_4


QuayshadeTown_Trigger_DadGiveMon9::
# 435 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, QuayshadeTown_Trigger_DadGiveMon9_1
# 466 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 467 "data/maps/QuayshadeTown/scripts.pory"
	faceplayer
# 468 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon9_Text_0
# 469 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon9_1:
# 436 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 437 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 1, QuayshadeTown_Trigger_DadGiveMon9_Movement_0
# 440 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_0
# 441 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_1
# 442 "data/maps/QuayshadeTown/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 443 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon9_5
# 449 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq QuayshadeTown_Trigger_DadGiveMon9_6
# 456 "data/maps/QuayshadeTown/scripts.pory"
	hidemonpic
# 457 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Pokeball_Text_2
QuayshadeTown_Trigger_DadGiveMon9_4:
# 459 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_3
# 460 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 461 "data/maps/QuayshadeTown/scripts.pory"
	setvar VAR_QUAYSHADE_INTRO_STATE, 2
# 462 "data/maps/QuayshadeTown/scripts.pory"
	waitmessage
# 463 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_Trigger_DadGiveMon9_5:
# 444 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 445 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 446 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 447 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon9_4

QuayshadeTown_Trigger_DadGiveMon9_6:
# 450 "data/maps/QuayshadeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 451 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_DadGiveMon1_Text_2
# 452 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 453 "data/maps/QuayshadeTown/scripts.pory"
	call NicknamePartyMon
	goto QuayshadeTown_Trigger_DadGiveMon9_4


QuayshadeTown_EventScript_OldWoman::
# 478 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 479 "data/maps/QuayshadeTown/scripts.pory"
	faceplayer
# 480 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_OldWoman_Text_0
# 481 "data/maps/QuayshadeTown/scripts.pory"
	release
	return


QuayshadeTown_EventScript_Walking_Boy::
# 485 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 486 "data/maps/QuayshadeTown/scripts.pory"
	faceplayer
# 487 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_0
	checkitem ITEM_LAVA_COOKIE, 1
# 0 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_19
QuayshadeTown_EventScript_Walking_Boy_17:
	checkitem ITEM_CASTELIACONE, 1
# 0 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_16
QuayshadeTown_EventScript_Walking_Boy_14:
	checkitem ITEM_FRESH_WATER, 1
# 0 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_13
QuayshadeTown_EventScript_Walking_Boy_11:
	checkitem ITEM_LEMONADE, 1
# 0 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_10
QuayshadeTown_EventScript_Walking_Boy_8:
	checkitem ITEM_RAGE_CANDY_BAR, 1
# 0 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_7
QuayshadeTown_EventScript_Walking_Boy_6:
# 579 "data/maps/QuayshadeTown/scripts.pory"
	release
	return

QuayshadeTown_EventScript_Walking_Boy_1:
# 490 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_1, MSGBOX_YESNO
# 491 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_22
# 501 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_3
# 502 "data/maps/QuayshadeTown/scripts.pory"
	release
	end

QuayshadeTown_EventScript_Walking_Boy_2:
# 508 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_4, MSGBOX_YESNO
# 509 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_25
# 519 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_3
# 520 "data/maps/QuayshadeTown/scripts.pory"
	release
	end

QuayshadeTown_EventScript_Walking_Boy_3:
# 526 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_5, MSGBOX_YESNO
# 527 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_28
# 537 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_3
# 538 "data/maps/QuayshadeTown/scripts.pory"
	release
	end

QuayshadeTown_EventScript_Walking_Boy_4:
# 544 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_6, MSGBOX_YESNO
# 545 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_31
# 555 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_3
# 556 "data/maps/QuayshadeTown/scripts.pory"
	release
	end

QuayshadeTown_EventScript_Walking_Boy_5:
# 562 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_7, MSGBOX_YESNO
# 563 "data/maps/QuayshadeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuayshadeTown_EventScript_Walking_Boy_34
# 573 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_3
# 574 "data/maps/QuayshadeTown/scripts.pory"
	release
	end

QuayshadeTown_EventScript_Walking_Boy_7:
# 561 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_RAGE_CANDY_BAR, QuayshadeTown_EventScript_Walking_Boy_5
	goto QuayshadeTown_EventScript_Walking_Boy_6

QuayshadeTown_EventScript_Walking_Boy_10:
# 543 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_LEMONADE, QuayshadeTown_EventScript_Walking_Boy_4
	goto QuayshadeTown_EventScript_Walking_Boy_8

QuayshadeTown_EventScript_Walking_Boy_13:
# 525 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_FRESH_WATER, QuayshadeTown_EventScript_Walking_Boy_3
	goto QuayshadeTown_EventScript_Walking_Boy_11

QuayshadeTown_EventScript_Walking_Boy_16:
# 507 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_CASTELIACONE, QuayshadeTown_EventScript_Walking_Boy_2
	goto QuayshadeTown_EventScript_Walking_Boy_14

QuayshadeTown_EventScript_Walking_Boy_19:
# 489 "data/maps/QuayshadeTown/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_LAVA_COOKIE, QuayshadeTown_EventScript_Walking_Boy_1
	goto QuayshadeTown_EventScript_Walking_Boy_17

QuayshadeTown_EventScript_Walking_Boy_22:
# 492 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_2
# 493 "data/maps/QuayshadeTown/scripts.pory"
	removeitem ITEM_LAVA_COOKIE, 1
# 494 "data/maps/QuayshadeTown/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
# 495 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 496 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_LAVA_COOKIE
# 497 "data/maps/QuayshadeTown/scripts.pory"
	release
	end

QuayshadeTown_EventScript_Walking_Boy_25:
# 510 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_2
# 511 "data/maps/QuayshadeTown/scripts.pory"
	removeitem ITEM_CASTELIACONE, 1
# 512 "data/maps/QuayshadeTown/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
# 513 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 514 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_CASTELIACONE
# 515 "data/maps/QuayshadeTown/scripts.pory"
	release
	end

QuayshadeTown_EventScript_Walking_Boy_28:
# 528 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_2
# 529 "data/maps/QuayshadeTown/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 530 "data/maps/QuayshadeTown/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
# 531 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 532 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_FRESH_WATER
# 533 "data/maps/QuayshadeTown/scripts.pory"
	release
	end

QuayshadeTown_EventScript_Walking_Boy_31:
# 546 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_2
# 547 "data/maps/QuayshadeTown/scripts.pory"
	removeitem ITEM_LEMONADE, 1
# 548 "data/maps/QuayshadeTown/scripts.pory"
	giveitem ITEM_THUNDERSTONE, 1
# 549 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 550 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_LEMONADE
# 551 "data/maps/QuayshadeTown/scripts.pory"
	release
	end

QuayshadeTown_EventScript_Walking_Boy_34:
# 564 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Walking_Boy_Text_2
# 565 "data/maps/QuayshadeTown/scripts.pory"
	removeitem ITEM_RAGE_CANDY_BAR, 1
# 566 "data/maps/QuayshadeTown/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
# 567 "data/maps/QuayshadeTown/scripts.pory"
	waitfanfare
# 568 "data/maps/QuayshadeTown/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_RAGE_CANDY_BAR
# 569 "data/maps/QuayshadeTown/scripts.pory"
	release
	end


QuayshadeTown_EventScript_Policeman::
# 584 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 585 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 4, QuayshadeTown_Trigger_DadGiveMon9_Movement_0
# 588 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Policeman_Text_0
	return


QuayshadeTown_EventScript_Science_Rules::
# 592 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 593 "data/maps/QuayshadeTown/scripts.pory"
	applymovement 5, QuayshadeTown_Trigger_DadGiveMon9_Movement_0
# 596 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_EventScript_Science_Rules_Text_0
# 597 "data/maps/QuayshadeTown/scripts.pory"
	release
	return


QuayshadeTown_Trigger_BlockPathNorth::
# 603 "data/maps/QuayshadeTown/scripts.pory"
	lock
# 604 "data/maps/QuayshadeTown/scripts.pory"
	msgbox QuayshadeTown_Trigger_BlockPathNorth_Text_0
# 605 "data/maps/QuayshadeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, QuayshadeTown_Trigger_BlockPathNorth_Movement_0
# 608 "data/maps/QuayshadeTown/scripts.pory"
	waitmovement 0
# 609 "data/maps/QuayshadeTown/scripts.pory"
	release
	return


# 96 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon1_Movement_0:
# 97 "data/maps/QuayshadeTown/scripts.pory"
	face_right
	step_end

# 101 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon1_Movement_1:
# 102 "data/maps/QuayshadeTown/scripts.pory"
	face_left
	step_end

# 144 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon2_Movement_0:
# 145 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 187 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon3_Movement_0:
# 188 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 188 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 230 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon4_Movement_0:
# 231 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 231 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 231 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 273 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon5_Movement_0:
# 274 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 274 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 274 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 274 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 316 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon6_Movement_0:
# 317 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 317 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 317 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 317 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 317 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 359 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon7_Movement_0:
# 360 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 360 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 360 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 360 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 360 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 360 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 402 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon8_Movement_0:
# 403 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 403 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 403 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 403 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 403 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 403 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
# 403 "data/maps/QuayshadeTown/scripts.pory"
	walk_right
	step_end

# 437 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_DadGiveMon9_Movement_0:
# 438 "data/maps/QuayshadeTown/scripts.pory"
	face_player
	step_end

# 605 "data/maps/QuayshadeTown/scripts.pory"
QuayshadeTown_Trigger_BlockPathNorth_Movement_0:
# 606 "data/maps/QuayshadeTown/scripts.pory"
	walk_down
	step_end

QuayshadeTown_EventScript_Pokeball_Text_0:
# 12 "data/maps/QuayshadeTown/scripts.pory"
	.string "Do you want to choose Tyrogue?$"

QuayshadeTown_EventScript_Pokeball_Text_1:
# 17 "data/maps/QuayshadeTown/scripts.pory"
	.string "Received Tyrogue$"

QuayshadeTown_EventScript_Pokeball_Text_2:
# 31 "data/maps/QuayshadeTown/scripts.pory"
	.string "No more room$"

NicknamePartyMon_Text_0:
# 46 "data/maps/QuayshadeTown/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 60 "data/maps/QuayshadeTown/scripts.pory"
	.string "Transferred to PC$"

QuayshadeTown_Text_TownSign_Text_0:
# 73 "data/maps/QuayshadeTown/scripts.pory"
	.string "Quayshade Town$"

QuayshadeTown_Text_PlayerHouseSign_Text_0:
# 79 "data/maps/QuayshadeTown/scripts.pory"
	.string "Player's House$"

QuayshadeTown_Text_CodyHouseSign_Text_0:
# 85 "data/maps/QuayshadeTown/scripts.pory"
	.string "Cody's House$"

QuayshadeTown_Trigger_DadGiveMon1_Text_0:
# 99 "data/maps/QuayshadeTown/scripts.pory"
	.string "Hey bubby! Did Mom send you out here?$"

QuayshadeTown_Trigger_DadGiveMon1_Text_1:
# 105 "data/maps/QuayshadeTown/scripts.pory"
	.string "Nevermind the yard work. I've got a\n"
	.string "surprise for you.\p"
	.string "I think you're finally old enough to\n"
	.string "have your very own Pokémon.\p"
	.string "I got this from one of my old\n"
	.string "construction buddies. He said to give it\l"
	.string "a good home!$"

QuayshadeTown_Trigger_DadGiveMon1_Text_2:
# 109 "data/maps/QuayshadeTown/scripts.pory"
	.string "Received Tyrogue!$"

QuayshadeTown_Trigger_DadGiveMon1_Text_3:
# 123 "data/maps/QuayshadeTown/scripts.pory"
	.string "It feels like just yesterday you were\n"
	.string "taking your first steps! Time really\l"
	.string "does fly, huh?\p"
	.string "Anyway, why don't you practice battling\n"
	.string "against some of the Pokémon in our\l"
	.string "backyard?$"

QuayshadeTown_Trigger_DadGiveMon9_Text_0:
# 468 "data/maps/QuayshadeTown/scripts.pory"
	.string "I love you, bubby! You make me proud\n"
	.string "every day.$"

QuayshadeTown_EventScript_OldWoman_Text_0:
# 480 "data/maps/QuayshadeTown/scripts.pory"
	.string "Bronzong Lake is so named because of\n"
	.string "an old legend.\p"
	.string "The legend tells of a Bronzong who\n"
	.string "summoned a rainstorm that lasted\l"
	.string "thirty days, thus creating the lake.$"

QuayshadeTown_EventScript_Walking_Boy_Text_0:
# 487 "data/maps/QuayshadeTown/scripts.pory"
	.string ".....\p"
	.string "..................................\p"
	.string "...................................................................?$"

QuayshadeTown_EventScript_Walking_Boy_Text_1:
# 490 "data/maps/QuayshadeTown/scripts.pory"
	.string "Give the walking boy your Lava Cookie?$"

QuayshadeTown_EventScript_Walking_Boy_Text_2:
# 492 "data/maps/QuayshadeTown/scripts.pory"
	.string ".....!$"

QuayshadeTown_EventScript_Walking_Boy_Text_3:
# 501 "data/maps/QuayshadeTown/scripts.pory"
	.string ".....$"

QuayshadeTown_EventScript_Walking_Boy_Text_4:
# 508 "data/maps/QuayshadeTown/scripts.pory"
	.string "Give the walking boy your Casteliacone?$"

QuayshadeTown_EventScript_Walking_Boy_Text_5:
# 526 "data/maps/QuayshadeTown/scripts.pory"
	.string "Give the walking boy your Fresh Water?$"

QuayshadeTown_EventScript_Walking_Boy_Text_6:
# 544 "data/maps/QuayshadeTown/scripts.pory"
	.string "Give the walking boy your Lemonade?$"

QuayshadeTown_EventScript_Walking_Boy_Text_7:
# 562 "data/maps/QuayshadeTown/scripts.pory"
	.string "Give the walking boy your Rage Candy\n"
	.string "Bar?$"

QuayshadeTown_EventScript_Policeman_Text_0:
# 588 "data/maps/QuayshadeTown/scripts.pory"
	.string "We've seen a lot of criminal activity on\n"
	.string "Route 11.\p"
	.string "So, we're only allowing trainers with at\n"
	.string "least seven badges to pass.$"

QuayshadeTown_EventScript_Science_Rules_Text_0:
# 596 "data/maps/QuayshadeTown/scripts.pory"
	.string "The power of science is amazing!\p"
	.string "Now you can make your very own Pokémon\n"
	.string "game!$"

QuayshadeTown_Trigger_BlockPathNorth_Text_0:
# 604 "data/maps/QuayshadeTown/scripts.pory"
	.string "Hey, kid! It's not safe past here.$"

QuayshadeTown_NotChosen::
# 63 "data/maps/QuayshadeTown/scripts.pory"
	.string "Better leave it then.$"
