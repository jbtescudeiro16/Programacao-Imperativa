
typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

LInt reverseL(LInt l)
{
    LInt prev = NULL;
    LInt curr = l;
    LInt prox = NULL;
    while (curr)
    {
        prox = curr->prox;
        curr->prox = prev;
        prev = curr;
        curr = prox;
    }
    l = prev;
    return l;
}