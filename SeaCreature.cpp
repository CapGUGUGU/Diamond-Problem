#include <string>
#include <iostream>
#include "SeaCreature.h"

SeaCreature::SeaCreature() : Animal()
{
     std::cout << "\tSeaCreature():>> constructor working" << std::endl;
     std::cout << "\tSeaCreature():>> location:>> " << this->getLocation() << std::endl;
}
SeaCreature::SeaCreature(std::string loc)
{
     std::cout << "\tSeaCreature(std::string):>> constructor working" << std::endl;
     std::cout << "\tSeaCreature(std::string):>> location:>> " << this->getLocation() << std::endl;
}
