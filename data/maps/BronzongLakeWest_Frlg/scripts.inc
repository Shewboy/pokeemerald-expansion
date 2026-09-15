BronzongLakeWest_Frlg_MapScripts::
	.byte 0


BronzongLake_EventScript_CodyBattle::
# 10 "data/maps/BronzongLakeWest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_FISHERBOY_CODY, BronzongLake_EventScript_CodyBattle_Text_0, BronzongLake_EventScript_CodyBattle_Text_1
# 11 "data/maps/BronzongLakeWest_Frlg/scripts.pory"
	msgbox BronzongLake_EventScript_CodyBattle_Text_2
# 12 "data/maps/BronzongLakeWest_Frlg/scripts.pory"
	release
	return


BronzongLake_EventScript_CodyBattle_Text_0:
# 10 "data/maps/BronzongLakeWest_Frlg/scripts.pory"
	.string "Hiya, {PLAYER}! I'm trying to catch a\n"
	.string "ginormous Whiscash!\p"
	.string "But so far I've only snagged Chewtle...$"

BronzongLake_EventScript_CodyBattle_Text_1:
# 10 "data/maps/BronzongLakeWest_Frlg/scripts.pory"
	.string "Aw, man!$"

BronzongLake_EventScript_CodyBattle_Text_2:
# 11 "data/maps/BronzongLakeWest_Frlg/scripts.pory"
	.string "That was fun! Come back once you've\n"
	.string "trained some more and we can battle\l"
	.string "again.$"
