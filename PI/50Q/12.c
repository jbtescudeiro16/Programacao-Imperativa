#include <stdio.h>
#include <string.h>

void strnoV2(char s[])
{
    char copi[100];
    int j = 0, i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {

            i++;
        }
        else
        {
            copi[j] = s[i];
            i++;
            j++;
        }
    }
    copi[j] = '\0';
    strcpy(s, copi);
}

void main()
{
    char st[10] = "Mariana";
    strnoV2(st);
    printf("A STRING SEM AS VOGAIS É :%s \n", st);
}