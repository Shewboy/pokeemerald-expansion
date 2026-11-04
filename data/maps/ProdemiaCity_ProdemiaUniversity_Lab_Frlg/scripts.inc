ProdemiaCity_ProdemiaUniversity_Lab_Frlg_MapScripts::
	.byte 0


ProdemiaUniversity_EventScript_FossilNerd::
# 10 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	lock
# 11 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	faceplayer
# 12 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	goto_if_unset FLAG_FOSSIL_REVIVE_MAN_FIRST_TALK, ProdemiaUniversity_EventScript_FossilNerd_1
# 19 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FossilNerd_Text_1
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ProdemiaUniversity_EventScript_FossilNerd_5
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ProdemiaUniversity_EventScript_FossilNerd_5
ProdemiaUniversity_EventScript_FossilNerd_4:
# 78 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FossilNerd_Text_5
# 79 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	release
	return

ProdemiaUniversity_EventScript_FossilNerd_1:
# 13 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FossilNerd_Text_0
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	setflag FLAG_FOSSIL_REVIVE_MAN_FIRST_TALK
# 15 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	release
	end

ProdemiaUniversity_EventScript_FossilNerd_5:
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ProdemiaUniversity_EventScript_FossilNerd_10
ProdemiaUniversity_EventScript_FossilNerd_9:
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ProdemiaUniversity_EventScript_FossilNerd_13
ProdemiaUniversity_EventScript_FossilNerd_12:
# 27 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	dynmultipush FossilNerd_Cancel, 2
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, NULL
# 29 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	case 0, ProdemiaUniversity_EventScript_FossilNerd_16
# 52 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	case 1, ProdemiaUniversity_EventScript_FossilNerd_17
	goto ProdemiaUniversity_EventScript_FossilNerd_4

ProdemiaUniversity_EventScript_FossilNerd_10:
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	dynmultipush FossilNerd_JawFossil, 0
	goto ProdemiaUniversity_EventScript_FossilNerd_9

ProdemiaUniversity_EventScript_FossilNerd_13:
# 25 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	dynmultipush FossilNerd_SailFossil, 1
	goto ProdemiaUniversity_EventScript_FossilNerd_12

ProdemiaUniversity_EventScript_FossilNerd_16:
# 31 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	call EventScript_FossilNerd_ReviveFossil
# 32 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	givemon SPECIES_TYRUNT, 20, ITEM_DRAGON_FANG
# 33 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ProdemiaUniversity_EventScript_FossilNerd_19
# 40 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ProdemiaUniversity_EventScript_FossilNerd_20
# 48 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FossilNerd_Text_3
ProdemiaUniversity_EventScript_FossilNerd_18:
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	release
	end

ProdemiaUniversity_EventScript_FossilNerd_17:
# 53 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	call EventScript_FossilNerd_ReviveFossil
# 54 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	givemon SPECIES_AMAURA, 20, ITEM_NEVER_MELT_ICE
# 55 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ProdemiaUniversity_EventScript_FossilNerd_25
# 62 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ProdemiaUniversity_EventScript_FossilNerd_26
# 70 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FossilNerd_Text_3
ProdemiaUniversity_EventScript_FossilNerd_24:
# 72 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	release
	end

ProdemiaUniversity_EventScript_FossilNerd_19:
# 34 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	removeitem ITEM_JAW_FOSSIL
# 35 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 36 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FossilNerd_Text_2
# 37 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	waitfanfare
# 38 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ProdemiaUniversity_EventScript_FossilNerd_18

ProdemiaUniversity_EventScript_FossilNerd_20:
# 41 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	removeitem ITEM_JAW_FOSSIL
# 42 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 43 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FossilNerd_Text_2
# 44 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	waitfanfare
# 45 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ProdemiaUniversity_EventScript_FossilNerd_18

ProdemiaUniversity_EventScript_FossilNerd_25:
# 56 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	removeitem ITEM_SAIL_FOSSIL
# 57 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FossilNerd_Text_4
# 59 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	waitfanfare
# 60 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ProdemiaUniversity_EventScript_FossilNerd_24

ProdemiaUniversity_EventScript_FossilNerd_26:
# 63 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	removeitem ITEM_SAIL_FOSSIL
# 64 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FossilNerd_Text_4
# 66 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	waitfanfare
# 67 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	call NicknamePartyMon
	goto ProdemiaUniversity_EventScript_FossilNerd_24


EventScript_FossilNerd_ReviveFossil::
# 84 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox EventScript_FossilNerd_ReviveFossil_Text_0
# 85 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	applymovement 2, EventScript_FossilNerd_ReviveFossil_Movement_0
# 86 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	waitmovement 2
# 87 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	playse SE_PC_ON
# 88 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	waitse
# 89 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	delay 60
# 90 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	playse SE_DEX_SEARCH
# 91 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	waitse
# 92 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	delay 60
# 93 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	applymovement 2, EventScript_FossilNerd_ReviveFossil_Movement_1
# 94 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	waitmovement 2
# 95 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox EventScript_FossilNerd_ReviveFossil_Text_1
	return


ProdemiaUniversity_EventScript_LabWoman1::
# 112 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	lock
# 113 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	faceplayer
# 114 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_LabWoman1_Text_0
# 115 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_LabWoman2::
# 119 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	lock
# 120 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	faceplayer
# 121 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_LabWoman2_Text_0
# 122 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_LabMan::
# 126 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	lock
# 127 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	faceplayer
# 128 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_LabMan_Text_0
# 129 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	release
	return


# 85 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
EventScript_FossilNerd_ReviveFossil_Movement_0:
# 85 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	face_up
	step_end

# 93 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
EventScript_FossilNerd_ReviveFossil_Movement_1:
# 93 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	face_player
	step_end

ProdemiaUniversity_EventScript_FossilNerd_Text_0:
# 13 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "Salutations, humanoid!\p"
	.string "Care to take part in the greatest\n"
	.string "experiment of our time? Sure you do!\p"
	.string "If you provide me with the fossilized\n"
	.string "remains of a Pokémon, I'll bring it back\l"
	.string "to life before your very eyes!\p"
	.string "I look forward to pioneering a new era\n"
	.string "of scientific possibilies with you!$"

ProdemiaUniversity_EventScript_FossilNerd_Text_1:
# 19 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "Greetings! Have you some fossils for\n"
	.string "me?$"

ProdemiaUniversity_EventScript_FossilNerd_Text_2:
# 36 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "Received Tyrunt!$"

ProdemiaUniversity_EventScript_FossilNerd_Text_3:
# 48 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "No more room.$"

ProdemiaUniversity_EventScript_FossilNerd_Text_4:
# 58 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "Received Amaura!$"

ProdemiaUniversity_EventScript_FossilNerd_Text_5:
# 78 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "Negatory. Next time, perhaps!$"

EventScript_FossilNerd_ReviveFossil_Text_0:
# 84 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "Splendid! Let us commence!$"

EventScript_FossilNerd_ReviveFossil_Text_1:
# 95 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "Magnificent! The machine worked!\p"
	.string "We successfully revived a prehistoric\n"
	.string "Pokémon!\p"
	.string "Please take the creature as a token of\n"
	.string "my thanks.$"

ProdemiaUniversity_EventScript_LabWoman1_Text_0:
# 114 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "I'm running a study to compare the\n"
	.string "healing effects of man-made medicine\l"
	.string "and berries on Pokémon.\p"
	.string "So far, no major differences. Which is a\n"
	.string "good thing!$"

ProdemiaUniversity_EventScript_LabWoman2_Text_0:
# 121 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "When most people think of universities,\n"
	.string "they picture themselves sitting in\l"
	.string "lectures and studying for exams.\p"
	.string "But many universities are also\n"
	.string "important hubs for scientific research\l"
	.string "and development.$"

ProdemiaUniversity_EventScript_LabMan_Text_0:
# 128 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "That guy in the back is a bit...strange.\p"
	.string "He says he's working on a machine that\n"
	.string "can revive extinct Pokémon.$"

FossilNerd_JawFossil::
# 99 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "JAW FOSSIL$"

FossilNerd_SailFossil::
# 103 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "SAIL FOSSIL$"

FossilNerd_Cancel::
# 107 "data/maps/ProdemiaCity_ProdemiaUniversity_Lab_Frlg/scripts.pory"
	.string "CANCEL$"
