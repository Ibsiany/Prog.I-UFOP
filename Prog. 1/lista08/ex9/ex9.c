#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vet[] = {4,9,13};
    int i;
    printf("Funcao a: ");
    for(i=0;i<3;i++){
        printf("%d ", *(vet+i));
    }

    printf("\nFuncao b: ");
    for(i=0;i<3;i++){
        printf("%p ", vet+i);
    }

    int *o = vet;

    printf("\nFuncao c: ");
    for(i=0;i<3;i++){
        printf("%p ", o++);
    }
    printf("\n\nA diferenca entre as funcoes e que:");
    printf("\na)Imprime o valor do vetor");
    printf("\nb)Imprime o endereco do vetor");
    printf("\nc)Tambem imprime o endereco do vetor e ja acessa a proxima posicao");
    printf("\n\n");
}
