#include <stdio.h>
#include <stdlib.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int freeAB(ABin a)
{
    int count = 0, esquerda = 0, direita = 0;
    ABin free1;
    if (a == NULL)
        return 0;
    else
    {
        free1 = a;
        count++;
        esquerda = freeAB(a->esq);
        direita = freeAB(a->dir);
        free(free1);
    }
    return 1 + direita + esquerda;
}