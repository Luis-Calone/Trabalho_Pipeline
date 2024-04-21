#ifndef MEMORY_H
#define MEMORY_H

#include <iostream>

class Memory
{
    int registrador[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int reg;

public:
    int setRegistrador(int valor, int reg);
    int getRegistrador(int reg);
};

#endif