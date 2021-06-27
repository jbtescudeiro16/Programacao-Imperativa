LInt reverseL(LInt l)
{

    if (!l)
        return l;
    else
    {

        LInt curr = l;
        LInt ant = NULL;
        LInt prox = NULL;

        while (curr)
        {
            prox = curr->prox;
            curr->prox = ant;
            ant = curr;
            curr = prox;
        }
        l = ant;
        return l;
    }
}