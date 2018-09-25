// WeaponShop101142747.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <iomanip>;
#include <string>;

using namespace std;

string playerInput = "";
string playerBuy = "";
int money = 100;
int price[5] = { 10, 20, 30, 40, 50 };
string gunz[5] = { "Mega rapid fire Gun", "German anti-air Gun", "IDK how to name this Gun", "What sauce? Gun", "Hot Man Gun" };
string soundz[5] = { "*Skrrrrrrra*", "*PAK-PAK-PAK*", "*Skibidiba*", "*RAW SAWS*", "*MAN'S NOT HOT*" };
bool inventory[5] = { false, false, false, false, false };

int main()
{
	while (true)
	{
		cout << "Your move:" << '\n';
		cout << "1: Buy legal guns" << '\n';
		cout << "2: Check money" << '\n';
		cout << "3: Exit building" << '\n';
		cin >> playerInput;

		if (playerInput == "1")
		{
			while(true)
			{
				for (int i = 0; i < 5; i++)
				{
					cout << (i + 1) << ". " << gunz[i] << '\n';
				}
				cout << "6: Exit building" << '\n';
				cout << "What do you want to buy?" << '\n';
				cin >> playerBuy;
				if (playerBuy == "6") 
				{
					break;
				}
				char weaponChoice = playerBuy[0];
				if (weaponChoice >= '1' && weaponChoice <= '5') 
				{
					int weaponSlot = weaponChoice - '1';
					if (money >= price[weaponSlot] && !inventory[weaponSlot]) 
					{
						money = money - price[weaponSlot];
						inventory[weaponSlot] = true;
						cout << "You just bought: " << gunz[weaponSlot] << '\n';
					}
					else 
					{
						cout << "You either have it or you're poor" << '\n';
					}
				}
			}
			
		}

		if (playerInput == "2")
		{
			cout << "Your balance is: " << money << '\n';
		}

		if (playerInput == "3") 
		{
			bool hasGun = false;
			for (int i = 0; i < 5; i++) 
			{
				if (inventory[i]) hasGun = true;
			}
			if(hasGun)
			{
				cout << "Welcome to pew-pewerie." << '\n';
				break;
			}
			else 
			{
				cout << "You should spend money and become dangerous." << '\n';
			}
		}
	}

	while (true) 
	{
		for (int i = 0; i < 5; i++)
		{
			cout << (i + 1) << ". " << gunz[i] << '\n';
		}
		cout << "6: Terminate simulation" << '\n';
		cout << "What now?" << '\n';
		cin >> playerBuy;
		if (playerBuy == "6")
		{
			break;
		}

		char weaponChoice = playerBuy[0];
		if (weaponChoice >= '1' && weaponChoice <= '5')
		{
			int weaponSlot = weaponChoice - '1';
			if (inventory[weaponSlot]) 
			{
				cout << soundz[weaponSlot] << '\n';
			}
			else
			{
				cout << "It's empty. Just like your life." << '\n';
			}
		}
	}

    return 0;
}

