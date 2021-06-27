#include <stdio.h>

char *concatenar(char *s1, char *s2)
{
    int i, j;
    //o 1º ciclo coloca o i na ultima posição da 1 string
    for (i = 0; s1[i] != '\0'; ++i)
        ;

    for (j = 0; s2[j] != '\0'; ++j)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    return s1;
}

int main()
{
    int i;
    char vet1[10] = "ola mundo";
    char vet2[10] = " alberto";
    concatenar(vet1, vet2);
    for (i = 0; i <= 20; i++)
    {
        printf("%c", vet1[i]);
    }
    printf("\n");
    return 0;
}