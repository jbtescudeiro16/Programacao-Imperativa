#include <stdio.h>

int iguaisConsecutivos(char s[])
{
    int i = 0, conta = 1, max = 0;

    for (i; s[i] != '\0'; i++)
    {
        if (s[i] != s[i + 1])
        {
            if (conta > max)
                max = conta;
            conta = 1;
        }
        else
            conta++;
    }
    return max;
}