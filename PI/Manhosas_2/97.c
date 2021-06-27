
typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int maiorAB(ABin a)
{
    if (!a)
        return 0;
    if ((!(a->esq) && !(a->dir)) || !(a->dir))
        return a->valor;
    else
    {
        while (a->dir)
            a = a->dir;
    }
    return a->valor;
}