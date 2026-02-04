#include "Potion.h"
#include <string>
using namespace std;

Potion::Potion(string name, int rarity, double healingAmount)
{
	this->name = name;
	this->rarity = rarity;
	this->healingAmount = healingAmount;
}

string Potion::getName() const
{
	return name;
}

int Potion::getRarity() const
{
	return rarity;
}

double Potion::getHealingAmount() const
{
	return healingAmount;
}
