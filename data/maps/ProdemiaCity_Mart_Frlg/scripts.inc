ProdemiaCity_Mart_Frlg_MapScripts::
	.byte 0


# 4 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
ProdemiaCity_Mart_EventScript_Clerk::
# 6 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	lock
# 7 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	pokemart ProdemiaCity_Mart_Items
# 11 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 12 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	release
# 13 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	end
# 14 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"

# 15 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	.align 2
# 16 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
ProdemiaCity_Mart_Items::
# 17 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 22 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	release
# 23 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	end

ProdemiaCity_Mart_EventScript_OldWoman::
# 26 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	lock
# 27 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	faceplayer
# 28 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	msgbox ProdemiaCity_Mart_EventScript_OldWoman_Text_0
# 29 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	release
	return


ProdemiaCity_Mart_EventScript_Man::
# 33 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	lock
# 34 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	faceplayer
# 35 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	msgbox ProdemiaCity_Mart_EventScript_Man_Text_0
# 36 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	release
	return


ProdemiaCity_Mart_EventScript_OldWoman_Text_0:
# 28 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	.string "That new Poké Mall is going to put this\n"
	.string "place out of business!\p"
	.string "I don't want to lose my small corner\n"
	.string "store.$"

ProdemiaCity_Mart_EventScript_Man_Text_0:
# 35 "data/maps/ProdemiaCity_Mart_Frlg/scripts.pory"
	.string "This Poké Mart is having a big\n"
	.string "liquidation sale before they close.\p"
	.string "I'm taking advantage of the good deals\n"
	.string "while I can.$"
