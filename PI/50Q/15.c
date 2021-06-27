#include <stdio.h>

int iguaisConsecutivos(char s[])
{
    int i = 0, contaconsec = 1, max = 0;
    char strnew[200];
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1])
        {
            contaconsec++;
        }
        else if (contaconsec > max)
        {
            max = contaconsec;
            contaconsec = 1;
        }
    }
    printf("o maximo é :%d\n", max);
}

void main()
{
    char st[10] = "ammaaaaaaa";
    iguaisConsecutivos(st);
}