#include <stdio.h>
#include <stdlib.h>

void operacao_sobre_vetores(int *a, int *b, int qtd)
{
    printf("\nVetor a:\n");
    for (int i = 0; i < qtd; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i] + 10;
        }
        printf("%d\n", *a);
        a++;
    }

    printf("Vetor b:\n");
    for (int j = 0; j < qtd; j++)
    {
        if (j % 2 != 0)
        {
            b[j] = b[j] - 15;
        }
        printf("%d\n", *b);
        b++;
    }
}

int main()
{
    int i, qtd;

    printf("Informe a quantidade de elementos do vetor:\n");
    scanf("%d", &qtd);

    int vetora[qtd], vetorb[qtd];

    printf("Informe o vetor a:\n");
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &vetora[i]);
    }

    printf("Informe o vetor b:\n");
    for (i = 0; i < qtd; i++)
    {
        scanf("%d", &vetorb[i]);
    }

    operacao_sobre_vetores(vetora, vetorb, qtd);

    return 0;
}
