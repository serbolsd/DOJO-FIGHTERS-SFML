#pragma once

#include "Character.h"
#include <iostream>
#include <Graphics.hpp>
#include "QuadCollider.h"

class Karateca :public Character

{

public:

	void onInit() {};
	void onUpdate() {};
	void onDelete() {};
	Karateca();
	~Karateca();

private:

};



Karateca::Karateca()
{
	speed;
	Speed_Dash;
	damageLight;
	damageHeavy;
	damageSpLight;
	damageSpHeavy;
	damageSpUltra;
	delayLight;
	delayHeavy;
	delaySpLight;
	delaySpHeavy;
	delaySpUltra;
	collider;
	AttackCollider;
	spriteCharacter;
}



Karateca::~Karateca()

{

}
