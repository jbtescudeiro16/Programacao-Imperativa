#include <stdio.h>

int escrevenumeros(i)
{
    for (i; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("pingpong\n");
        }
        else if (i % 3 == 0)
        {
            printf("ping\n");
        }
        else if (i % 5 == 0)
        {
            printf("pong\n");
        }
        else
            printf("%d\n", i);
    }
}

int main()
{
    escrevenumeros(0);
}