#include <stdio.h>
#include <stdlib.h>

void main(){

    int vetor[3], cont;
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("\n Posicao 0 : %d", vetor[0]);
    printf("\n Posicao 1 : %d", vetor[1]);
    printf("\n Posicao 2 : %d\n", vetor[2]);

    for(cont = 0; cont < 3;cont++ ){
        printf("\n Posicao %d : %d", cont, vetor[cont]);
    }


system("pause");
}
