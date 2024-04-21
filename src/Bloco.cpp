#include <iostream>
#include <list>
#include "../inc/Bloco.h"

Bloco::Bloco(){};

Bloco::~Bloco()
{
    for (auto i : instructions)
        delete i;
}

int Bloco::addInstruction(Instruction *instruction)
{
    if (!instruction)
        return 0;

    this->instructions.push_front(instruction);
    this->_I_inBlock++;
    return 1;
}

int Bloco::removeInstruction()
{
    if (this->instructions.empty())
        return 0;

    this->instructions.pop_back();
    this->_I_inBlock--;
    return 1;
}