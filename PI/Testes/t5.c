#include <stdio.h>
#include <stdlib.h>

typedef struct slist
{
    int valor;
    struct slist *prox;
} * LInt;

LInt newLInt(int x, LInt xs)
{
    LInt r = malloc(sizeof(struct slist));
    if (r != NULL)
    {
        r->valor = x;
        r->prox = xs;
    }
    return r;
}

LInt snoc(LInt l, int x)
{
    LInt *r = &l;
    while (*r)
    {
        r = &((*r)->prox);
    }
    printf("%d", (*r)->valor);
    l = newLInt(x, l);
    return (*r);
}

void main()
{

    LInt inicio, p;
    p = newLInt(3, inicio);
    newLInt(2, p);
    newLInt(1, p);
    snoc(p, 3);
}