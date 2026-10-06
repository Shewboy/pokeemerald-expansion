Route1_SJ_Frlg_MapScripts::
	.byte 0


Route1_SJ_EventScript_DerekBattle::
# 9 "data/maps/Route1_SJ_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DEREK, Route1_SJ_EventScript_DerekBattle_Text_0, Route1_SJ_EventScript_DerekBattle_Text_1
# 10 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_DerekBattle_Text_2
# 11 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_MelissaBattle::
# 16 "data/maps/Route1_SJ_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_MELISSA, Route1_SJ_EventScript_MelissaBattle_Text_0, Route1_SJ_EventScript_MelissaBattle_Text_1
# 17 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_MelissaBattle_Text_2
# 18 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Protester1::
# 27 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 28 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Protester1_Text_0
# 30 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Protester2::
# 35 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 36 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 37 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Protester2_Text_0
# 38 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Protester3::
# 43 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 44 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Protester3_Text_0
# 46 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Worker1::
# 51 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 52 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 53 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Worker1_Text_0
# 54 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Worker2::
# 59 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 60 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 61 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Worker2_Text_0
# 62 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Worker3::
# 67 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 68 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 69 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Worker3_Text_0
# 70 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_PokeBall::
# 79 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lockall
# 80 "data/maps/Route1_SJ_Frlg/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 81 "data/maps/Route1_SJ_Frlg/scripts.pory"
	waitfanfare
# 82 "data/maps/Route1_SJ_Frlg/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_POKE_BALL
# 83 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_DerekBattle_Text_0:
# 9 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "Bug types rule! Don't you agree?$"

Route1_SJ_EventScript_DerekBattle_Text_1:
# 9 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "No! My bugs!$"

Route1_SJ_EventScript_DerekBattle_Text_2:
# 10 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "Bug type Pokémon may not be the\n"
	.string "strongest, but they grow quickly.$"

Route1_SJ_EventScript_MelissaBattle_Text_0:
# 16 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "You look like you need something to do!\n"
	.string "Care for a battle?$"

Route1_SJ_EventScript_MelissaBattle_Text_1:
# 16 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "Wahhh!$"

Route1_SJ_EventScript_MelissaBattle_Text_2:
# 17 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "There's a big commotion going on at the\n"
	.string "end of this route.\p"
	.string "Something about bulldozers?$"

Route1_SJ_EventScript_Protester1_Text_0:
# 29 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "No more construction!\n"
	.string "Stop the destruction!$"

Route1_SJ_EventScript_Protester2_Text_0:
# 37 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "I won't just stand by and let them\n"
	.string "destroy Pokémon's homes!$"

Route1_SJ_EventScript_Protester3_Text_0:
# 45 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "I just didn't feel like going to class.$"

Route1_SJ_EventScript_Worker1_Text_0:
# 53 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "These college kids won't get out of our\n"
	.string "way!\n"
	.string "I've got a schedule to keep!$"

Route1_SJ_EventScript_Worker2_Text_0:
# 61 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "Lunch break, union breaks, and now\n"
	.string "this?\p"
	.string "I love my job!$"

Route1_SJ_EventScript_Worker3_Text_0:
# 69 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "People are itching to move to Prodemia\n"
	.string "City, but there's no more room.\p"
	.string "So we're clearing some land to build\n"
	.string "housing.$"
