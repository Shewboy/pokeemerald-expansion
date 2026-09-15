BronzongLake_Frlg_MapScripts::
	.byte 0


BronzongLake_EventScript_ProudDad::
# 10 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 11 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_ProudDad_Text_0
# 12 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_ProudMom::
# 17 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 18 "data/maps/BronzongLake_Frlg/scripts.pory"
	faceplayer
# 19 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_ProudMom_Text_0
# 20 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_Tuber::
# 25 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 26 "data/maps/BronzongLake_Frlg/scripts.pory"
	faceplayer
# 27 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_Tuber_Text_0
# 28 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_OldWoman::
# 33 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 34 "data/maps/BronzongLake_Frlg/scripts.pory"
	faceplayer
# 35 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_OldWoman_Text_0
# 36 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_Text_SwimClubSign::
# 45 "data/maps/BronzongLake_Frlg/scripts.pory"
	lockall
# 46 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_Text_SwimClubSign_Text_0, MSGBOX_SIGN
# 47 "data/maps/BronzongLake_Frlg/scripts.pory"
	releaseall
	return


BronzongLake_EventScript_ProudDad_Text_0:
# 11 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Great job, son! Now let's see a\n"
	.string "BEAUTIFLY stroke.$"

BronzongLake_EventScript_ProudMom_Text_0:
# 19 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Our little boy is like a POLIWAG the way\n"
	.string "he swims.\p"
	.string "Before we know it, he'll be doing laps -\n"
	.string "just like his father used to!$"

BronzongLake_EventScript_Tuber_Text_0:
# 27 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Where's your bathing suit?$"

BronzongLake_EventScript_OldWoman_Text_0:
# 35 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Lots of people my age complain about\n"
	.string "how rowdy children can be.\p"
	.string "But not me! It warms my heart to see\n"
	.string "them enjoying their youth.$"

BronzongLake_Text_SwimClubSign_Text_0:
# 46 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Bronzong Lake Community Swim Club$"
