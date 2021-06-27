

int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

int depth(ABin a, int x)
{
    int esq = 0, dir = 0;
    if (!a)
        return -1;
    else if (a->valor == x)
        return 1;
    else
    {
        esq = depth(a->esq, x);
        dir = depth(a->dir, x);

        if (esq == -1 && dir == -1)
            return -1;
        else if (esq != -1 && dir == -1)
            return 1 + esq;
        else if (esq == -1 && dir != -1)
            return 1 + dir;
        else
            return 1 + min(esq, dir);
    }
}