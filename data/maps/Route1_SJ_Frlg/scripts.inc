Route1_SJ_Frlg_MapScripts::
	.byte 0


Route1_SJ_EventScript_DerekBattle::
# 10 "data/maps/Route1_SJ_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DEREK, Route1_SJ_EventScript_DerekBattle_Text_0, Route1_SJ_EventScript_DerekBattle_Text_1
# 11 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_DerekBattle_Text_2
# 12 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_MelissaBattle::
# 17 "data/maps/Route1_SJ_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_MELISSA, Route1_SJ_EventScript_MelissaBattle_Text_0, Route1_SJ_EventScript_MelissaBattle_Text_1
# 18 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_MelissaBattle_Text_2
# 19 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Protester1::
# 28 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 29 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 30 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Protester1_Text_0
# 31 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Protester2::
# 36 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 37 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 38 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Protester2_Text_0
# 39 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Protester3::
# 44 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 45 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 46 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Protester3_Text_0
# 47 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Worker1::
# 52 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 53 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 54 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Worker1_Text_0
# 55 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Worker2::
# 60 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 61 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 62 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Worker2_Text_0
# 63 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_Worker3::
# 68 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lock
# 69 "data/maps/Route1_SJ_Frlg/scripts.pory"
	faceplayer
# 70 "data/maps/Route1_SJ_Frlg/scripts.pory"
	msgbox Route1_SJ_EventScript_Worker3_Text_0
# 71 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_PokeBall::
# 80 "data/maps/Route1_SJ_Frlg/scripts.pory"
	lockall
# 81 "data/maps/Route1_SJ_Frlg/scripts.pory"
	removeobject 1
# 82 "data/maps/Route1_SJ_Frlg/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 83 "data/maps/Route1_SJ_Frlg/scripts.pory"
	waitfanfare
# 84 "data/maps/Route1_SJ_Frlg/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_POKE_BALL
# 85 "data/maps/Route1_SJ_Frlg/scripts.pory"
	release
	return


Route1_SJ_EventScript_DerekBattle_Text_0:
# 10 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "Bug types rule! Don't you agree?$"

Route1_SJ_EventScript_DerekBattle_Text_1:
# 10 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "No! My bugs!$"

Route1_SJ_EventScript_DerekBattle_Text_2:
# 11 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "Bug type Pokémon may not be the\n"
	.string "strongest, but they grow quickly.$"

Route1_SJ_EventScript_MelissaBattle_Text_0:
# 17 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "You look like you need something to do!\n"
	.string "Care for a battle?$"

Route1_SJ_EventScript_MelissaBattle_Text_1:
# 17 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "Wahhh!$"

Route1_SJ_EventScript_MelissaBattle_Text_2:
# 18 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "There's a big commotion going on at the\n"
	.string "end of this route.\p"
	.string "Something about bulldozers?$"

Route1_SJ_EventScript_Protester1_Text_0:
# 30 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "No more construction!\n"
	.string "Stop the destruction!$"

Route1_SJ_EventScript_Protester2_Text_0:
# 38 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "I won't just stand by and let them\n"
	.string "destroy Pokémon's homes!$"

Route1_SJ_EventScript_Protester3_Text_0:
# 46 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "I just didn't feel like going to class.$"

Route1_SJ_EventScript_Worker1_Text_0:
# 54 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "These college kids won't get out of our\n"
	.string "way!\n"
	.string "I've got a schedule to keep!$"

Route1_SJ_EventScript_Worker2_Text_0:
# 62 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "Lunch break, union breaks, and now\n"
	.string "this?\p"
	.string "I love my job!$"

Route1_SJ_EventScript_Worker3_Text_0:
# 70 "data/maps/Route1_SJ_Frlg/scripts.pory"
	.string "People are itching to move to Prodemia\n"
	.string "City, but there's no more room.\p"
	.string "So we're clearing some land to build\n"
	.string "housing.$"
