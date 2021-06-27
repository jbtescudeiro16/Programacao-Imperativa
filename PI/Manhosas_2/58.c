
typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

void splitQS(LInt l, int x, LInt *mx, LInt *Mx)
{

    if (*l)
        return;
    if (l->valor < x)
    {
        *mx = l;
        *Mx = NULL;
        l = l->prox;
        splitQS(l, x, &((*mx)->prox), Mx);
    }
    else
    {
        *mx = NULL;
        *Mx = l;
        l = l->prox;
        splitQS(l, x, mx, &((*Mx)->prox));
    }
}