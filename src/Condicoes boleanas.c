#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    bool a = true, b = false;

    if(a){
        printf("A e verdadeira\n");
    }
    if(b){
        printf("B e verdadeiro\n");
    } else {
        printf("B e falso\n");
    }

    if(!b){
        printf("B e falso\n");
    }

    system("pause");
}
