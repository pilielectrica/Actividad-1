#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

Sprite CrossHair;
Texture texture;

int main() {

	texture.loadFromFile("crosshair.png");
	float texture_height = (float)texture.getSize().y;
	float texture_width = (float)texture.getSize().x;

	int posicion_imagenX = (1366 - texture_width) / 2;
	int posicion_imagenY = (768 - texture_height) / 2;


	RenderWindow App(sf::VideoMode(1366, 768, 32),
		"Que ventana horrible");

	while (App.isOpen()) {


		CrossHair.setTexture(texture);
		CrossHair.setPosition(posicion_imagenX,posicion_imagenY);
		App.draw(CrossHair);

		App.display();
	}
	return 0;
}
