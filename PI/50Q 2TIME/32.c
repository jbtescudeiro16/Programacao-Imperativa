

int maxCresc(int v[], int N)
{

    int max = 0, conta = 1, i = 0;

    for (i; i < N; i++)
    {
        if (v[i] <= v[i + 1])
        {
            conta++;
        }
        else
        {
            if (conta > max)
            {
                max = conta;
            }
            conta = 1;
        }
    }
    return max;
}