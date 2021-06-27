

void preorderaux(ABin a, LInt *l)
{
    if (!a)
        return;
    else
    {
        preorderaux(a->dir, l);
        preorderaux(a->esq, l);
        LInt new = malloc(sizeof(struct lligada));
        new->valor = a->valor;
        new->prox = *l;
        *l = new;
    }
}
void preorder(ABin a, LInt *l)
{
    *l = NULL;
    preorderaux(a, l);
}
