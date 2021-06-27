#include <stdio.h>

void merge(int r[], int a[], int b[], int na, int nb)
{
    int veta = 0, vetb = 0, vetr = 0;
    for (vetr; vetr <= na + nb; vetr++)
    {
        if (veta == na)
        {
            r[vetr] = b[vetb];
            vetb++;
        }
        else if (vetb == nb)
        {
            r[vetr] = a[veta];
            veta++;
        }
        else if (a[veta] > b[vetb])
        {
            r[vetr] = b[vetb];
            vetb++;
        }
        else
        {
            r[vetr] = a[veta];
            veta++;
        }
    }

    for (int i = 0; i < na + nb; i++)
    {
        printf("%d\n", r[i]);
    }
}
int main()
{
    int veta[6] = {0, 2, 4, 6, 7, 10};
    int vetb[6] = {1, 3, 5, 7, 9, 11};
    int r[20];
    merge(r, veta, vetb, 6, 6);
}