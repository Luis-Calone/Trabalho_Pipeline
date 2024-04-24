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
    Busca *buscador;
    Decodifica *decodificador;
    Executa *executador;
    Armazena *armazenador;
    int comando;
    int reg0, reg1, reg2;

public:
    Bloco();
    ~Bloco();

    int configura(Busca *buscador, Decodifica *decodificador, Executa *executador, Armazena *armazenador);

    void executaBusca();
    void printBusca();

    void executaDecodifica();
    void printDecodifica();

    void executaEx();
    void printExecuta();
    
    void executaArmazena();
    void printArmazena();

    void printMemoria();

    string getComando();
    int setRegistrators(int r0, int r1, int r2);
    int setComando(int comando);
    // int sendReg();
};

#endif