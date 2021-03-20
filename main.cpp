#include <iostream>
#include <string>
#include "Animal.h"
#include "Bird.h"
#include "SeaCreature.h"
#include "Penguin.h"

int main()
{
    Penguin *penny = new Penguin();
    std::cout << "Location:>> " << penny->getLocation() << std::endl;
    return 0;
}
