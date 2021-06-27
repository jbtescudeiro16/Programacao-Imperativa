#include <stdio.h>

char *mystrcpy(char *dest, char source[])
{
    int i = 0, j = 0;
    for (j; source[j] != '\0'; j++)
    {
        dest[i] = source[j];
        i++;
    }
    dest[i] = '\0';
    return dest;
}