#include "../include/Barras.h"

//Funci�n para poder igualar los datos recibidos
void Barras::onInit(float xBar, float yBar, sf::Vector2f _pos) {

	//Declaramos un valor permanente
	porcentaje = 100;
	//Declaramos las posiciones en x, y
	tama�o.x = xBar/3;
	tama�o.y = yBar/10;
	//Iguala el vector que recibe al miembro definido
	m_pos = _pos;
	Barrita.setPosition(_pos.x,_pos.y);
	//La barra obtiene el tama�o definido en x, y
	Barrita.setSize(tama�o);
	//Finalmente se declara un color de las barras
	Barrita.setFillColor(sf::Color(255,0,0,255));
}


//Funci�n para poder declarar en pantalla las barras de vida en ese momento
void Barras::update() {

	//Declaramos una variable temporal
	sf::Vector2f newSize;
	//Asignamos los nuevos tama�os
	newSize.y = tama�o.y;
	newSize.x = (tama�o.x * porcentaje/100);
	//Finalmente la barra obtiene el nuevo tama�o
	Barrita.setSize(newSize);
}

void Barras::draw(sf::RenderWindow & wnd) {

	wnd.draw(Barrita);


}


