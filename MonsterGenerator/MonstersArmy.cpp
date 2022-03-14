#include "MonstersArmy.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

MonstersArmy::MonstersArmy()
{

}
Type MonstersArmy::setType()
{
	srand(time(0));
	int number{ rand() % 6 };
	switch (number)
	{
	case 0: return Type::Dragon;
	case 1: return Type::Goblin;
	case 2: return Type::Orc;
	case 3: return Type::Skeleton;
	case 4: return Type::Troll;
	case 5: return Type::Vampire;
	case 6: return Type::Zombie;
	};
}
std::string MonstersArmy::setName()
{
	srand(time(0));
	int number{ (rand() % 6 + 1) };
	switch (number)
	{
	case 0: return "Pain";
	case 1: return "Bulf";
	case 2: return "Hat";
	case 3: return "Terror";
	case 4: return "Smoker";
	case 5: return "Venom";
	};
}
int MonstersArmy::setHealthPoints()
{
	return (rand() % 1000 + 1);
}
int MonstersArmy::setHitPoints()
{
	return (rand() % 100 + 1);
}

void MonstersArmy::generateMonster()
{
	Type r_Monster = setType();
	std::string n_Monster = setName();
	int t_HealtPoints = setHealthPoints();
	int t_HitPoints = setHitPoints();

	Monster* randomMonster = new Monster(r_Monster, n_Monster, t_HealtPoints, t_HitPoints);
	theGreatArmy.push_back(randomMonster);
}
void MonstersArmy::printInfo()
{
	std::cout << "Numarul de monstri din armata raului este: " << theGreatArmy.size() << "\n";
	for (int i{ 0 }; i < theGreatArmy.size(); ++i)
	{
		std::cout << "Monstrul numarul " << i + 1 << " este: " << theGreatArmy[i]->getName() <<
			" din clasa " << theGreatArmy[i]->getType() << "\n";
		std::cout << "Are urmatoarele atribute: " << theGreatArmy[i]->getHealthPoints() <<
			" puncte de viata si " << theGreatArmy[i]->getHitPoints() << " puncte de lovire!\n";
	}
}

MonstersArmy::~MonstersArmy()
{
	theGreatArmy.clear();
}
