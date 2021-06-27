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

int iguaisAB(ABin a, ABin b)
{

    if (!a && b)
        return 0;
    else if (!a && !b)
        return 0;
    else if (a && !b)
        return 0;
    else
    {
        if (a->valor == b->valor)
        {
            if (iguaisAB(a->esq, b->esq) == 1 && iguaisAB(a->dir, b->dir) == 1)
                return 1;
        }
        else
            return 0;
    }
    return 1;
}