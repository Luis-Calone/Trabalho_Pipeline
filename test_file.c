#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define INSTRUCOES 5

typedef struct node
{
    char *instructionType;
    int instructionValue;
    int time;
    struct node *next;
} Node;

typedef struct line
{
    Node *instructionNode;
    int instruction;
    struct line *next;
} Line;

Node *startInstructions(int flag)
{
    if (flag >= INSTRUCOES)
        return NULL;

    Node *temp = (Node *)malloc(sizeof(Node));
    temp->instructionType = (char *)malloc(9);
    strcpy(temp->instructionType, "Instrucao");
    temp->instructionValue = flag;
    temp->time = (rand() % 2) + 5;
    temp->next = startInstructions(flag + 1);

    return temp;
}

Line *startStack(int flagS)
{
    if (flagS <= 0)
        return NULL;

    Line *temp = (Line *)malloc(sizeof(Line));
    temp->instruction = flagS;
    temp->instructionNode = startInstructions(0);
    temp->next = startStack(flagS - 1);

    return temp;
}

long stackScan(Line *stack)
{
    if (stack == NULL)
        return 0;

    Line *aux = stack;
    Node *temp;
    long tempo = 0;
    while (aux != NULL)
    {
        temp = stack->instructionNode;
        while (temp != NULL)
        {
            tempo += temp->time;
            // printf("tempo = %d\n", tempo);
            temp = temp->next;
        }

        aux = aux->next;
    }

    return tempo;
}

int main()
{
    srand(time(NULL));
    Line *teste = startStack(10);

    printf("%ld\n", stackScan(teste));

    return 0;
}