#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    float vetor[TAM];
    float soma=0;
    float cont[TAM]= {0};
    int maxfreq =0;


    for (int i=0; i<TAM; i++){
        printf("v[%d]:",i);
        scanf("%f",&vetor[i]);
        soma=soma+vetor[i];
    }

    for (int i=0; i<TAM; i++){
        for (int j=i; j<TAM; j++){
            if (vetor[i]==vetor[j]){
                cont[i]++;
            }
        }
    }

    for(int i=0; i<TAM; i++){
        if(maxfreq<cont[i]){
            maxfreq=cont[i];
        }
    }

    if(maxfreq==1){
        printf("\n Não possui moda");
    } else{
        printf("\n Moda: ");
        for (int i=0; i<TAM; i++){
            if(maxfreq==cont[i]){
                printf("%.1f ",vetor[i]);
            }
        }
    }

    return 0;
}


