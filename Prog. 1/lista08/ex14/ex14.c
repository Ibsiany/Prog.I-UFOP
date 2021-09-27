#include <stdio.h>
#include <stdlib.h>

float *aloca_vetor_float(int quantidade);
void exibe_vetor(int *vetor_alocado, int elementos);

int main()
{
    int elementos;
    float *vetor_alocado;

    printf("Informe a quantidade de elementos a ser alocados:");
    scanf("%d", &elementos);

    vetor_alocado = aloca_vetor_float(elementos);

    printf("Informe o vetor: \n");
    for (int i = 0; i < elementos; i++)
    {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor_alocado[i]);
    }

    exibe_vetor(vetor_alocado, elementos);

    return 0;
}

float *aloca_vetor_float(int quantidade)
{
    int *vetor, i;
    vetor = (int *)malloc(quantidade * sizeof(int));

    if (vetor == NULL)
        printf("Memoria insuficiente\n");
    else
    {
        for (i = 0; i < quantidade; i++)
            *(vetor + i) = i;
    }

    return vetor;

    free(vetor);
}

void exibe_vetor(int *vetor_alocado, int elementos)
{
    printf("\nVetor:\n");
    printf("[ ");
    for (int i = 0; i < elementos; i++)
    {
        printf("%d ", *vetor_alocado++);
    }
    printf("]");
}