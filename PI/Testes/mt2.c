#include <stdio.h>
#include <math.h>

int prime(int n)
{
    int i, flag = 0, res;

    for (i = 2; i <= n / 2; ++i)
    {
        // condition for non-prime
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
        res = 0;
    }
    else
    {
        if (flag == 0)
            res = 1;
        else
            res = 0;
    }
    return res;
}

int main()
{
    int n = 41;
    int r = 0;
    int cp = 0;
    while (n != 1)
    {
        r += n;
        cp += prime(n);
        if (n % 2 == 0)
            n = n / 2;
        else
        {
            n = 1 + (3 * n);
        }
    }
    printf("%d", cp);
}