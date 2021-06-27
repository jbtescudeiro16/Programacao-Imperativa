#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    for (y = 0; y < 8; y++)
    {
        for (x = 0; x < 8; x++)
        {
            if (x + y < 7)
                putchar('.');
            else
                putchar('#');
        }
        putchar('\n');
    }
}