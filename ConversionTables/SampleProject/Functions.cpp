#include "stdafx.h"
#include "Functions.h"
#include <iostream>

using namespace std;

BaseFunction::BaseFunction()
{
	cout << "Constructing base class..." << endl;
}

Functions::Functions()
{
	cout << "Constructing derived class..." << endl;
}

void Functions::Function1()
{
	cout << "~Kilograms to Pounds~\nEnter # of KG" << endl;
	cin >> n;
	if (n > 0)
	{
		result = n * 2.2;
		cout << "*******************************************************" << endl;
		cout << n << " KG is = " << result << " lbs" << endl;
		cout << "*******************************************************" << endl;
	}

	do
	{
		cout << "[0] return to menu" << endl;
		cin >> n;
	}
	while (n != 0);

	if (n == 0)
	{
		return;
	}
}

void Functions::Function2()
{
	cout << "~Celsius to Kelvin~\nEnter # of Celsius" << endl;
	cin >> n;
	if (n > 0)
	{
		result = n + 273.15;
		cout << "*******************************************************" << endl;
		cout << n << " Celsius is = " << result << " Farenheit" << endl;
		cout << "*******************************************************" << endl;
	}

	do
	{
		cout << "[0] return to menu" << endl;
		cin >> n;
	}
	while (n != 0);

	if (n == 0)
	{
		return;
	}
}

void Functions::Function3()
{
	cout << "~Teaspoons to Millilitres~\nEnter # of Teaspoons" << endl;
	cin >> n;
	if (n > 0)
	{
		result = n * 4.92;
		cout << "*******************************************************" << endl;
		cout << n << " Teaspoons is = " << result << " Millilitres" << endl;
		cout << "*******************************************************" << endl;
	}

	do
	{
		cout << "[0] return to menu" << endl;
		cin >> n;
	}
	while (n != 0);

	if (n == 0)
	{
		return;
	}
}

void Functions::Function4()
{
	cout << "~Multiplication Table~\nEnter the size of the table" << endl;
	cin >> n;

	for (float i = 1; i < n + 1; i++)
	{
		cout << i << "| ";
		for (float j = 1; j < n + 1; j++)
		{
			cout << j * i << '\t';
		}
		cout << endl;
	}


	do
	{
		cout << "[0] return to menu" << endl;
		cin >> n;
	}
	while (n != 0);

	if (n == 0)
	{
		return;
	}
}

void Functions::Function5()
{
	cout << "~Squares Table~\nEnter the size of the table" << endl;
	cin >> n;

	for (float i = 1; i < n + 1; i++)
	{
		cout << i << "........." << i * i << endl;
	}


	do
	{
		cout << "[0] return to menu" << endl;
		cin >> n;
	} while (n != 0);

	if (n == 0)
	{
		return;
	}
}

int Functions::Menu()
{
	cout << "Made by: Sam Prokopets, GAME 1011_A1" << endl;
	int opt;
	do {
		for (int i = 1; i <= 5; i++)
			cout << "Function " << i << " [" << i << ']' << endl;
		cout << "Exit [0]\nEnter Option: ";
		cin >> opt;
	}
	while (opt < 0 || opt > 5);
	return opt;
}