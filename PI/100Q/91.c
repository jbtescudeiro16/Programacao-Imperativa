

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

int somasAB(ABin a)
{
    int count = 0;
    if (!a)
        return NULL;
    else
    {
        count = somasAB(a->esq) + somasAB(a->dir) + a->valor;
    }
    return count;
}

ABin somasAcA(ABin a)
{
    if (!a)
        return NULL;
    else
    {
        ABin new = malloc(sizeof(struct nodo));
        new->valor = somasAB(a);
        new->esq = somasAcA(a->esq);
        new->dir = somasAcA(a->dir);
        return new;
    }
}

int somasAB(ABin l)
{
    int count = 0;
    if (l == NULL)
        return 0;
    else
        count = l->valor + somasAB(l->esq) + somasAB(l->dir);
    return count;
}

ABin somasAcA(ABin a)
{

    if (!a)
        return NULL;
    ABin new = malloc(sizeof(struct nodo));
    new->valor = somasAB(a);
    new->esq = somasAcA(a->esq);
    new->dir = somasAcA(a->dir);
    return new;
}