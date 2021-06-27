

void inorderaux(ABin a, LInt *l)
{
    if (!a)
        return;
    inorderaux(a->dir, l);
    LInt new = malloc(sizeof(struct nodo));
    new->valor = a->valor;
    new->prox = *l;
    *l = new;
    inorderaux(a->esq, l);
}
void inorder(ABin a, LInt *l)
{
    *l = NULL;
    inorderaux(a, l);
}