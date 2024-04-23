#include <iostream>
#include <list>
#include "inc/Bloco.h"
#include "inc/Memory.h"
#include "inc/Instruction.h"
#include "inc/Busca.h"
#include "inc/Decodifica.h"
#include "inc/Executa.h"
#include "inc/Armazena.h"

void insereMem(Memory *mem, Busca *a, Decodifica *b, Executa *c, Armazena *d)
{
    a->setMemory(mem);
    b->setMemory(mem);
    c->setMemory(mem);
    d->setMemory(mem);
}

int main()
{
    Memory *mem = new Memory;
    Busca *I1 = new Busca();
    Decodifica *I2 = new Decodifica();
    Executa *I3 = new Executa();
    Armazena *I4 = new Armazena();

    insereMem(mem, I1, I2, I3, I4);

    Bloco *bloco = new Bloco();

    bloco->addInstruction(I1);
    bloco->addInstruction(I2);
    bloco->addInstruction(I3);
    bloco->addInstruction(I4);

    bloco->setComando(ADD);
    bloco->setRegistrators(0, 1, 2);
    bloco->sendReg();

    bloco->printInstructions();

    bloco->~Bloco();
    delete mem;
    delete I1;
    delete I2;
    delete I3;
    delete I4;
    delete bloco;

    system("pause");
    return EXIT_SUCCESS;
}