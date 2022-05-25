using namespace std;
#include "NPC.h"
#include <string>

//Constructor
NPC::NPC(string Name, int Strenght)
{
	name = Name;
	strenght = Strenght;
	//Create inv
	inv = new inventory();
}

//Destructor
NPC::~NPC() 
{
	delete inv;
}

void NPC::addItem(string Item)
{
	inv->invVector.push_back(Item);
}

int NPC::getStrenght()
{
	return(strenght);
}

std::string NPC::getName() 
{
	return(name);
}

string NPC::getInv()
{
	return inv->invVector[0];
}
