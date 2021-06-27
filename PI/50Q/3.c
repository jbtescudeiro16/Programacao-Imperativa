#include <stdio.h>

/*
int main()
{
    int num, max, max2;
    printf("\nIntroduza um valor inteiro : ");
    scanf("%d", &num);
    max = num;

    printf("\nIntroduza um valor inteiro : ");
    scanf("%d", &num);
    if (num <= max)
        max2 = num;
    else
    {
        max2 = max;
        max = num;
    }

    while (num != 0)
    {
        printf("Introduza outro número inteiro : %d\n", &num);
        scanf("%d", &num);
        if (num > max)
        {
            max2 = max;
            max = num;
        }

        else if (num > max2)
            max2 = num;
    }

    printf("O segundo maior numero lido foi %d .\n", max2);
    return 0;
}

*/

void main()
{

    int max = 0, max2 = 0, n = 0;

    printf("Introduza um número inteiro : \n");
    scanf("%d", &n);
    max = n;

    printf("\nIntroduza um número inteiro : \n");
    scanf("%d", &n);
    if (n <= max)
    {
        max2 = n;
    }

    else
    {
        max2 = max;
        max = n;
    }

    while (n != 0)
    {
        printf("\nIntroduza um número inteiro : \n");
        scanf("%d", &n);
        if (n > max)
        {
            (max = n);
            (max2 = max);
        }
        else if (n > max2)
            max2 = n;
    }
    printf("O segundo maior inteiro introduzido foi : %d\n", max2);
}
