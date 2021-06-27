#include <stdio.h>
#include <assert.h>

void quadrado(int x)
{
    int l, col;
    for (l = 0; l <= x - 1; l++)
    {
        for (col = 0; col <= x - 1; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void main()
{
    int x;
    scanf("%d", &x);
    quadrado(x);
}