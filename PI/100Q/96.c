

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

depthOrd(ABin a, int x)
{
    int count = 1;
    if (a == NULL)
        return -1;
    while (a)
    {
        if (a->valor == x)
            return count;
        else if (a->valor > x)
        {
            a = a->esq;
            count++;
        }
        else
        {
            a = a->dir;
            count++;
        }
    }
    return -1;
}
