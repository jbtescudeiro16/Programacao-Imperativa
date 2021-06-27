

int pertence(int v[], int N, int x)
{
    int i = 0;
    for (i; i < N; i++)
    {
        if (v[i] == x)
            return 1;
    }
    return 0;
}

int elimRep(int v[], int N)
{
    int arr[200];
    int i = 0, j = 0;

    for (i; i < N; i++)
    {
        if (pertence(arr, j, v[i]) == 0)
        {
            arr[j] = v[i];
            j++;
        }
    }

    for (i = 0; i < j; i++)
    {
        v[i] = arr[i];
    }

    return j;
}