#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/*

//1

int contaVogais(char s[])
{
    int contador = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' | s[i] == 'u')
        {
            contador++;
        }
    }
    return contador;
}

void main()
{
    int d = 0;
    char s[30] = "pardais ao ninho";
    d = contaVogais(s);
    printf(" O número de vogais introduzids foi : %d \n", d);
}


//2

int testavogseg(char s[], int N)
{
    int ret = 0;
    if ((s[N] == 'a' || s[N] == 'e' || s[N] == 'i' || s[N] == 'o' | s[N] == 'u') && (s[N + 1] == s[N]))
    {
        ret = 1;
    }
    return ret;
}
//falta corrigir isto
void retiraVogaisRep(char s[])
{
    int i = 0;
    for (i; s[i] != '\0'; i++)
    {
        if (testavogseg(s, i) == 1)
        {
            s[i] = ' ';
        }
    }
    printf("%s", s);
}

void main()
{
    char s[30] = "pardaaiis ao ninho";
    retiraVogaisRep(s);
}



//3

int testavogal(char s[], int N)
{
    int ret = 0;
    if (s[N] == 'a' || s[N] == 'e' || s[N] == 'i' || s[N] == 'o' | s[N] == 'u')
    {
        ret = 1;
    }
    return ret;
}

void auxiliar(char s[], char aux[])
{
    int i = 0, j = 0;
    for (i, j; s[i] != '\0'; i++)
    {
        if (testavogal(s, i) == 1)
        {
            aux[j] = s[i];
            aux[j + 1] = s[i];
            j = j + 2;
        }
        else
        {
            aux[j] = s[i];
            j++;
        }
    }
}

int duplicaVogais(char s[])
{
    int i = 0;
    char aux[100];
    for (i; s[i] != '\0'; i++)
    {
        aux[i] = s[i];
    }
    aux[i] = '\0';
    auxiliar(s, aux);
    printf("%s", aux);
}

void main()
{
    char s[30] = "pardais ao ninho";
    duplicaVogais(s);
}



//4

#define MAX 10
int verifica_ordem(int vet[])
{
    int i, cont = 0, cont2 = 0;
    for (i = 0; i < MAX; i++)
    {
        if (vet[i] <= vet[i + 1])
            cont++;
    }
    if (cont == (MAX - 1))
        return 1;
    else
        return 0;
}

int main()
{
    int res = 0, res2;

    int vet2[MAX] = {1, 2, 4, 5, 6, 7, 9};

    res2 = verifica_ordem(vet2);
    printf("%d\n", res2);
}

//5
void merge(int a[], int na, int b[], int nb, int r[])
{
    int aa = 0, bb = 0, rr = 0;
    for (aa, bb, rr; aa <= na && bb <= nb && a[aa] != '\0' && b[bb] != '\0'; rr++)
    {

        if (a[aa] <= b[bb])
        {
            r[rr] = a[aa];
            aa++;
        }
        else if (a[aa] > b[bb])
        {
            r[rr] = b[bb];
            bb++;
        }
    }
    r[rr] = '\0';
    for (int i = 0; r[i] != '\0'; i++)
    {
        printf("%d ", r[i]);
    }
}

void main()
{
    int r[21];
    int veta[10] = {1, 3, 5, 6, 7, 9, 12, 14, 16, 19};
    int vetb[11] = {2, 4, 6, 8, 12, 14, 16, 18, 19, 20, 21};
    merge(veta, 10, vetb, 11, r);
}
*/
//6)

int partition(int v[], int N, int x)
{
    int final[N];
    int menores[N];
    int maiores[N];
    int i = 0, mai = 0, men = 0, j = 0;
    for (i; v[i] != '\0'; i++)
    {
        if (v[i] <= x)
        {
            menores[men] = v[i];
            men++;
        }
        else if (v[i] > x)
        {
            maiores[mai] = v[i];
            mai++;
        }
    }
    maiores[mai] = '\0';
    menores[men] = '\0';
    for (int i = 0; menores[i] != '\0'; i++)
    {
        final[j] = menores[i];
        j++;
    }
    for (int i = 0; maiores[i] != '\0'; i++)
    {
        final[j] = maiores[i];
        j++;
    }

    for (int i = 0; final[i] != '\0'; i++)
    {
        printf(" final :%d \n ", final[i]);
    }

    for (int i = 0; menores[i] != '\0'; i++)
    {
        printf(" menores que x :%d \n ", menores[i]);
    }
    for (int i = 0; maiores[i] != '\0'; i++)
    {
        printf(" maiores que x :%d \n ", maiores[i]);
    }
}

void main()
{
    int r[21];
    int veta[10] = {1, 3, 5, 6, 7, 9, 12, 14, 16, 19};
    int vetb[11] = {2, 4, 6, 8, 12, 14, 16, 18, 19, 20, 21};
    partition(veta, 10, 5);
}