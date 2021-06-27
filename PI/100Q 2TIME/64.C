

void appendL(LInt *l, int x)
{

    LInt novo = malloc(sizeof(struct lligada));
    novo->valor = x;
    novo->prox = NULL;

    if (!*l)
        *l = novo;

    else
    {

        LInt curr = *l;
        while (curr->prox)
        {
            curr = curr->prox;
        }
        curr->prox = novo;
    }
}