ProdemiaCity_PokeMall_1F_Frlg_MapScripts::
	.byte 0


# 4 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 5 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_LotteryClerk::
# 6 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	lock
# 7 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	dotimebasedevents
# 9 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	goto_if_ne VAR_POKELOT_PRIZE_ITEM, ITEM_NONE, ProdemiaCity_PokeMall_1F_EventScript_GivePrizeFromEarlier
# 10 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET_FRLG, ProdemiaCity_PokeMall_1F_EventScript_ComeBackTomorrow
# 11 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket, MSGBOX_YESNO
# 12 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ProdemiaCity_PokeMall_1F_EventScript_PleaseVisitAgain
# 13 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	setflag FLAG_DAILY_PICKED_LOTO_TICKET_FRLG
# 14 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	message LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
# 15 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	waitmessage
# 16 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	special RetrieveLotteryNumber
# 17 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 18 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	special BufferLottoTicketNumber
# 19 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait, MSGBOX_DEFAULT
# 20 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_WalkInPlaceFasterRight
# 21 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	playse SE_PC_ON
# 23 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	special DoLotteryCornerComputerEffect
# 24 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	special PickLotteryCornerTicket
# 25 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	delay 220
# 26 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	special EndLotteryCornerComputerEffect
# 27 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	delay 10
# 28 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_FacePlayer
# 29 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	goto_if_eq VAR_0x8004, 0, ProdemiaCity_PokeMall_1F_EventScript_NoMatch
# 31 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
# 32 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	call_if_eq VAR_0x8006, 0, ProdemiaCity_PokeMall_1F_EventScript_TicketMatchPartyMon
# 33 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	call_if_eq VAR_0x8006, 1, ProdemiaCity_PokeMall_1F_EventScript_TicketMatchPCMon
# 34 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8005
# 35 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	call_if_eq VAR_0x8004, 1, ProdemiaCity_PokeMall_1F_EventScript_TwoDigitMatch
# 36 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	call_if_eq VAR_0x8004, 2, ProdemiaCity_PokeMall_1F_EventScript_ThreeDigitMatch
# 37 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	call_if_eq VAR_0x8004, 3, ProdemiaCity_PokeMall_1F_EventScript_FourDigitMatch
# 38 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	call_if_eq VAR_0x8004, 4, ProdemiaCity_PokeMall_1F_EventScript_FullMatch
# 39 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	giveitem VAR_0x8005
# 40 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ProdemiaCity_PokeMall_1F_EventScript_RecordPrizeNoRoom
# 41 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 42 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	goto ProdemiaCity_PokeMall_1F_EventScript_PleaseVisitAgain2
# 43 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 45 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_TicketMatchPartyMon::
# 46 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon, MSGBOX_DEFAULT
# 47 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	return
# 48 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 49 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_TicketMatchPCMon::
# 50 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon, MSGBOX_DEFAULT
# 51 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	return
# 52 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 53 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_ComeBackTomorrow::
# 54 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow, MSGBOX_DEFAULT
# 55 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	release
# 56 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 57 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 58 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_PleaseVisitAgain::
# 59 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain, MSGBOX_DEFAULT
# 60 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	release
# 61 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 62 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 63 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_NoMatch::
# 64 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched, MSGBOX_DEFAULT
# 65 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	goto ProdemiaCity_PokeMall_1F_EventScript_PleaseVisitAgain2
# 66 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 67 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 68 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_PleaseVisitAgain2::
# 69 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain2, MSGBOX_DEFAULT
# 70 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	release
# 71 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 72 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 73 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_TwoDigitMatch::
# 74 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched, MSGBOX_DEFAULT
# 75 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	return
# 76 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 77 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_ThreeDigitMatch::
# 78 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched, MSGBOX_DEFAULT
# 79 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	return
# 80 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 81 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_FourDigitMatch::
# 82 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched, MSGBOX_DEFAULT
# 83 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	return
# 84 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 85 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_FullMatch::
# 86 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched, MSGBOX_DEFAULT
# 87 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	return
# 88 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 89 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_RecordPrizeNoRoom::
# 90 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
# 91 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
# 92 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	goto ProdemiaCity_PokeMall_1F_EventScript_NoRoomForPrize
# 93 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 94 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 95 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_NoRoomForPrize::
# 96 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
# 97 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	release
# 98 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 99 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 100 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_GivePrizeFromEarlier::
# 101 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding, MSGBOX_DEFAULT
# 102 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	giveitem VAR_POKELOT_PRIZE_ITEM
# 103 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ProdemiaCity_PokeMall_1F_EventScript_NoRoomForPrize
# 104 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
# 105 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
# 106 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 107 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
# 108 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	setvar VAR_POKELOT_PRIZE_PLACE, 0
# 109 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	release
# 110 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 111 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 112 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_Receptionist::
# 113 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_PokeMall_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
# 114 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 115 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 116 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_LayoutSign::
# 117 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_PokeMall_1F_Text_FloorDescriptions, MSGBOX_SIGN
# 118 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 119 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 120 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_EventScript_FloorSign::
# 121 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	msgbox ProdemiaCity_PokeMall_1F_Text_ServiceCounter, MSGBOX_SIGN
# 122 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	end
# 123 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 124 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_Text_WelcomeToDeptStore::
# 125 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "Hello!\n"
# 126 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "Welcome to the PRODEMIA POKé MALL.\p"
# 127 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "The board on the right describes\n"
# 128 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "the store layout.$"
# 129 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 130 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_Text_FloorDescriptions::
# 131 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "1F: SERVICE COUNTER\p"
# 132 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "2F: TRAINER'S MARKET\p"
# 133 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "3F: SPECIALTY ITEMS\p"
# 134 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "4F: DRUGSTORE\p"
# 135 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "5F: FOOD COURT$"
# 136 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"

# 137 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
ProdemiaCity_PokeMall_1F_Text_ServiceCounter::
# 138 "data/maps/ProdemiaCity_PokeMall_1F_Frlg/scripts.pory"
	.string "1F: SERVICE COUNTER$"
