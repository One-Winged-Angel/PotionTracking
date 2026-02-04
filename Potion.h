#pragma once
#include <string>
using namespace std;

class Potion
{
public:
	Potion(string name, int rarity, double healingAmount);
	string getName() const;
	int getRarity() const;
	double getHealingAmount() const;

	

private:
	string name;
	int rarity;
	double healingAmount;
};


