#pragma once
using namespace std;
#include <string>

class NPC
{
public:
	string name;
	int strenght;

	NPC(string Name, int Strenght);
	int getStrenght();
	string getName();
};