
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

void removeMaiorA(ABin *l)
{
    if ((*l)->dir == NULL)
    {
        *l = (*l)->esq;
        return;
    }
    else
    {
        ABin ant = NULL;
        ABin old = *l;
        while ((*l)->dir)
        {
            ant = *l;
            (*l) = ((*l)->dir);
        }
        ant->dir = (*l)->esq;
        *l = old;
    }
}