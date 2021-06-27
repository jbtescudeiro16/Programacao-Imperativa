#include <stdio.h> 
  
void f (int n) {
    while (n>0) {
    if (n%2 == 0) putchar ('0');
    else putchar ('1');
    n = n/2;
        }
    putchar ('\n');
}

int main () {
    int i;
    for (i=0;(i<16);i++)
    f (i);
return 0;
}
