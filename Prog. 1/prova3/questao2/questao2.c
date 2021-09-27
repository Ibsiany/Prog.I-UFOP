#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int *a, int *b, int *c, int qtd);

int main()
{
    int i, n;

    printf("Informe quantos elementos o vetor tem:\n");
    scanf("%d", &n);

    int vetor_primeiro[n], vetor_segundo[n], vetor_terceiro[n];

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

    soma_vetores(vetor_primeiro, vetor_segundo, vetor_terceiro, n);
    return 0;
}

void soma_vetores(int *a, int *b, int *c, int qtd)
{
    c = (int *)malloc(qtd * sizeof(int));

    if (c == NULL)
    {
        printf("Memoria insuficiente!\n");
    }
    else
    {
        for (int i = 0; i < qtd; i++)
        {
            c[i] = a[i] + b[i];
        }

        printf("\nVetor resultante:\n");
        printf("[ ");
        for (int j = 0; j < qtd; j++)
        {
            if (j == qtd - 1)
            {

                printf("%d ]", c[j]);
            }
            else
            {

                printf("%d, ", c[j]);
            }
        }
    }

    free(c);
}
