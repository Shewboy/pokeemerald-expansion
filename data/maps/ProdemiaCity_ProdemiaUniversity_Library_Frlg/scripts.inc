ProdemiaCity_ProdemiaUniversity_Library_Frlg_MapScripts::
	.byte 0


ProdemiaUniversity_EventScript_Book1::
# 9 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	lock
# 10 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Book1_Text_0
# 11 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_Book2::
# 15 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	lock
# 16 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Book2_Text_0
# 17 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_Book3::
# 21 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	lock
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Book3_Text_0
# 23 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_OldBook::
# 27 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	lock
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_OldBook_Text_0
# 29 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_OldWoman::
# 37 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	lock
# 38 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	faceplayer
# 39 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_OldWoman_Text_0
# 40 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_AllNighter::
# 44 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	lock
# 45 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	faceplayer
# 46 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_AllNighter_Text_0
# 47 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_Quiet::
# 51 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	lock
# 52 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	faceplayer
# 53 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Quiet_Text_0
# 54 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_Books::
# 58 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	lock
# 59 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	faceplayer
# 60 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	msgbox ProdemiaUniversity_EventScript_Books_Text_0
# 61 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	release
	return


ProdemiaUniversity_EventScript_Book1_Text_0:
# 10 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	.string "“The Sword and the Shield”\p"
	.string "A tale of two heroes who saved Galar\n"
	.string "from the Darkest Day.$"

ProdemiaUniversity_EventScript_Book2_Text_0:
# 16 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	.string "“Lover's Summer”\p"
	.string "I don't think I'm old enough to read\n"
	.string "this book...$"

ProdemiaUniversity_EventScript_Book3_Text_0:
# 22 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	.string "“EV Training for Dummies”$"

ProdemiaUniversity_EventScript_OldBook_Text_0:
# 28 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	.string "There's an old book with a worn,\n"
	.string "pitch-black cover.\p"
	.string "Just looking at it gives you a sense of\n"
	.string "unease.$"

ProdemiaUniversity_EventScript_OldWoman_Text_0:
# 39 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	.string "The University gives free public access\n"
	.string "to their library.\p"
	.string "Which is great for me, because I love to\n"
	.string "read!$"

ProdemiaUniversity_EventScript_AllNighter_Text_0:
# 46 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	.string "I've been studying nonstop since\n"
	.string "yesterday morning.\p"
	.string "Maybe if I just lay my head down for a\n"
	.string "few seconds...\p"
	.string "Zzzzzz$"

ProdemiaUniversity_EventScript_Quiet_Text_0:
# 53 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	.string "I'm not studying. I just like having a\n"
	.string "quiet place to read.$"

ProdemiaUniversity_EventScript_Books_Text_0:
# 60 "data/maps/ProdemiaCity_ProdemiaUniversity_Library_Frlg/scripts.pory"
	.string "The library doesn't just have academic\n"
	.string "books.\p"
	.string "They also carry fiction, biographies,\n"
	.string "and even historic documents.$"
