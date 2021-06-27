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

ABin cloneAB(ABin a)
{
    ABin new;

    if (a == NULL)
        new = NULL;
    else
    {
        new = newABin((a->valor), a->esq, a->dir);
    }
    return new;
}