

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

void freeL(LInt l)
{
    while (l)
    {
        LInt free1 = l;
        l = l->prox;
        free(free1);
    }
}