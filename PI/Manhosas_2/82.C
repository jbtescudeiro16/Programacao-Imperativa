
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
void preorder(ABin tree, LInt *l)
{
    *l = NULL;
    preorderaux(tree, l);
}

void preorderaux(ABin tree, LInt *l)
{
    if (!tree)
        return;
    else
    {
        preorderaux(tree->dir, l);
        preorderaux(tree->esq, l);
        LInt novo = malloc(sizeof(struct lligada));
        novo->valor = tree->valor;
        novo->prox = *l;
        *l = novo;
    }
}