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

int pruneAB(ABin *a, int l)
{
    int n = 0;
    if (*a == NULL)
        return 0;
    if (l == 0)
    {
        n = 1 + pruneAB(&((*a)->esq), 0) + pruneAB(&((*a)->dir), 0);
        free(*a);
        *a = NULL;
    }
    else
        n = pruneAB(&((*a)->esq), l - 1) + pruneAB(&((*a)->dir), l - 1);
}