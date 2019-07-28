#include "../include/CJugador.h"

CJugador::CJugador()
{
}

CJugador::~CJugador()
{
}

void CJugador::OnInit()
{
	BarStamina.onInit(1920/15, 1080 / 2.5, sf::Vector2f(0, 0), 50, 100);
}

void CJugador::OnUpdate()
{
	BarStamina.update();
}

void CJugador::OnDelete()
{
	delete character;
}

void CJugador::Draw(sf::RenderWindow & wnd)
{
	BarStamina.draw(wnd);
}
