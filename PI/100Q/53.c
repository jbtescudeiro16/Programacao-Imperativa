#include <stdio.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

void imprimeL(LInt lista)
{
    while (lista)
    {
        printf("O valor aqui é : %d \n", lista->valor);
        lista = lista->prox;
    }
}