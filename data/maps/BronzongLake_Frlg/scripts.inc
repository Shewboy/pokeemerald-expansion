BronzongLake_Frlg_MapScripts::
	.byte 0


BronzongLake_EventScript_CodyBattle::
# 10 "data/maps/BronzongLake_Frlg/scripts.pory"
	trainerbattle_single TRAINER_FISHERBOY_CODY, BronzongLake_EventScript_CodyBattle_Text_0, BronzongLake_EventScript_CodyBattle_Text_1
# 11 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_CodyBattle_Text_2
# 12 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_ProudDad::
# 21 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 22 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_ProudDad_Text_0
# 23 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_ProudMom::
# 28 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 29 "data/maps/BronzongLake_Frlg/scripts.pory"
	faceplayer
# 30 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_ProudMom_Text_0
# 31 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_Tuber::
# 36 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 37 "data/maps/BronzongLake_Frlg/scripts.pory"
	faceplayer
# 38 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_Tuber_Text_0
# 39 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_OldWoman::
# 44 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 45 "data/maps/BronzongLake_Frlg/scripts.pory"
	faceplayer
# 46 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_OldWoman_Text_0
# 47 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_Text_SwimClubSign::
# 56 "data/maps/BronzongLake_Frlg/scripts.pory"
	lockall
# 57 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_Text_SwimClubSign_Text_0, MSGBOX_SIGN
# 58 "data/maps/BronzongLake_Frlg/scripts.pory"
	releaseall
	return


BronzongLake_EventScript_CodyBattle_Text_0:
# 10 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "I'm trying to snag BIG BOB!\p"
	.string "But so far all I've caught are Chewtle...$"

BronzongLake_EventScript_CodyBattle_Text_1:
# 10 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Aw, man!$"

BronzongLake_EventScript_CodyBattle_Text_2:
# 11 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "That was fun! But you didn't see me use\n"
	.string "BIG BOB...\p"
	.string "Wait! I have an idea!\p"
	.string "How about we each train a bit and then\n"
	.string "rebattle once we've gotten stronger?\p"
	.string "Then maybe I'll get to show you BIG BOB!$"

BronzongLake_EventScript_ProudDad_Text_0:
# 22 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Great job, son! Now let's see a\n"
	.string "BEAUTIFLY stroke.$"

BronzongLake_EventScript_ProudMom_Text_0:
# 30 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Our little boy is like a POLIWAG the way\n"
	.string "he swims.\p"
	.string "Before we know it, he'll be doing laps -\n"
	.string "just like his father used to!$"

BronzongLake_EventScript_Tuber_Text_0:
# 38 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Where's your bathing suit?$"

BronzongLake_EventScript_OldWoman_Text_0:
# 46 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Lots of people my age complain about\n"
	.string "how rowdy children can be.\p"
	.string "But not me! It warms my heart to see\n"
	.string "them enjoying their youth.$"

BronzongLake_Text_SwimClubSign_Text_0:
# 57 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Bronzong Lake Community Swim Club$"
