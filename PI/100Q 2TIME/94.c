

int addOrd(ABin *a, int x)
{
    if (!a)
        return 0;
    while (*a)
    {
        if ((*a)->valor == x)
            return 1;
        else if ((*a)->valor > x)
            a = &((*a)->esq);
        else
            a = &((*a)->dir);
    }
    ABin nova = malloc(sizeof(struct nodo));
    nova->valor = x;
    nova->esq = NULL;
    nova->dir = NULL;
    *a = nova;
    return 0;
}