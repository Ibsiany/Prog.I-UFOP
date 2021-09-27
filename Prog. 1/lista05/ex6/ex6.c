#include <stdio.h>
#include <stdlib.h>

int n[5];

void altera_vetor(int vet[]);

int main()
{
    int i;

    for(i = 0; i < 5; i++){
        printf("Informe o valor na posicao %d:\n", i);
        scanf("%d", &n[i]);
    }
    printf("\n\nElementos do vetor:\n");
    for(i = 0; i < 5; i++){
        printf("%d\n", n[i]);
    }

    altera_vetor(n);

    printf("\n\nElementos apos alteracao do vetor:\n");
    for(i = 0; i < 5; i++){
        printf("%d\n", n[i]);
    }

    return 0;
}

void altera_vetor(int vet[]){
    vet[0] = 5;
    vet[2] = 9;
}
