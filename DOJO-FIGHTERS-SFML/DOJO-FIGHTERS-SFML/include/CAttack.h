#pragma once
//#include <../SFML/Graphics.hpp>
//#include <../SFML/Window.hpp>
#include "Resources.h"

//TODO:
//cambiar daño por id
class CAttack
{
public:
	CAttack();
	~CAttack();
	static void OnAttack();
	//static void OnAttack( & damage, float & delay, Objetivo * objective)
	static void CheckCollision();
	
private:
	Attack_ID attack_id;
	Collider_ID collider_id;
};

CAttack::CAttack()
{
}

CAttack::~CAttack()
{
}
