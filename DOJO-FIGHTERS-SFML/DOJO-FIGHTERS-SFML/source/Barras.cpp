#include "../include/Barras.h"

//Función para poder igualar los datos recibidos
void Barras::onInit(float xBar, float yBar, sf::Vector2f _pos) {

	//Declaramos un valor permanente
	porcentaje = 100;
	//Declaramos las posiciones en x, y
	tamaño.x = xBar/3;
	tamaño.y = yBar/10;
	//Iguala el vector que recibe al miembro definido
	m_pos = _pos;
	Barrita.setPosition(_pos.x,_pos.y);
	//La barra obtiene el tamaño definido en x, y
	Barrita.setSize(tamaño);
	//Finalmente se declara un color de las barras
	Barrita.setFillColor(sf::Color(255,0,0,255));
}


//Función para poder declarar en pantalla las barras de vida en ese momento
void Barras::update() {

	//Declaramos una variable temporal
	sf::Vector2f newSize;
	//Asignamos los nuevos tamaños
	newSize.y = tamaño.y;
	newSize.x = (tamaño.x * porcentaje/100);
	//Finalmente la barra obtiene el nuevo tamaño
	Barrita.setSize(newSize);
}

void Barras::draw(sf::RenderWindow & wnd) {

	wnd.draw(Barrita);


}


