#include <stdio.h> 
  
// output x=3 e y=5
 
int main () {
    int i;
    for (i=0; (i<20) ; i++)
    if (i%2 == 0) putchar ('_');
    else putchar ('#');
    return 0 ;
}