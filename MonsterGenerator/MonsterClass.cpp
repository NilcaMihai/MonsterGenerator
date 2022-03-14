#include "MonsterClass.h"
#include <iostream>

Monster::Monster(Type someMonster, std::string name, int healthPoints, int hitPoints)
{
	m_type = someMonster;
	m_name = name;
	m_healthPoints = healthPoints;
	m_hitPoints = hitPoints;
}

void Monster::setType()
{
	bool optiune{ false };
	while (optiune == false)
	{
		std::cout << "Apasa tasta dorita pentru a selecta tipul monstrului:\n";
		std::cout << "0 -> Dragon\n";
		std::cout << "1 -> Goblin\n";
		std::cout << "2 -> Orc\n";
		std::cout << "3 -> Skeleton\n";
		std::cout << "4 -> Troll\n";
		std::cout << "5 -> Vampire\n";
		std::cout << "6 -> Zombie\n";
		char numar;
		std::cin >> numar;
		switch (numar)
		{
		case '0':
			m_type = Type::Dragon;
			optiune = true;
			break;
		case '1':
			m_type = Type::Goblin;
			optiune = true;
			break;
		case '2':
			m_type = Type::Orc;
			optiune = true;
			break;
		case '3':
			m_type = Type::Skeleton;
			optiune = true;
			break;
		case '4':
			m_type = Type::Troll;
			optiune = true;
			break;
		case '5':
			m_type = Type::Vampire;
			optiune = true;
			break;
		case '6':
			m_type = Type::Zombie;
			optiune = true;
			break;
		default:
			std::cout << "Optiunea nu e valida!\n";
			break;
		};
	}
}
void Monster::setName()
{
	std::string name;
	std::cout << "Introdu numele monstrului:\n";
	std::getline(std::cin,name);
	m_name = name;
}
void Monster::setHealthPoints()
{
	int lifePoints{};
	bool life{ false };
	while (life == false)
	{
		std::cout << "Introdu cate puncte de viata sa aiva monstrul:\n";
		std::cin >> lifePoints;
		if (lifePoints > 0 && lifePoints <= 1000)
		{
			m_healthPoints = lifePoints;
			life = true;
		}
	}
};
void Monster::setHitPoints()
{
	int hitPoints{};
	bool hit{ false };
	while (hit == false)
	{
		std::cout << "Introdu cate puncte de lovitura sa aiba monstrul:\n";
		std::cin >> hitPoints;
		if (hitPoints > 0 && hitPoints <= 100)
		{
			m_hitPoints = hitPoints;
			hit = true;
		}
	}
}

std::string Monster::getType()
{
	int monsterType = static_cast <int>(m_type);
	switch (monsterType)
	{
	case 0: return "Dragon";
	case 1: return "Goblin";
	case 2: return "Orc";
	case 3: return "Skeleton";
	case 4: return "Troll";
	case 5: return "Vampire";
	case 6: return "Zombie";
	}
}
std::string Monster::getName()
{
	return m_name;
}
int Monster::getHealthPoints()
{
	return m_healthPoints;
}
int Monster::getHitPoints()
{
	return m_hitPoints;
}

Monster::~Monster()
{
	
}
