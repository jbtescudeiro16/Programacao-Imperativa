

LInt arrayToList(int v[], int N)
{
    if (N == 0)
        return NULL;
    int i = 0;
    LInt new = malloc(sizeof(struct lligada));

    new->valor = v[i];
    new->prox = arrayToList(v + 1, N - 1);
    return new;
}