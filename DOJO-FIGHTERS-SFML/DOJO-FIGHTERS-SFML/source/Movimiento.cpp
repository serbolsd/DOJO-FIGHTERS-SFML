#include "../include/Movimiento.h"

Movimiento::Movimiento(){}

Movimiento::~Movimiento(){}

void Movimiento::Move(CJugador Player)
{
	Player.MyPos = Player.MyDir * Player.Character.Speed;
}

void Movimiento::Dash(CJugador Player)
{
	Player.MyPos = Player.MyDir * Player.Character.Speed_Dash;
}

void Movimiento::WatchOponent(CJugador Player, Objetive Enemy)
{
	if(Player.MyPos.x < Enemy.MyPos.x)
	{
		Player.PlayerSprite.scale(1, 1);
	}
	else
	{
		Player.PlayerSprite.scale(-1, 1);
	}
}