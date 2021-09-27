#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double vetor[10];
    double *vetor_ponteiro;
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

    printf("\nA posicao do proximo vetor e sempre 8. Comparado com float tem uma diferenca de 4 valores no salto para o proximo endereco, pois double tem um numero de byte maior.\nDouble: 8 \nFloat: 4\n");

    return 0;
}
