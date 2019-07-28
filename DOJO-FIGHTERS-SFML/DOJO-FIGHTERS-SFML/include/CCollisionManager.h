#pragma once
#include <vector>
#include "../QuadCollider.h"
#include "../CJugador.h"

class CCollisionManager
{
public:
	CCollisionManager();
	~CCollisionManager();

	void CheckCollisions(CJugador & jugador ,std::vector<QuadCollider> & colliders);
private:

};

