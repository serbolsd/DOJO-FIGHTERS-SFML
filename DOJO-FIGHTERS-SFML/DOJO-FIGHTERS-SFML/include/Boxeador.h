#pragma once
#include <iostream>
#include <Graphics.hpp>
#include "QuadCollider.h"

class Boxeador
{
public:
	void onInit() {};
	void onUpdate() {};
	void onDelete() {};
	float speed;
	float Speed_Dash;
	float damageLight;
	float damageHeavy;
	float damageSpLight;
	float damageSpHeavy;
	float damageSpUltra;
	sf::Time delayLight;
	sf::Time delayHeavy;
	sf::Time delaySpLight;
	sf::Time delaySpHeavy;
	sf::Time delaySpUltra;
	QuadCollider collider;
	sf::Sprite spriteCharacter;
	Boxeador();
	~Boxeador();

private:

};

Boxeador::Boxeador()
{
}

Boxeador::~Boxeador()
{
}


