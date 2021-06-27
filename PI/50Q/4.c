#include <stdio.h>

/*
int bitsUm(unsigned int n)
{
    int contador = 0;
    while (n % 2 == 0)
    {
        contador++;
        n /= 2;
    }
    printf("O número introduzido utiliza  %d caracteres um ", contador);
}

void main()
{
    int a;
    printf("Imprima um número inteiro :");
    scanf("%d", &a);
    bitsUm(a);
}

*/

int bitsUm(unsigned int n)
{
    int contador = 0;
    while (n != 0)
    {
        if (n % 2 == 1)
            contador++;
        n /= 2;
    }
    return contador;
}

int main()
{
    int n, a;
    scanf("%d", &n);
    a = bitsUm(n);
    printf("%d\n", a);
}