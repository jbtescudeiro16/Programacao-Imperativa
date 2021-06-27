#include <stdio.h>
#include <string.h>

int difsConsecutivos(char s[])
{
    int i = 0, contaconsec = 0, max = 0;
    for (i; i <= strlen(s); i++)
    {
        if (s[i + 1] != s[i])
        {
            contaconsec++;
        }
        else
        {
            if (contaconsec > max)
            {
                max = contaconsec;
                contaconsec = 0;
            }
        }
    }
    printf("o maximo é :%d\n", max);
    return max;
}

void main()
{
    char st[10] = "ai";
    difsConsecutivos(st);
}