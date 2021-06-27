

int removeMaiorL(LInt *l)
{
    LInt aux = *l;
    LInt ant = NULL;
    int max = 0;

    while (aux)
    {
        if (aux->valor > max)
        {
            max = aux->valor;
        }
        aux = aux->prox;
    }

    aux = *l;

    if ((*l)->valor == max)
    {
        *l = (*l)->prox;
        return max;
    }
    else
    {
        while (aux)
        {
            if (aux->valor == max)
            {
                ant->prox = aux->prox;
                ant = ant->prox;
                return max;
            }
            ant = aux;
            aux = aux->prox;
        }
    }
}