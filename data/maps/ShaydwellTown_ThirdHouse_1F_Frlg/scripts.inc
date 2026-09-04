ShaydwellTown_ThirdHouse_1F_Frlg_MapScripts::
	.byte 0


ShaydwellTown_ThirdHouse_1F_Woman::
# 5 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	lock
# 6 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	faceplayer
# 7 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_ThirdHouse_1F_Woman_Text_0
# 8 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	release
	return


ShaydwellTown_ThirdHouse_1F_Man::
# 12 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_ThirdHouse_1F_Man_Text_0
	return


ShaydwellTown_ThirdHouse_1F_Meowth::
# 18 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	faceplayer
# 20 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 21 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	msgbox ShaydwellTown_ThirdHouse_1F_Meowth_Text_0
# 22 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	release
	return


ShaydwellTown_ThirdHouse_1F_Woman_Text_0:
# 7 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	.string "We heard this was a great place to raise\n"
	.string "a family, so we up and moved from\l"
	.string "Insinvi City.\p"
	.string "The crime there just became too much to\n"
	.string "handle.$"

ShaydwellTown_ThirdHouse_1F_Man_Text_0:
# 14 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	.string "It's much quieter here compared to\n"
	.string "Insinvi.$"

ShaydwellTown_ThirdHouse_1F_Meowth_Text_0:
# 21 "data/maps/ShaydwellTown_ThirdHouse_1F_Frlg/scripts.pory"
	.string "Meow!$"
