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
protected:
    string name;
    int type;
    Memory *mem;
    int position;

public:
    Instruction();
    Instruction(int type, Memory *mem, int position);
    virtual ~Instruction();

    int setCommand(int command);

    int setMemory(Memory *mem);

    int setPosition(int position);
    int getPosition();

    int setType(int type);
    string getType();

    void printMem();
};

#endif