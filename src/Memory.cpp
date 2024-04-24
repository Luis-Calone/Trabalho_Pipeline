#include <iostream>
#include "../inc/Memory.h"

Memory::Memory()
{
    int i;
    for (i = 0; i < 10; i++)
        this->registrador[i] = i * 10;

    this->regWrite = 0;
}

Memory::~Memory() {}

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

void Memory::printMemory()
{
    std::cout << "Memory: ";
    for (auto m : this->registrador)
    {
        std::cout << m << " ";
    }
}