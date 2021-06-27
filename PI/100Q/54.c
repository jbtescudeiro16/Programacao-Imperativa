#include <stdio.h>

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

LInt reverseL(LInt lista)
{
    LInt new, auxiliar = NULL;
    while (lista)
    {
        new = lista->prox;      // cria um elemento que aponta para a seguinte posição em que estamos ;
        lista->prox = auxiliar; // o nosso elemento seguinte fica a apontar para um elemento que criamos ;
        auxiliar = lista;       // o elemento auxiliar que é o seguinte da lista neste momento  fica com o conteudo anteriomente da l ;
        lista = new;            // a lista fica a apontar para o novo elemento que criamos agora , que era o seguinte na lista inicial ;
    }
}