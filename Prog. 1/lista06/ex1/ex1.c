#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, j, num[50], valor_maximo = 10, x = 0, y = 0, matriz[4][4], adicao = 0, multiplicacao, constante, maior = 0, posicao1, posicao2, menor, posicao3, posicao4;
    srand(time(0));
    for (i = 0; i < 16; i++)
    {
        num[i] = rand() % valor_maximo;
    }

    printf("\n\n** Saida de Dados ** \n\n");
    for (i = 0; i < 4; i++)
    {
        if (i == 0){
            menor = num[x];
        }
            printf("[");
        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = num[x];
            printf(" %d ", matriz[i][j]);
            if (num[x] > maior)
            {
                maior = num[x];
                posicao1 = i;
                posicao2 = j;
            }
            if (num[x] < menor)
            {
                menor = num[x];
                posicao3 = i;
                posicao4 = j;
            }
            x++;
        }
        printf("]\n");
    }

    printf("Maior: %d[%d][%d]", maior, posicao1, posicao2);
    printf("Menor: %d[%d][%d]", menor, posicao3, posicao4);

    return 0;
}
