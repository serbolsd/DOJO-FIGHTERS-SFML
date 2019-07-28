#pragma once
#include "../SFML/System/Vector2.hpp"
#include "../include/CJugador.h"

class Movimiento : public CJugador
{
public:
	Movimiento();
	~Movimiento();

	static void Move(CJugador &Player);
	static void Dash(CJugador &Player);
	static void WatchOponent(CJugador &Player, Objetive &Enemy);

private:

};