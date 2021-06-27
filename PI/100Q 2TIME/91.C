
int somasAcAaux(ABin a)
{
    if (!a)
        return 0;
    else
        return a->valor + somasAcAaux(a->esq) + somasAcAaux(a->dir);
}

ABin somasAcA(ABin a)
{
    if (!a)
        return NULL;
    else
    {
        ABin new = malloc(sizeof(struct nodo));
        new->valor = somasAcAaux(a);
        new->esq = somasAcA(a->esq);
        new->dir = somasAcA(a->dir);
    }
}