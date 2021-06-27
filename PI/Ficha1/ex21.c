#include <stdio.h> 
  
// output x=3 e y=5
 
int main () {
    int x, y;
    x = 3; y = 5;
    if (x > y)
    y = 6;
    printf ("%d %d\n", x, y);
    return 0 ;
}