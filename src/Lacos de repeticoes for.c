#include <stdio.h>
#include <stdlib.h>

void main(){

    int cont;
    for(cont = 1; cont <= 10; cont++){
        printf("\n 5 X %d = %d",cont, 5 * cont);

    }
    int dois = 0;
    for(dois = 0; dois <=10; dois = dois + 2){
        printf("\n%d",dois);
    }
    int tres;
    for (tres = 10; tres > 0; tres--){
        printf("\n%d",tres);
    }



system("pause");
}
