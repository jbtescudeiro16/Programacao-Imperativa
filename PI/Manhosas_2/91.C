
typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int somas(ABin a)
{
    int x = 0;
    if (!a)
        return 0;
    else
        x = a->valor + somas(a->esq) + somas(a > dir);
    return x;
}

ABin somasAcA(ABin a)
{
    ABin nova = malloc(sizeof(struct nodo));
    if (!a)
        return NULL;
    else
    {
        nova->valor = somas(a);
        nova->dir = somasAcA(a->dir);
        nova->esq = somasAcA(a->esq);
    }
    return nova;
}