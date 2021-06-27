

int listToArray(LInt l, int v[], int N)
{
    if (!l)
        return 0;
    int i = 0;
    for (i; i < N && l; i++)
    {
        v[i] = l->valor;
        l = l->prox;
    }
    return i;
}