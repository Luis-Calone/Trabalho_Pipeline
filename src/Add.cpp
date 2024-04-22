#include <iostream>
#include "../inc/Add.h"

Add::Add()
{
    this->type = EXECUTAR;
}

Add::~Add() {}

int Add::setResult()
{
    this->result = this->varA + this->varB;
    return 1;
}

int Add::getResult()
{
    return this->result;
}

int Add::setVarA()
{
    this->varA = decodifica->getValueRegA();
    return 1;
}

int Add::setVarB()
{
    this->varB = decodifica->getValueRegB();
    return 1;
}