#pragma once
#include "MonsterClass.h"
#include <vector>
#include <string>

enum class Type;
class Monster;

class MonstersArmy
{
private:
    std::vector <Monster*> theGreatArmy;

public:
    //Constructor
    MonstersArmy();

    //Metods
	void generateMonster();
    void printInfo();

    //Getters and setters
    Type setType();
    std::string setName();
    int setHealthPoints();
    int setHitPoints();

    //Destructor
    ~MonstersArmy();
};