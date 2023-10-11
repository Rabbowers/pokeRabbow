.set LOCALID_NURSE, 1

SeatonTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SeatonTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SeatonTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SEATON_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

SeatonTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
