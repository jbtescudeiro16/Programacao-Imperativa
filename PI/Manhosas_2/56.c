

#include <stdio.h>
#include <stdlib.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

int removeOneOrd(LInt *lista, int x)
{
    LInt aux = *lista;
    LInt ant = NULL;

    if (!*lista)
        return 1;

    if (aux->valor == x)
    {
        *lista = aux->prox;
        return 0;
    }

    while (aux)
    {
        if (aux->valor == x)
        {
            ant->prox = aux->prox;
            return 0;
        }
        ant = aux;
        aux = aux->prox;
    }
}
