#include <stdio.h>

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int calcula(LInt l)
{
    int soma = 0;
    int i;

    for (i = 0; i <= 21; i++)
    {
        if (i % 2 == 1)
        {
            soma += l->valor;
        }
        l = l->prox;
    }

    return soma;
}