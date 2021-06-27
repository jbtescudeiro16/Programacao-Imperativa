#include <stdio.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

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

void splitQS(LInt l, int x, LInt *mx, LInt *Mx)
{
    if (l == NULL)
        return;
    if (l->valor < x)
    {
        *mx = l;
        splitQS(l->prox, x, &((*mx)->prox), Mx);
    }
    else
    {
        *Mx = l;
        splitQS(l->prox, x, mx, &((*Mx)->prox));
    }
}