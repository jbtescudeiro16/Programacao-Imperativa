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

int nivelV(ABin a, int n, int v[])
{
    int esq = 0, dir = 0;
    if (!a)
        return 0;
    else if (n == 1)
    {
        *v = a->valor;
        return 1;
    }
    else
    {
        esq = nivelV(a->esq, n - 1, v);
        dir = nivelV(a->dir, n - 1, v + esq);
        return (esq + dir);
    }
}

/*
int nivelV(ABin a, int n, int v[])
{
    int esq = 0, dir = 0;
    if (!a)
        return 0;
    else if (n == 1)
    {
        *s = a->valor;
        return 1;
    }
    else
    {
        esq = nivelV(a->esq, n - 1, v);
        dir = nivelV(a->esq, n - 1, v + esq);
        return esq + dir;
    }
}
*/