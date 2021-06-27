
int length(LInt l)
{
    int len = 0;
    while (l)
    {
        len++;
        l = l->prox;
    }
    return len;
}

LInt parteAmeio(LInt *l)
{

    int meio = length(*l) / 2, i;
    if (meio == 0)
        return NULL;
    LInt seguintes = (*l);
    LInt anteriores = NULL;
    for (i; i < meio; i++)
    {
        anteriores = *l;
        *l = (*l)->prox;
    }
    anteriores->prox = NULL;
    return seguintes;
}
