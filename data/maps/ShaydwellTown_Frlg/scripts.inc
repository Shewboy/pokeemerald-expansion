ShaydwellTown_Frlg_MapScripts::
	.byte 0


NicknamePartyMon::
# 46 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 47 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 48 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 49 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 50 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 55 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 56 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 57 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 60 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 58 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


ShaydwellTown_Text_TownSign::
# 72 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lockall
# 73 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Text_TownSign_Text_0, MSGBOX_SIGN
# 74 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	releaseall
	return


ShaydwellTown_Text_PlayerHouseSign::
# 78 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lockall
# 79 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Text_PlayerHouseSign_Text_0, MSGBOX_SIGN
# 80 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	releaseall
	return


ShaydwellTown_Text_CodyHouseSign::
# 84 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lockall
# 85 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Text_CodyHouseSign_Text_0, MSGBOX_SIGN
# 86 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	releaseall
	return


ShaydwellTown_Trigger_DadGiveMon1::
# 94 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ShaydwellTown_Trigger_DadGiveMon1_1
	return

ShaydwellTown_Trigger_DadGiveMon1_1:
# 95 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 96 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon1_Movement_0
# 99 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_0
# 100 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	closemessage
# 101 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_Trigger_DadGiveMon1_Movement_1
# 104 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmovement 0
# 105 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_1
# 106 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 107 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon1_5
# 113 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon1_6
# 120 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 121 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_3
ShaydwellTown_Trigger_DadGiveMon1_4:
# 123 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_4
# 124 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 125 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 1
# 126 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmessage
# 127 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon1_5:
# 108 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 110 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 111 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon1_4

ShaydwellTown_Trigger_DadGiveMon1_6:
# 114 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 116 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 117 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon1_4


ShaydwellTown_Trigger_DadGiveMon2::
# 134 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ShaydwellTown_Trigger_DadGiveMon2_1
	return

ShaydwellTown_Trigger_DadGiveMon2_1:
# 135 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 136 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon1_Movement_0
# 139 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_0
# 140 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	closemessage
# 141 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_Trigger_DadGiveMon1_Movement_1
# 144 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon2_Movement_0
# 147 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmovement 0
# 148 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_1
# 149 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 150 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon2_5
# 156 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon2_6
# 163 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 164 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_3
ShaydwellTown_Trigger_DadGiveMon2_4:
# 166 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_4
# 167 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 168 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 2
# 169 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmessage
# 170 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon2_5:
# 151 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 153 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 154 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon2_4

ShaydwellTown_Trigger_DadGiveMon2_6:
# 157 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 158 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 159 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 160 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon2_4


ShaydwellTown_Trigger_DadGiveMon3::
# 177 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ShaydwellTown_Trigger_DadGiveMon3_1
	return

ShaydwellTown_Trigger_DadGiveMon3_1:
# 178 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 179 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon1_Movement_0
# 182 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_0
# 183 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	closemessage
# 184 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_Trigger_DadGiveMon1_Movement_1
# 187 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon3_Movement_0
# 190 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmovement 0
# 191 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_1
# 192 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 193 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon3_5
# 199 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon3_6
# 206 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 207 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_3
ShaydwellTown_Trigger_DadGiveMon3_4:
# 209 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_4
# 210 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 211 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 2
# 212 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmessage
# 213 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon3_5:
# 194 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 196 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 197 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon3_4

ShaydwellTown_Trigger_DadGiveMon3_6:
# 200 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 202 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 203 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon3_4


ShaydwellTown_Trigger_DadGiveMon4::
# 220 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ShaydwellTown_Trigger_DadGiveMon4_1
	return

ShaydwellTown_Trigger_DadGiveMon4_1:
# 221 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 222 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon1_Movement_0
# 225 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_0
# 226 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	closemessage
# 227 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_Trigger_DadGiveMon1_Movement_1
# 230 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon4_Movement_0
# 233 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmovement 0
# 234 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_1
# 235 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 236 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon4_5
# 242 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon4_6
# 249 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 250 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_3
ShaydwellTown_Trigger_DadGiveMon4_4:
# 252 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_4
# 253 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 254 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 2
# 255 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmessage
# 256 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon4_5:
# 237 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 238 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 239 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 240 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon4_4

ShaydwellTown_Trigger_DadGiveMon4_6:
# 243 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 244 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 245 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 246 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon4_4


ShaydwellTown_Trigger_DadGiveMon5::
# 263 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ShaydwellTown_Trigger_DadGiveMon5_1
	return

ShaydwellTown_Trigger_DadGiveMon5_1:
# 264 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 265 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon1_Movement_0
# 268 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_0
# 269 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	closemessage
# 270 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_Trigger_DadGiveMon1_Movement_1
# 273 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon5_Movement_0
# 276 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmovement 0
# 277 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_1
# 278 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 279 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon5_5
# 285 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon5_6
# 292 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 293 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_3
ShaydwellTown_Trigger_DadGiveMon5_4:
# 295 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_4
# 296 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 297 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 2
# 298 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmessage
# 299 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon5_5:
# 280 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 281 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 282 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 283 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon5_4

ShaydwellTown_Trigger_DadGiveMon5_6:
# 286 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 287 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 288 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 289 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon5_4


ShaydwellTown_Trigger_DadGiveMon6::
# 306 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ShaydwellTown_Trigger_DadGiveMon6_1
	return

ShaydwellTown_Trigger_DadGiveMon6_1:
# 307 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 308 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon1_Movement_0
# 311 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_0
# 312 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	closemessage
# 313 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_Trigger_DadGiveMon1_Movement_1
# 316 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon6_Movement_0
# 319 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmovement 0
# 320 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_1
# 321 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 322 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon6_5
# 328 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon6_6
# 335 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 336 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_3
ShaydwellTown_Trigger_DadGiveMon6_4:
# 338 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_4
# 339 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 340 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 2
# 341 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmessage
# 342 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon6_5:
# 323 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 324 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 325 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 326 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon6_4

ShaydwellTown_Trigger_DadGiveMon6_6:
# 329 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 330 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 331 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 332 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon6_4


ShaydwellTown_Trigger_DadGiveMon7::
# 349 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ShaydwellTown_Trigger_DadGiveMon7_1
	return

ShaydwellTown_Trigger_DadGiveMon7_1:
# 350 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 351 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon1_Movement_0
# 354 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_0
# 355 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	closemessage
# 356 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_Trigger_DadGiveMon1_Movement_1
# 359 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon7_Movement_0
# 362 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmovement 0
# 363 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_1
# 364 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 365 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon7_5
# 371 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon7_6
# 378 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 379 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_3
ShaydwellTown_Trigger_DadGiveMon7_4:
# 381 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_4
# 382 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 383 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 2
# 384 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmessage
# 385 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon7_5:
# 366 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 367 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 368 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 369 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon7_4

ShaydwellTown_Trigger_DadGiveMon7_6:
# 372 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 373 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 374 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 375 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon7_4


ShaydwellTown_Trigger_DadGiveMon8::
# 392 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ShaydwellTown_Trigger_DadGiveMon8_1
	return

ShaydwellTown_Trigger_DadGiveMon8_1:
# 393 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 394 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon1_Movement_0
# 397 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_0
# 398 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	closemessage
# 399 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ShaydwellTown_Trigger_DadGiveMon1_Movement_1
# 402 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon8_Movement_0
# 405 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmovement 0
# 406 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_1
# 407 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 408 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon8_5
# 414 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon8_6
# 421 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 422 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_3
ShaydwellTown_Trigger_DadGiveMon8_4:
# 424 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_4
# 425 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 426 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 2
# 427 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmessage
# 428 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon8_5:
# 409 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 410 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 411 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 412 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon8_4

ShaydwellTown_Trigger_DadGiveMon8_6:
# 415 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 416 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 417 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 418 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon8_4


ShaydwellTown_Trigger_DadGiveMon9::
# 435 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, ShaydwellTown_Trigger_DadGiveMon9_1
# 466 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 467 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	faceplayer
# 468 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon9_Text_0
# 469 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon9_1:
# 436 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 437 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement 1, ShaydwellTown_Trigger_DadGiveMon9_Movement_0
# 440 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_0
# 441 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_1
# 442 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	givemon SPECIES_TYROGUE, 5
# 443 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon9_5
# 449 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShaydwellTown_Trigger_DadGiveMon9_6
# 456 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	hidemonpic
# 457 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_3
ShaydwellTown_Trigger_DadGiveMon9_4:
# 459 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_4
# 460 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 461 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setvar VAR_SHAYDWELL_INTRO_STATE, 2
# 462 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmessage
# 463 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_Trigger_DadGiveMon9_5:
# 444 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 445 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 446 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 447 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon9_4

ShaydwellTown_Trigger_DadGiveMon9_6:
# 450 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 451 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_DadGiveMon1_Text_2
# 452 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 453 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ShaydwellTown_Trigger_DadGiveMon9_4


ShaydwellTown_EventScript_OldWoman::
# 478 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 479 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	faceplayer
# 480 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_OldWoman_Text_0
# 481 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return


ShaydwellTown_EventScript_Walking_Boy::
# 485 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 486 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	faceplayer
# 487 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_0
	checkitem ITEM_LAVA_COOKIE, 1
# 0 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_19
ShaydwellTown_EventScript_Walking_Boy_17:
	checkitem ITEM_CASTELIACONE, 1
# 0 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_16
ShaydwellTown_EventScript_Walking_Boy_14:
	checkitem ITEM_FRESH_WATER, 1
# 0 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_13
ShaydwellTown_EventScript_Walking_Boy_11:
	checkitem ITEM_LEMONADE, 1
# 0 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_10
ShaydwellTown_EventScript_Walking_Boy_8:
	checkitem ITEM_RAGE_CANDY_BAR, 1
# 0 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_7
ShaydwellTown_EventScript_Walking_Boy_6:
# 579 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return

ShaydwellTown_EventScript_Walking_Boy_1:
# 490 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_1, MSGBOX_YESNO
# 491 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_22
# 501 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_3
# 502 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end

ShaydwellTown_EventScript_Walking_Boy_2:
# 508 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_4, MSGBOX_YESNO
# 509 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_25
# 519 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_3
# 520 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end

ShaydwellTown_EventScript_Walking_Boy_3:
# 526 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_5, MSGBOX_YESNO
# 527 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_28
# 537 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_3
# 538 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end

ShaydwellTown_EventScript_Walking_Boy_4:
# 544 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_6, MSGBOX_YESNO
# 545 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_31
# 555 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_3
# 556 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end

ShaydwellTown_EventScript_Walking_Boy_5:
# 562 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_7, MSGBOX_YESNO
# 563 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ShaydwellTown_EventScript_Walking_Boy_34
# 573 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_3
# 574 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end

ShaydwellTown_EventScript_Walking_Boy_7:
# 561 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_RAGE_CANDY_BAR, ShaydwellTown_EventScript_Walking_Boy_5
	goto ShaydwellTown_EventScript_Walking_Boy_6

ShaydwellTown_EventScript_Walking_Boy_10:
# 543 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_LEMONADE, ShaydwellTown_EventScript_Walking_Boy_4
	goto ShaydwellTown_EventScript_Walking_Boy_8

ShaydwellTown_EventScript_Walking_Boy_13:
# 525 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_FRESH_WATER, ShaydwellTown_EventScript_Walking_Boy_3
	goto ShaydwellTown_EventScript_Walking_Boy_11

ShaydwellTown_EventScript_Walking_Boy_16:
# 507 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_CASTELIACONE, ShaydwellTown_EventScript_Walking_Boy_2
	goto ShaydwellTown_EventScript_Walking_Boy_14

ShaydwellTown_EventScript_Walking_Boy_19:
# 489 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	goto_if_unset FLAG_GAVE_WALKING_BOY_LAVA_COOKIE, ShaydwellTown_EventScript_Walking_Boy_1
	goto ShaydwellTown_EventScript_Walking_Boy_17

ShaydwellTown_EventScript_Walking_Boy_22:
# 492 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_2
# 493 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	removeitem ITEM_LAVA_COOKIE, 1
# 494 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
# 495 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 496 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_LAVA_COOKIE
# 497 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end

ShaydwellTown_EventScript_Walking_Boy_25:
# 510 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_2
# 511 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	removeitem ITEM_CASTELIACONE, 1
# 512 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
# 513 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 514 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_CASTELIACONE
# 515 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end

ShaydwellTown_EventScript_Walking_Boy_28:
# 528 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_2
# 529 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 530 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
# 531 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 532 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_FRESH_WATER
# 533 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end

ShaydwellTown_EventScript_Walking_Boy_31:
# 546 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_2
# 547 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	removeitem ITEM_LEMONADE, 1
# 548 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	giveitem ITEM_THUNDERSTONE, 1
# 549 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 550 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_LEMONADE
# 551 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end

ShaydwellTown_EventScript_Walking_Boy_34:
# 564 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Walking_Boy_Text_2
# 565 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	removeitem ITEM_RAGE_CANDY_BAR, 1
# 566 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
# 567 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitfanfare
# 568 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	setflag FLAG_GAVE_WALKING_BOY_RAGE_CANDY_BAR
# 569 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	end


ShaydwellTown_EventScript_Policeman::
# 584 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 585 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	face_player
# 586 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Policeman_Text_0
# 587 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return


ShaydwellTown_EventScript_Science_Rules::
# 591 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 592 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	face_player
# 593 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_EventScript_Science_Rules_Text_0
# 594 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return


ShaydwellTown_Trigger_BlockPathNorth::
# 600 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	lock
# 601 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	msgbox ShaydwellTown_Trigger_BlockPathNorth_Text_0
# 602 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ShaydwellTown_Trigger_BlockPathNorth_Movement_0
# 605 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	waitmovement 0
# 606 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	release
	return


# 96 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon1_Movement_0:
# 97 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	face_right
	step_end

# 101 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon1_Movement_1:
# 102 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	face_left
	step_end

# 144 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon2_Movement_0:
# 145 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
	step_end

# 187 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon3_Movement_0:
# 188 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 188 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
	step_end

# 230 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon4_Movement_0:
# 231 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 231 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 231 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
	step_end

# 273 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon5_Movement_0:
# 274 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 274 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 274 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 274 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
	step_end

# 316 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon6_Movement_0:
# 317 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 317 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 317 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 317 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 317 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
	step_end

# 359 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon7_Movement_0:
# 360 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 360 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 360 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 360 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 360 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 360 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
	step_end

# 402 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon8_Movement_0:
# 403 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 403 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 403 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 403 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 403 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 403 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
# 403 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_right
	step_end

# 437 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_DadGiveMon9_Movement_0:
# 438 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	face_player
	step_end

# 602 "data/maps/ShaydwellTown_Frlg/scripts.pory"
ShaydwellTown_Trigger_BlockPathNorth_Movement_0:
# 603 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	walk_down
	step_end

NicknamePartyMon_Text_0:
# 46 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 60 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Transferred to PC$"

ShaydwellTown_Text_TownSign_Text_0:
# 73 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Shaydwell Town$"

ShaydwellTown_Text_PlayerHouseSign_Text_0:
# 79 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "{PLAYER}'s House$"

ShaydwellTown_Text_CodyHouseSign_Text_0:
# 85 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Cody's House$"

ShaydwellTown_Trigger_DadGiveMon1_Text_0:
# 99 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Hey bubby! Did Mom send you out here?$"

ShaydwellTown_Trigger_DadGiveMon1_Text_1:
# 105 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Nevermind the yard work. I've got a\n"
	.string "surprise for you.\p"
	.string "I think you're finally old enough to\n"
	.string "have your very own Pokémon.\p"
	.string "I got this from one of my old\n"
	.string "construction buddies. He said to give it\l"
	.string "a good home!$"

ShaydwellTown_Trigger_DadGiveMon1_Text_2:
# 109 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Received Tyrogue!$"

ShaydwellTown_Trigger_DadGiveMon1_Text_3:
# 121 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "No more room$"

ShaydwellTown_Trigger_DadGiveMon1_Text_4:
# 123 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "It feels like just yesterday you were\n"
	.string "taking your first steps! Time really\l"
	.string "does fly, huh?\p"
	.string "Anyway, why don't you practice battling\n"
	.string "against some of the Pokémon in our\l"
	.string "backyard?$"

ShaydwellTown_Trigger_DadGiveMon9_Text_0:
# 468 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "I love you, bubby! You make me proud\n"
	.string "every day.$"

ShaydwellTown_EventScript_OldWoman_Text_0:
# 480 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Bronzong Lake is so named because of\n"
	.string "an old legend.\p"
	.string "The legend tells of a Bronzong who\n"
	.string "summoned a rainstorm that lasted\l"
	.string "thirty days, thus creating the lake.$"

ShaydwellTown_EventScript_Walking_Boy_Text_0:
# 487 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string ".....\p"
	.string "..................................\p"
	.string ".................................................................{PAUSE 30}.{PAUSE 30}.{PAUSE 30}?$"

ShaydwellTown_EventScript_Walking_Boy_Text_1:
# 490 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Give the walking boy your Lava Cookie?$"

ShaydwellTown_EventScript_Walking_Boy_Text_2:
# 492 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string ".....!$"

ShaydwellTown_EventScript_Walking_Boy_Text_3:
# 501 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string ".....$"

ShaydwellTown_EventScript_Walking_Boy_Text_4:
# 508 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Give the walking boy your Casteliacone?$"

ShaydwellTown_EventScript_Walking_Boy_Text_5:
# 526 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Give the walking boy your Fresh Water?$"

ShaydwellTown_EventScript_Walking_Boy_Text_6:
# 544 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Give the walking boy your Lemonade?$"

ShaydwellTown_EventScript_Walking_Boy_Text_7:
# 562 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Give the walking boy your Rage Candy\n"
	.string "Bar?$"

ShaydwellTown_EventScript_Policeman_Text_0:
# 586 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "We've seen a lot of criminal activity on\n"
	.string "Route 11.\p"
	.string "So, we're only allowing trainers with at\n"
	.string "least seven badges to pass.$"

ShaydwellTown_EventScript_Science_Rules_Text_0:
# 593 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "The power of science is amazing!\p"
	.string "Now you can make your very own Pokémon\n"
	.string "game!$"

ShaydwellTown_Trigger_BlockPathNorth_Text_0:
# 601 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Hey, kid! It's not safe past here.$"

ShaydwellTown_NotChosen::
# 63 "data/maps/ShaydwellTown_Frlg/scripts.pory"
	.string "Better leave it then.$"
