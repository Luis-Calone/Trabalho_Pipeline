#include <iostream>
#include "../inc/Busca.h"

Busca::Busca()
{
    this->type = BUSCA;
}

Busca::~Busca() {}

int Busca::setMemReg(int write, int r1, int r2)
{
    if (write < 0 || r1 < 0 || r2 < 0)
        return 0;

    this->mem->setRegistrador(write);
    this->r1 = r1;
    this->r2 = r2;
    return 1;
}

int Busca::getRegA()
{
    if (this->r1 < 0)
        return -1;

    return this->mem->getRegistrador(this->r1);
}

int Busca::getRegB()
{
    if (this->r2 < 0)
        return -1;

    return this->mem->getRegistrador(this->r2);
}

int Busca::getWrite()
{
    if (write < 0)
        return -1;

    return this->write;
}

/*
int Busca::getMemoryValue()
{
    return this->mem->getRegistrador();
}
*/