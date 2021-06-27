#include <stdio.h> 


void xadrix (int n) {
    for (int x = 0;x<=n;x++){
        for (int j=0 ; j<n ;j++){
            if ((j+x)%2== 0 )
               putchar ('#');
            else putchar ('_');  
        }
        putchar ('\n');
    }
}

int main () {
    xadrix (15);
    return 0;
}