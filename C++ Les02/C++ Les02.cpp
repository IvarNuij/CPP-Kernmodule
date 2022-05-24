#include <iostream>
#include <string>
#include <random>
#include "Elf.h"
#include "Orc.h"

void PrintInfo(NPC npc)
{
	cout << npc.getName() << " is lvl:" << npc.getLvl() << "," << " hij heeft " << npc.getInv() << " bij zich" << endl;
}

int RandomStrenght() 
{
	srand();
	int randomStrenght = rand() % 10 + 1;
	return randomStrenght;
}

int main()
{
	//NPC's
	Elf elf1 = Elf("Mellinor", RandomStrenght());
	Elf elf2 = Elf("Heagenstijn", RandomStrenght());

	Orc orc1 = Orc("Warrior", RandomStrenght());
	Orc orc2 = Orc("Child", RandomStrenght());

	//Items
	elf1.addItem("kip");
	elf2.addItem("Boog");
	orc1.addItem("Knuppel");
	orc2.addItem("Helm");

	//Story
	PrintInfo(elf1);
	PrintInfo(elf2);
	PrintInfo(orc1);
	PrintInfo(orc2);
}