#include <stdio.h>

#define NUM_ALUNOS 4
#define NUM_COLUNAS 5

void le_notas(int num_notas, float controle[][num_notas]);
void calcula_media(int num_notas, float controle[][num_notas]);
void exibe_relatorio(int num_notas, float controle[][num_notas]);
void exibe_media_global(int num_notas, float controle[][num_notas]);

int main(){
    int num_notas = NUM_COLUNAS + 1;
    float controle[NUM_ALUNOS][num_notas];
    le_notas(num_notas, controle);
    calcula_media(num_notas, controle);
    exibe_relatorio(num_notas, controle);
    exibe_media_global(num_notas,controle);
    return 0;
}

void le_notas(int num_notas,float controle[][num_notas]){
    for(int i = 0; i<NUM_ALUNOS; i++){
        for(int j=0; j<num_notas-1; j++){
            printf("Digite a nota %d do aluno %d: ",(j+1), (i+1));
            scanf("%f", &controle[i][j]);
        }
        printf("\n");
    }
}

void calcula_media(int num_notas,float controle[][num_notas]){
    float contador=0;
    for(int i =0; i < NUM_ALUNOS; i++){
        contador=0;
        for(int j=0; j<num_notas - 1; j++){
            contador += controle[i][j];
        }
        controle[i][num_notas-1] = contador/(num_notas-1);
    }
}

void exibe_relatorio(int num_notas,float controle[][num_notas]){
    for(int i = 0; i < NUM_ALUNOS; i++){
        printf("Aluno %d\n\n", i+1);
        for(int j=0; j<num_notas-1; j++){
            printf("\tProva %d: %.2f\n", (j+1), controle[i][j]);
        }
        printf("\tMedia: %.2f\n", controle[i][num_notas-1]);
    }
}

void exibe_media_global(int num_notas, float controle[][num_notas]){
    float soma = 0, media;
    int i;
    for (i = 0; i < NUM_ALUNOS; i++){
        soma+=controle[i][num_notas-1];
    }
    media=soma/NUM_ALUNOS;
    printf("Media global e: %.2f", media);
}
