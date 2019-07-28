#pragma once
#include <SFML/Graphics.hpp>
#include "QuadCollider.h"
class Character
{
public:
	Character() {};
	//~Character();
	
private:
public:
	virtual void onInit()=0;
	virtual void onUpdate()=0;
	virtual void onDelete()=0;
	float speed;
	float Speed_Dash;
	float damageLight;
	float damageHeavy;
	float damageSpLight;
	float damageSpHeavy;
	float damageSpUltra;
	float distDash;
	float timeDash;
	sf::Time delayLight;
	sf::Time delayHeavy;
	sf::Time delaySpLight;
	sf::Time delaySpHeavy;
	sf::Time delaySpUltra;
	QuadCollider* collider;
	QuadCollider* AttackCollider;
	sf::Sprite spriteCharacter;
};

