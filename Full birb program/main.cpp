#include<SFML/Graphics.hpp>
#include "birb.h"
#include "flower.h"
#include<iostream>
using namespace std;


int main() {

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
	int birbColor1[] = { 0, 200, 200 };
	int birbColor2[] = { 255, 0, 0 };
	int birbColor3[] = { 0, 0, 200 };
	int birbColor4[] = { 200, 0, 200 };
	int Color[] = { rand() % 255, rand() % 255, rand() % 255 };


	birb Alex(200, 200, birbColor); //instantiate 1 birb
	birb Alex1(300, 200, birbColor1); //instantiate 1 birb
	birb Alex2(400, 200, birbColor2); //instantiate 1 birb
	birb Alex3(500, 200, birbColor3); //instantiate 1 birb
	birb Alex4(600, 200, birbColor4); //instantiate 1 birb
	flower flowe(700, 700, Color);

	int num;
	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window
	cout << "hello?" << endl;
	srand(time(NULL));
	while (1) {//GAME LOOP OMG
		window.clear();
		num = rand() % 100;
		if (num <= 3) {
			Alex.fly();
			Alex1.fly();
			Alex2.fly();
			Alex3.fly();
			Alex4.fly();
		}

		Alex.draw(window);
		Alex1.draw(window);
		Alex2.draw(window);
		Alex3.draw(window);
		Alex4.draw(window);

		flowe.draw(window);

		num = rand() % 100;
		//if (num <= 5) {
		flowe.changeColor(window);



		//}



		window.display();

	}
}
