#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num[18], m[3][6], i, j, k, valor_maximo = 10, y, x, z=0, valor, produto, mAlterada[3][6], a, b, c, d, e = 0;

    srand(time(0));
    for(i = 0; i < 18; i++){
        num[i] = rand()%valor_maximo;
    }

    for (k = 0; k < 3; k++){
        for (j = 0; j < 6; j++){
            m[k][j] = num[z];
            z++;
        }
    }

    printf("Matriz 3x6:\n");
    for (y = 0; y < 3; y++){
        printf("[");
        for (x = 0; x < 6; x++){
            printf(" %d ", m[y][x]);
        }
        printf("]\n");
    }

    printf("\nInforme o valor que deseja multiplicar na matriz:\n");
    scanf("%d", &valor);

    for (a = 0; a < 3; a++){
        for (b = 0; b < 6; b++){
            produto = num[e] * valor;
            mAlterada[a][b] = produto;
            e++;
        }
    }

    printf("\nMatriz 3x6 alterada:\n");
    for (c = 0; c < 3; c++){
        printf("[");
        for (d = 0; d < 6; d++){
            printf(" %-2d ", mAlterada[c][d]);
        }
        printf("]\n");
    }
    return 0;
}
