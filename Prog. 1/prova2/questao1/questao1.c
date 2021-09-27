#include <stdio.h>
#include <stdlib.h>

int so_positivo(int vetor[], int tamanho);

int main()
{
    int vetor[10], tamanho = 10, valores;

    printf("O tamanho do vetor e %d.\n", tamanho);
    for(int i = 0; i < tamanho; i++){
        printf("Posicao %d:", i + 1);
        scanf("%d", &vetor[i]);
    }

    valores = so_positivo(vetor, tamanho);

    printf("\nO numero de valores alterados foram %d.\n", valores);


    return 0;
}

int so_positivo(int vetor[], int tamanho){
    int contador = 0, aux;
    for(int i = 0; i < 10; i++){
        aux = vetor[i];
        if(aux < 0){
            vetor[i] = 0;
            contador ++;
        }
    }

    printf("\nO novo vetor e:");
    for(int i = 0; i < tamanho; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n");


    return contador;
}
