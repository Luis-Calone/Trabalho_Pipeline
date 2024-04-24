#include <iostream>
#include "../inc/Executa.h"

Executa::Executa()
{
    this->type = EXECUTAR;
    this->decodificador = NULL;
    this->a = 0;
    this->b = 0;
    this->result = 0;
}

Executa::~Executa() {}

int Executa::setDecodificador(Decodifica *decodificador)
{
    this->decodificador = decodificador;
    return 1;
}

int Executa::add()
{
    this->result = (a + b);
    return 1;
}

int Executa::times()
{
    this->result = (a * b);
    return 1;
}

int Executa::sub()
{
    this->result = (a - b);
    return 1;
}

int Executa::setA()
{
    this->a = decodificador->getValueRegA();
    return 1;
}

int Executa::setB()
{
    this->b = decodificador->getValueRegB();
    return 1;
}

int Executa::getResult()
{
    return this->result;
}