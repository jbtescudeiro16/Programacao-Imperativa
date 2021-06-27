

LInt cloneL(LInt l)
{
    if (!l)
        return NULL;
    else
    {
        LInt novo = malloc(sizeof(struct lligada));
        novo->valor = l->valor;
        l = l->prox;
        novo->prox = cloneL(l);
        return novo;
    }
}