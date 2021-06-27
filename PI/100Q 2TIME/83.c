

void posorder(ABin a, LInt *l)
{
    *l = NULL;
    posorderaux(a, l);
}

void posorderaux(ABin a, LInt *l)
{
    if (!a)
        return;
    else
    {
        LInt new = malloc(sizeof(struct lligada));
        new->valor = a->valor;
        new->prox = *l;
    }
}