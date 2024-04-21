#include <iostream>
#include "../inc/Memory.h"

int Memory::setRegistrador(int valor, int reg)
{
    if (reg<0)
        return 0;
    
    this->registrador[reg] = valor;
    return 1;
}

int Memory::getRegistrador(int reg)
{
    if (reg<0)
        return -1;
    
    return this->registrador[reg];
}