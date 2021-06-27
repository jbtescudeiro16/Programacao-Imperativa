

int iguaisAB(ABin a, ABin b)
{
    int dir = 0, esq = 0;

    if (!a && !b)
        return 1;
    else if (!a && b || !b && a)
        return 0;
    else if (a->valor != b->valor)
        return 0;

    else if (a->valor == b->valor)
    {
        dir = iguaisAB(a->esq, b->esq);
        esq = iguaisAB(a->dir, b->dir);

        if (dir == 1 && esq == 1)
            return 1;
        else
            return 0;
    }
}