#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[16], m[4][4], i, j, k, y, x, z, operacao, calculo, adicao, auxSoma, soma, continuar, multiplicacao, auxMultiplicacao, produto;

    for (k = 0; k < 4; k++){
        for (j = 0; j < 4; j++){
            printf("Informe o valor da posicao [%d, %d]:\n", k+1, j+1);
            scanf("%d", &m[k][j]);
        }
    }

    do{
        system("cls");
        adicao = 0;
        auxSoma = 0;
        auxMultiplicacao = 0;

        printf("Matriz 4x4:\n");
        for (y = 0; y < 4; y++){
            printf("[");
            for (x = 0; x < 4; x++){
                printf(" %-4d ", m[y][x]);
            }
            printf("]\n");
        }

        printf("\nQual calculo deseja fazer? \n1. Soma.\n2. Multiplicacao.\n\n");
        scanf("%d", &operacao);

        printf("\nOpcoes de calculos disponiveis(Digite o numero correspondente a desejada): \n1. Calculo para cada linha.\n");
        printf("2. Calculo para cada coluna\n");
        printf("3. Calculo para a diagonal principal.\n");
        printf("4. Calculo para a diagonal secundaria.\n");
        printf("5. Calculo para os elementos da borda da matriz.\n");
        printf("6. Calculo para os elementos internos da matriz.\n\n");
        scanf("%d", &calculo);

        printf("\n");
        if(operacao == 1){
            switch(calculo){
                case 1:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            adicao =  adicao + m[i][z];
                        }
                        soma = adicao -  auxSoma;
                        auxSoma = adicao;
                        printf("Soma linha %d: %d\n", i, soma);
                    }
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 2:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            adicao =  adicao + m[z][i];
                        }
                        soma = adicao -  auxSoma;
                        auxSoma = adicao;
                        printf("Soma coluna %d: %d\n", i, soma);
                    }
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 3:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            if( i==z ){
                                adicao =  adicao + m[i][z];
                            }
                        }
                    }
                    printf("A soma da diagonal principal e %d\n", adicao);
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 4:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            if( i + z == 3){
                                adicao =  adicao + m[i][z];
                            }
                        }
                    }
                    printf("A soma da diagonal secundaria e %d\n", adicao);
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 5:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            if( i == 0 || z == 0 || i == 3 || z == 3){
                                adicao =  adicao + m[i][z];
                            }
                        }
                    }
                    printf("A soma para os elementos da borda da matriz e %d\n", adicao);
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 6:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            if( i != 0){
                                if( z != 0 ){
                                    if(i != 3){
                                        if(z != 3){
                                            adicao =  adicao + m[i][z];
                                        }
                                    }
                                }
                            }
                        }
                    }
                    printf("A soma para os elementos internos da matriz e %d\n", adicao);
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                default:
                    continuar = 0;
            }
        } else if(operacao == 2){
            switch(calculo){
                case 1:
                    for (i = 0; i < 4; i++){
                        multiplicacao = 1;
                        for (z = 0; z < 4; z++){
                            multiplicacao =  multiplicacao * m[i][z];
                        }
                        printf("Multiplicacao linha %d: %d\n", i, multiplicacao);
                    }
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 2:
                    for (i = 0; i < 4; i++){
                        multiplicacao = 1;
                        for (z = 0; z < 4; z++){
                            multiplicacao =  multiplicacao * m[z][i];
                        }
                        printf("Multiplicacao coluna %d: %d\n", i, multiplicacao);
                    }
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 3:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            if( i==z ){
                                multiplicacao =  multiplicacao * m[i][z];
                            }
                        }
                    }
                    printf("A multiplicacao da diagonal principal e %d\n", multiplicacao);
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 4:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            if( i + z == 3){
                                multiplicacao =  multiplicacao * m[i][z];
                            }
                        }
                    }
                    printf("A multiplicacao da diagonal secundaria e %d\n", multiplicacao);
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 5:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            if( i == 0 || z == 0 || i == 3 || z == 3){
                                multiplicacao =  multiplicacao * m[i][z];
                            }
                        }
                    }
                    printf("A multiplicacao para os elementos da borda da matriz e %d\n", multiplicacao);
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                case 6:
                    for (i = 0; i < 4; i++){
                        for (z = 0; z < 4; z++){
                            if( i != 0){
                                if( z != 0 ){
                                    if(i != 3){
                                        if(z != 3){
                                            multiplicacao =  multiplicacao * m[i][z];
                                        }
                                    }
                                }
                            }
                        }
                    }
                    printf("A multiplicacao para os elementos internos da matriz e %d\n", multiplicacao);
                    printf("\nDigite 0 para realizar outra operacao e 1 para sair.\n");
                    scanf("%d", &continuar);
                    break;
                default:
                    continuar = 0;
            }
        } else {
            continuar = 0;
        }
    }while(continuar == 0);

    return 0;
}
