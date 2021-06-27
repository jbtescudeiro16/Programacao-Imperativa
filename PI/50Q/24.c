#include <stdio.h>
#include <string.h>

int remRep(char x[])
{
    char nova[200];
    int i = 0, j = 0, n = 0;
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] != x[i + 1])
        {
            nova[j] = x[i];
            j++;
        }
    }
    nova[j] = '\0';
    strcpy(x, nova);
    n = strlen(x);
    printf(" nova:%s:", x);
    printf(" cumprimento %d", n);
    return n;
}

void main()
{
    char s[40] = " aaaaaaAAAAAAaaaaaa ";
    remRep(s);
}