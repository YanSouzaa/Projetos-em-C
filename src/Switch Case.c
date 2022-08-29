#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void main(){
    int a = 4;
    char b = 'x';

    if(a == 1){
        printf("Opcao escolhida 1");
    }else if(a == 2){
        printf("Opcao escolhida 2");
    }else if(a == 3){
        printf("Opcao escolhida 3");
    }else{
        printf("Opcao Invalida");
    }

    switch(a){
        case 1:
        printf("Opcao escolhida 1");
        break;
        case 2:
        printf("Opcao escolhida 2");
        break;
        case 3:
        printf("Opcao escolhida 3");
        break;
        default:
        printf("Opcao Invalida");
        break;

    }

system("pause");
}
