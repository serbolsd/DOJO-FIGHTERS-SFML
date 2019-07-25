#include <Graphics.hpp>
#include <Window.hpp>
#include <iostream>
//PRUEBA
void checkControls();
int main()
{
	sf::RenderWindow window(sf::VideoMode(1920,1080),"win");

	sf::Sprite mikuSprite;
	sf::Texture mikuTexture;
	sf::Vector2u mikuSize;




	if (!mikuTexture.loadFromFile("resources\\image\\miku.png"))
	{
		std::cout << "cant lodad texture";
		// error...
	}
	mikuSprite.setTexture(mikuTexture);
	mikuSize = mikuTexture.getSize();
	mikuSprite.setOrigin(mikuSize.x / 2, mikuSize.y / 2);
	mikuSprite.setPosition(mikuSize.x / 2, mikuSize.y / 2);
	window.create(sf::VideoMode(mikuSize.x, mikuSize.y), "win");
	sf::Event eventt;

	
	while (window.isOpen())
	{
		while (window.pollEvent(eventt))
		{
			// "close requested" event: we close the window
			if (eventt.type == sf::Event::Closed)
				window.close();
		}
		checkControls();
		window.clear(sf::Color(0, 0, 0, 0));
		window.draw(mikuSprite);
		window.display();
	}
	return 0;
}

void checkControls()
{
	unsigned int buttonCount;
	unsigned int axisCount;
	system("cls");

	for (size_t i = 0; i < 8; i++)
	{
		if (sf::Joystick::isConnected(i))
		{
			buttonCount = sf::Joystick::getButtonCount(i);
			std::cout << "joystick " << i + 1 << " connected, has " << buttonCount << " buttons ";
			if (sf::Joystick::hasAxis(i, sf::Joystick::X))
			{
				float axisX = sf::Joystick::getAxisPosition(i, sf::Joystick::X);
				std::cout << "\nhas X axis " << axisX;
			}
			else
			{
				std::cout << "\nnot has X axis ";
			}
			if (sf::Joystick::hasAxis(i, sf::Joystick::Y))
			{
				float axisY = sf::Joystick::getAxisPosition(i, sf::Joystick::Y);
				std::cout << "\nhas y axis " << axisY;
			}
			else
			{
				std::cout << "\nnot has Y axis ";
			}
			if (sf::Joystick::hasAxis(i, sf::Joystick::Z))
			{
				float axisZ = sf::Joystick::getAxisPosition(i, sf::Joystick::Z);
				std::cout << "\nhas Z axis " << axisZ;
			}
			else
			{
				std::cout << "\nnot has Z axis";
			}
			if (sf::Joystick::hasAxis(i, sf::Joystick::Axis::PovX))
			{
				float axisX = sf::Joystick::getAxisPosition(i, sf::Joystick::PovX);
				std::cout << "\nhas povX axis " << axisX;
			}
			else
			{
				std::cout << "\nnot has povX axis ";
			}
			if (sf::Joystick::hasAxis(i, sf::Joystick::PovY))
			{
				float axisY = sf::Joystick::getAxisPosition(i, sf::Joystick::PovY);
				std::cout << "\nhas povY axis " << axisY;
			}
			else
			{
				std::cout << "\nnot has povY axis ";
			}
			if (sf::Joystick::hasAxis(i, sf::Joystick::U))
			{
				float axisU = sf::Joystick::getAxisPosition(i, sf::Joystick::U);
				std::cout << "\nhas U axis " << axisU;
			}
			else
			{
				std::cout << "\nnot has U axis ";
			}
			if (sf::Joystick::hasAxis(i, sf::Joystick::V))
			{
				float axisV = sf::Joystick::getAxisPosition(i, sf::Joystick::V);
				std::cout << "\nhas V axis " << axisV;
			}
			else
			{
				std::cout << "\nnot has V axis ";
			}
			if (sf::Joystick::hasAxis(i, sf::Joystick::R))
			{
				float axisR = sf::Joystick::getAxisPosition(i, sf::Joystick::R);
				std::cout << "\nhas R axis " << axisR;
			}
			else
			{
				std::cout << "\nnot has R axis";
			}
			std::cout << "\n";
		}
		else
			std::cout << "joystick " << i + 1 << " not connected\n";
		for (int j = 0; j < buttonCount; j++)
		{
			if (sf::Joystick::isButtonPressed(i, j))
			{
				std::cout << "button " << j << " \n";
			}
		}
	}
}
