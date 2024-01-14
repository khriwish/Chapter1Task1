#include <iostream>

namespace MonsterType
{


enum MonsterType
{
    goblin,
    troll,
    ogre,
    skeleton,


};
}

int main()
{
    MonsterType::MonsterType race{MonsterType::troll};


    return 0;
}
