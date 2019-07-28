
#include "../include/QuadCollider.h"
QuadCollider::QuadCollider()
{
}

QuadCollider::~QuadCollider()
{
}

void QuadCollider::initCollider(sf::Vector2f size)
{
	m_size.y = size.y;
	m_size.x = size.x;
}

void QuadCollider::setPos(sf::Vector2f pos)
{
	position = pos;
}

void QuadCollider::draw(sf::RenderWindow & gamewindow)
{
	if (isVisible)
	{
		if (Enable)
		{

			sf::RectangleShape col(m_size);
			col.setOrigin(m_size.x/2,m_size.y);
			col.setPosition(position);
			col.setFillColor(sf::Color(0,0,0,0));
			col.setOutlineColor(sf::Color(0,255,0,255));
			col.setOutlineThickness(5);
			gamewindow.draw(col);
		}
	}
}

