#include <string>
#include <iostream>
#include "Bird.h"

Bird::Bird() : Animal()
{
    std::cout << "\tBird():>> constructor working" << std::endl;
    std::cout << "\tBird():>> location:>> " << this->getLocation() << std::endl;
}
Bird::Bird(std::string loc) : Animal(loc)
{
    std::cout << "\tBird(std::string):>> constructor working" << std::endl;
    std::cout << "\tBird(std::string):>> location:>> " << this->getLocation() << std::endl;
}