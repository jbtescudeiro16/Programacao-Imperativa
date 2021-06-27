

LInt cloneRev(LInt l)
{
    LInt aux = NULL;
    if (!l)
        return NULL;
    else
    {
        while (l)
        {
            LInt novo = malloc(sizeof(struct lligada));
            novo->valor = l->valor;
            novo->prox = aux;
            aux = novo;
            l = l->prox;
        }
        return aux;
    }
}
