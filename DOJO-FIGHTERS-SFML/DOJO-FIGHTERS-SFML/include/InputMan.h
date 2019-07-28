#pragma once
#include <SFML/Graphics.hpp>
#include "CJugador.h"
#include "Movimiento.h"
class inputman
{
public:
	inputman() {};
	~inputman() {};
	void onUpdate(int controlID, CJugador & player);

private:

};
