#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <iostream>
#include "Memory.h"

using namespace std;

enum
{
    BUSCA,
    DECODIFICAR,
    EXECUTAR,
    ARMAZENAR
};

class Instruction
{
    string name;
    int type;
    Memory *mem;
    int memReg;
    int position;

public:
    Instruction();
    Instruction(int type, int reg, int position);
    ~Instruction();

    int setMemory(Memory *mem, int reg);
    int getMemoryValue(int reg);

    int setPosition(int position);
    int getPosition();

    int setType(int type);
    string getType();
};

#endif