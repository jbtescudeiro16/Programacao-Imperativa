#include <stdio.h>
typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

LInt newLInt(int v, LInt t)
{
    LInt new = (LInt)malloc(sizeof(struct lligada));

    if (new != NULL)
    {
        new->valor = v;
        new->prox = t;
    }
    return new;
}
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

int depth(ABin a, int x)
{
    if (a == NULL)
        return -1;
    int direita, esquerda;
    if (a->valor == x)
    {
        return 1;
    }

    esquerda = depth(a->esq, x);
    direita = depth(a->dir, x);
    if (esquerda == -1 && direita == -1)
        return -1;
    else if (esquerda == -1)
        return (1 + direita);
    else if (direita == -1)
        return (1 + esquerda);
    else
        return min(1 + esquerda, 1 + direita);
}