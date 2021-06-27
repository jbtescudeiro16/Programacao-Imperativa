

int freeAB(ABin a)
{

    if (!a)
        return 0;
    else
    {
        ABin tofree = NULL;

        if (!a->esq && !a->dir)
        {
            tofree = a;
            a = NULL;
            free(a);
            return 1;
        }
        else
        {
            free(a);
            return 1 + freeAB(a->esq) + freeAB(a->dir);
        }
    }
}