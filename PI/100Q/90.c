
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

int dumpAbin(ABin a, int v[], int N)
{
    int esq = 0;
    if (!a)
    {
        return 0;
    }
    else if (a && N)
    {
        esq = dumpAbin(a->esq, v, N);
        if (esq < N)
        {
            v[esq] = a->valor;
            return 1 + esq + dumpAbin(a->dir, v + 1 + esq, N - 1 - esq);
        }
        else
            return N;
    }
}

/*
int dumpAbin(ABin a, int v[], int N)
{
    int esq = 0;
    if (!a)
        return 0;
    else if (a && N)
        esq = dumpAbin(a->esq, v, N);
    else if (esq < N)
    {
        v[e] = a->valor;
        return 1 + e + dumpAbin(a->dir, v + e + 1, N - e - 1);
    }
    else
        return n;
}
*/