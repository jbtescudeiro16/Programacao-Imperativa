

int cardinalMSet(int N, int v[N])
{
    int i, conta = 0;
    for (i = 0; i < N; i++)
    {
        conta += v[i];
    }
    return conta;
}