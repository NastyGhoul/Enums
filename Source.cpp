#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;

enum class Fruit
{
	Apple = 1,
	Banana,
	Grape,
	Blueberry,
	Tomato,
};

enum class Shape
{
	rectangle = 1,
	square,
	circle,
	triangle,
	trapezoid,
};

#include "Fruit.h"
#include "Math.h"
#include "message.h"

int main()
{
	fstream file;
	string information = "myInfo";
	string name;
	int task;
	int userInput;

	cout << "Choose your task\n";
	cin >> task;

	switch (task)
	{
	case 1:
		Fruit userFruit;

		cout << "Apple = 1, Banana = 2, Grape = 3, Blueberry = 4, tomato = 5\n";
		cin >> userInput;
		userFruit = static_cast<Fruit>(userInput);
		fruitRate(userFruit);
		break;

	case 2:
		Shape userShape;
		cout << "rectangle = 1, square = 2, circle = 3, triangle = 4, trapezoid = 5\n";
		cin >> userInput;
		userShape = static_cast<Shape>(userInput);
		mathThing(userShape);
		break;

	case 3:
		fstream file;
		string name;
		string surname;
		string albumNumber;
		cout << "Enter name:\n";
		cin >> name;
		cout << "Enter surname:\n";
		cin >> surname;
		cout << "Enter album number:\n";
		cin >> albumNumber;
		file.open("message.txt", ios::out);
		file << name << "; " << surname << "; " << albumNumber << endl;
		file.close();
		break;

	case 4:
		break;

	}

	return 0;
}