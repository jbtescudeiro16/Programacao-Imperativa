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

void dumpABin(ABin a, int N)
{
    if (a != NULL)
    {
        dumpABin(a->esq, N);
        printf("%d", a->valor);
        dumpABin(a->dir, N);
    }
}

int max(int a, int b)
{

    if (a > b)
        return a;
    else
        return b;
}

int altura(ABin a)
{
    int r = 0;
    if (a != NULL)
        r += 1 + max(altura(a->esq), altura(a->dir));
    return r;
}

int nFolhas(ABin a)
{
    int r = 0;
    if (a)
    {
        if (a->esq || a->dir)
        {
            r = nFolhas(a->esq) + nFolhas(a->dir);
        }
        else
            r++;
    }
    return r;
}

ABin maisEsquerda(ABin a)
{
    ABin r = NULL;
    if (a)
    {
        if (a->esq)
        {
            r = maisEsquerda(a->esq);
        }
        else
            r = a;
    }
    return r;
}

void imprimeNivel(ABin a, int l)
{
    if (a)
    {
        if (l == 1)
            printf("%d \n", a->valor);
        else
        {
            imprimeNivel(a->esq, l - 1);
            imprimeNivel(a->dir, l - 1);
        }
    }
}

void freeABin(ABin a)
{
    if (a)
    {
        freeABin(a->esq);
        freeABin(a->dir);
        free(a);
    }
}

int procuraE(ABin a, int x)
{
    int r = 0;
    if (a)
    {
        if (a->valor == x)
            r = 1;
        else
            r = (procuraE(a->dir, x) || procuraE(a->esq, x));
    }
    return r;
}

struct nodo *procura(ABin a, int x)
{

    int r = NULL;
    while (a && !r)
    {
        if ((a->valor) == x)
            r = a;
        else if (x < a->valor)
        {
            a = (a->esq);
            a = a->esq;
        }
        else
            a = (a->dir);
    }
    return NULL;
}

int nivel(ABin a, int x)
{

    int r = -1;
    int n = 0;
    while (a && (r == -1))
    {
        if (a->valor == x)
            r = n;
        else if (x < a->valor)
        {
            a = (a->esq);
        }
        else
            a = (a->dir);
        n++;
    }

    return r;
}

int nivelrec(ABin a, int x)
{
    int r = -1;
    if (a)
    {
        if (a)
        {
            if (a->valor == x)
                return 1;
            else
                r = max(nivelrec(a->esq, x), nivelrec(a->dir, x));
            return r != -1 ? 1 + r : -1;
        }
    }
}

void inOrder(ABin a)
{
    if (a != NULL)
    {
        inOrder(a->esq);
        printf("%d", a->valor);
        inOrder(a->dir);
    }
}

void imprimeAte(ABin a, int x)
{
    if (a)
    {

        if (a->valor == x)
            inOrder(a->esq);
        else if (a->valor < x)
        {
            inOrder(a->esq);
            printf("%d", a->valor);
            imprimeAte(a->dir, x);
        }
        else
            imprimeAte(a->esq, x);
    }
}
