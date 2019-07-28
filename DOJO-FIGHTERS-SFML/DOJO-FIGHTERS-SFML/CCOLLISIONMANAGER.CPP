#include "include\CCollisionManager.h"

CCollisionManager::CCollisionManager()
{
}

CCollisionManager::~CCollisionManager()
{
}

void CCollisionManager::CheckCollisions(CJugador & jugador, std::vector<QuadCollider>& colliders)
{
	for (int i = 0; i < colliders.size(); i++) {
		if (jugador.Position.x > colliders[i].getPos().x) {
			if(jugador.Position.x + (jugador.Collider.getSize().x * 0.5f) > 
				(colliders[i].getPos().x + (colliders[i].getSize().x * 0.5f))) {

				jugador.Position.x = colliders[i].getPos().x + (colliders[i].getSize().x * 0.5f);
				break;
			}
		}
		else if (jugador.Position.x < colliders[i].getPos().x) {
			if (colliders[i].getPos().x + (colliders[i].getSize().x * 0.5f) >
				jugador.Position.x - (jugador.Collider.getSize().x * 0.5f)) {

				jugador.Position.x = colliders[i].getPos().x + (colliders[i].getSize().x * 0.5f);
				break;
			}
		}
	}
}
