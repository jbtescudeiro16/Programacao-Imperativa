

int dumpAbin(ABin a, int v[], int N)
{

    if (!a || N < 0)
        return 0;
    int esq = dumpAbin(a->esq, v, N);
    if (esq < N)
    {
        v[esq] = a->valor;
        return 1 + esq + dumpAbin(a->dir, v + esq + 1, N - esq - 1);
    }
    else
        return esq;
}