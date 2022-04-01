#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
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
#include "idk.h"

int main()
{
	int numbers[] = {2, 5, 1, 6, 3, 9};
	string plsWork;
	fstream file;
	string name;
	string surname;
	string albumNumber;
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
		file.open("message.txt", ios::in);
		getline(file, name);
		cout << name;
		file.close();
		break;

	case 5:
		int length = sizeof(numbers) / sizeof(numbers[0]);

		//bez dynamicznej alokacji pamiecia musialem po rpostu wpisac duza liczbe
		int beterNumbers[100];
		file.open("idk.txt", ios::out);
		for (int j = 0; j < length; j++)
		{
			file << numbers[j] << ", ";
		}
		file << endl;
		file.close();
		
		file.open("idk.txt", ios::in);
		for (int i = 0; i < length; i++)
		{
			getline(file, plsWork, ',');
			int num = stoi(plsWork);
			beterNumbers[i] = num;
			//cout << beterNumbers[i] << ", ";
		}
		file.close();
		sort(beterNumbers, beterNumbers + length);
		cout << "List of Array after sorting is: \n> ";
		for (int i = 0; i < length; ++i)
		{
			cout << beterNumbers[i] << " ";
		}
		break;

	}
	return 0;
}