#pragma once
#include "../SFML/System/Vector2.hpp"
class Jugador
{
public:
	Jugador();
	~Jugador();

	bool IsKO;
	bool IsHit;
	
	sf::Vector2f MyPos;
	float MaxDashTime;
	float CurrDashTime;

private:

};

Jugador::Jugador()
{
}

Jugador::~Jugador()
{
}

class Movimiento
{
public:
	Movimiento();
	~Movimiento();

	static void Move(Jugador Player);
	static void Dash(Jugador Player);
	static void WatchOponent(Jugador Player, Jugador Enemy);

private:

};