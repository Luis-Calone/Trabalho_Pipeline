#include <iostream>
#include "../inc/Busca.h"

Busca::Busca()
{
    this->type = BUSCA;
}

Busca::~Busca() {}

int Busca::setMemReg(int memReg)
{
    if (this->memReg < 0)
        return 0;

    this->memReg;
    return 1;
}

int Busca::getMemoryValue()
{
    return this->mem->getRegistrador(this->memReg);
}