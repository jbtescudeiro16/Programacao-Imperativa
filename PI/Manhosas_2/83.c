

void posorder(ABin tree, LInt *l)
{
    *l = NULL;
    posorderaux(tree, l);
}

void posorderaux(ABin tree, LInt *l)
{
    if (!tree)
    {
        return;
    }
    else
    {
        LInt new = malloc(sizeof(struct lligada));
        new->valor = tree->valor;
        new->prox = *l;
        *l = new;
        posorderaux(tree->dir, l);
        posorderaux(tree->esq, l);
    }
}