

int removeAll(LInt *l, int x)
{
    int conta = 0;
    if (!l)
        return 0;
    LInt aux = *l;
    LInt ant = NULL;

    while (aux)
    {
        if (aux->valor == x)
        {
            if (ant == NULL)
            {
                *l = (*l)->prox;
            }
            else
            {
                ant->prox = aux->prox;
            }
            aux = aux->prox;
            conta++;
        }
        else
        {
            ant = aux;
            aux = aux->prox;
        }
    }
    return conta;
}