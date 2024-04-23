#include <iostream>
#include "../inc/Armazena.h"

Armazena::Armazena()
{
    this->type = ARMAZENAR;
}

Armazena::~Armazena() {}

int Armazena::setMemory()
{
    this->mem->setValue(this->executador->getResult());
    return 1;
}

int Armazena::getMemory()
{
    return this->mem->getRegistrador();
}