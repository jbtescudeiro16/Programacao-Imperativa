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

int maiorAB(ABin a)
{
    while (a->dir)
    {
        a = a->dir;
    }
    if (a->dir == NULL)
        return (a->valor);
}