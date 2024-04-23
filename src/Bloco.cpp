#include <iostream>
#include <list>
#include "../inc/Bloco.h"

Bloco::Bloco()
{
    this->comando = -1;
    this->reg0 = -1;
    this->reg1 = -1;
    this->reg2 = -1;
    this->_I_inBlock = 0;
}

Bloco::~Bloco()
{
    for (auto &i : instructions)
        delete i;
}

int Bloco::setRegistrators(int r0, int r1, int r2)
{
    this->reg0 = r0;
    this->reg1 = r1;
    this->reg2 = r2;

    return 1;
}

int Bloco::sendReg()
{
    if (this->instructions.empty())
        return 0;

    Instruction *temp = this->instructions.front();
    temp->setCommand(this->comando);

    if (dynamic_cast<Busca *>(temp))
        dynamic_cast<Busca *>(temp)->setMemReg(this->reg0, this->reg1, this->reg2);
}

int Bloco::setComando(int comando)
{
    this->comando = comando;
    return 1;
}

int Bloco::addInstruction(Instruction *instruction)
{
    if (!instruction)
        return 0;

    this->instructions.push_back(instruction);
    this->_I_inBlock++;
    return 1;
}

int Bloco::removeInstruction()
{
    if (this->instructions.empty())
        return 0;

    this->instructions.pop_front();
    this->_I_inBlock--;
    return 1;
}

int Bloco::configura()
{
    
}

void Bloco::printInstructions()
{
    for (auto &i : this->instructions)
    {
        if (dynamic_cast<Busca *>(i))
        {
            std::cout << "Nome: " << i->getType() << std::endl
                      << "Comando: " << this->comando << std::endl
                      << "R0: " << this->reg0 << std::endl
                      << "R1: " << this->reg1 << std::endl
                      << "R2: " << this->reg2 << std::endl
                      << std::endl;
        }
        else if (dynamic_cast<Decodifica *>(i))
        {
            std::cout << "Nome: " << dynamic_cast<Decodifica *>(i)->getType() << std::endl
                      << "Valor no Registrador 1: " << dynamic_cast<Decodifica *>(i)->getValueRegA() << std::endl
                      << "Valor no Registrador 2: " << dynamic_cast<Decodifica *>(i)->getValueRegB() << std::endl
                      << std::endl;
        }
        else if (dynamic_cast<Executa *>(i))
        {
            std::cout << "Nome: " << dynamic_cast<Executa *>(i)->getType() << std::endl
                      << "Resultado da operacao: " << dynamic_cast<Executa *>(i)->getResult() << std::endl
                      << std::endl;
        }
        else if (dynamic_cast<Armazena *>(i))
        {
            std::cout << "Nome: " << dynamic_cast<Armazena *>(i)->getType() << std::endl
                      << "Dado armazenado no registrador: " << this->reg0 << std::endl
                      << std::endl;
        }
    }
}