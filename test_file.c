#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define INSTRUCOES 5

typedef struct node
{
    char *instructionType;
    int instructionValue;
    int time;
    struct node *next;
} Node;

typedef struct stack
{
    Node *instructionNode;
    int instruction;
    struct stack *next;
} Stack;

Node *startInstructions(int flag)
{
    if (flag >= INSTRUCOES)
        return NULL;

    Node *temp = (Node *)malloc(sizeof(Node));
    temp->instructionType = (char *)malloc(9);
    strcpy(temp->instructionType, "Instrucao");
    temp->instructionValue = flag;
    temp->next = startInstructions(flag + 1);

    return temp;
}

Stack *startStack(int flagS)
{
    if (flagS <= 0)
        return NULL;

    Stack *temp = (Stack *)malloc(sizeof(Stack));
    temp->instruction = flagS;
    temp->instructionNode = startInstructions(0);
    temp->next = startStack(flagS - 1);

    return temp;
}

int main()
{
    Stack *teste = startStack(10);

    printf("%s\n", teste->instructionNode->instructionType);

    return 0;
}