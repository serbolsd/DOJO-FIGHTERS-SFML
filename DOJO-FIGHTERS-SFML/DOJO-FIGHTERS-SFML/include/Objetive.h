#pragma once

#include"Graphics.hpp"
#include "QuadCollider.h"
class  Objetive {
public:
	//Members can't be accesed by child classes if protected
	 float Life;
	 sf::Vector2f* Direccion;
	 QuadCollider* Collider;
	 QuadCollider* AttackCollider;
	 sf::Vector2f* Position;
};