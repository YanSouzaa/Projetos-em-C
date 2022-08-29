#include <stdio.h>
void main(){
float nota1, nota2, nota3, media;

printf("Insira a primeira nota:");
scanf("%f", &nota1);

printf("Insira a segunda nota:");
scanf("%f", &nota2);

printf("Insira a terceira nota:");
scanf("%f", &nota3);

media = (nota1+nota2+nota3)/3;
printf("A sua media: %0.1f", media);
if(media >= 60){
    printf("\nVoce passou menor\n");
} else {
    printf("\nAno que vem nos vemos na mesma serie\n");
};


system("pause");
}
