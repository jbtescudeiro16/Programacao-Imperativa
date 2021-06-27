

typedef struct lligada
{
    int valor;
    struct lligada *prox;
} * LInt;

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

void inorder(ABin tree, LInt *list)
{
    *list = NULL;
    inorderaux(tree, list);
}
void inorderaux(ABin tree, LInt *list)
{
    if (!tree)
    {
        return;
    }
    else
    {
        inorderaux(tree->dir, list);
        LInt new = malloc(sizeof(struct lligada));
        new->valor = tree->valor;
        new->prox = *list;
        *list = new;
        inorderaux(tree->esq, list);
    }
}