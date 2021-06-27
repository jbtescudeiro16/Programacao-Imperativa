int maisFreq(int v[], int N)
{
    int conta = 1, max = v[0], contamax = 0, i = 0;

    for (i; i < N; i++)
    {
        if (v[i] == v[i + 1])
        {
            conta++;
        }
        else
        {
            if (conta > contamax)
            {
                contamax = conta;
                max = v[i];
            }
            conta = 1;
        }
    }
    return max;
}