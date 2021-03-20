#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
#include <string>

class Bird : virtual public Animal
{
public:
    Bird();
    Bird(std::string loc);
};

#endif
