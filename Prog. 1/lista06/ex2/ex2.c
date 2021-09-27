#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[50], palavraTrocada[50];
    int i,j, tamanho, comparacao;

    printf("Informe a palavra:\n");
    scanf("%s", &palavra);

    palavra[strlen(palavra)]='\0';
    tamanho = strlen(palavra);

    for(i = tamanho - 1, j = 0; j < tamanho; j++, i--){
        palavraTrocada[j] = palavra[i];
    }

    palavraTrocada[tamanho] = '\0';

    comparacao = strcmpi(palavraTrocada, palavra);

    if(comparacao == 0){
        printf("Palindromo.\n");
    } else {
        printf("Nao Palindromo.\n");
    }

    return 0;
}
