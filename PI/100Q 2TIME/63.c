

void init(LInt *l)
{
    if (!*l)
        return;
    else
    {
        LInt curr = *l;
        LInt ant = NULL;
        while (curr->prox)
        {
            ant = curr;
            curr = curr->prox;
        }
        if (!ant)
        {
            *l = NULL;
        }
        else
        {
            ant->prox = NULL;
        }
    }
}