#include <stdio.h>

void xadrez(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int col = 0; col <= n - 1; col++)
        {
            if (((i + col) % 2) == 0)
                printf("_");
            else
                printf("#");
        }
        printf("\n");
    }
}

void main()
{
    int x;
    scanf("%d", &x);
    xadrez(x);
}