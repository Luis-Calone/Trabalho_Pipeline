#ifndef MULT_H
#define MULT_H

#include <iostream>
#include "Instruction.h"
#include "Decodifica.h"

class Mult: public Instruction
{
    Decodifica *decodifica;
    int result;
    int varA;
    int varB;

public:
    Mult();
    ~Mult();

    int setResult();
    int getResult();

    int setVarA();
    int setVarB();
};

#endif