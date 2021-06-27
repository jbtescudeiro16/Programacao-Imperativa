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

int lookupAB(ABin a, int x)
{
    if (a == NULL)
        return 0;
    while (a)
    {
        if (a->valor == x)
            return 1;
        else if (a->valor > x)
            a = a->esq;
        else
            a = a->dir;
    }
    return 0;
}