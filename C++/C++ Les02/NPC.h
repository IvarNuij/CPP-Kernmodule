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
	//Constructor
	NPC(string Name, int Strenght);
	//Destructor
	~NPC();

	void addItem(string Item);
	int getStrenght();
	string getName();
	string getInv();
};