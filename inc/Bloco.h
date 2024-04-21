#ifndef BLOCO_H
#define BLOCO_H

#include <iostream>
#include <list>
#include "Instruction.h"
#include "Busca.h"

class Bloco
{
    std::list<Instruction *> instructions;
    int _I_inBlock = 0;

public:
    Bloco();
    ~Bloco();

    int addInstruction(Instruction *instruction);
    int removeInstruction();
    void printInstructions();

};

#endif