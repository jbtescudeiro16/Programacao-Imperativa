#include <stdio.h>
#include <string.h>

void concatenaaray(char *s1, char *s2)
{
    char *newstr;
    newstr = strcat(s1, s2);
    printf("str_final :%c", newstr);
}

char main()
{
    char *s1 = "alberto";
    char *s2 = "caeiro";
    printf("%d:" concatenaaray(s1, s2));
}