#include <iostream>
#include <list>
#include <ctime>
#include <windows.h>
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

void conecta(Busca *a, Decodifica *b, Executa *c, Armazena *d)
{
    d->setExecutador(c);
    c->setDecodificador(b);
    b->setBusca(a);
}


int main()
{
    Memory *mem = new Memory();
    Busca *I1 = new Busca();
    Decodifica *I2 = new Decodifica();
    Executa *I3 = new Executa();
    Armazena *I4 = new Armazena();

    insereMem(mem, I1, I2, I3, I4);
    Bloco *bloco = new Bloco();

    bloco->configura(I1, I2, I3, I4);

    for (int i = 0; i < 3; i++)
    {
        bloco->setComando(i);
        bloco->setRegistrators(i, 6, 7);

        bloco->executaBusca();
        bloco->printBusca();
        system("pause");
        std::cout << std::endl;

        bloco->executaDecodifica();
        bloco->printDecodifica();
        system("pause");
        std::cout << std::endl;

        bloco->executaEx();
        bloco->printExecuta();
        system("pause");
        std::cout << std::endl;

        bloco->executaArmazena();
        bloco->printArmazena();
        system("pause");
        std::cout << std::endl;

        bloco->printMemoria();
        std::cout << std::endl;
        system("pause");
    }

    delete mem;
    delete I1;
    delete I2;
    delete I3;
    delete I4;
    delete bloco;

    return EXIT_SUCCESS;
}