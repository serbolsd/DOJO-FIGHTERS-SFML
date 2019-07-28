#pragma once
#include <SFML/Graphics.hpp>
#include "Objetive.h"
#include "Resources.h"
class CartelMamalon:public Objetive
{
public:
	sf::Vector2f PosicionDelCartel;
	sf::Vector2f TamañoDelCartel;
	sf::RectangleShape Cartelito;
	void setPivot(PivotPos tipe);
	float Vida = 100;
	void OnInit( float Ancho, float Alto, sf::Vector2f Position);
	void Draw(sf::RenderWindow &wnd);
	void OnUpdate();
	float HP(float Daño);
	void CartelColor();
	//QuadCollider Collifer();
	CartelMamalon() {};
	~CartelMamalon() {};
};

