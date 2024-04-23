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

int Executa::chooseOP()
{
    switch (this->command)
    {
    case 0:
        return Executa::add();

    case 1:
        return Executa::sub();

    case 2:
        return Executa::times();

    default:
        return -1;
    }
}

int Executa::add()
{
    this->result = this->a + this->b;
    return 1;
}

int Executa::times()
{
    this->result = this->a * this->b;
    return 1;
}

int Executa::sub()
{
    this->result = this->a - this->b;
    return 1;
}

int Executa::setA()
{
    this->a = decodificador->getValueRegA();
    return 1;
}

int Executa::setB()
{
    this->a = decodificador->getValueRegA();
    return 1;
}

int Executa::getResult()
{
    return result;
}