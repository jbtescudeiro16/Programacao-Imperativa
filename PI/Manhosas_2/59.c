typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

int length(LInt l)
{
    int comp = 0;
    while (l)
    {
        comp++;
        l = l->prox;
    }
    return comp;
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
