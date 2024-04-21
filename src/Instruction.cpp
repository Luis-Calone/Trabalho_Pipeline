#include <iostream>
#include "../inc/Instruction.h"

Instruction::Instruction()
{
    this->type = BUSCA;
    this->mem = new Memory;
    this->memReg = 0;
    this->position = 0;
}

Instruction::Instruction(int type, int reg, int position)
{
    setType(type);
    setMemory(new Memory, reg);
    this->position = position;
}

Instruction::~Instruction() {}

int Instruction::setMemory(Memory *mem, int reg)
{
    if (!mem || reg<0)
        return 0;
    
    this->mem = mem;
    this->memReg = reg;
}

int Instruction::getMemoryValue(int reg)
{
    return this->mem->getRegistrador(reg);
}
