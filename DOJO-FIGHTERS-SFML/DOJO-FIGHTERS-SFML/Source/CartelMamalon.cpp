#include "../DOJO-FIGHTERS-SFML/Header/CartelMamalon.h"
#include "CartelMamalon.h"

void CartelMamalon::OnInit(float Alto, float Ancho, sf::Vector2f Position)
{
	 PosicionDelCartel.x= Position.x;
	 PosicionDelCartel.y = Position.y;
	 TamaņoDelCartel.x = Ancho/16;
	 TamaņoDelCartel.y = Alto/3;
	 Cartelito.setSize(TamaņoDelCartel);
	 Cartelito.setPosition(PosicionDelCartel);
}

void CartelMamalon::OnUpdate()
{
	CartelColor();
}

float CartelMamalon::HP(float Daņo)
{
	Vida = Vida - Daņo;
	return Vida;
}

void CartelMamalon::CartelColor()
{
	if (Vida == 100)
	{

		Cartelito.setFillColor(sf::Color(0, 255, 0, 255));
	}
	else if (Vida <= 75)
	{
		Cartelito.setFillColor(sf::Color(248, 243, 43, 255));

	}
	else if (Vida <= 50)
	{
		Cartelito.setFillColor(sf::Color(255, 128, 0, 255));
	}
	else if (Vida <= 25)
	{
		Cartelito.setFillColor(sf::Color(255, 0, 0, 255));
	}


}
