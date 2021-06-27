

ABin cloneAB(ABin a)
{
    if (!a)
        return null;
    ABin new = malloc(sizeof(struct nodo));
    new->valor = a->valor;
    new->esq = cloneAB(a->esq);
    new->esq = cloneAB(a->esq);
    new->dir = cloneAB(a->dir);

    return new;
}