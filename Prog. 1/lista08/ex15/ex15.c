#include <stdio.h>
#include <stdlib.h>

int *multiplica_vetores(int *a, int *b, int qtd);

int main()
{
    int elementos, *multiplica_vetores_resultado;
    printf("Informe a quantidade de elementos dos vetores:");
    scanf("%d", &elementos);
    int primeiro_vetor[elementos];
    int segundo_vetor[elementos];

    printf("\nInforme os valores do primeiro vetor:\n");
    for (int i = 0; i < elementos; i++)
    {
        printf("Posicao%d:", i + 1);
        scanf("%d", &primeiro_vetor[i]);
    }

    printf("\nInforme os valores do segundo vetor:\n");
    for (int j = 0; j < elementos; j++)
    {
        printf("Posicao%d:", j + 1);
        scanf("%d", &segundo_vetor[j]);
    }

    multiplica_vetores_resultado = multiplica_vetores(primeiro_vetor, segundo_vetor, elementos);

    printf("\nVetor resultante:\n");
    printf("[ ");
    for (int y = 0; y < elementos; y++)
    {
        printf("%d ", *multiplica_vetores_resultado++);
    }
    printf("]");

    free(multiplica_vetores_resultado);
    return 0;
}

int *multiplica_vetores(int *a, int *b, int qtd)
{
    int *vetor_resultante, i;
    vetor_resultante = (int *)malloc(qtd * sizeof(int));

    if (vetor_resultante == NULL)
        printf("Memoria insuficiente\n");
    else
    {
        for (i = 0; i < qtd; i++)
        {
            vetor_resultante[i] = a[i] * b[i];
        }
    }
    
    return vetor_resultante;
}