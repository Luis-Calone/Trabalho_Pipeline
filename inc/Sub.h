#ifndef SUB_H
#define SUB_H

#include <iostream>
#include "Instruction.h"
#include "Decodifica.h"

class Sub : public Instruction
{
    Decodifica *decodifica;
    int result;
    int varA;
    int varB;

public:
    Sub();
    ~Sub();

    int setResult();
    int getResult();

    int setVarA();
    int setVarB();
};

#endif