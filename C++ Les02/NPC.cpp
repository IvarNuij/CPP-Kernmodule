using namespace std;
#include "NPC.h"
#include <string>

NPC::NPC(string Name, int Strenght)
{
	name = Name;
	strenght = Strenght;
}

int NPC::getStrenght()
{
	return(strenght);
}

std::string NPC::getName() 
{
	return(name);
}
