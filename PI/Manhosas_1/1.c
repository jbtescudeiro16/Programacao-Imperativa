#include <stdio.h>

void main()
{
    int maior = 0, aux = 0;

    printf("Insira um inteiro \n");
    scanf("%d", &aux);
    if (aux > maior)
        maior = aux;
    while (aux != 0)
    {
        printf("Insira um inteiro \n");
        scanf("%d", &aux);
        if (aux > maior)
            maior = aux;
    }
    printf("o maior foi :%d \n", maior);
}