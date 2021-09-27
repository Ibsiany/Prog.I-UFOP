#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

typedef struct Aluno
{
    char nome[50];
    char curso[50];
    struct Data data;
} Aluno;

Aluno busca_aluno_mais_novo(Aluno alunos[], int qtd)
{
    int idade, indice, idade_verificacao = 0;
    for (int i = 0; i < qtd; i++)
    {
        idade = (alunos[i].data.ano * 365) + (alunos[i].data.mes * 30) + alunos[i].data.dia;
        if (idade > idade_verificacao)
        {
            idade_verificacao = idade;
            indice = i;
        }
    }

    return alunos[indice];
}

void cadastro_de_alunos(Aluno *alunos, int qtd)
{

    printf("\n******************\nCADASTRO DE ALUNOS\n******************\n");
    for (int i = 0; i < qtd; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        fflush(stdin);
        fgets(alunos[i].nome, 50, stdin);
        printf("Curso: ");
        fgets(alunos[i].curso, 50, stdin);
        printf("Data de nascimento\n");
        printf("Dia(1-31): ");
        scanf("%d", &alunos[i].data.dia);
        printf("Mes(1-12): ");
        scanf("%d", &alunos[i].data.mes);
        printf("Ano(2xxx): ");
        scanf("%d", &alunos[i].data.ano);
    }
}
int main()
{
    struct Aluno *alunos;
    Aluno aluno;
    int qtd;

    printf("Quantos alunos voce deseja cadastrar: ");
    scanf("%d", &qtd);

    alunos = (Aluno *)malloc(qtd * sizeof(Aluno));

    cadastro_de_alunos(alunos, qtd);
    aluno = busca_aluno_mais_novo(alunos, qtd);

    printf("\n****************** Alunos ******************\n");
    for (int i = 0; i < qtd; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Curso: %s", alunos[i].curso);
        printf("Data de nascimento: %d/%d/%d\n", alunos[i].data.dia, alunos[i].data.mes, alunos[i].data.ano);
    }

    printf("\n****************** Aluno mais novo ******************\n");
    printf("Nome: %s", aluno.nome);
    printf("Curso: %s", aluno.curso);
    printf("Data de nascimento: %d/%d/%d\n", aluno.data.dia, aluno.data.mes, aluno.data.ano);

    free(alunos);
    return 0;
}