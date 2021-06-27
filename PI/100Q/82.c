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

void preorderaux(ABin tree, LInt *lista)
{
    if (!tree)
        return;
    LInt curr = *lista;

    preorderaux(tree->dir, lista);
    preorderaux(tree->esq, lista);
    curr = malloc(sizeof(struct lligada));
    curr->valor = tree->valor;
    curr->prox = *lista;
    *lista = curr;

}

void preorder(ABin tree, LInt *lista)
{
    *lista = NULL;
    preorderaux(tree, lista);
}