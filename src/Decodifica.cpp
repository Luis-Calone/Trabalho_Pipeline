#include <iostream>
#include "../inc/Decodifica.h"

Decodifica::Decodifica()
{
    this->type = DECODIFICAR;
    this->busca = NULL;
    this->valueRegA = 0;
    this->valueRegB = 0;
}

Decodifica::~Decodifica() {}

int Decodifica::setValueRegA()
{
    if (this->busca->getRegA() < 0)
        return 0;

    this->valueRegA = this->mem->getRegistrador(this->busca->getRegA());
    return 1;
}

int Decodifica::getValueRegA()
{
    return this->valueRegA;
}

int Decodifica::setValueRegB()
{
    if (this->busca->getRegB() < 0)
        return 0;

    this->valueRegB = this->mem->getRegistrador(this->busca->getRegB());
    return 1;
}

int Decodifica::getValueRegB()
{
    return this->valueRegB;
}

int Decodifica::setBusca(Busca *busca)
{
    this->busca = busca;
    return 1;
}