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

void programa(Bloco *bloco, string comando, int reg0, int reg1, int reg2)
{
    int c;

    if (comando == "add")
        c = ADD;
    else if (comando == "sub")
        c = SUB;
    else if (comando == "mult")
        c = MULT;

    bloco->setComando(c);
    bloco->setRegistrators(reg0, reg1, reg2);

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

    std::cout << "Dgite o comando que voce deseja: ";
    string comando;
    std::cin >> comando;

    std::cout << "Dgite o registrador que voce ira guardar o resultado: ";
    int reg0;
    std::cin >> reg0;

    std::cout << "Dgite os dois registradores que voce ira ler: ";
    int reg1, reg2;
    std::cin >> reg1;
    std::cin >> reg2;

    programa(bloco, comando, reg0, reg1, reg2);

    delete mem;
    delete I1;
    delete I2;
    delete I3;
    delete I4;
    delete bloco;

    return EXIT_SUCCESS;
}