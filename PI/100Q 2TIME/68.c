

int maximo(LInt l)
{
    int max = 0;
    LInt curr = l;
    while (curr)
    {
        if (curr->valor > max)
        {
            max = curr->valor;
        }
        curr = curr->prox;
    }
    return max;
}