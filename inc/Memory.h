#ifndef MEMORY_H
#define MEMORY_H

#include <iostream>

class Memory
{
    int registrador[10];
    int regWrite;

public:
    Memory();
    ~Memory();

    int setValue(int value);
    int setRegistrador(int reg);
    int getRegistrador(int reg);
    int getRegistrador();

    void printMemory();
};

#endif