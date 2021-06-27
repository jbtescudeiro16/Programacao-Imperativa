

int removeMaiorL(LInt *l)
{
    int maior = 0;
    LInt curr = *l;

    if (!*l)
        return 0;
    while (curr)
    {
        if (curr->valor > maior)
            maior = curr->valor;
        curr = curr->prox;
    }
    curr = *l;

    LInt ant = NULL;

    while (curr)
    {
        if ((*l)->valor == maior)
        {
            *l = (*l)->prox;
            return maior;
        }
        else
        {
            if (curr->valor == maior)
            {
                ant->prox = curr->prox;
                curr = curr->prox;
                return maior;
            }
            else
            {
                ant = curr;
                curr = curr->prox;
            }
        }
    }
}