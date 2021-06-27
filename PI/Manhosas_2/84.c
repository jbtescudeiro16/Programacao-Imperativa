typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

int depth(ABin a, int x)
{
    int esq, dir;
    if (!a)
        return -1;
    else if (a->valor == x)
        return 1;
    else
    {
        esq = depth(a->esq, x);
        dir = depth(a->dir, x);

        if (esq == -1 && dir == -1)
            return -1;
        else if (esq == -1 && dir != -1)
            return (1 + dir);
        else if (esq != -1 && dir == -1)
            return (1 + esq);
        else
            return 1 + (min(esq, dir));
    }
}