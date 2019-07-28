#pragma once
#include <SFML/Graphics.hpp>
#include "QuadCollider.h"
class Character
{
public:
	Character();
	//~Character();

private:
public:
	void onInit();
	void onUpdate();
	void onDelete();
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
};


inline void Character::onInit()
{
}

inline void Character::onUpdate()
{
}

inline void Character::onDelete()
{
}
