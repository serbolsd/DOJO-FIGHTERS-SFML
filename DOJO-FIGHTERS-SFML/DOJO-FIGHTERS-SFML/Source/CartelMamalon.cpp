#include "../include/CartelMamalon.h"

void CartelMamalon::OnInit( float Ancho, float Alto, sf::Vector2f inPosition)
{
	 PosicionDelCartel.x= inPosition.x;
	 PosicionDelCartel.y = inPosition.y;
	 Tama�oDelCartel.x = Ancho;
	 Tama�oDelCartel.y = Alto;
	 Cartelito.setSize(Tama�oDelCartel);
	 Cartelito.setPosition(PosicionDelCartel);
	 Position = new sf::Vector2f(inPosition);
	 Collider = new QuadCollider;
	 Collider->initCollider(Tama�oDelCartel);
	 Collider->setPos(inPosition);
}

void CartelMamalon::Draw(sf::RenderWindow & wnd)
{
	wnd.draw(Cartelito);
}

void CartelMamalon::OnUpdate()
{

	Cartelito.setPosition(PosicionDelCartel);
	CartelColor();
}

float CartelMamalon::HP(float Da�o)
{
	Vida = Vida - Da�o;
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

void CartelMamalon::setPivot(PivotPos tipe)
{
	switch (tipe)
	{
	case superiorIzquierdo:
		Cartelito.setOrigin(0, 0);
		break;
	case superiorDerecho:
		Cartelito.setOrigin(Tama�oDelCartel.x, 0);
		break;
	case inferiorIzquierdo:
		Cartelito.setOrigin(0, Tama�oDelCartel.y);
		break;
	case inferiorderecho:
		Cartelito.setOrigin(Tama�oDelCartel.x, Tama�oDelCartel.y);
		break;
	case superiorCentro:
		Cartelito.setOrigin(Tama�oDelCartel.x / 2, 0);
		break;
	case inferiorCentro:
		Cartelito.setOrigin(Tama�oDelCartel.x / 2, Tama�oDelCartel.y);
		break;
	case Centro:
		Cartelito.setOrigin(Tama�oDelCartel.x / 2, Tama�oDelCartel.y / 2);
		break;
	case centroIzqierdo:
		Cartelito.setOrigin(0, Tama�oDelCartel.y / 2);
		break;
	case centroDerecho:
		Cartelito.setOrigin(Tama�oDelCartel.x, Tama�oDelCartel.y / 2);
		break;
	default:
		break;
	}
}