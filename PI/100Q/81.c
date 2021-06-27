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

void inorderaux(ABin tree, LInt *list)
{
    LInt aux;
    if (tree)
    {
        inorderaux(tree->dir, list);

        aux = newLInt(tree->valor, *list);

        *list = aux;

        inorderaux(tree->esq, list);
    }
}

void inorder(ABin tree, LInt *list)
{
    *list = NULL;
    inorderaux(tree, list);
}