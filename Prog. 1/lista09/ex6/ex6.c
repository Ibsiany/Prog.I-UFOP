#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Endereco
{
    char rua[50];
    int numero;
    char bairro[30];
    char cidade[30];
};

typedef struct Aluno
{
    char nome[50];
    char curso[50];
    int semestre;
    struct Endereco endereco;
    char data[12];
} Aluno;

Aluno aluno_mais_antigo(Aluno alunos[], int qtd)
{
    int semestre = 0, indice;
    for (int i = 0; i < qtd; i++)
    {
        if (alunos[i].semestre > semestre)
        {
            semestre = alunos[i].semestre;
            indice = i;
        }
    }

    return alunos[indice];
}

void exibe_dados_aluno(Aluno aluno)
{
    aluno.nome[strcspn(aluno.nome, "\n")] = 0;
    aluno.curso[strcspn(aluno.curso, "\n")] = 0;
    aluno.endereco.rua[strcspn(aluno.endereco.rua, "\n")] = 0;
    aluno.endereco.bairro[strcspn(aluno.endereco.bairro, "\n")] = 0;

    printf("Nome: %s - %s - semestre %d\n", aluno.nome, aluno.curso, aluno.semestre);
    printf("Endereco: %s, numero %d - Bairro: %s\n", aluno.endereco.rua, aluno.endereco.numero, aluno.endereco.bairro);
}
void exibe_alunos(Aluno *alunos, int qtd)
{
    printf("\n****************************\nDADOS DOS ALUNOS CADASTRADOS\n****************************\n");
    for (int i = 0; i < qtd; i++)
    {
        printf("\n### DADOS DO ALUNO %d ### \n", i + 1);
        exibe_dados_aluno(alunos[i]);
    }
}

void cadastra_alunos(Aluno *alunos, int qtd)
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
        printf("Semestre: ");
        scanf("%d", &alunos[i].semestre);
        printf("Data de nascimento: ");
        fflush(stdin);
        fgets(alunos[i].data, 12, stdin);
        printf("Rua: ");
        fflush(stdin);
        fgets(alunos[i].endereco.rua, 50, stdin);
        printf("Numero: ");
        scanf("%d", &alunos[i].endereco.numero);
        printf("Bairro: ");
        fflush(stdin);
        fgets(alunos[i].endereco.bairro, 50, stdin);
        printf("Cidade: ");
        fgets(alunos[i].endereco.cidade, 50, stdin);
    }
}
int main()
{
    struct Aluno *alunos;
    Aluno aluno;
    int qtd;
    printf("Quantos alunos voce deseja cadastrar? ");
    scanf("%d", &qtd);

    alunos = (Aluno *)malloc(qtd * sizeof(Aluno));

    cadastra_alunos(alunos, qtd);

    exibe_alunos(alunos, qtd);

    aluno = aluno_mais_antigo(alunos, qtd);

    printf("\n-----------------------------------\n");
    printf("\n### DADOS DO ALUNO MAIS ANTIGO ### \n");
    exibe_dados_aluno(aluno);

    free(alunos);
    return 0;
}