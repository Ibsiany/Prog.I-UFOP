#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;

    do
    {
        printf("Informe o valor de N:");
        scanf("%d", &N);
    } while (N < 0);

    int aux;
    int *V = (int *)malloc(N * sizeof(int));

    if (V == NULL)
    {
        printf("Memoria insuficiente!\n");
    }
    else
    {
        printf("Informe o valor do vetor:\n");
        for (int i = 0; i < N; i++)
        {
            printf("Posicao %d: ", i + 1);
            scanf("%d", &aux);

            if (aux >= 1)
            {
                V[i] = aux;
            } else{
                i--;
            }
        }

        printf("\n ");
        for (int x = 0; x < N; x++)
        {
            printf("%d ", V[x]);
        }
    }

    return 0;
}
