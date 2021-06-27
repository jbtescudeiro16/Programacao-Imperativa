#include <stdio.h>

char *mystrcpy(char *dest, char source[])
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        dest[i] = source[i];
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    int i;
    char vet1[10];
    char vet2[10] = "alberto";
    mystrcpy(vet1, vet2);
    printf("%s\n", vet1);
    printf("\n");
    return 0;
}