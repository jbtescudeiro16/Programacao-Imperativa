#include <stdio.h>

int contacaracteres(char a, char s[])
{
    int i = 0, ocorrencias = 0;
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] == a)
        {
            ocorrencias++;
        }
    }
    return ocorrencias;
}

char charMaisfreq(char s[])
{
    int i = 0, maximo = 0;
    char n = s[i];
    for (i; s[i] != '\0'; i++)
    {
        if ((contacaracteres(s[i], s)) > maximo)
        {
            maximo = (contacaracteres(s[i], s));
            n = s[i];
        }
    }
    printf("O do caractere mais usado na string é:  %c \n", n);
    return n;
}

void main()
{
    char st[10] = "Mariaii";
    charMaisfreq(st);
}