#pragma once
#include "MonstersArmy.h"
#include <string>

enum class Type
{
    Dragon,
    Goblin,
    Orc,
    Skeleton,
    Troll,
    Vampire,
    Zombie,
};
enum class monsterName
{
    Pain,
    Bulf,
    Hat,
    Terror,
    Smoker,
    Venom,
};

class Monster
{
private:
	Type m_type{};
	std::string m_name{};
	int m_healthPoints{};
	int m_hitPoints{};

public:
    //Constructor
    Monster(Type someMonster, std::string name, int healthPoints, int hitPoints);
    //Metods
    

    //Getters and setters
    void setType();
    void setName();
    void setHealthPoints();
    void setHitPoints();

    std::string getType();
    std::string getName();
    int getHealthPoints();
    int getHitPoints();

    //Destructor
    ~Monster();

};