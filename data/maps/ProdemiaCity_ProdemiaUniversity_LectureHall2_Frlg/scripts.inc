ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg_MapScripts::
# 2 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ProdemiaUniversity_LectureHall2_Sally
	.2byte 0


ProdemiaUniversity_EventScript_ProfessorHollyIntro::
# 12 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 13 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_0
# 15 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	closemessage
# 16 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	playse SE_EXIT
# 17 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_0
# 18 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 1, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_0
# 19 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 20 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	addobject 2
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_1
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	waitmovement
# 23 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_2
# 24 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	waitmovement
# 25 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_1
# 26 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_2
# 27 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_3
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_3
# 29 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 1, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_3
# 30 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_4
# 31 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_5
# 32 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_6
# 33 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_7
# 34 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_8
# 35 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 36 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	playse SE_PIN
# 37 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_4
# 38 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 1, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_4
# 39 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_4
# 40 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_9
# 41 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_10
# 42 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	closemessage
# 43 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	addobject 3
# 44 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 3, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_1
# 45 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	waitmovement
# 46 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	applymovement 3, ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_5
# 47 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_11
# 48 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_12
# 49 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_13
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_14
# 51 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_15
# 52 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	end


ProdemiaUniversity_LectureHall2_Sally::
# 57 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	removeobject 2
# 58 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	setvar VAR_TEMP_0, 1
	end


ProdemiaUniversity_EventScript_Chalkboard2::
# 66 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	lock
# 67 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_0
# 68 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_TOD_DESCRIPTIONS, FALSE
# 69 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case 0, ProdemiaUniversity_EventScript_Chalkboard2_3
# 71 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case 1, ProdemiaUniversity_EventScript_Chalkboard2_4
# 72 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case 2, ProdemiaUniversity_EventScript_Chalkboard2_5
# 73 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	case MULTI_B_PRESSED, ProdemiaUniversity_EventScript_Chalkboard2_6
ProdemiaUniversity_EventScript_Chalkboard2_1:
# 75 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	release
	end

ProdemiaUniversity_EventScript_Chalkboard2_3:
# 70 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_1
	goto ProdemiaUniversity_EventScript_Chalkboard2_1

ProdemiaUniversity_EventScript_Chalkboard2_4:
# 71 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_2
	goto ProdemiaUniversity_EventScript_Chalkboard2_1

ProdemiaUniversity_EventScript_Chalkboard2_5:
# 72 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard2_Text_3
	goto ProdemiaUniversity_EventScript_Chalkboard2_1

ProdemiaUniversity_EventScript_Chalkboard2_6:
	end


# 17 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_0:
# 17 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	face_down
	step_end

# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_1:
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_up
	step_end

# 23 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_2:
# 23 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_right
# 23 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_right
	step_end

# 27 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_3:
# 27 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	face_player
	step_end

# 37 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_4:
# 37 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	emote_exclamation_mark
# 37 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	delay_16
	step_end

# 46 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_ProfessorHollyIntro_Movement_5:
# 46 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	walk_right
	step_end

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_0:
# 14 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "PROFESSOR HOLLY: I'm sorry, but my\n"
	.string "office hours are...\p"
	.string "Oh! My apologies, I thought you were\n"
	.string "one of my students.\p"
	.string "Did you come to inquire about one of\n"
	.string "the Pokédexes I have?\p"
	.string "Yes, well I'm sorry to say that I don't\n"
	.string "just hand them out to anyone who asks!\l"
	.string "Pokédexes aren't cheap, you know.\p"
	.string "Plus, I already have someone in mind.$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_1:
# 25 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "???: Sorry I'm late, professor!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_2:
# 26 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: And here is that someone now!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_3:
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "???: I don't think we've met. My name is\n"
	.string "Sally! I'm the Professor's teaching\l"
	.string "assistant.$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_4:
# 30 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: Sally has been a tremendous help\n"
	.string "to me this semester.\p"
	.string "Hard to believe that she's already\n"
	.string "grading college papers at age 12!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_5:
# 31 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "SALLY: Oh, Professor, you're too kind!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_6:
# 32 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: But I've kept you cooped up in\n"
	.string "these old, dusty walls for far too long.\p"
	.string "You're young! You should be exploring\n"
	.string "the world and having adventures.$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_7:
# 33 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "SALLY: A-Are you sure, Professor? With\n"
	.string "my wheelchair and all...$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_8:
# 34 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: I'm certain of it. There's only so\n"
	.string "much a person can learn from books and\l"
	.string "lectures. Experience is the greatest\l"
	.string "teacher!\p"
	.string "That's why I want to give you this-$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_9:
# 40 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "???: EEEEEEEEEEK!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_10:
# 41 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "???: Stop, thief!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_11:
# 47 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "P-Professor! Someone just stole a book\n"
	.string "from the library!\p"
	.string "I tried to stop them, but I don't have\n"
	.string "any Pokémon...$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_12:
# 48 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: Goodness! You don't mean...THAT\n"
	.string "book?$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_13:
# 49 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "???: Unfortunately, yes.$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_14:
# 50 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: We can't let them get away!$"

ProdemiaUniversity_EventScript_ProfessorHollyIntro_Text_15:
# 51 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "HOLLY: {PLAYER}, please track them down\n"
	.string "and get that book back!$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_0:
# 67 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Various Pokémon are categorized into\n"
	.string "lists.\p"
	.string "Which description would you like to\n"
	.string "read?$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_1:
# 70 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Diurnal Pokémon are primarily active\n"
	.string "during the day and inactive at night.\p"
	.string "Humans are also diurnal, which is why\n"
	.string "many diurnal Pokémon make for great\l"
	.string "pets.\p"
	.string "Most bird Pokémon are diurnal, as well\n"
	.string "as Ledyba, Skwovet, and Hoppip.$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_2:
# 71 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Nocturnal Pokémon are primarily active\n"
	.string "at night and inactive during the day.\p"
	.string "Research has shown that nocturnal\n"
	.string "Pokémon have highly developed senses\l"
	.string "of hearing, smell, and eyesight.\p"
	.string "Zubat, Kricketot, and Hoothoot are\n"
	.string "well-known examples of nocturnal\l"
	.string "Pokémon.$"

ProdemiaUniversity_EventScript_Chalkboard2_Text_3:
# 72 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall2_Frlg/scripts.pory"
	.string "Crepuscular Pokémon are primarily\n"
	.string "active during the transition hours of\l"
	.string "dawn and dusk.\p"
	.string "As a result, many of these Pokémon are\n"
	.string "mistaken for being nocturnal.\p"
	.string "Crepuscular Pokémon include Deerling,\n"
	.string "Vulpix, and Stunky.$"
