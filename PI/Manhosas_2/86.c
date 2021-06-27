

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int pruneAB(ABin *a, int l)
{
    int n = 0;
    if (!(*a))
        return 0;
    else if (l == 0)
    {
        n = 1 + pruneAB(&((*a)->dir), 0) + pruneAB(&((*a)->esq), 0);
        free(*a);
        *a = NULL;
    }
    else
        n = pruneAB(&((*a)->dir), l - 1) + pruneAB(&((*a)->esq), l - 1);

    return n;
}