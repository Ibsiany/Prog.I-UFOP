#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float vetor[10];
    float *vetor_ponteiro;
    vetor_ponteiro = vetor;

    printf("Informe o ponto flutuante para cada posicao:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Posicao %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    vetor_ponteiro = vetor;

    printf("\nO endereco e:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Posicao: %d, Endereco: %p\n", i + 1, vetor_ponteiro);
        vetor_ponteiro++;
    }

    return 0;
}
