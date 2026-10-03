BronzongLake_Frlg_MapScripts::
	.byte 0


BronzongLake_EventScript_CodyBattle::
# 10 "data/maps/BronzongLake_Frlg/scripts.pory"
	trainerbattle_single TRAINER_FISHERBOY_CODY, BronzongLake_EventScript_CodyBattle_Text_0, BronzongLake_EventScript_CodyBattle_Text_1, EventScript_Cody_PostBattle
# 11 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_CodyBattle_Text_2
# 12 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


EventScript_Cody_PostBattle::
# 16 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox EventScript_Cody_PostBattle_Text_0
# 17 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_ProudDad::
# 26 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 27 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_ProudDad_Text_0
# 28 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_ProudMom::
# 33 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 34 "data/maps/BronzongLake_Frlg/scripts.pory"
	faceplayer
# 35 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_ProudMom_Text_0
# 36 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_Tuber::
# 41 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 42 "data/maps/BronzongLake_Frlg/scripts.pory"
	faceplayer
# 43 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_Tuber_Text_0
# 44 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_OldWoman::
# 49 "data/maps/BronzongLake_Frlg/scripts.pory"
	lock
# 50 "data/maps/BronzongLake_Frlg/scripts.pory"
	faceplayer
# 51 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_OldWoman_Text_0
# 52 "data/maps/BronzongLake_Frlg/scripts.pory"
	release
	return


BronzongLake_Text_SwimClubSign::
# 61 "data/maps/BronzongLake_Frlg/scripts.pory"
	lockall
# 62 "data/maps/BronzongLake_Frlg/scripts.pory"
	msgbox BronzongLake_Text_SwimClubSign_Text_0, MSGBOX_SIGN
# 63 "data/maps/BronzongLake_Frlg/scripts.pory"
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
	.string "BIG BOB is a super-strong fish Pokémon.\p"
	.string "I'm going to catch him someday. You'll\n"
	.string "see!$"

EventScript_Cody_PostBattle_Text_0:
# 16 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "That was fun! But you didn't see me use\n"
	.string "BIG BOB...\p"
	.string "Wait! I have an idea!\p"
	.string "How about we each train a bit and then\n"
	.string "rebattle once we've gotten stronger?\p"
	.string "Then maybe I'll get to show you BIG BOB!$"

BronzongLake_EventScript_ProudDad_Text_0:
# 27 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Great job, son! Now let's see a\n"
	.string "BEAUTIFLY stroke.$"

BronzongLake_EventScript_ProudMom_Text_0:
# 35 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Our little boy is like a POLIWAG the way\n"
	.string "he swims.\p"
	.string "Before we know it, he'll be doing laps -\n"
	.string "just like his father used to!$"

BronzongLake_EventScript_Tuber_Text_0:
# 43 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Where's your bathing suit?$"

BronzongLake_EventScript_OldWoman_Text_0:
# 51 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Lots of people my age complain about\n"
	.string "how rowdy children can be.\p"
	.string "But not me! It warms my heart to see\n"
	.string "them enjoying their youth.$"

BronzongLake_Text_SwimClubSign_Text_0:
# 62 "data/maps/BronzongLake_Frlg/scripts.pory"
	.string "Bronzong Lake Community Swim Club$"
