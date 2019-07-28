#pragma once
#include <SFML/Graphics.hpp>
#include "Resources.h"

class Barras{

	private:
		//---Miembros

		float porcentaje;
		float porcentajeMax;
		//Declaración del vector
		sf::Vector2f tamaño, m_pos;
		//Declaración de la barra vacia
		sf::RectangleShape Barrita;
		sf::RectangleShape Barritafondo;
		sf::Vector2f newSize;
	
		//---Metodos
	public:
		//Función para poder igualar los datos recibidos
		void onInit(float largo, float alto, sf::Vector2f pos,float porIni, float porMax);
		//Función para poder declarar en pantalla las barras de vida en ese momento
		void update();	
		void draw(sf::RenderWindow & wnd);
		void setPivot(PivotPos tipe);
		//void setPosition();
};