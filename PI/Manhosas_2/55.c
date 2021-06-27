typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

void insertOrd(LInt *l, int x)
{

    LInt novo = malloc(sizeof(struct lligada));
    novo->valor = x;

    LInt aux = *l;

    if (!*l)
    {
        novo->prox = NULL;
        *l = novo;
        return;
    }

    if (aux->valor > x)
    {
        novo->prox = aux;
        *l = novo;
        return;
    }

    while (aux->prox != NULL && aux->prox->valor <= x)
    {
        aux = aux->prox;
    }

    novo->prox = aux->prox;
    aux->prox = novo;
}
