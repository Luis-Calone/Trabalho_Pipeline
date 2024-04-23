#include <iostream>
#include "../inc/Executa.h"

Executa::Executa()
{
    this->type = EXECUTAR;
}

Executa::~Executa() {}

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