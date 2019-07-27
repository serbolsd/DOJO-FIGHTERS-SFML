#pragma once
#include "SFML/System/Vector2.hpp"
#include "../include/Objetive.h"

class CJugador : public Objetive
{
public:
	CJugador();
	~CJugador();
	sf::Vector2f MyPos;
	sf::Vector2f MyDir;
protected:	

	void OnInit();
	void OnUpdate();
	void OnDelete();

	bool IsKO;
	bool IsHit;

	

private:

};