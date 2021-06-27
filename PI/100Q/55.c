#include <stdio.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

void insertOrd(LInt *l, int i)
{
    LInt novo, *auxiliar;
    novo = malloc(sizeof(struct lligada));
    novo->valor = i;
    novo->prox = NULL;
    auxiliar = l;
    while ((*auxiliar != NULL) && ((*auxiliar)->valor < i))
    {
        auxiliar = &((*auxiliar)->prox);
    }
    novo->prox = *auxiliar;
    *auxiliar = novo;
}
