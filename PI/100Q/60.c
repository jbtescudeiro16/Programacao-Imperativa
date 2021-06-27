

#include <stdio.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

int length(LInt lista)
{
    int comp = 0;
    while (lista)
    {
        lista = lista->prox;
        comp++;
    }
    return comp;
}

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

int removeAll(LInt *l, int n)
{
    int count = 0;
    LInt anterior = newLInt(0, *l), curr = (*l), to_libert;

    while (curr)
    {
        if (curr->valor == n)
        {
            anterior = curr->prox;
            to_libert = curr;
            curr == curr->prox;
            free(to_libert);
            count++;
        }
        else
        {
            anterior = anterior->prox;
            curr = curr->prox;
        }
    }
    l = &anterior;
    l = (*l)->prox;
    return count;
}