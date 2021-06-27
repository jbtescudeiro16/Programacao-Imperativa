
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int altura(ABin a)
{
    if (!a)
        return 0;
    else
        return 1 + max(altura(a->esq), altura(a->dir));
}
