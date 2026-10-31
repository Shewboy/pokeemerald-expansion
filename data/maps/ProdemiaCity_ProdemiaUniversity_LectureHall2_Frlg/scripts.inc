ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg_MapScripts::
	.byte 0


ProdemiaUniversity_EventScript_Chalkboard2::
# 9 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 10 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_0
# 11 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_TOD_DESCRIPTIONS, FALSE
# 12 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case 0, ProdemiaUniversity_EventScript_Chalkboard2_3
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case 1, ProdemiaUniversity_EventScript_Chalkboard2_4
# 15 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case 2, ProdemiaUniversity_EventScript_Chalkboard2_5
# 16 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case MULTI_B_PRESSED, ProdemiaUniversity_EventScript_Chalkboard2_6
ProdemiaUniversity_EventScript_Chalkboard2_1:
# 18 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	end

ProdemiaUniversity_EventScript_Chalkboard2_3:
# 13 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_1
	goto ProdemiaUniversity_EventScript_Chalkboard2_1

ProdemiaUniversity_EventScript_Chalkboard2_4:
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_2
	goto ProdemiaUniversity_EventScript_Chalkboard2_1

ProdemiaUniversity_EventScript_Chalkboard2_5:
# 15 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_3
	goto ProdemiaUniversity_EventScript_Chalkboard2_1

ProdemiaUniversity_EventScript_Chalkboard2_6:
	end


ProdemiaUniversity_EventScript_Chalkboard2_Text_0:
# 10 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Various Pokémon are categorized into\n"
	.string "lists.\p"
	.string "Which description would you like to\n"
	.string "read?$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_1:
# 13 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Diurnal Pokémon are primarily active\n"
	.string "during the day and inactive at night.\p"
	.string "Humans are also diurnal, which is why\n"
	.string "many diurnal Pokémon make for great\l"
	.string "pets.\p"
	.string "Most bird Pokémon are diurnal, as well\n"
	.string "as Ledyba, Skwovet, and Hoppip.$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_2:
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Nocturnal Pokémon are primarily active\n"
	.string "at night and inactive during the day.\p"
	.string "Research has shown that nocturnal\n"
	.string "Pokémon have highly developed senses\l"
	.string "of hearing, smell, and eyesight.\p"
	.string "Zubat, Kricketot, and Hoothoot are\n"
	.string "well-known examples of nocturnal\l"
	.string "Pokémon.$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_3:
# 15 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Crepuscular Pokémon are primarily\n"
	.string "active during the transition hours of\l"
	.string "dawn and dusk.\p"
	.string "As a result, many of these Pokémon are\n"
	.string "mistaken for being nocturnal.\p"
	.string "Crepuscular Pokémon include Deerling,\n"
	.string "Vulpix, and Stunky.$"
