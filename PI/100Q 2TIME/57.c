
void merge(LInt *r, LInt a, LInt b)
{
    if (!a && !b)
    {
        return;
    }
    else if (!a && b)
    {
        *r = b;
        b = b->prox;
        merge((&(*r)->prox), a, b);
    }
    else if (a && !b)
    {
        *r = a;
        a = a->prox;
        merge((&(*r)->prox), a, b);
    }
    else
    {
        if (a->valor > b->valor)
        {
            *r = b;
            b = b->prox;
            merge((&(*r)->prox), a, b);
        }
        else

        {
            *r = a;
            a = a->prox;
            merge((&(*r)->prox), a, b);
        }
    }
}