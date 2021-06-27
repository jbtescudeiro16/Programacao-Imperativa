
#include <stdio.h>

int mystrcmp(char s1[], char s2[])
{
    while (*s1 == *s2 && *s1)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main()
{
    int i;
    char vet1[10] = "ola mundo";
    char vet2[10] = " alberto";
    int a = mystrcmp(vet1, vet2);
    printf("%d", a);
    printf("\n");
    return 0;
}