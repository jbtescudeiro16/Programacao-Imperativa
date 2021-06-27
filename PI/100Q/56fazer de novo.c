#include <stdio.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

int removeOneOrd(LInt *l, int numero)
{
    LInt aux;
    aux = *l;
    if ((aux->valor == numero && aux->prox == NULL ) {
        aux = aux->prox;
    }
    else if (aux->valor != numero && aux->prox == NULL) {
        return (-1);
    }
    else if (aux->valor ==numero && aux->prox ) {
        *aux = &((*aux)->prox);
    }
    aux = aux->prox;
}