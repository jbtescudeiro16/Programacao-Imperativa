#include <stdio.h>

int main()
{
    int num, max;
    printf("Introduza um valor inteiro : ");
    scanf("%d", &num);
    max = num;

    while (num != 0)
    {
        printf("Introduza um número inteiro : ");
        scanf("%d", &num);
        if (max < num)
            max = num;
    }
    printf("O maior numero lido foi %d . \n", max);
    return 0;
}