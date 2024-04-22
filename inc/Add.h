#ifndef ADD_H
#define ADD_H

#include <iostream>
#include "Instruction.h"
#include "Decodifica.h"

class Add : public Instruction
{
    Decodifica *decodifica;
    int result;
    int varA;
    int varB;

public:
    Add();
    ~Add();

    int setResult();
    int getResult();

    int setVarA();
    int setVarB();
};

#endif