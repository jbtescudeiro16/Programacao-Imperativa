#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    char *palavra;
    int ocorr;
    struct celula *prox;
} * Palavras, Celula;

//1

void libertaLista(Palavras l)
{
    if (l)
    {
        libertaLista(l->prox);
        free(l);
    }
}

//2
int quantasP(Palavras l)
{
    int conta = 0;
    if (l != NULL)
        return 1 + quantasP(l->prox);
    else
        return 0;
}

//3
void listaPal(Palavras l)
{
    if (l)
    {
        printf("%s - %d \n", l->palavra, l->ocorr);
        listaPal(l->prox);
    }
}

void listaPal2(Palavras l)
{
    while (l != NULL)
    {
        printf("%s - %d \n", l->palavra, l->ocorr);
        l = l->prox;
    }
}

char *ultima(Palavras l)
{
    while (l && l->prox)
    {
        l = l->prox;
    }
    return l ? l->palavra : NULL;
}

char *ultima2(Palavras l)
{
    if (l == NULL)
        return NULL;
    else if (l->prox)
        return l->palavra;
    else
        return ultima2(l->prox);
}

Palavras acrescentaInicio(Palavras l, char *p)
{
    Palavras aux = malloc(sizeof(Celula));
    aux->palavra = strduf(p);
    aux->ocorr = 1;
    aux->prox = l;
    return aux;
}

Palavras acrescentaFim(Palavras l, char *p)
{
    Palavras original = l;
    while (l && l->prox)
        l = l->prox;
    if (l)
    {
        l->prox = acrescentaInicio(l->prox, p);
    }
    else
        original = acrescentaInicio(original, p);
    return original;
}

Palavras acrescenta(Palavras l, char *p)
{
    if (l == NULL)
        l = acrescentaInicio(l, p);
    else if (strcmp(l->palavra, p) == 0)
    {
        l->ocorr++;
    }
    else if (strcmp(l->palavra, p) < 0)
    {
        l = acrescentaInicio(l, p);
    }
    else
        l->prox = acrescentaInicio(l->prox, p);
    return l;
}

Palavras maisFreq(Palavras l)
{
    Palavras maxim = NULL;
    int max = 0;
    while (l && l->prox)
    {
        if (l->ocorr > max)
        {
            max = l->ocorr;
            maxim = l->palavra;
        }
        (l = l->prox);
    }
    return maxim;
}