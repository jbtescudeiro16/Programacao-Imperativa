#include <stdio.h> 
  


//ex1 (output : x=15 e y=20)

int main () {
    int x, y;
    x = 3; y = x+2;
    x = x*y; y = x + y;
    printf("%d %d\n", x, y);
    return 0;
}