#include <stdio.h> 

//output : (A  nr na tabeka ascii) | B nr na tasbela ascii 

int main () {
    char a, b, c;
    a = 'A'; b = ' ' ; c = '0';
    printf ("%c %d\n", a, a);
    a = a+1; c = c+2;
    printf ("%c %d %c %d\n", a, a, c, c);
    c = a + b;
    printf ("%c %d\n", c, c);
    return 0;
}