.set LOCALID_MEOWTH, 1

InsideOfShip_MapScripts::
	.byte 0

InsideOfShip_EventScript_MeowthEscape::
	applymovement LOCALID_MEOWTH, InsideOfShip_Movement_MeowthEscape
	waitmovement 0
	removeobject LOCALID_MEOWTH
	end

InsideOfShip_Movement_MeowthEscape:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
