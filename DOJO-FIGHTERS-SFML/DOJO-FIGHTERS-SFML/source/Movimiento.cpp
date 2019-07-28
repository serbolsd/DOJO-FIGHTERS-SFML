#include "../include/Movimiento.h"

Movimiento::Movimiento(){}

Movimiento::~Movimiento(){}

void Movimiento::Move(CJugador Player)
{
	Player.Position = Player.Direccion * Player.character->speed;
}

void Movimiento::Dash(CJugador Player)
{
	Player.Position = Player.Direccion * Player.character->Speed_Dash;
}

void Movimiento::WatchOponent(CJugador Player, Objetive Enemy)
{
	if(Player.Position.x < Enemy.Position.x)
	{
		Player.character->spriteCharacter.scale(1, 1);
	}
	else
	{
		Player.character->spriteCharacter.scale(-1, 1);
	}
}