#include <iostream>
#include <list>
#include "inc/Bloco.h"
#include "inc/Memory.h"
#include "inc/Instruction.h"
#include "inc/Busca.h"

int main()
{
    Memory *mem = new Memory;
    Busca *I1 = new Busca;
    Bloco *conjunto = new Bloco;

    I1->setMemReg(3);
    conjunto->addInstruction(I1);

    // std::cout << "Instrucao: " << << std::endl
    //   << "Valor na memoria: " << I1->getMemoryValue(0) << std::endl;

    conjunto->printInstructions();

    conjunto->~Bloco();
    delete conjunto;
    delete mem;
    delete I1;

    system("pause");
}