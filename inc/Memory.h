#ifndef MEMORY_H
#define MEMORY_H

#include <iostream>

class Memory
{
    int registrador[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int regWrite;

public:
    int setValue(int value);
    int setRegistrador(int reg);
    int getRegistrador(int reg);
    int getRegistrador();
};

#endif