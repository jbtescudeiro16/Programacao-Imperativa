
typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

ABin cloneAB(ABin a)
{
    if (!a)
        return NULL;
    else if (a->esq == NULL && a->dir == NULL)
    {
        ABin clone = malloc(sizeof(struct nodo));
        clone->valor = a->valor;
        clone->esq = NULL;
        clone->dir = NULL;
        return clone;
    }
    else
    {
        ABin clone = malloc(sizeof(struct nodo));
        clone->valor = a->valor;
        clone->esq = cloneAB(a->esq);
        clone->dir = cloneAB(a->dir);
        return clone;
    }
}