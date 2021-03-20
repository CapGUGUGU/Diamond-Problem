#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
public:
    Animal();
    Animal(std::string loc);
    std::string getLocation();

private:
    std::string location;
};

#endif
