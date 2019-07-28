#include "../include/Barras.h"

//Función para poder igualar los datos recibidos
void Barras::onInit(float xBar, float yBar, sf::Vector2f pos, float porIni, float porMax)
{

	//Declaramos un valor permanente
	porcentaje = porIni;
	porcentajeMax = porMax;
	//Declaramos las posiciones en x, y
	tamaño.x = xBar;
	tamaño.y = yBar;
	//Iguala el vector que recibe al miembro definido
	m_pos = pos;
	Barrita.setPosition(m_pos.x,m_pos.y);
	Barritafondo.setPosition(m_pos.x,m_pos.y);

	newSize.y = tamaño.y;
	newSize.x = (tamaño.x * porcentaje / porcentajeMax);
	//Finalmente la barra obtiene el nuevo tamaño
	Barrita.setSize(newSize);
	//La barra obtiene el tamaño definido en x, y
	Barritafondo.setSize(tamaño);
	//Finalmente se declara un color de las barras
	Barrita.setFillColor(sf::Color(255,0,0,255));
	Barritafondo.setFillColor(sf::Color(0,0,0,255));


}


//Función para poder declarar en pantalla las barras de vida en ese momento
void Barras::update() {

	//Declaramos una variable temporal
	
	//Asignamos los nuevos tamaños
	newSize.y = tamaño.y;
	newSize.x = (tamaño.x * porcentaje/ porcentajeMax);
	//Finalmente la barra obtiene el nuevo tamaño
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
		Barritafondo.setOrigin(tamaño.x, 0);
		Barrita.setOrigin(newSize.x, 0);
		break;
	case inferiorIzquierdo:
		Barritafondo.setOrigin(0, tamaño.y);
		Barrita.setOrigin(0, newSize.y);
		break;
	case inferiorderecho:
		Barritafondo.setOrigin(tamaño.x, tamaño.y);
		Barrita.setOrigin(newSize.x, newSize.y);
		break;
	case superiorCentro:
		Barritafondo.setOrigin(tamaño.x/2, 0);
		Barrita.setOrigin(newSize.x/2, 0);
		break;
	case inferiorCentro:
		Barritafondo.setOrigin(tamaño.x/2, tamaño.y);
		Barrita.setOrigin(newSize.x/2, newSize.y);
		break;
	case Centro:
		Barritafondo.setOrigin(tamaño.x / 2, tamaño.y/2);
		Barrita.setOrigin(newSize.x / 2, newSize.y/2);
		break;
	case centroIzqierdo:
		Barritafondo.setOrigin(0, tamaño.y / 2);
		Barrita.setOrigin(0, newSize.y / 2);
		break;
	case centroDerecho:
		Barritafondo.setOrigin(tamaño.x, tamaño.y / 2);
		Barrita.setOrigin(newSize.x, newSize.y / 2);
		break;
	default:
		break;
	}
}


