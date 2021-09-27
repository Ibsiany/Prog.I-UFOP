#include <stdio.h>
#include <stdlib.h>

void soma_vetor(int vetor_primeiro[], int vetor_segundo[], int n);

int main()
{
    int i, n;

    printf("Informe quantos elementos o vetor tem:\n");
    scanf("%d", &n);

    int vetor_primeiro[n], vetor_segundo[n];


    printf("Informe o primeiro vetor:\n");
    for (i = 0; i < n; i++)
    {
        printf("Posicao %d:", i + 1);
        scanf("%d", &vetor_primeiro[i]);
    }

    printf("\nInforme o segundo vetor:\n");
    for (i = 0; i < n; i++)
    {
        printf("Posicao %d:", i + 1);
        scanf("%d", &vetor_segundo[i]);
    }

    soma_vetor(vetor_primeiro, vetor_segundo, n);
    return 0;
}

void soma_vetor(int vetor_primeiro[], int vetor_segundo[], int n)
{
    int *vetor_resultante = (int *)malloc(n * sizeof(int));

    if (vetor_resultante == NULL)
    {
        printf("Memoria insuficiente!\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            vetor_resultante[i] = vetor_primeiro[i] + vetor_segundo[i];
        }
        printf("\nVetor resultante:\n");
        printf("[ ");
        for (int j = 0; j < n; j++)
        {
            printf("%d ", vetor_resultante[j]);
        }
        printf("]");
    }

    free(vetor_resultante);
}
