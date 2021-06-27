#include <stdio.h>

int trailingZ(unsigned int n)
{
    int contador = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
            contador++;
        n /= 2;
    }
    return contador;
}

int main()
{
    int n, a;
    scanf("%d", &n);
    a = trailingZ(n);
    printf("O número de 0 utilizados foi: %d \n", a);
    return 0;
}