
#include "../include/QuadCollider.h"
QuadCollider::QuadCollider()
{
}

QuadCollider::~QuadCollider()
{
}

void QuadCollider::initCollider(sf::Vector2f size)
{
	collider.setSize(size);
	collider.setOrigin(size.x / 2, 0);
}

void QuadCollider::setPos(sf::Vector2f pos)
{
	collider.setPosition(pos);
}

void QuadCollider::draw(sf::RenderWindow & gamewindow)
{
	gamewindow.draw(collider);
}

