#include <stdio.h>
#include <stdlib.h>

float nota1[10],nota2[10], media[10];

void pega_nota(float nota1[], float nota2[], int tamanho);
void media_nota(float nota1[], float nota2[], float media[10], int tamanho);
void apresenta_resultado(float nota1[], float nota2[], float media[10], int tamanho);

int main()
{
    pega_nota(nota1,nota2,10);
    media_nota(nota1,nota2,media, 10);
    apresenta_resultado(nota1,nota2,media, 10);

    return 0;
}

void pega_nota(float nota1[], float nota2[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Informe a primeira nota do aluno %d:\n", i+1);
        scanf("%f", &nota1[i]);
    }

    printf("\n");

    for(int i = 0; i < tamanho; i++){
        printf("Informe a segunda nota do aluno %d:\n", i+1);
        scanf("%f", &nota2[i]);
    }
}

void media_nota(float nota1[], float nota2[], float media[10], int tamanho){
    for(int i = 0; i < tamanho; i++){
        media[i] = (nota1[i] + nota2[i])/2;
    }
}

void apresenta_resultado(float nota1[], float nota2[], float media[10], int tamanho){
    for(int i = 0; i < 10; i++){
        printf("\nAluno %d\n", i+1);
        printf("\t nota 1: %.2f\n", nota1[i]);
        printf("\t nota 2: %.2f\n", nota2[i]);
        printf("\t media: %.2f\n", media[i]);
    }
}
