

int lookupAB(ABin a, int x)
{
    int esq = 0, dir = 0;
    if (!a)
        return 0;
    else if (a->valor == x)
        return 1;
    else
    {

        esq = lookupAB(a->esq, x);
        dir = lookupAB(a->dir, x);

        if (esq == 1 || dir == 1)
        {
            return 1;
        }
        else
            return 0;
    }
}