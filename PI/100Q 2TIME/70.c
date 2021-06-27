
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