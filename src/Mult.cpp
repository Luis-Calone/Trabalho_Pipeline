#include <iostream>
#include "../inc/Mult.h"

Mult::Mult()
{
    this->type = EXECUTAR;
}

Mult::~Mult() {}

int Mult::setResult()
{
    this->result = this->varA * this->varB;
    return 1;
}

int Mult::getResult()
{
    return this->result;
}

int Mult::setVarA()
{
    this->varA = decodifica->getValueRegA();
    return 1;
}

int Mult::setVarB()
{
    this->varB = decodifica->getValueRegB();
    return 1;
}