
LInt concat(LInt l, LInt b)
{
    if (!l)
        return b;
    if (!b)
        return l;
    else
    {
        aux = l;
        while (aux->prox)
        {
            aux = aux->prox;
        }
        aux->prox = b
    }
    return l;
}

LInt nivelL(ABin a, int n)
{
    if (!a)
        return null;

    else if (n == 1)
    {
        LInt new = malloc(sizeof(struct lligada));
        new->valor = a->valor;
        new->prox = NULL;
        return new;
    }
    else
        return concat(nivelL(a->esq, n - 1), nivelL(a->dir, n - 1));
}
