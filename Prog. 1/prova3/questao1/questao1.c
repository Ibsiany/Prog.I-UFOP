#include <stdio.h>
#include <stdlib.h>

void operacao_sobre_vetores(int *a, int *b, int qtd)
{
    int impar = 0;
    printf("\nVetor a:\n");
    for (int i = 0; i < qtd; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i] + 10;
        }
        printf("%d\n", a[i]);
    }

    printf("Vetor b:\n");
    for (int j = 0; j < qtd; j++)
    {
        impar = j % 2;
        if (impar != 0)
        {
            b[j] = b[j] - 15;
        }

        printf("%d\n", b[j]);
    }
}

int main()
{
    int i, qtd, *a, *b;

    printf("Informe a quantidade de elementos do vetor:\n");
    scanf("%d", &qtd);

    a = (int *)malloc(qtd * sizeof(int));
    b = (int *)malloc(qtd * sizeof(int));

    printf("Informe o vetor a:\n");
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Informe o vetor b:\n");
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &b[i]);
    }

    operacao_sobre_vetores(a, b, qtd);

    free(a);
    free(b);
    return 0;
}
