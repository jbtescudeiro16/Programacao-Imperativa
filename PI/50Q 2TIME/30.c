

int menosFreq(int v[], int N)
{
    int conta = 1, min = v[0], contamin = 100, i = 0;

    for (i; i < N; i++)
    {
        if (v[i] == v[i + 1])
        {
            conta++;
        }
        else
        {
            if (conta < contamin)
            {
                contamin = conta;
                min = v[i];
            }
            conta = 1;
        }
    }
    return min;
}