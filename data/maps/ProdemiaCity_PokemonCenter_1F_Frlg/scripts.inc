# 1 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
ProdemiaCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ProdemiaCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
ProdemiaCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PRODEMIA_CITY_FRLG
# 9 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
ProdemiaCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	end

ProdemiaCity_PokemonCenter_1F_EventScript_GBAKid::
# 20 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 21 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 22 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_PokemonCenter_1F_EventScript_GBAKid_Text_0
# 23 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_PokemonCenter_1F_EventScript_Gentleman::
# 27 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 28 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ANTIDOTE_PRODEMIA_PKMNCENTER, ProdemiaCity_PokemonCenter_1F_EventScript_Gentleman_1
# 38 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 39 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 40 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_PokemonCenter_1F_EventScript_Gentleman_Text_1
# 41 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	return

ProdemiaCity_PokemonCenter_1F_EventScript_Gentleman_1:
# 30 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_PokemonCenter_1F_EventScript_Gentleman_Text_0
# 31 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
# 32 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_RECEIVED_ANTIDOTE_PRODEMIA_PKMNCENTER
# 34 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 35 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_PokemonCenter_1F_EventScript_Woman::
# 46 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 47 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 48 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_PokemonCenter_1F_EventScript_Woman_Text_0
# 49 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	return


ProdemiaCity_PokemonCenter_1F_EventScript_GBAKid_Text_0:
# 22 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Per Meddoh League regulations,\n"
	.string "Trainers are only allowed to carry six\l"
	.string "Pokémon at a time.\p"
	.string "PC's like the one behind me let you\n"
	.string "store your extra 'mons free of charge.$"

ProdemiaCity_PokemonCenter_1F_EventScript_Gentleman_Text_0:
# 30 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Getting poisoned can be a real pain!\p"
	.string "Take this, it'll help.$"

ProdemiaCity_PokemonCenter_1F_EventScript_Gentleman_Text_1:
# 40 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Having your Pokémon lose HP every few\n"
	.string "steps can be scary.\p"
	.string "Luckily it goes away just before they\n"
	.string "faint.$"

ProdemiaCity_PokemonCenter_1F_EventScript_Woman_Text_0:
# 48 "data/maps/ProdemiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I always wanted to attend Prodemia\n"
	.string "University, but my grades weren't good\l"
	.string "enough.$"
