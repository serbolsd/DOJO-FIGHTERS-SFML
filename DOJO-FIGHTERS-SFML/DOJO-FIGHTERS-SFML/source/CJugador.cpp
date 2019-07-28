#include "../include/CJugador.h"

CJugador::CJugador()
{
}

CJugador::~CJugador()
{
}

void CJugador::OnInit(const float & width, const float & height)
{
	Position = new sf::Vector2f;
	Direccion=new sf::Vector2f;
}

void CJugador::OnUpdate()
{
	BarStamina.update();
	BarAuraDePelea.update();
	cartel->OnUpdate();
	character->spriteCharacter.setPosition(*Position);
	Collider->setPos(*Position);
	AttackCollider->setPos(*Position);
}

void CJugador::OnDelete()
{
	delete character;
	delete cartel;
}

void CJugador::Draw(sf::RenderWindow & wnd)
{
	BarStamina.draw(wnd);
	BarAuraDePelea.draw(wnd);
	cartel->Draw(wnd);
	Collider->draw(wnd);
	AttackCollider->draw(wnd);
	wnd.draw(character->spriteCharacter);
}
