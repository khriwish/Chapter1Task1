#include <iostream>
#include <string>

enum class Animal
    {
         pig,
         chicken,
         goat,
         cat,
         dog,
         duck,
    };

const std::string getAnimalName(Animal animal)
{
    switch(animal)
    {
        case Animal::pig:
        return "a pig has " ;
        case Animal::chicken:
        return "a chicken has ";
        case Animal::goat:
        return "a goat has ";
        case Animal::cat:
        return "a cat has ";
        case Animal::dog:
        return "a dog has ";
        case Animal::duck:
        return "a duck has ";
        default:
            return "???";
    }

}
const std::string printNumberOfLegs(Animal animal)
{
    switch(animal)
    {
        case Animal::pig:
        return "4 legs" ;
        case Animal::chicken:
        return "2 legs";
        case Animal::goat:
        return "4 legs";
        case Animal::cat:
        return "4 legs";
        case Animal::dog:
        return "4 legs";
        case Animal::duck:
        return "2 legs";
        default:
         return "???";


    }



}


int main()
{
    std::string cat{getAnimalName(Animal::cat)};
    std::string catlegs{printNumberOfLegs(Animal::cat)};

    std::cout<<cat<<catlegs<<'\n';

    std::string chicken{getAnimalName(Animal::chicken)};
    std::string chickenlegs{printNumberOfLegs(Animal::chicken)};

    std::cout<<chicken<<chickenlegs<<'\n';





    return 0;
}
