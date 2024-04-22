#ifndef BUSCA_H
#define BUSCA_H

#include <iostream>
#include "Instruction.h"

class Busca : public Instruction
{
    int write;
    int r1;
    int r2;

public:
    Busca();
    ~Busca();

    int setMemReg(int write, int r1, int r2);
    int getWrite();
    int getRegA();
    int getRegB();
    //int getMemoryValue();
};

#endif