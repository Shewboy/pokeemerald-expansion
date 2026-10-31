ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg_MapScripts::
	.byte 0


ProdemiaUniversity_EventScript_Chalkboard1::
# 9 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	lock
# 10 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Chalkboard1_Text_0
# 11 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_Professor::
# 19 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	lock
# 20 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Professor_Text_0
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	playse SE_PIN
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	applymovement 2, ProdemiaUniversity_EventScript_Professor_Movement_0
# 23 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	waitmovement 2
# 24 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	playse SE_PIN
# 25 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	applymovement 4, ProdemiaUniversity_EventScript_Professor_Movement_0
# 26 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	waitmovement 4
# 27 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	playse SE_PIN
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	applymovement 5, ProdemiaUniversity_EventScript_Professor_Movement_0
# 29 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	waitmovement 5
# 30 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	playse SE_PIN
# 31 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	applymovement 3, ProdemiaUniversity_EventScript_Professor_Movement_0
# 32 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	waitmovement 3
# 33 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Professor_Text_1
# 34 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_FemaleStudent1::
# 38 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	lock
# 39 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	faceplayer
# 40 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FemaleStudent1_Text_0
# 41 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_FemaleStudent2::
# 45 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	lock
# 46 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	faceplayer
# 47 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_FemaleStudent2_Text_0
# 48 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_MaleStudent1::
# 52 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	lock
# 53 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	faceplayer
# 54 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_MaleStudent1_Text_0
# 55 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_MaleStudent2::
# 59 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	lock
# 60 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	faceplayer
# 61 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_MaleStudent2_Text_0
# 62 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	release
	return


# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
ProdemiaUniversity_EventScript_Professor_Movement_0:
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	emote_question_mark
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	delay_16
	step_end

ProdemiaUniversity_EventScript_Chalkboard1_Text_0:
# 10 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	.string "Equations beyond your comprehension\n"
	.string "are scrawled across the board.$"

ProdemiaUniversity_EventScript_Professor_Text_0:
# 20 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	.string "...and as Stokes' Theroem states, the\n"
	.string "total circulation of a vector field\l"
	.string "around a closed curve is equal to...?$"

ProdemiaUniversity_EventScript_Professor_Text_1:
# 33 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	.string "Oh, come on now! Have none of you been\n"
	.string "listening?$"

ProdemiaUniversity_EventScript_FemaleStudent1_Text_0:
# 40 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	.string "Why does calculus have to be so hard?$"

ProdemiaUniversity_EventScript_FemaleStudent2_Text_0:
# 47 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	.string "How is this geezer still teaching? He\n"
	.string "should retire!$"

ProdemiaUniversity_EventScript_MaleStudent1_Text_0:
# 54 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	.string "I think my head is going to explode.$"

ProdemiaUniversity_EventScript_MaleStudent2_Text_0:
# 61 "data/maps/ProdemiaCity_ProdemiaUniversity_LectureHall1_Frlg/scripts.pory"
	.string "I've already accepted that I'm failing\n"
	.string "this class.\p"
	.string "Time to switch majors again!$"
