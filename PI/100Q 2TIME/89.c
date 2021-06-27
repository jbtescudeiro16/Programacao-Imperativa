

int nivelV(ABin a, int n, int v[])
{
    int j = 0, esq = 0, dir = 0;
    if (!a)
        return 0;
    if (n == 1)
    {
        v[j] = a->valor;
        j++;
        return 1;
    }
    else
    {
        esq = nivelV(a->esq, n - 1, v);
        dir = nivelV(a->dir, n - 1, v + esq);
        return esq + dir;
    }
}