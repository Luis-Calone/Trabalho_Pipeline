#ifndef BUSCA_H
#define BUSCA_H

#include <iostream>
#include "Instruction.h"

class Busca : public Instruction
{
    int memReg;

public:
    Busca();
    ~Busca();

    int setMemReg(int memReg);
    int getMemoryValue();
};

#endif