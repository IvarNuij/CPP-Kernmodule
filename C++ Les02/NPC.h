#pragma once
using namespace std;
#include <string>
#include "inventory.h"

class NPC
{
public:
	string name;
	int strenght;
	inventory* inv;

	//Functions
	NPC(string Name, int Strenght);
	void addItem(string Item);
	int getLvl();
	string getName();
	string getInv();
};