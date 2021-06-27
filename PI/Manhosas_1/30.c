

int menosFreq(int v[], int N)
{
    int menor = v[0], freqmenor = N, frequencia = 1, i = 0;
    for (i; i < N; i++)
    {
        if (v[i] == v[i + 1])
        {
            frequencia++;
        }
        else
        {

            if (frequencia < freqmenor)
            {
                menor = v[i];
                freqmenor = frequencia;
            }
            frequencia = 1;
        }
    }

    return menor;
}