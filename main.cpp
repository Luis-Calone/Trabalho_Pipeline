#include <iostream>
#include <list>
#include "inc/Bloco.h"
#include "inc/Memory.h"
#include "inc/Instruction.h"

int main()
{
    Memory *mem = new Memory;
    Instruction *I1 = new Instruction(BUSCA, mem, 0, 0);
    

    std::cout << "Instrucao: " << I1->getType() << std::endl
              << "Valor na memoria: " << I1->getMemoryValue(0) << std::endl;

    delete mem;
    delete I1;

    system("pause");
}