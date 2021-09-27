#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct People {
    char nome[50];
    int idade;
    char endereco[100];
};

int main()
{
    struct People people;
    fflush(stdin);
    
    printf("Informe o nome:\n");
    fgets(people.nome,50, stdin);

    printf("Informe a idade:\n");
    scanf("%d", &people.idade);

    getchar();
    printf("Informe o endereco:\n");
    fgets(people.endereco,100, stdin);

    printf("\n\nNome: %s\nIdade: %d\nEndereco:%s", people.nome, people.idade, people.endereco);
    return 0;
}
