

void removeMaiorA(ABin *a)
{
    if (!(*a)->dir)
    {
        ABin temp = (*a);
        free(*a);
        (*a) = temp->esq;
    }
    else
        removeMaiorA(&((*a)->dir));
}
.

    ~