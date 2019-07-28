#include "../include/Barras.h"

//Función para poder igualar los datos recibidos
void Barras::onInit(float xBar, float yBar, sf::Vector2f pos, float porIni, float porMax)
{

	//Declaramos un valor permanente
	porcentaje = porIni;
	porcentajeMax = porMax;
	//Declaramos las posiciones en x, y
	tamaño.x = xBar/2.5;
	tamaño.y = yBar/14;
	//Iguala el vector que recibe al miembro definido
	m_pos = pos;
	Barrita.setPosition(m_pos.x,m_pos.y);
	Barritafondo.setPosition(m_pos.x,m_pos.y);
	//La barra obtiene el tamaño definido en x, y
	Barrita.setSize(tamaño);
	Barritafondo.setSize(tamaño);
	//Finalmente se declara un color de las barras
	Barrita.setFillColor(sf::Color(255,0,0,255));
	Barritafondo.setFillColor(sf::Color(0,0,0,255));

}


//Función para poder declarar en pantalla las barras de vida en ese momento
void Barras::update() {

	//Declaramos una variable temporal
	sf::Vector2f newSize;
	//Asignamos los nuevos tamaños
	newSize.y = tamaño.y;
	newSize.x = (tamaño.x * porcentaje/ porcentajeMax);
	//Finalmente la barra obtiene el nuevo tamaño
	Barrita.setSize(newSize);
}

void Barras::draw(sf::RenderWindow & wnd) 
{

	wnd.draw(Barritafondo);
	wnd.draw(Barrita);
}


