#include <stdio.h>

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int altura(ABin a)
{
    if (a == NULL)
        return 0;
    return (1 + max(altura(a->dir), altura(a->esq)));
}
