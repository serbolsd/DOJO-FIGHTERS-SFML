#include "../include/Movimiento.h"

Movimiento::Movimiento(){}

Movimiento::~Movimiento(){}

void Movimiento::Move(CJugador Player)
{
	Player.Position = Player.Direccion * Player.Character.Speed;
}

void Movimiento::Dash(CJugador Player)
{
	Player.Position = Player.Direccion * Player.Character.Speed_Dash;
}

void Movimiento::WatchOponent(CJugador Player, Objetive Enemy)
{
	if(Player.Position.x < Enemy.Position.x)
	{
		Player.PlayerSprite.scale(1, 1);
	}
	else
	{
		Player.PlayerSprite.scale(-1, 1);
	}
}