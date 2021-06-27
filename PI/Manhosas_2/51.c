
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