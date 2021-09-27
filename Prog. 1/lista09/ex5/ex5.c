#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Atleta
{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};
int main()
{
    struct Atleta *atletas;
    int n, verifica_idade = 0, indice, indice_altura;
    float verifica_altura = 0;

    fflush(stdin);

    printf("Informe a quantidade de atletas:\n");
    scanf("%d", &n);

    atletas = (int *)malloc(n * sizeof(int));

    if (atletas == NULL)
    {
        printf("Memoria insuficiente:\n");
        return -1;
    };

    for (int i = 0; i < n; i++)
    {
        getchar();
        printf("\n");
        printf("Nome do(a) atleta %d: ", i + 1);
        fgets(atletas[i].nome, 50, stdin);
        printf("Esporte do(a) atleta %d: ", i + 1);
        fgets(atletas[i].esporte, 50, stdin);
        printf("Idade do(a) atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);
        printf("Altura do(a) atleta %d: ", i + 1);
        scanf("%f", &atletas[i].altura);
    }

    for (int i = 0; i < n; i++)
    {
        if (atletas[i].idade > verifica_idade)
        {
            verifica_idade = atletas[i].idade;
            indice = i;
        }
        if (atletas[i].altura > verifica_altura)
        {
            verifica_altura = atletas[i].altura;
            indice_altura = i;
        }
    }

    printf("\n-------------------------ATLETA MAIS VELHO-------------------------\n");
    printf("Atleta %d\n", indice + 1);
    printf("Nome: %s", atletas[indice].nome);
    printf("Esporte: %s", atletas[indice].esporte);
    printf("Idade: %d\n", atletas[indice].idade);
    printf("Altura: %.2f\n", atletas[indice].altura);

    printf("\n-------------------------ATLETA MAIS ALTO-------------------------\n");
    printf("Atleta %d\n", indice_altura + 1);
    printf("Nome: %s", atletas[indice_altura].nome);
    printf("Esporte: %s", atletas[indice_altura].esporte);
    printf("Idade: %d\n", atletas[indice_altura].idade);
    printf("Altura: %.2f\n", atletas[indice_altura].altura);

    free(atletas);

    return 0;
}