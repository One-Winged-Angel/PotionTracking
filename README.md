# PotionTracking
Goal: Track 3 potions in a player inventory.

Requirements

Create a project called PotionInventory with 3 files: Potion.h, Potion.cpp, main.cpp.

Class: Potion

Private data:

name (string)

rarity (int) (1–5)

healingAmount (double)

Public methods:

Constructor: Potion(string name, int rarity, double healingAmount)

getName() const returns string

getRarity() const returns int

getHealingAmount() const returns double

Main task

Create a static array of size 3 where each element is a Potion*

Allocate 3 potions with new

Print like:
PotionName | Rarity: X | Healing: Y

Delete all 3 objects and set pointers to nullptr
