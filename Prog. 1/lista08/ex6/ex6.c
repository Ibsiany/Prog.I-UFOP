#include <stdio.h>
#include <stdlib.h>
void imprime_vetor(int vetor[]);

int main()
{
    int vetor[10];

    printf("Informe o valor dos elementos:\n");
    for(int i = 0; i < 10; i++){
        printf("Posicao %d:", i+1);
        scanf("%d", &vetor[i]);
    }

    imprime_vetor(vetor);

    return 0;
}

void imprime_vetor(int vetor[]){
    int *ponteiro;
    ponteiro = vetor;
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("Vetor: %d[%d] \n", *ponteiro, i+1);
        ponteiro++;
    }
}
