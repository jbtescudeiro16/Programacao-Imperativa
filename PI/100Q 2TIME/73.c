

LInt arrayToList(int v[], int N)
{
    if (N == 0)
        return NULL;

    LInt novo = malloc(sizeof(struct lligada));
    novo->valor = *v;
    novo->prox = arrayToList(v + 1, N - 1);
    return novo;
}