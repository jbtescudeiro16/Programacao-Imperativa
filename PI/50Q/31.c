#include <stdio.h>

int maisFreq(int v[], int N)
{
    int i = 0, contaseguidos = 1, max = 0, maior = v[0];
    for (i; i <= N - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            contaseguidos++;
        }

        else
        {
            if (contaseguidos > max)
            {
                max = contaseguidos;
                maior = v[i];
            }
            contaseguidos = 1;
        }
    }
    //printf("0 max é %d  e o mais repeteé %d\n", max, maior);
    return maior;
}

void main()
{
    int arr[15] = {1, 2, 3, 3, 3, 3, 4, 5, 6, 6, 7, 7, 8, 9, 10};
    maisFreq(arr, 15);
}