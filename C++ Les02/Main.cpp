#include <iostream>
#include <string>
#include <random>
#include "NPC.h"
#include "Elf.h"
#include "Orc.h"

void PrintInfo(NPC npc)
{
	cout << npc.getName() << " is lvl:" << npc.getStrenght() << " and carries a " << npc.getInv() << " with him" << endl;
}

int RandomStrenght() 
{
	srand(time(NULL) + rand());
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
	elf1.addItem("Chicken");
	elf2.addItem("Bow");
	orc1.addItem("Bat");
	orc2.addItem("Helmet");

	//Story
	cout << "Elves:" << endl;
	PrintInfo(elf1);
	PrintInfo(elf2);
	cout << endl << "VS" << endl << endl;
	cout << "Orc's:" << endl;
	PrintInfo(orc1);
	PrintInfo(orc2);

	int elfTotalStrenght = elf1.getStrenght() + elf2.getStrenght();
	int orcTotalStrenght = orc1.getStrenght() + orc2.getStrenght();

	cout << endl;

	if (elfTotalStrenght > orcTotalStrenght) 
	{
		cout << "The Elves won the fight because they had a total of " << elfTotalStrenght << " strenght and the Orc's only had " << orcTotalStrenght << " strenght.";
	}

	if (elfTotalStrenght == orcTotalStrenght) 
	{
		cout << "The Elves and Orc's match each other in strenght and decide not to fight";
	}

	if (elfTotalStrenght < orcTotalStrenght)
	{
		cout << "The Orc's won the fight because they had a total of " << orcTotalStrenght << " strenght and the Elves only had " << elfTotalStrenght << " strenght.";
	}

	cout << endl << endl << endl;
}