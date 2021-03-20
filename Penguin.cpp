#include <string>
#include <iostream>
#include "Penguin.h"

Penguin::Penguin() : Animal("Beijing"), Bird("adelaide"), SeaCreature("nyc")
{
    std::cout << "\t\tPenguin():>> constructor working" << std::endl;
    std::cout << "\t\tPenguin():>> location:>> " << this->getLocation() << std::endl;
}