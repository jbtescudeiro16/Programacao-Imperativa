#include <stdio.h>

int maxCresc(int v[], int N)
{
    int i = 0, contaseg = 1, max = 0;
    for (i; i < N; i++)
    {
        if (v[i] <= v[i + 1])
        {
            contaseg++;
        }
        else
        {
            if (contaseg > max)
            {
                max = contaseg;
            }
            contaseg = 1;
        }
    }
    printf("o max é %d ", max);
    return max;
}

int main()
{

    int arr[10] = {1, 2, 3, 2, 1, 4, 10, 12, 5, 4};
    maxCresc(arr, 10);
}