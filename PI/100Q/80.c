#include <stdio.h>
typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

ABin newABin(int r, ABin e, ABin d)
{
    ABin new = (ABin)malloc(sizeof(struct nodo));

    if (new != NULL)
    {
        new->valor = r;
        new->esq = e;
        new->dir = d;
    }
    return new;
}

void mirror(ABin *l)
{
    ABin curr = *l, newl, newr;
    if (!*l)
        return;
    else
    {
        newl = (*l)->esq;
        newr = (*l)->dir;
        (*l)->esq = newr;
        (*l)->dir = newl;
        mirror(&((*l)->dir));
        mirror(&((*l)->esq));
    }
}