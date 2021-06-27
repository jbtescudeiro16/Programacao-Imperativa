#include <stdio.h>

//testado no codeboard

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