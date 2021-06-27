#include <stdio.h>

int crescente(int a[], int i, int j)
{
    int ret = 1;
    {
        for (i; i < j; i++)
        {
            if (a[i + 1] < a[i])
                return 0;
        }
        return 1;
    }
}