#ifndef EXECUTA_H
#define EXECUTA_H

#include <iostream>
#include "Instruction.h"
#include "Decodifica.h"

// DECIDIR SE VOU CRIAR ESSA CLASSE COMO ENCAPSULAMENTO DE ADD, MULT E SUB //

class Executa : public Instruction
{
    Decodifica *decodificador;
    int a;
    int b;
    int result;

public:
    Executa();
    ~Executa();

    int setA();
    int setB();

    int times();
    int sub();
    int add();

    int getResult();
};

#endif