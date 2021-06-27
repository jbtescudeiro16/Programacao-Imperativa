#include <stdio.h>
#include <math.h>

int sumhtpo(int n)
{
    int vet[50];
    int i = 0;
    int r = 0;
    while (n != 1)
    {
        r += n;
        if (n % 2 == 0)
        {
            n = n / 2;
            vet[i] = n;
        }
        else
        {
            n = 1 + (3 * n);
            vet[i] = n;
        }
        printf("%d\n", n);
    }
    return r;
}

/*
    * C program to accept a set of numbers and arrange them
    * in a descending order
    */

auxiliar(int n, )
{
    int f, j, a, n;
    int vet[200];
    int i = 0;
    int r = 0;
    while (n != 1)
    {
        r += n;
        if (n % 2 == 0)
        {
            n = n / 2;
            vet[f] = n;
            f++;
        }
        else
        {
            n = 1 + (3 * n);
            vet[f] = n;
            f++;
        }
    }

    {
        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (vet[i] < vet[j])
                {
                    a = vet[i];
                    vet[i] = vet[j];
                    vet[j] = a;
                }
            }
        }
        printf("The numbers arranged in descending order are given below\n");

        for (i = 0; i < n; ++i)
        {
            printf("%d\n", vet[i]);
        }
    }

    void main()
    {
        auxiliar(97);
    }
