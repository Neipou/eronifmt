#include <stdio.h>

void main(){
    char nome[30];
    printf("nome: ");
    scanf("%s",&nome);
    float notas[2];
    printf("nota1: ");
    scanf("%f",&notas[0]);
    printf("nota2: ");
    scanf("%f",&notas[1]);
    float media = (notas[0] + notas[1])/2.0;
    printf("media: %.2f\n", media);
}