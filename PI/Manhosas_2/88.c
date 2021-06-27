typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

LInt concat(LInt a, LInt b)
{
    if (!a)
        return b;
    if (!b)
        return a;
    else
    {

        LInt curr = a;
        while (curr->prox)
        {
            curr = curr->prox;
        }
        curr->prox = b;
        return a;
    }
}

LInt nivelL(ABin a, int n)
{
    if (!a || n < 1)
        return NULL;
    else if (n == 1)
    {
        LInt new = malloc(sizeof(struct lligada));
        new->valor = a->valor;
        new->prox = NULL;
        return new;
    }
    else
        return (concat(nivelL(a->esq, n - 1)), (nivelL(a->dir, n - 1)));
}
