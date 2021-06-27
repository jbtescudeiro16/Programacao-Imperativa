
int length(LInt l)
{
    int comp = 0;
    while (l)
    {
        comp++;
        l = l->prox;
    }
    return comp;
}

int take(int n, LInt *l)
{
    int len = length(*l), i = 1;
    if (n <= 0 || n >= len)
        return len;

    else
    {
        LInt curr = *l, rem = NULL, aux;
        ;
        for (i; i < n; i++)
        {
            curr = curr->prox;
        }

        rem = curr->prox;
        curr->prox = NULL;

        aux = rem;
        while (rem)
        {
            rem = rem->prox;
            free(aux);
            aux = rem;
        }

        return i;
    }
}