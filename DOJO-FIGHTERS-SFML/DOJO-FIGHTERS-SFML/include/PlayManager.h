#pragma once
#include "Camera.h"
#include "Window.h"
#include <chrono>
#include "CJugador.h"
#include "InputMan.h"
#include "Movimiento.h"
class playManager
{
public:
	playManager();
	playManager(const float &width, const float &height);
	~playManager();
	void playGame(const float & width, const float & height);
	void gameLoop();

private:

	void onFinish();
	void onUpdate();
	void onRender();
	CWindow* gameWindow;
	sf::Event* events;
	CCamera *camara;
	CJugador* jugador1;
	CJugador* jugador2;
	inputman * inputmanager;
};

