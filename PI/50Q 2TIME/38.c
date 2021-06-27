int auxiliar(int v[], int n)
{
    int i, resultado = 0;
    for (i; i <= n; i++)
    {
        resultado += v[i];
    }
    return resultado;
}

void somasAc(int v[], int Ac[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        Ac[i] = auxiliar(v, i);
    }
}
