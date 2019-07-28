#include "../include/Barras.h"

//Funci�n para poder igualar los datos recibidos
void Barras::onInit(float xBar, float yBar, sf::Vector2f pos, float porIni, float porMax)
{

	//Declaramos un valor permanente
	porcentaje = porIni;
	porcentajeMax = porMax;
	//Declaramos las posiciones en x, y
	tama�o.x = xBar;
	tama�o.y = yBar;
	//Iguala el vector que recibe al miembro definido
	m_pos = pos;
	Barrita.setPosition(m_pos.x,m_pos.y);
	Barritafondo.setPosition(m_pos.x,m_pos.y);

	newSize.y = tama�o.y;
	newSize.x = (tama�o.x * porcentaje / porcentajeMax);
	//Finalmente la barra obtiene el nuevo tama�o
	Barrita.setSize(newSize);
	//La barra obtiene el tama�o definido en x, y
	Barritafondo.setSize(tama�o);
	//Finalmente se declara un color de las barras
	Barrita.setFillColor(sf::Color(255,0,0,255));
	Barritafondo.setFillColor(sf::Color(0,0,0,255));


}


//Funci�n para poder declarar en pantalla las barras de vida en ese momento
void Barras::update() {

	//Declaramos una variable temporal
	
	//Asignamos los nuevos tama�os
	newSize.y = tama�o.y;
	newSize.x = (tama�o.x * porcentaje/ porcentajeMax);
	//Finalmente la barra obtiene el nuevo tama�o
	Barrita.setSize(newSize);
	Barrita.setPosition(m_pos.x, m_pos.y);
	Barritafondo.setPosition(m_pos.x, m_pos.y);
}

void Barras::draw(sf::RenderWindow & wnd) 
{

	wnd.draw(Barritafondo);
	wnd.draw(Barrita);
}

void Barras::setPivot(PivotPos tipe)
{
	switch (tipe)
	{
	case superiorIzquierdo:
		Barritafondo.setOrigin(0,0);
		Barrita.setOrigin(0,0);
		break;
	case superiorDerecho:
		Barritafondo.setOrigin(tama�o.x, 0);
		Barrita.setOrigin(newSize.x, 0);
		break;
	case inferiorIzquierdo:
		Barritafondo.setOrigin(0, tama�o.y);
		Barrita.setOrigin(0, newSize.y);
		break;
	case inferiorderecho:
		Barritafondo.setOrigin(tama�o.x, tama�o.y);
		Barrita.setOrigin(newSize.x, newSize.y);
		break;
	case superiorCentro:
		Barritafondo.setOrigin(tama�o.x/2, 0);
		Barrita.setOrigin(newSize.x/2, 0);
		break;
	case inferiorCentro:
		Barritafondo.setOrigin(tama�o.x/2, tama�o.y);
		Barrita.setOrigin(newSize.x/2, newSize.y);
		break;
	case Centro:
		Barritafondo.setOrigin(tama�o.x / 2, tama�o.y/2);
		Barrita.setOrigin(newSize.x / 2, newSize.y/2);
		break;
	case centroIzqierdo:
		Barritafondo.setOrigin(0, tama�o.y / 2);
		Barrita.setOrigin(0, newSize.y / 2);
		break;
	case centroDerecho:
		Barritafondo.setOrigin(tama�o.x, tama�o.y / 2);
		Barrita.setOrigin(newSize.x, newSize.y / 2);
		break;
	default:
		break;
	}
}


