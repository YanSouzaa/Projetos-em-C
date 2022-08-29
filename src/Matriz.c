#include <stdio.h>
#include <stdlib.h>

int main() {

    int tam = 3;
    int l, c, mat[tam][tam];
    int principal[tam];
    int secundaria[tam];

    srand(time(NULL));


    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            mat[l][c] = rand() % 100;
        }
    }


    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }


    printf("\nDiagonal principal: ");
    for(l = 0; l < tam; l++){
            principal[l] = mat[l][l];
            printf("%d ", principal[l]);
    }


     printf("\n\nDiagonal secundaria: ");
    for(c = 0; c < tam; c++){
            secundaria[c] = mat[c][tam - 1 - c];
            printf("%d ", secundaria[c]);
    }
    printf("\n\n");


    for(l = 0; l < tam; l++){
        for(c = 0;  c < tam; c++){
            mat[l][l] = secundaria[c];
            mat[c][tam - 1 - c] = principal[l];
            printf("%2d ", mat[c][l]);
        }
        printf("\n");
    }

    return 0;
}
