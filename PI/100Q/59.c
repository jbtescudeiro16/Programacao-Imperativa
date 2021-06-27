#include <stdio.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

int length(LInt lista)
{
    int comp = 0;
    while (lista)
    {
        lista = lista->prox;
        comp++;
    }
    return comp;
}

LInt newLInt(int v, LInt t)
{
    LInt new = (LInt)malloc(sizeof(struct lligada));

    if (new != NULL)
    {
        new->valor = v;
        new->prox = t;
    }
    return new;
}

LInt parteAmeio(LInt *l)
{
    int meio, j;
    LInt antes, depois = newLInt(0, depois);
    meio = length(*l) / 2;
    if (!(*l))
        return;
    else
    {
        antes = *l;
        for (j = 0; j < meio; j++)
        {
            depois = (*l);
            (*l) = (*l)->prox;
        }
    }
    return antes;
}