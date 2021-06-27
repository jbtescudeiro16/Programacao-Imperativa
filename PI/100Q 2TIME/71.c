
LInt NForward(LInt l, int N)
{
    LInt curr = l;
    int i = 0;
    for (i; i < N; i++)
    {
        curr = curr->prox;
    }
    return curr;
}