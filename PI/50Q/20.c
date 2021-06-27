#include <stdio.h>

int contaPal(char s[])
{
    int i = 0, conta = 0;
    for (i; s[i] != '\0'; s++)
    {
        if (s[i] != ' ' && s[i + 1] == ' ' || s[i + 1] == '\n')
        {
            conta++;
        }
    }
    printf("o numero de palavras é : %d\n", conta);
}
void main()
{
    char st[100] = "  b a a a ";
    contaPal(st);
}