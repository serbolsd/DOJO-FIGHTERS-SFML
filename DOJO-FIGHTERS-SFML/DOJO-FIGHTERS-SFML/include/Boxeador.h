#pragma once

#include "Character.h"
#include <iostream>
#include <Graphics.hpp>
#include "QuadCollider.h"

class Boxeador:public Character
{

public:

	void onInit();
	void onUpdate() {};
	void onDelete() {};
	//float speed=10;
	//speed = 10;
	Boxeador();
	~Boxeador();

	sf::Texture tex;
	sf::Vector2u size;
private:

};



inline void Boxeador::onInit()
{
	if (!tex.loadFromFile("resources\\image\\BOXEADOR\\BOX0.jpeg"))
	{
		std::cout << "cant lodad texture";
		// error...
	}
	spriteCharacter.setTexture(tex);
	size = tex.getSize();
	spriteCharacter.setOrigin(size.x / 2, size.y);
	spriteCharacter.setPosition(size.x / 2, size.y);
}

Boxeador::Boxeador()

{
	speed = 10;
	Speed_Dash = 25;
	damageLight = 10;
	damageHeavy = 15;
	damageSpLight = 20;
	damageSpHeavy = 30;
	damageSpUltra = 100;
	distDash=200;
	timeDash=.5;
	delayLight = sf::seconds(0.1);
	delayHeavy = sf::seconds(0.2);
	delaySpLight = sf::seconds(0.2);
	delaySpHeavy = sf::seconds(0.3);
	delaySpUltra = sf::seconds(0.4);
	onInit();
	spriteCharacter;
	collider=new QuadCollider;
	collider->initCollider(sf::Vector2f(size.x, size.y));
	AttackCollider = new QuadCollider;
	AttackCollider->initCollider(sf::Vector2f((size.x * 2), size.y));
}



Boxeador::~Boxeador()

{
	delete collider;
	delete AttackCollider;
}

