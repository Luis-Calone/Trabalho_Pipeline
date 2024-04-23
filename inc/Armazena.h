#ifndef ARMAZENA_H
#define ARMAZENA_H

#include <iostream>
#include "Instruction.h"
#include "Executa.h"

class Armazena : public Instruction
{
    Executa *executador;

public:
    Armazena();
    ~Armazena();

    int setExecutador(Executa *executador);

    int setMemoryV();
    int getMemory();
};

#endif