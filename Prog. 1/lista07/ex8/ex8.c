#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num[16], m[4][4], i, j, k, valor_maximo = 10, y, x, z=0, maior = 0, iMaior, jMaior, menor = 0, iMenor, jMenor;

    srand(time(0));
    for(i = 0; i < 16; i++){
        num[i] = rand()%valor_maximo;
    }

    menor = num[0];
    iMenor = 0;
    jMenor = 0;

    for (k = 0; k < 4; k++){
        for (j = 0; j < 4; j++){
            m[k][j] = num[z];

            if(num[z] > maior){
                maior = num[z];
                iMaior = k;
                jMaior = j;
            }

            if(num[z] < menor){
                menor = num[z];
                iMenor = k;
                jMenor = j;
            }

            z++;
        }
    }

    printf("Matriz 4x4:\n");
    for (y = 0; y < 4; y++){
        printf("[");
        for (x = 0; x < 4; x++){
            printf(" %d ", m[y][x]);
        }
        printf("]\n");
    }

    printf("\nO maior elemento e %d na posicao [%d, %d], ou seja: \n%d[%d, %d]\n", maior, iMaior, jMaior, maior, iMaior, jMaior);
    printf("\nO menor elemento e %d na posicao [%d, %d], ou seja: \n%d[%d, %d]\n", menor, iMenor, jMenor, menor, iMenor, jMenor);

    return 0;
}
