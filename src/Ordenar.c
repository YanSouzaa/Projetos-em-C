#include <stdio.h>

int main(){
int vetor[10], aux;


for (int i = 0; i < 10; i++){
    printf("Digite o numero %d da posicao: ", i);
    scanf("%d", &vetor[i]);
}

for(int x = 0; x < 10; x++){
    for(int y = x; y < 10; y++){
        if(vetor[x] > vetor[y]){
            aux = vetor[x];
            vetor[x] = vetor[y];
            vetor[y] = aux;
        }
    }
}

for (int i = 0; i < 10; i++) {
    printf("Posicao %d : %d\n", i, vetor[i]);
}

}
