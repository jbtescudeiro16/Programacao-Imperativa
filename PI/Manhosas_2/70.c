
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

int drop(int n, LInt *l)
{
    int i = 0;
    LInt curr = *l;
    for (i; i < n && curr; i++)
    {
        if (curr->prox)
            curr = curr->prox;
        else
            curr = NULL;
    }
    *l = curr;
    return i;
}