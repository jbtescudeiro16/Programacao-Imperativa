#include <stdio.h>

char *mystrcat(char *dest, char source[])
{
    int i = 0;
    int j = 0;
    for (i; dest[i] != '\0'; i++)
    {
    }
    for (j; source[j] != '\0'; j++)
    {
        dest[i] = source[j];
        i++;
    }
    dest[i] = '\0';
    return dest;
}