int nivelV(ABin a, int n, int v[])
{
    if (!a || n < 1)
        return 0;
    if (n == 1)
    {
        *v == a->valor;
        return 1;
    }
    else
    {
        int esq = nivelV(a->esq, n - 1, v);
        int dir = nivelV(a->dir, n - 1, v + esq);

        return (esq + dir);
    }
}

int nivelV(ABin a, int n, int v[])
{
    if (!a || n < 1)
        return 0;
    if (n == 1)
    {
        *v = a->valor;
        return 1;
    }
    else
    {
        int e = nivelV(a->esq, n - 1, v);
        int d = nivelV(a->dir, n - 1, v + e);
        return e + d;
    }
}