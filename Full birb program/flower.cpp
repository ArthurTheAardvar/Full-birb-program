#include "flower.h"
#include<iostream>
using namespace std;

flower::flower(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; //if our array was any longer I would have used a for loop here :)
	color[1] = c[1];
	color[2] = c[2];

}

void flower::changeColor(sf::RenderWindow& window) {


	//leggies
	stem.setPosition(xpos + 15, ypos + 35);
	stem.setFillColor(sf::Color(rand() % 255, rand() % 255, rand() % 255));
	stem.setSize(sf::Vector2f(10, 20));
	window.draw(stem); //first leg





	//birb beak
	leaf.setPosition(xpos + 25, ypos - 15);
	leaf.setFillColor((sf::Color(rand() % 255, rand() % 255, rand() % 255)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 10, ypos - 15);
	leaf.setFillColor((sf::Color(rand() % 255, rand() % 255, rand() % 255)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 10, ypos + 15);
	leaf.setFillColor((sf::Color(rand() % 255, rand() % 255, rand() % 255)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos + 25, ypos + 15);
	leaf.setFillColor((sf::Color(rand() % 255, rand() % 255, rand() % 255)));
	leaf.setRadius(15);
	window.draw(leaf);

	body.setPosition(xpos, ypos - 5);
	body.setFillColor((sf::Color(rand() % 255, rand() % 255, rand() % 255)));
	body.setRadius(20);
	window.draw(body);






}

void flower::draw(sf::RenderWindow& window) {
	cout << "inside draw function";

	//leggies
	stem.setPosition(xpos + 15, ypos + 35);
	stem.setFillColor(sf::Color(0, 250, 0));
	stem.setSize(sf::Vector2f(10, 20));
	window.draw(stem); //first leg





	//birb beak
	leaf.setPosition(xpos + 25, ypos - 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 10, ypos - 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 10, ypos + 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos + 25, ypos + 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	body.setPosition(xpos, ypos - 5);
	body.setFillColor((sf::Color(color[0], color[1], color[2])));
	body.setRadius(20);
	window.draw(body);



	//leggies
	stem.setPosition(xpos - 45, ypos + 35);
	stem.setFillColor(sf::Color(0, 250, 0));
	stem.setSize(sf::Vector2f(10, 20));
	window.draw(stem); //first leg





	//birb beak
	leaf.setPosition(xpos - 35, ypos - 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 70, ypos - 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 70, ypos + 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 35, ypos + 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	body.setPosition(xpos - 60, ypos - 5);
	body.setFillColor((sf::Color(color[0], color[1], color[2])));
	body.setRadius(20);
	window.draw(body);

	// leggies
	stem.setPosition(xpos - 125, ypos + 35);
	stem.setFillColor(sf::Color(0, 250, 0));
	stem.setSize(sf::Vector2f(10, 20));
	window.draw(stem); //first leg





	//birb beak
	leaf.setPosition(xpos - 115, ypos - 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 150, ypos - 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 150, ypos + 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	leaf.setPosition(xpos - 115, ypos + 15);
	leaf.setFillColor((sf::Color(200, 0, 0)));
	leaf.setRadius(15);
	window.draw(leaf);

	body.setPosition(xpos - 140, ypos - 5);
	body.setFillColor((sf::Color(color[0], color[1], color[2])));
	body.setRadius(20);
	window.draw(body);


}