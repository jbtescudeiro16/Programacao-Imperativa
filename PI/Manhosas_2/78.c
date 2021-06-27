

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int altura(ABin a)
{
    if (!a)
        return 0;
    if (a->esq == NULL && a->dir == NULL)
        return 1;
    else
        return (1 + max(altura(a->esq), altura(a->dir)));