#ifndef DECODIFICA_H
#define DECODIFICA_H

#include <iostream>
#include "Instruction.h"
#include "Busca.h"

class Decodifica : public Instruction
{
    Busca *busca;
    int valueRegA;
    int valueRegB;

public:
    Decodifica();
    ~Decodifica();

    int setBusca(Busca *busca);

    int setValueRegA();
    int getValueRegA();

    int setValueRegB();
    int getValueRegB();
};

#endif