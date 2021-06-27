
typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

ABin cloneMirror(ABin a)
{

    if (!a)
        return NULL;
    else
    {
        ABin nova = malloc(sizeof(struct nodo));
        nova->valor = a->valor;
        nova->esq = cloneMirror(a->dir);
        nova->dir = cloneMirror(a->esq);

        return nova;
    }
}