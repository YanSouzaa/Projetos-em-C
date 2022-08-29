#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void main(){

    int a = 0;
    int b = 10;

    if(a > 5 && a < 15){
        printf("\n A variavel a esta entre 5 e 15");
    } else {
        printf("\n Nao esta entre 5 e 15");
    }
    if(b > 5 || b < 15){
        printf("\n A variavel b esta entre 5 e 15");
    } else {
        printf("\n Nao esta entre 5 e 15");
    }


    system("pause");
}
