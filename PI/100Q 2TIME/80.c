
void mirror(ABin *l)
{
    if (!*l)
        return;

    ABin aux = ((*l)->esq);
    (*l)->esq = ((*l)->dir);
    (*l)->dir = aux;
    mirror((&((*l)->dir)));
    mirror((&((*l)->esq)));
}