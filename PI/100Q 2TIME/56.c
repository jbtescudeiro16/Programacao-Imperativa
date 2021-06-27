

int removeOneOrd(LInt *l, int x)
{
    if (!*l || (*l)->valor > x)
        return 1;

    if ((*l)->valor == x)
    {
        *l = (*l)->prox;
        return 0;
    }
    LInt ant = NULL;
    LInt curr = *l;
    while (curr)
    {
        if (curr->valor == x)
        {
            ant->prox = curr->prox;
            return 0;
        }
        else
        {
            ant = curr;
            curr = curr->prox;
        }
    }
    return 1;
}