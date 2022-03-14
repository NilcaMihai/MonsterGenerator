#include <iostream>
#include "MonsterClass.h"
#include "MonstersArmy.h"
#include <Windows.h>

int main()
{
	MonstersArmy* evilArmy = new MonstersArmy();
	evilArmy->generateMonster();
	Sleep(1000);
	evilArmy->generateMonster();
	evilArmy->printInfo();
	evilArmy->~MonstersArmy();
	delete evilArmy;

}