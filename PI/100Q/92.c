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

int contaFolhas(ABin a)
{
    int count = 0;
    if (a == NULL)
        return 0;
    else if (!a->esq && !a->dir)
    {
        return 1;
    }
    else
        return contaFolhas(a->esq) + contaFolhas(a->dir);
}