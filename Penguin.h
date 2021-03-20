#ifndef PENGUIN_H
#define PENGUIN_H

#include "Bird.h"
#include "SeaCreature.h"
#include <string>

class Penguin : public Bird , public SeaCreature
{
public:
    Penguin();
};

#endif