
//1
int bitsUm(unsigned int n)
{
    int conta = 0;
    while (n)
    {
        if (n % 2 == 1)
        {
            conta++;
        }
        n /= 2;
    }
    return conta;
}

//2
int limpaEspacos(char t[])

    //3

    int dumpL(LInt l, int v[], int N)
{
    int i = 0;
    while (l && i < N)
    {
        v[i] = l->valor;
        l = l->prox;
        i++;
    }
    return i;
}

LInt parte(LInt l)
{
    if (!l || !l->prox)
        return NULL;
    LInt newL = l->prox;
    l->prox = l->prox->prox;
    newL->prox = parte(l->prox);
    return newL;
}