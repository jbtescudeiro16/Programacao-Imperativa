#include <stdio.h>
#include <string.h>
void strrev(char s[])
{
    int i = strlen(s) - 1, j = 0, g = 0;
    char rev[i + 1];
    for (i; i >= 0; i--)
    {
        rev[j] = s[i];
        j++;
    }
    rev[j] = '\0';
    i = 0;
    for (g; rev[g] != '\0'; g++)
    {
        s[g] = rev[g];
    }
    s[g] = '\0';
}

void main()
{
    char str[10] = "Mariana";
    strrev(str);
    printf("%s", str);
}