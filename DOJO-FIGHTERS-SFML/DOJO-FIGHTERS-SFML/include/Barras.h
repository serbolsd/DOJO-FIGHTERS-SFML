#pragma once
#include <SFML/Graphics.hpp>

class Barras{

	private:
		//---Miembros

		float porcentaje;
		//Declaración del vector
		sf::Vector2f tamaño, m_pos;
		//Declaración de la barra vacia
		sf::RectangleShape Barrita;
	
		//---Metodos
	public:
		//Función para poder igualar los datos recibidos
		void onInit(float xBar, float yBar, sf::Vector2f pos);
		//Función para poder declarar en pantalla las barras de vida en ese momento
		void update();	
		void draw(sf::RenderWindow & wnd);
};