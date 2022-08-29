#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){
    srand((unsigned)time(NULL));

    int aleatorio = rand() %3;

    int aleatoriosegundo = (rand() % 5) + 1;


    printf("%d\n", aleatoriosegundo);

    system("pause");
}
