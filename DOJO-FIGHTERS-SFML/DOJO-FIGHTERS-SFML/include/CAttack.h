#pragma once
#include <../SFML/Graphics.hpp>
#include <../SFML/Window.hpp>
#include "../include/Objetive.h"
#include "../include/Resources.h"
#include <iostream>

class CAttack
{
public:
	CAttack();
	~CAttack();
	void OnAttack(Attack_ID & _attack_id, sf::Time & delay, Objetive & objective);
	
	
private:

	 Attack_ID attack_id;
	 Collider_ID collider_id;
	 sf::Time timeDelayed;
	 sf::Clock Clock;
};



