#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int addOrd(ABin *a, int x)
{
    while (*a)
    {
        if ((*a)->valor == x)
            return 1;
        else if ((*a)->valor < x)
        {
            a = &((*a)->dir);
        }
        else
            a = &((*a)->esq);
    }

    ABin new = malloc(sizeof(struct nodo));
    {
        new->valor = x;
        new->dir = NULL;
        new->esq = NULL;
    }
    *a = new;
    return 0;
}

void listToBTree(LInt l, ABin *a)
{
    int i;
    while (l->prox)

    {
        addOrd(a, l->valor);
        l = l->prox;
    }
}