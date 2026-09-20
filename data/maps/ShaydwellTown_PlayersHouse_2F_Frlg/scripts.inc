ShaydwellTown_PlayersHouse_2F_Frlg_MapScripts::
# 2 "data/maps/ShaydwellTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShaydwellTown_PlayersHouse_2F_EventScript_SetRespawn
	.byte 0


ShaydwellTown_PlayersHouse_2F_EventScript_SetRespawn::
# 6 "data/maps/ShaydwellTown_PlayersHouse_2F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SHAYDWELL_TOWN_FRLG
	end


ShaydwellTown_PlayersHouse_2F_Text_PlayedWithNES::
# 11 "data/maps/ShaydwellTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox ShaydwellTown_PlayersHouse_2F_Text_PlayedWithNES_Text_0
# 12 "data/maps/ShaydwellTown_PlayersHouse_2F_Frlg/scripts.pory"
	release
	return


ShaydwellTown_PlayersHouse_2F_Text_PlayedWithNES_Text_0:
# 11 "data/maps/ShaydwellTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER} played with the NES.\p"
	.string "...Okay!\n"
	.string "It's time to go!$"
