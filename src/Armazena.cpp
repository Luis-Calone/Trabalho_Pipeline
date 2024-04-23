#include <iostream>
#include "../inc/Armazena.h"

Armazena::Armazena()
{
    this->type = ARMAZENAR;
    this->executador = NULL;
}

Armazena::~Armazena() {}

int Armazena::setMemoryV()
{
    this->mem->setValue(this->executador->getResult());
    return 1;
}

int Armazena::getMemory()
{
    return this->mem->getRegistrador();
}

int Armazena::setExecutador(Executa *executador)
{
    this->executador = executador;
    return 1;
}