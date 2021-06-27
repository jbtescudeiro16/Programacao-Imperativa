#include <stdio.h>

int elimRepOrd(int v[], int n)
{
    int i = 0, j = 1, conta = 0;
    int novo[100];
    novo[0] = v[0];
    for (i; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            novo[j] = v[i + 1];
            j++;
        }
        else
            conta++;
    }

    for (i = 0; i < n - conta; i++)
    {
        v[i] = novo[i];
    }
    for (i = 0; i < j - 1; i++)
    {
        printf("%d \n", v[i]);
    }
    printf("total de chavalinhos :%d\n", n - conta);
    return (n - conta);
}

int main()
{
    int arr[15] = {1, 1, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10, 12, 13};
    int arr1[3] = {1, 1, 1};
    elimRepOrd(arr, 15);
}