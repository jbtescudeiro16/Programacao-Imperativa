

typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

void mirror(ABin *l)
{
    if (!(*l))
        return;
    else
    {
        ABin aux = ((*l)->esq);
        (*l)->esq = ((*l)->dir);
        (*l)->dir = aux;
        mirror(&((*l)->dir));
        mirror(&((*l)->esq));
    }
}