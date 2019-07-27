#pragma once
#include <SFML/Graphics.hpp>

class Barras{

	private:
		//---Miembros

		float porcentaje;
		//Declaraci�n del vector
		sf::Vector2f tama�o, m_pos;
		//Declaraci�n de la barra vacia
		sf::RectangleShape Barrita;
	
		//---Metodos
	public:
		//Funci�n para poder igualar los datos recibidos
		void onInit(float xBar, float yBar, sf::Vector2f pos);
		//Funci�n para poder declarar en pantalla las barras de vida en ese momento
		void update();	
		void draw(sf::RenderWindow & wnd);
};