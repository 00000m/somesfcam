#include <SFML\Graphics.hpp>
#include <iostream>
using namespace std;



int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600, 32), "Hello, sfml!");
	sf::Event event;
	while (!event.Closed)
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			default:
				break;
			}
		}


		window.clear(sf::Color::White);
		window.display();
	}
	return 0;
}