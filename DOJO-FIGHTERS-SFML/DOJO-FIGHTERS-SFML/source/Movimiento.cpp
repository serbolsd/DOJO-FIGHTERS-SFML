#include "../include/Movimiento.h"

Movimiento::Movimiento(){}

Movimiento::~Movimiento(){}

void Movimiento::Move(Jugador Player)
{
	/*
	Player.MyPos = Player.Direction * Player.Character.Speed;
	*/
}

void Movimiento::Dash(Jugador Player)
{
	/*
	Player.MyPos = Player.Direction * Player.Character.Speed_Dash;
	*/
}

void Movimiento::WatchOponent(Jugador Player, Jugador Enemy)
{
	/*
	if(Player.MyPos.x < MyObjective.MyPos.x)
	{
		Player.PlayerSprite.scale(1, 1);
	}
	else
	{
		Player.PlayerSprite.scale(-1, 1);
	}
	*/
}