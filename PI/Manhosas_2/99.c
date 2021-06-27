

int quantosMaiores(ABin a, int x)
{
    if (!a)
        return 0;
    if (a->valor <= x)
        return quantosMaiores(a->dir, x);
    else
        return 1 + quantosMaiores(a->esq, x) + quantosMaiores(a->dir, x);
}