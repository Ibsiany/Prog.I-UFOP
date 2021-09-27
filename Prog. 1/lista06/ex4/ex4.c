#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transfereParalavra(char palavra[100], char novaPalavra[100]);

int main()
{
    char palavra[100], novaPalavra[100];
    fflush(stdin);

    printf("Informe uma palavra:\n");
    fgets(palavra, 100, stdin);

    transfereParalavra(palavra, novaPalavra);

    return 0;
}

void transfereParalavra(char palavra[100], char novaPalavra[100]){
    int tamanho, i;
    tamanho = strlen(palavra);

    for(i = 0; i < tamanho; i++){
        novaPalavra[i] = palavra[i];
    }

    novaPalavra[tamanho] = '\0';

    printf("\nString em nova variavel: %s\n", novaPalavra);
}
