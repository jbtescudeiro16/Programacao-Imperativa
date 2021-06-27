

int depthOrd(ABin a, int x)

{
    int esq = 0, dir = 0;
    if (!a)
        return -1;
    else
    {
        if (a->valor == x)
            return 1;
        else
        {
            esq = depthOrd(a->esq, x);
            dir = depthOrd(a->dir, x);
            if (esq == -1 && dir == -1)
                return -1;
            else if (esq == -1 && dir != -1)
                return 1 + dir;
            else if (esq != -1 && dir == -1)
                return 1 + esq;
            else
                return 1 + min(esq, dir);
        }
    }
}