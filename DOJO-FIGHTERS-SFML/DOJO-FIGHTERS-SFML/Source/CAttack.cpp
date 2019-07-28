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

void CAttack::CheckCollision(CJugador & jugador, Objetive & objective)
{
	if (jugador.character->collider.getPos().x < objective.Position.x) {
		if (jugador.character->collider.getPos().x + (jugador.character->AttackCollider.getSize().x * 0.5f) >=
			objective.Position.x - (objective.Collider.getSize().x * 0.5f))
		{
			ApplyDamage(jugador, objective);
		}	
		else {
			std::cout << "ataque sin conectar" << std::endl;
		}
	}
	else if (jugador.character->collider.getPos().x > objective.Position.x) {
		if (objective.Position.x + (objective.Collider.getSize().x * 0.5f) >=
			jugador.character->collider.getPos().x - (jugador.character->AttackCollider.getSize().x * 0.5f)) {
			ApplyDamage(jugador, objective);
		}
		else {
			std::cout << "ataque sin conectar" << std::endl;
		}
	}
}

void CAttack::ApplyDamage(CJugador & jugador, Objetive & objective)
{
	switch (attack_id)
	{
	case ID_LightAttack:
		objective.Life -= jugador.character->damageLight;
		break;
	case ID_HeavyAttack:
		objective.Life -= jugador.character->damageHeavy;
		break;
	case ID_SpecialHeavy:
		objective.Life -= jugador.character->damageSpLight;
		break;
	case ID_SpecialLight:
		objective.Life -= jugador.character->damageSpHeavy;
		break;
	case ID_SupremeAttack:
		objective.Life -= jugador.character->damageSpUltra;
		break;
	default:
		std::cout << "ataque desconocido, daño no aplicado" << std::endl;
		break;
	}
}



/*
comparar vectores de posicion a collision
*/


