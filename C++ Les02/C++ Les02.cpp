#include <iostream>
#include <string>
#include "Elf.h"
#include "Orc.h"

int main()
{
	Elf elf1 = Elf("Warrior", 10);
	Elf elf2 = Elf("Bowman", 5);

	Orc orc1 = Orc("Warrior", 15);
	Orc orc2 = Orc("Child", 1);

	cout << "A group of Elf's and Orc's Meet," << endl;

	cout << endl;
	//Elf's
	cout << "Elv's:" << endl;
	cout << elf1.getName();
	cout << " with power lvl:";
	cout << elf1.getStrenght();
	cout << " and," << endl;
	cout << elf2.getName();
	cout << " with power lvl:";
	cout << elf2.getStrenght() << endl;

	cout << endl;
	//Orc's
	cout << "Orc's:" << endl;
	cout << orc1.getName();
	cout << " with power lvl:";
	cout << orc1.getStrenght();
	cout << " and," << endl;
	cout << orc2.getName();
	cout << " with power lvl:";
	cout << orc2.getStrenght();

	cout << endl;
	cout << endl;
	cout << endl;
}