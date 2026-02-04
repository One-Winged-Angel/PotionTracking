#include "Potion.h"
#include <String>
#include <iostream>
#include <array>
using namespace std;


int main()
{
	Potion* potions[3] = {nullptr, nullptr, nullptr };
	potions[0] = new Potion("Elixer", 5, 100.0);
	potions[1] = new Potion("Hi-Potion", 3, 50.0);
	potions[2] = new Potion("Potion", 1, 20.0);

	for (int i = 0; i < size(potions); i++)
	{
		cout << "This potion is called " << potions[i]->getName()
			<< ", it has a rarity level of " << potions[i]->getRarity()
			<< " and it will heal you for " << potions[i]->getHealingAmount() << "HP" << endl;;
	}

	for (int i = 0; i < size(potions); i++)
	{
		delete potions[i];
		potions[i] = nullptr;
	}


	return 0;
}