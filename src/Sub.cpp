#include <iostream>
#include "../inc/Sub.h"

Sub::Sub()
{
    this->type = EXECUTAR;
}

Sub::~Sub() {}

int Sub::setResult()
{
    this->result = this->varA - this->varB;
    return 1;
}

int Sub::getResult()
{
    return this->result;
}

int Sub::setVarA()
{
    this->varA = decodifica->getValueRegA();
    return 1;
}

int Sub::setVarB()
{
    this->varB = decodifica->getValueRegB();
    return 1;
}