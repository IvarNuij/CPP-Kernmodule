using namespace std;
#include "NPC.h"
#include <string>

NPC::NPC(string Name, int Strenght)
{
	name = Name;
	strenght = Strenght;
	inv = new inventory();
}

void NPC::addItem(string Item)
{
	inv->invVector.push_back(Item);
}

int NPC::getLvl()
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
