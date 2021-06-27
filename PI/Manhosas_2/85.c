

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int freeAB(ABin a)
{
    if (!a)
        return 0;
    int n = 1 + freeAB(a->esq) + freeAB(a->dir);
    free(a);
    return n;
}