#ifndef BLOCO_H
#define BLOCO_H

#include <iostream>
#include <list>
#include "Instruction.h"
#include "Busca.h"
#include "Decodifica.h"
#include "Executa.h"
#include "Armazena.h"
/*
char *MyGetValue(int v, char *tmp); // implementation is trivial

#define ENUM_MAP(type, strings)             \
    char *getStringValue(const type &T)     \
    {                                       \
        return MyGetValue((int)T, strings); \
    }

*/

/*

ENUM_MAP(comandos, "ADD|SUB|MULT")
*/
enum comandos
{
    ADD,
    SUB,
    MULT
};

class Bloco
{
    std::list<Instruction *> instructions;
    int comando;
    int reg0, reg1, reg2;
    int _I_inBlock = 0;

public:
    Bloco();
    ~Bloco();

    int addInstruction(Instruction *instruction);
    int removeInstruction();
    void printInstructions();

    int setRegistrators(int r0, int r1, int r2);
    int setComando(int comando);
    int sendReg();
};

#endif