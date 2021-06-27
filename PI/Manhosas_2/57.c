
typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

void merge(LInt *r, LInt a, LInt b)
{
    if (a == NULL && b == NULL)
        return;
    if (a && b == NULL)
    {
        *r = a;
        a = a->prox;
        merge(&((*r)->prox), a, b);
    }
    else if (a == NULL && b)
    {
        *r = b;
        b = b->prox;
        merge(&((*r)->prox), a, b);
    }
    else if (a && b)
    {
        if (a->valor < b->valor)
        {
            *r = a;
            a = a->prox;
            merge(&((*r)->prox), a, b);
        }
        else
        {
            *r = b;
            b = b->prox;
            merge(&((*r)->prox), a, b);
        }
    }
}
