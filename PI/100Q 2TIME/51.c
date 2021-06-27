

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