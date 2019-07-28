#include "../include/Movimiento.h"

Movimiento::Movimiento(){}

Movimiento::~Movimiento(){}

void Movimiento::Move(CJugador &Player)
{
	Player.Position->x += Player.Direccion->x * Player.character->speed;
}

void Movimiento::Dash(CJugador &Player)
{
	Player.Position->x += Player.Direccion->x * Player.character->Speed_Dash;
}

void Movimiento::WatchOponent(CJugador &Player, Objetive &Enemy)
{
	if(Player.Position->x < Enemy.Position->x&&Player.changeSucces)
	{
		Player.changeSucces = false;
		Player.character->spriteCharacter.scale(-1, 1);
	}
	else if (Player.Position->x > Enemy.Position->x&&!Player.changeSucces)
	{
		Player.changeSucces = true;
		Player.character->spriteCharacter.scale(-1, 1);
	}
}