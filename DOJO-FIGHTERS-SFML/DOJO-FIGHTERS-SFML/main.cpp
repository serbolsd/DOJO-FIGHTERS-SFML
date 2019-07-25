#include "include/SFML/Graphics.hpp"
#include "include/SFML/Window.hpp"
#include <iostream>
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
		window.clear(sf::Color(0, 0, 0, 0));
		window.draw(mikuSprite);
		window.display();
	}
	return 0;
}