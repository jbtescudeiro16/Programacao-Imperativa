

int auxiliar(int v[], int N)
{
    int i = 0, resultado = 0;
    for (i; i <= N; i++)
    {
        resultado += v[i];
    }
    return resultado;
}

void somasAc(int v[], int Ac[], int N)
{
    int i = 0;
    for (i; i < N; i++)
    {
        Ac[i] = auxiliar(v, i);
    }
}