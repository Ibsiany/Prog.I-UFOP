#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[100];

void codifica(char str[]);

int main()
{
    fflush(stdin);
    printf("Informe uma palavra:\n");
    fgets(palavra, 100, stdin);

    codifica(palavra);

    printf("\nPalavra decoficada: \n%s", palavra);

    return 0;
}

void codifica(char palavra[]){
    int tamanho = strlen(palavra);

    for( int i = 0; i < tamanho; i++){
        palavra[i] = toupper(palavra[i]);
        if(palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
            palavra[i] = 'P';
        }
    }
}
