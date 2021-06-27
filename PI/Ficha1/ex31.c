#include <stdio.h> 


void quad (int n) {
    for (int x = 0;x<=n;x++){
        for (int j=0 ; j<n ;j++){
             putchar ('#');
        }
        putchar ('\n');
    }
}

int main () {
    quad (5);
    return 0;
}