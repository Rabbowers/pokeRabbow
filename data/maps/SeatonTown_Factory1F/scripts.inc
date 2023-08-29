SeatonTown_Factory1F_MapScripts::
	.byte 0

SeatonTown_Factory1F_EventScript_GeneratorTerminal::
	lock
	faceplayer
	msgbox SeatonTown_Factory1F_Text_GeneratorTerminal, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Script_PlayerAnsweredNo
	msgbox SeatonTown_Factory1F_Text_PlayerAnsweredYes, MSGBOX_DEFAULT
	release
	end

Script_PlayerAnsweredNo::
	msgbox SeatonTown_Factory1F_Text_PlayerAnsweredNo, MSGBOX_DEFAULT
	release
	end

SeatonTown_Factory1F_Text_GeneratorTerminal:
	.string "The generetor is currently off\n"
	.string "Turn it on?$"

SeatonTown_Factory1F_Text_PlayerAnsweredYes:
	.string "BRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n"
	.string "BRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR$"

SeatonTown_Factory1F_Text_PlayerAnsweredNo:
	.string "D:$"
