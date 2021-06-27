

int length(LInt l)
{
    int len = 0;
    while (l)
    {
        len++;
        l = l->prox;
    }
    return len;
}

int take(int n, LInt *l)
{
    int len = length(*l), i = 1;
    if (n >= len || n < 0)
    {
        return len;
    }
    else
    {
        LInt curr = *l;
        for (i; i < n; i++)
        {
            curr = curr->prox;
        }
        curr->prox = NULL;
        return i;
    }
}