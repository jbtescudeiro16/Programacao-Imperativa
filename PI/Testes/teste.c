#include <stdio.h>
#include <math.h>

int func(int x)
{
    int r = 0;
    while (x > 0)
    {
        r += 1;
        x = x - r;
    }
    return r;
}

int main()
{
    int x = 16, a = 0;
    a = func(x);
    printf("%d", a);
    return a;
}