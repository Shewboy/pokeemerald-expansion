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
