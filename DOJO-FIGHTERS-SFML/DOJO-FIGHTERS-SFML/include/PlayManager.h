#pragma once
#include "Camera.h"
#include "Window.h"
#include <chrono>
class playManager
{
public:
	playManager();
	playManager(const float &width, const float &height);
	~playManager();
	void onFinish();
	void playGame(const float & width, const float & height);
	void gameLoop();
	void onUpdate();
	void onRender();

private:
	CWindow* gameWindow;
	sf::Event* events;
	CCamera *camara;
};

