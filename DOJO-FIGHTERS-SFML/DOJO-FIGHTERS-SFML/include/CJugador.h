#pragma once
#include "SFML/System/Vector2.hpp"
#include "Objetive.h"
#include "Character.h"
#include "Barras.h"

class CJugador : public Objetive
{
public:
	CJugador();
	~CJugador();
public:

	void OnInit();
	void OnUpdate();
	void OnDelete();
	void Draw(sf::RenderWindow & wnd);

	bool IsKO;
	bool IsHit;
	Character* character;
	Barras BarStamina;
	Barras BarAuraDePelea;


private:

};