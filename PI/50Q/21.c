#include <stdio.h>

int contaVogais(char s[])
{
    int i = 0, conta = 0;
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            conta++;
        }
    }
    printf("o numero de vogais na frase  é : %d \n", conta);
}

void main()
{
    char st[100] = "alberto";
    contaVogais(st);
}