
void insertOrd(LInt *l, int x)
{
    void insertOrd(LInt * l, int x)
    {
        LInt curr = *l;

        LInt novo = malloc(sizeof(struct lligada));
        novo->valor = x;
        novo->prox = NULL;
        if (!*l)
        {
            *l = novo;
            return;
        }

        if (x < (*l)->valor)
        {
            novo->prox = curr;
            *l = novo;
            return;
        }
        while (curr->prox && curr->prox->valor < x)
        {
            curr = curr->prox;
        }
        novo->prox = curr->prox;
        curr->prox = novo;
    }