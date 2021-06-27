

int somasAcLaux(LInt l)
{
    int somas = 0;
    LInt curr = l;
    while (curr)
    {
        somas += curr->valor;
        curr = curr->prox;
    }
    return somas;
}

LInt somasAcL(LInt l)
{
}