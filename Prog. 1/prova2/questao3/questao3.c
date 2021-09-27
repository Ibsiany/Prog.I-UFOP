#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma_total_linha, soma_coluna_resultado = 0;
int soma_linha(int matriz[5][5]);
int soma_coluna(int matriz[5][5]);

int main()
{
    int numero_aleatorio[25], matriz[5][5], i, valor_maximo = 10, x =0, k, j, linha, coluna;

    srand(time(0));
    for(i = 0; i < 25; i++){
        numero_aleatorio[i] = rand()%valor_maximo;
    }

    for (j = 0; j < 5; j++){
        printf("[");
        for (k = 0; k < 5; k++){
            matriz[j][k] = numero_aleatorio[x];
            printf(" %d ", matriz[j][k]);
            x++;
        }
        printf("]\n");
    }

    linha = soma_linha(matriz);
    coluna = soma_coluna(matriz);

    printf("\nA  menor soma da linha e %d na linha %d \n", soma_total_linha, linha + 1);
    printf("\nA  maior soma da coluna e %d na coluna %d \n", soma_coluna_resultado, coluna + 1);

    return 0;
}

int soma_linha(int matriz[5][5]){
    int adicao = 0, soma, auxSoma = 0, linha, x = 0, teste = 0;
    for (int j = 0; j < 5; j++){
        for (int k = 0; k < 5; k++){
            adicao =  adicao + matriz[j][k];
            x++;
        }
        soma = adicao -  auxSoma;
        auxSoma = adicao;

        if(teste == 0){
            soma_total_linha = soma;
            teste ++;
        }

        if(soma < soma_total_linha){
            soma_total_linha = soma;
            linha = j;
        }
    }

    return linha;
}

int soma_coluna(int matriz[5][5]){
    int adicao_coluna = 0, soma_coluna, aux_soma_coluna = 0, coluna;
    for (int j = 0; j < 5; j++){
        for (int k = 0; k < 5; k++){
           adicao_coluna =  adicao_coluna + matriz[k][j];
        }
        soma_coluna = adicao_coluna -  aux_soma_coluna;
        aux_soma_coluna = adicao_coluna;

        if(soma_coluna > soma_coluna_resultado){
            soma_coluna_resultado = soma_coluna;
            coluna = j;
        }
    }

    return coluna;
}
