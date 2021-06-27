#include <stdio.h>


int main () {
    int num,soma=0,nelemes=0;  
    
    printf ("Introduza um número inteiro : ");
    scanf ("%d",&num);
    soma = num;
   
    
    while (num != 0){
        printf ("\nIntroduza um número inteiro :");
        scanf ("%d",&num);
        soma +=num; // = (soma = soma +num)
        nelemes++;
    }
    
    printf (" A média dos números lidos foi %f \n ." , (float)soma/nelemes);
    return 0;
}