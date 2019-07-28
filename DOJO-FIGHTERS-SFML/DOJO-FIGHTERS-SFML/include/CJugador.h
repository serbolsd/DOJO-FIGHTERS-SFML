#pragma once
#include "SFML/System/Vector2.hpp"
#include "Objetive.h"
#include "Character.h"
#include "Barras.h"
#include "CartelMamalon.h"

class CJugador : public Objetive
{
public:
	CJugador();
	~CJugador();
public:

	void OnInit(const float & width, const float & height);
	void OnUpdate();
	void OnDelete();
	void Draw(sf::RenderWindow & wnd);

	bool IsKO=false;
	bool IsHit=false;
	bool IsDashing = false;
	Character* character;
	Barras BarStamina;
	Barras BarAuraDePelea;
	CartelMamalon* cartel;
	float timeAction;
	float travel;
	int controlID;
	Objetive *objetive;
	bool changeSucces=false;
	//inputManager * inputmanager;


private:

};