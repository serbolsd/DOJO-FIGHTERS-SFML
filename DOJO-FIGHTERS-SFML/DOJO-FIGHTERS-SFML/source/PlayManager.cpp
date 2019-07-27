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
}

playManager::~playManager()
{
}

void playManager::onFinish()
{
	gameWindow->onDelete();
	delete gameWindow;
	delete events;
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
}

void playManager::onRender()
{
	//aqui van todos los draw/render
}
