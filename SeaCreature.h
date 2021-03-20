#ifndef SEACREATURE_H
#define SEACREATURE_H

#include "Animal.h"
#include <string>

class SeaCreature : virtual public Animal
{
public:
    SeaCreature();
    SeaCreature(std::string loc);
};

#endif