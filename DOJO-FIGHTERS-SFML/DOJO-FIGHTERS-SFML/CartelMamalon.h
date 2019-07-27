#pragma once
#include <SFML/Graphics.hpp>
class CartelMamalon
{
public:
	sf::Vector2f PosicionDelCartel;
	sf::Vector2f TamañoDelCartel;
	sf::RectangleShape Cartelito;
	float Vida=100;
	void OnInit(float Alto, float Ancho, sf::Vector2f Position);
	void OnUpdate();
	float HP(float Daño);
	void CartelColor();
	//QuadCollider Collifer();
	CartelMamalon();
	~CartelMamalon();
};

