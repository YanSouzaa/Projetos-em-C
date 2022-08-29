#include <stdio.h>
#include <stdlib.h>


void main(){
    int a = 6, b = 3;

    printf("A soma de %d e %d = %d\n",a,b, a + b);
    printf("A subtracao de %d e %d = %d\n",a,b, a - b);
    printf("A divisao de %d e %d = %d\n",a,b, a / b);
    printf("A multiplicacao de %d e %d = %d\n",a,b, a * b);
    printf("O resto da divisao entre %d e %d = %d\n",a,b, a % b);

    printf("\n o valor absoluto de -3 = %d", abs(-3));


    system("pause");

    return 0;
}
