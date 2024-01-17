//I USED MASSIVE FUCKIN' HELP ON  THIS ONE

#include <iostream>
#include <string>

enum class MonsterType
{
    ogre,
    dragon,
    orc,
    giant_spider,
};

struct Monster
{
    MonsterType type{};
    std::string name{};
    int health{};
};

std::string getMonsterTypeString(const MonsterType& type) // Changed to const reference
{
    switch (type)
    {
    case MonsterType::ogre:          return "Ogre";
    case MonsterType::dragon:        return "Dragon";
    case MonsterType::orc:           return "Orc";
    case MonsterType::giant_spider:  return "Giant Spider";
    }

    return "Unknown";
}

void printMonster(const Monster& monster)
{
    std::cout << "This " << getMonsterTypeString(monster.type) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
    Monster ogre{ MonsterType::ogre, "Torg", 145 };
    Monster dragon{ MonsterType::dragon, "Blurp", 23 };

    printMonster(ogre); // Corrected function call
    printMonster(dragon); // Added this line

    return 0;
}

/*
#include <iostream>
#include <string>
#include <string_view> // C++17

// Define our different monster types as an enum
enum class MonsterType
{
	ogre,
	dragon,
	orc,
	giant_spider,
	slime,
};

// Our monster struct represents a single monster
// We use std::string_view here because the monster's name is a C-style string literal and does not need to be modified
struct Monster
{
	MonsterType type{};
	std::string_view name{};
	int health{};
};

// Return the name of the monster's type as a string
// Since this could be used elsewhere, it's better to make this its own function
constexpr std::string_view getMonsterTypeString(MonsterType type)
{
	switch (type)
	{
	case MonsterType::ogre:          return "Ogre";
	case MonsterType::dragon:        return "Dragon";
	case MonsterType::orc:           return "Orc";
	case MonsterType::giant_spider:  return "Giant Spider";
	case MonsterType::slime:         return "Slime";
	}

	return "Unknown";
}

// Print our monster's stats
void printMonster(const Monster& monster)
{
	std::cout << "This " << getMonsterTypeString(monster.type) <<" is named " << monster.name <<" and has " << monster.health << " health.\n";
}

int main()
{
	Monster ogre{ MonsterType::ogre, "Torg", 145 };
	Monster slime{ MonsterType::slime, "Blurp", 23 };

	printMonster(ogre);
	printMonster(slime);

	return 0;
}*/
