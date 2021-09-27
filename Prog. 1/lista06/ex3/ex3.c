#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[50], palavraTrocada[50], palavraSemEspaco[50], palavraTrocadaSemEspaco[50];

void elimina_espacos(char palavra[], char palavraSemEspaco[]);

int main()
{

    int i,j = 0, aux = 0,tamanho, comparacao;

    fflush(stdin);

    printf("Informe a palavra:\n");
    fgets(palavra, 50, stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    palavra[strlen(palavra)]='\0';
    tamanho = strlen(palavra);

    for(i = tamanho - 1, j; j < tamanho; j++, i--){
        palavraTrocada[j] = palavra[i];
    }

    palavraTrocada[tamanho] = '\0';

    elimina_espacos(palavra, palavraSemEspaco);
    elimina_espacos(palavraTrocada, palavraTrocadaSemEspaco);

    comparacao = strcmpi(palavraTrocadaSemEspaco, palavraSemEspaco);

    if(comparacao == 0){
        printf("\nPalindromo.\n");
    } else {
        printf("\nNao Palindromo.\n");
    }

    return 0;
}

void elimina_espacos(char palavra[], char palavraSemEspaco[]){
    int tamanho, indice = 0;
    tamanho = strlen(palavra);

    for(int i = 0; i < tamanho; i++){
        if(palavra[i] != ' '){
            palavraSemEspaco[indice] = palavra[i];
            indice ++;
        }
    }

    palavraSemEspaco[tamanho] = '\0';
}
