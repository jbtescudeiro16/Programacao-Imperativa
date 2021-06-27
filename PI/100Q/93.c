
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

ABin cloneMirror(ABin a)
{
    if (!a)
        return NULL;
    else
    {
        ABin new = malloc(sizeof(struct nodo));
        new->esq = cloneMirror(a->dir);
        new->dir = cloneMirror(a->esq);
        new->valor = a->valor;
        return new;
    }
}