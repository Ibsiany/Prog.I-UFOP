#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n1[10], n2[10], resultado[10];

    for(i = 0; i < 10; i++){
        printf("Informe o valor para o vetor 1:\n");
        scanf("%d", &n1[i]);
    }

    printf("\n");

    for(i = 0; i < 10; i++){
        printf("Informe o valor para o vetor 2:\n");
        scanf("%d", &n2[i]);
    }

    for(i = 0; i < 10; i++){
        resultado[i] = n1[i] * n2[i];
    }

    printf("\n\nVetor resultante:\n");

    for(i = 0; i < 10; i++){
        printf("%d\n", resultado[i]);
    }

    return 0;
}
