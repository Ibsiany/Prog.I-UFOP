#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num[12], m[3][4], i, j, k, valor_maximo = 10, y, x, z=0, soma = 0, produto = 1;

    srand(time(0));
    for(i = 0; i < 12; i++){
        num[i] = rand()%valor_maximo;
    }

    for (k = 0; k < 3; k++){
        for (j = 0; j < 4; j++){
            m[k][j] = num[z];
            soma = soma + num[z];
            produto *= num[z];
            z++;
        }
    }

    printf("Matriz 3x4:\n");
    for (y = 0; y < 3; y++){
        printf("[");
        for (x = 0; x < 4; x++){
            printf(" %d ", m[y][x]);
        }
        printf("]\n");
    }

    printf("\nO somatorio dos valores da matriz 3x4 e %d.\n", soma);
    printf("\nA multiplicacao dos valores da matriz 3x4 e %d.\n", produto);

    return 0;
}
