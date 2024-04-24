#include <iostream>
#include <list>
#include "../inc/Bloco.h"

Bloco::Bloco()
{
    this->buscador = NULL;
    this->decodificador = NULL;
    this->executador = NULL;
    this->armazenador = NULL;
    this->comando = -1;
    this->reg0 = -1;
    this->reg1 = -1;
    this->reg2 = -1;
}

Bloco::~Bloco() {}

int Bloco::setRegistrators(int r0, int r1, int r2)
{
    this->reg0 = r0;
    this->reg1 = r1;
    this->reg2 = r2;

    return 1;
}

int Bloco::setComando(int comando)
{
    this->comando = comando;
    return 1;
}

int Bloco::configura(Busca *buscador, Decodifica *decodificador, Executa *executador, Armazena *armazenador)
{
    this->buscador = buscador;
    this->decodificador = decodificador;
    this->executador = executador;
    this->armazenador = armazenador;

    return 1;
}

string Bloco::getComando()
{
    switch (this->comando)
    {
    case ADD:
        return "add";
    case SUB:
        return "sub";
    case MULT:
        return "mult";
    default:
        throw std::runtime_error("COMANDO NAO RECONHECIDO");
    }
}

void Bloco::executaBusca()
{
    this->buscador->setMemReg(this->reg0, this->reg1, this->reg2);
}

void Bloco::executaDecodifica()
{
    this->decodificador->setBusca(this->buscador);
    this->decodificador->setValueRegA();
    this->decodificador->setValueRegB();
}

void Bloco::executaEx()
{
    this->executador->setDecodificador(this->decodificador);
    this->executador->setA();
    this->executador->setB();

    switch (this->comando)
    {
    case ADD:
        this->executador->add();
        break;
    case SUB:
        this->executador->sub();
        break;
    case MULT:
        this->executador->times();
        break;
    }
}

void Bloco::executaArmazena()
{
    this->armazenador->setExecutador(this->executador);
    this->armazenador->setMemoryV();
}

void Bloco::printBusca()
{
    std::cout << "Instrucao: " << this->buscador->getType() << std::endl
              << "Comando: " << this->getComando() << std::endl
              << "R0: " << this->reg0 << std::endl
              << "R1: " << this->buscador->getRegA() << std::endl
              << "R2: " << this->buscador->getRegB() << std::endl
              << std::endl;
}

void Bloco::printDecodifica()
{
    std::cout << "Instrucao: " << this->decodificador->getType() << std::endl
              << "Comando: " << this->getComando() << std::endl
              << "Valor R1: " << this->decodificador->getValueRegA() << std::endl
              << "Valor R2: " << this->decodificador->getValueRegB() << std::endl
              << std::endl;
}
void Bloco::printExecuta()
{
    std::cout << "Instrucao: " << this->executador->getType() << std::endl
              << "Comando: " << this->getComando() << std::endl
              << "Resultado: " << this->executador->getResult() << std::endl
              << std::endl;
}
void Bloco::printArmazena()
{
    std::cout << "Instrucao: " << this->buscador->getType() << std::endl
              << "Armazenado no registrador: " << this->reg0 << std::endl
              << std::endl;
}

void Bloco::printMemoria()
{
    this->armazenador->printMem();
}