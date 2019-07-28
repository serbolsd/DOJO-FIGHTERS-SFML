#include "../include/PlayManager.h"
playManager::playManager()
{
}

playManager::playManager(const float & width, const float & height)
{
	camara = new CCamera;
	camara->initCamera(0, 0, width, height); //set position and resolucion(space view)
	gameWindow = new CWindow;
	gameWindow->initWindow(1920,1080,"DOJO-FIGHTERS");
	gameWindow->getWindow()->setView(*camara->getView());
	events = new sf::Event;
	jugador1 = new CJugador;
	jugador1->OnInit();
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
	delete jugador1;
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
		gameWindow->getWindow()->setView(*camara->getView()); //update the view
		onUpdate();
		onRender();
	}
	onFinish();
}

void playManager::onUpdate()
{
	//aqui van todos los updates
	jugador1->OnUpdate();
}

void playManager::onRender()
{
	//aqui van todos los draw/render
	gameWindow->getWindow()->clear(sf::Color(0,0,255));
	jugador1->Draw(*gameWindow->getWindow());
	gameWindow->getWindow()->display();
}
