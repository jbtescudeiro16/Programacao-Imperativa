#include <stdio.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

void freeL(LInt lista)
{
    while (lista)
    {
        free(lista);
        lista = lista->prox;
    }
}
