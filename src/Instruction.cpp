#include <iostream>
#include "../inc/Instruction.h"

Instruction::Instruction()
{
    this->type = BUSCA;
    this->mem = NULL;
    this->position = 0;
}

Instruction::Instruction(int type, Memory *mem, int position)
{
    setType(type);
    setMemory(mem);
    this->position = position;
}

Instruction::~Instruction() {}

int Instruction::setMemory(Memory *mem)
{
    if (!mem)
        return 0;

    this->mem = mem;
    return 1;
}

int Instruction::setPosition(int position)
{
    if (position < 0)
        return 0;

    this->position = position;
    return 1;
}

int Instruction::getPosition()
{
    if (this->position < 0)
        return -1;

    return this->position;
}

int Instruction::setType(int type)
{
    if (type < 0)
        return 0;

    this->type = type;
    return 1;
}

string Instruction::getType()
{
    switch (type)
    {
    case BUSCA:
        this->name = "Busca";
        return this->name;
    case DECODIFICAR:
        this->name = "Decodifica";
        return this->name;
    case EXECUTAR:
        this->name = "Executa";
        return this->name;
    case ARMAZENAR:
        this->name = "Armazena";
        return this->name;
    default:
        return "";
    }
}