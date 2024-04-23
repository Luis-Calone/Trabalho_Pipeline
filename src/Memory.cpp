#include <iostream>
#include "../inc/Memory.h"

int Memory::setRegistrador(int reg)
{
    if (reg < 0)
        return 0;

    this->regWrite = reg;
    return 1;
}

int Memory::setValue(int value)
{
    if (this->regWrite < 0)
        return 0;

    this->registrador[this->regWrite] = value;
    return 1;
}

int Memory::getRegistrador(int reg)
{
    if (reg < 0)
        return -1;

    return this->registrador[reg];
}

int Memory::getRegistrador()
{
    return this->registrador[regWrite];
}