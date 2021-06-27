#include <stdio.h>

int comuns(int a[], int na, int b[], int nb)
{
    int i, j, com = 0;
    for (i = 0; i < na; i++)
    {
        for (j = 0; j < nb; j++)
        {
            if (a[i] == b[j])
            {
                com++;
                break;
            }
        }
    }
    return com;
}

int main()
{

    int arr1[10] = {1, 2, 4, 5, 6, 7, 8};
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    comuns(arr1, 10, arr2, 10);
}