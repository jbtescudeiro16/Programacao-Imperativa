
ABin cloneMirror(ABin a)
{
    if (!a)
        return NULL;

    ABin auxesq = malloc(sizeof(struct nodo));
    auxesq->valor = a->valor;

    auxesq->esq = cloneMirror(a->dir);
    auxesq->dir = cloneMirror(a->esq);
}