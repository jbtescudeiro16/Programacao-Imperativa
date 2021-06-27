#include "abin.h"

ABin newABin(int r, ABin e, ABin d)
{
    ABin a = malloc(sizeof(struct nodo));
    if (a != NULL)
    {
        a->valor = r;
        a->esq = e;
        a->dir = d;
    }
    return a;
}

ABin RandArvFromArray(int v[], int N)
{
    ABin a = NULL;
    int m;
    if (N > 0)
    {
        m = rand() % N;
        a = newABin(v[m], RandArvFromArray(v, m), RandArvFromArray(v + m + 1, N - m - 1));
    }
    return a;
}

// Questão 1
ABin removeMenor(ABin *a)
{
    ABin r = NULL;
    if (*a)
    {
        while ((*a)->esq)
            a = &((*a)->esq);
        r = *a;
        *a = (*a)->dir;
        return r;
    }
}
void removeRaiz(ABin *a)
{
    if (*a)
    {
        ABin aux, menor;
        if ((*a)->dir)
        {
            menor = removeMenor(&((*a)->dir));
            aux = *a;
            menor->esq = (*a)->esq;
            menor->dir = (*a)->dir;
            *a = menor;
        }
        else
        {
            aux = *a;
            *a = (*a)->esq;
        }
        free(aux);
    }
    return
}

int removeElem(ABin *a, int x)
{
    int r = -1;
    while (*a && r == -1)
    {
        if ((*a)->valor == x)
        {
            removeRaiz(a);
            r = 0;
        }
        else if ((*a)->valor > x)
        {
            a = &((*a)->esq);
        }
        else
            a = &((*a)->dir);
    }
    return r;
}

// Questão 2
void rodaEsquerda(ABin *a)
{
    ABin b = (*a)->dir;
    (*a)->dir = b->esq;
    b->esq = (*a);
    *a = b;
}
void rodaDireita(ABin *a)
{
    ABin b = (*a)->esq;
    (*a)->esq = b->dir;
    b->dir = *a;
    *a = b;
}
void promoveMenor(ABin *a)
{
    if (*a && (*a)->esq)
    {
        promoveMenor(&((*a)->esq));
        rodaDireita(a);
    }
}
void promoveMaior(ABin *a)
{
    if (*a && (*a)->dir)
    {
        promoveMaior(&((*a)->dir));
        rodaEsquerda(a);
    }
}
ABin removeMenorAlt(ABin *a)
{
    ABin r;
    promoveMaior(a);
    r = *a;
    *a = (*a)->dir;
    return r;
}

// Questão 3
int constroiEspinhaAux(ABin *a, ABin *ult)
{
    return (-1);
}
int constroiEspinha(ABin *a)
{
    ABin ult;
    return (constroiEspinhaAux(a, &ult));
}

ABin equilibraEspinha(ABin *a, int n)
{
    return NULL;
}

void equilibra(ABin *a)
{
}
