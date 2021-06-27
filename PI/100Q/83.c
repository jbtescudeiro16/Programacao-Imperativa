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

void posorderaux(ABin a, LInt *l)
{
    if (!a)
        return;
    LInt curr = *l;

    curr = malloc(sizeof(struct lligada));
    curr->valor = a->valor;
    curr->prox = *l;
    *l = curr;
    posorderaux(a->dir, l);
    posorderaux(a->esq, l);
}
void posorder(ABin a, LInt *l)
{
    *l = NULL;
    posorderaux(a, l);
}