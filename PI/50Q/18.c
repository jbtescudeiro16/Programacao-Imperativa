#include <stdio.h>
#include <string.h>

int maiorSufixo(char s1[], char s2[])
{

    int i = strlen(s1), j = strlen(s2), conta = 1;

    while (s1[i] == s2[j])
    {
        conta++;
        i--;
        j--;
    }
    return (conta);
}