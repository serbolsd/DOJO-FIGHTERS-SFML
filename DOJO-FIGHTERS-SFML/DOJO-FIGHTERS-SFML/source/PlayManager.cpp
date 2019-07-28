#include "../include/PlayManager.h"
#include "../include/Boxeador.h"
playManager::playManager()
{
}

playManager::playManager(const float & width, const float & height)
{
	camara = new CCamera;
	camara->initCamera(0, 0, width, height); //set position and resolucion(space view)
	gameWindow = new CWindow;
	gameWindow->initWindow(width, height, "DOJO-FIGHTERS");
	gameWindow->getWindow()->setView(*camara->getView());
	events = new sf::Event;
	
	inputmanager = new inputman();
	jugador1 = new CJugador;
	jugador1->OnInit(width, height);
	jugador1->BarStamina.onInit(width / 2.5, height / 15, sf::Vector2f(0, 0), 100, 100);
	jugador1->BarStamina.setPivot(PivotPos::superiorIzquierdo);
	jugador1->BarAuraDePelea.onInit(width / 4, height / 20, sf::Vector2f(0, height / 15), 0, 100);
	jugador1->BarAuraDePelea.setPivot(PivotPos::superiorIzquierdo);
	jugador1->cartel = new CartelMamalon;
	jugador1->cartel->OnInit(width / 25, height / 2, sf::Vector2f(0, height));
	jugador1->cartel->setPivot(PivotPos::inferiorIzquierdo);
	jugador1->character = new Boxeador;
	jugador1->controlID = 0;
	*jugador1->Position =sf::Vector2f((width / 4) * 1, height);
	jugador1->Collider = jugador1->character->collider;
	jugador1->AttackCollider = jugador1->character->AttackCollider;

	jugador2 = new CJugador;
	jugador2->OnInit(width, height);
	jugador2->BarStamina.onInit(width / 2.5, height / 15, sf::Vector2f(width, 0), 100, 100);
	jugador2->BarStamina.setPivot(PivotPos::superiorDerecho);
	jugador2->BarAuraDePelea.onInit(width / 4, height / 20, sf::Vector2f(width, height / 15), 0, 100);
	jugador2->BarAuraDePelea.setPivot(PivotPos::superiorDerecho);
	jugador2->cartel = new CartelMamalon;
	jugador2->cartel->OnInit(width / 25, height / 2, sf::Vector2f(width, height));
	jugador2->cartel->setPivot(PivotPos::inferiorderecho);
	jugador2->character = new Boxeador;
	jugador2->controlID = 1;
	*jugador2->Position = sf::Vector2f((width / 4) * 3, height);
	jugador2->Collider = jugador2->character->collider;
	jugador2->AttackCollider = jugador2->character->AttackCollider;

	jugador1->objetive = jugador2;
	jugador2->objetive = jugador1;

}

playManager::~playManager()
{
}

void playManager::onFinish()
{
	gameWindow->onDelete();
	delete gameWindow;
	delete events;
	jugador1->OnDelete();
	jugador2->OnDelete();
	delete jugador1;
	delete jugador2;
	delete inputmanager;
}

void playManager::playGame(const float & width, const float & height)
{
	camara = new CCamera;
	camara->initCamera(0, 0, width, height); //set position and resolucion(space view)
	gameWindow = new CWindow;
	gameWindow->initWindow(1920, 1080, "DOJO-FIGHTERS");
	gameWindow->getWindow()->setView(*camara->getView());
	events = new sf::Event;
}

void playManager::gameLoop()
{
	gameWindow->getWindow()->setFramerateLimit(60);
	while (gameWindow->getWindow()->isOpen())
	{
		while (gameWindow->getWindow()->pollEvent(*events))
		{
			// "close requested" event: we close the window
			if (events->type == sf::Event::Closed)
			{
				gameWindow->closeWindow();
			}
		}
		sf::Clock clock; // starts the clock
		gameWindow->getWindow()->setView(*camara->getView()); //update the view
		inputmanager->onUpdate(jugador1->controlID,*jugador1);
		inputmanager->onUpdate(jugador2->controlID,*jugador2);
		onUpdate();
		onRender();
		sf::Time elapsed1 = clock.getElapsedTime();
		jugador1->timeAction += elapsed1.asSeconds();
		jugador2->timeAction += elapsed1.asSeconds();
	}
	onFinish();
}

void playManager::onUpdate()
{
	//aqui van todos los updates
	jugador1->OnUpdate();
	jugador2->OnUpdate();
}

void playManager::onRender()
{
	//aqui van todos los draw/render
	gameWindow->getWindow()->clear(sf::Color(0,0,255));
	jugador1->Draw(*gameWindow->getWindow());
	jugador2->Draw(*gameWindow->getWindow());
	gameWindow->getWindow()->draw(jugador1->character->spriteCharacter);
	gameWindow->getWindow()->draw(jugador2->character->spriteCharacter);
	gameWindow->getWindow()->display();
}
