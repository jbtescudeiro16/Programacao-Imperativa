

void concatL(LInt *a, LInt b)
{
    if (!*a)
        *a = b;
    else
    {

        LInt curr = *a;

        while (curr->prox;)
        {
            curr = curr->prox;
        }
        curr->prox = b;
    }
}