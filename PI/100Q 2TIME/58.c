

void splitQS(LInt l, int x, LInt *mx, LInt *Mx)
{

    if (!l)
    {
        return;
    }
    if (l->valor > x)
    {
        *Mx = l;
        *mx = NULL;
        l = l->prox
                splitQS(l, x, *mx, &((*Mx)->prox));
    }
    if (l->valor < x)
    {
        *mx = l;
        *Mx = NULL;
        l = l->prox;
        splitQS(l, x, &((*mx)->prox), *Mx);
    }
}