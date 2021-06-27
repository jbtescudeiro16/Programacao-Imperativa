#include <stdio.h>

int maiorPrefixo(char s1[], char s2[])
{
    int i = 0, contador = 0;
    for (i; s1[i] == s2[i]; i++)
    {
        contador += 1;
    }
    printf("A conta é %d \n", contador);
}

void main()
{
    char st[10] = "ammaaaaaaa";
    char st2[10] = "ammabb";
    maiorPrefixo(st, st2);
}