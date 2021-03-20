#include <string>
#include <iostream>
#include "Animal.h"
Animal::Animal() : location("Not set")
{
    std::cout << "Animal():>> constructor working" << std::endl;
    std::cout << "Animal():>> location:>> " << location << std::endl;
}
Animal::Animal(std::string loc) : location(loc)
{
    std::cout << "Animal(std::string):>> constructor working" << std::endl;
    std::cout << "Animal(std::string):>> location:>> " << location << std::endl;
}
std::string Animal::getLocation()
{
    return location;
}
