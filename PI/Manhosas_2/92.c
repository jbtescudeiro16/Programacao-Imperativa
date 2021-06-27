

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int contaFolhas(ABin a)
{
    if (!a)
        return 0;
    else if (!(a->esq) && !(a->dir))
        return 1;
    else
    {
        int esq = contaFolhas(a->esq);
        int dir = contaFolhas(a->dir);
        return (esq + dir);
    }
}