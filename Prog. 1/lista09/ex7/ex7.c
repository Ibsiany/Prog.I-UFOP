#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define NUM 11

struct Jogador
{
    char nome[50];
    int numero;
    float altura;
    float peso;
};
int main()
{
    struct Jogador jogadores[NUM];
    float verifica_altura = 9999999999, verifica_peso=0;
    int indice_altura, i, indice_peso;

    for ( i = 0; i < NUM; i++)
    {
        printf("\n");
        printf("Atleta %d\n", i + 1);
        printf("Nome: ");
        fflush(stdin);
        fgets(jogadores[i].nome, 50, stdin);
        printf("Numero da camisa: ");
        scanf("%d", &jogadores[i].numero);
        printf("Altura: ");
        scanf("%f", &jogadores[i].altura);
        printf("Peso: ");
        scanf("%f", &jogadores[i].peso);
    }

    for ( i = 0; i < NUM; i++)
    {
        if (jogadores[i].altura < verifica_altura)
        {
            verifica_altura = jogadores[i].altura;
            indice_altura = i;
        }
        if (jogadores[i].peso > verifica_peso)
        {
            verifica_peso = jogadores[i].peso;
            indice_peso = i;
        }
    }

    for ( i = 0; i < NUM; i++)
    {
        printf("\n");
        printf("Atleta %d\n", i + 1);
        printf("Nome: %s", jogadores[i].nome);
        printf("Numero da camisa: %d\n", jogadores[i].numero);
        printf("Altura:  %.2f\n", jogadores[i].altura);
        printf("Peso: %.2f\n", jogadores[i].peso);
    }

    printf("\nInicial do(a) jogador mais baixo:%c\n",  jogadores[indice_altura].nome[0]);
    printf("Numero do(a) jogador mais pesado:%d\n", jogadores[indice_peso].numero);

    return 0;
}