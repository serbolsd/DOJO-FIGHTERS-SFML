#include "../include/CAttack.h"
/*
Attack_id & attack, float & delay, Objetivo & objective
llamar en delay a check collision

*/
CAttack::CAttack()
{
	timeDelayed = sf::seconds(0);
}

CAttack::~CAttack()
{
}

void CAttack::OnAttack(Attack_ID & _attack_id, sf::Time & delay, Objetive & objective) //function that delays the collider
{
	attack_id = _attack_id;
	Clock.restart();
	while (timeDelayed < delay) {
		std::cout << "time delayed" << timeDelayed.asSeconds() << std::endl;
		timeDelayed = Clock.getElapsedTime();
	}
	std::cout << "Ready to attack" << std::endl;
	//call CheckCollision
	timeDelayed = sf::seconds(0);
}

/*
comparar vectores de posicion a collision
*/


