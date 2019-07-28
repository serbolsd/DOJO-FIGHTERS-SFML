#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class QuadCollider
{
public:
	QuadCollider();
	~QuadCollider();
	void initCollider(sf::Vector2f size);
	void setPos(sf::Vector2f pos);
	void draw(sf::RenderWindow & gamewindow);
	sf::Vector2f getPos() {return position;};
	sf::Vector2f getSize() {return m_size;};
	bool isVisible = true;
	bool Enable = true;
private:
	sf::Vector2f m_size;
	sf::Vector2f position;
	sf::RectangleShape *collider=nullptr;
	sf::RectangleShape colision;
	
};