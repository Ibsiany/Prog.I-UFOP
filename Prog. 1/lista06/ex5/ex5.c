#include <stdio.h>
#include <stdlib.h>

char palavra[100], palavraNova[100];

void elimina_espacos(char palavra[], char palavraNova[]);

int main()
{
    fflush(stdin);
    printf("Informe o texto:\n");
    fgets(palavra, 100, stdin);

    elimina_espacos(palavra, palavraNova);

    return 0;
}

void elimina_espacos(char palavra[], char palavraNova[]){
    int tamanho, indice = 0;
    tamanho = strlen(palavra);

    for(int i = 0; i < tamanho; i++){
        if(palavra[i] != ' '){
            palavraNova[indice] = palavra[i];
            indice ++;
        }
    }

    palavraNova[tamanho] = '\0';

    printf("\nTexto sem espacos: %s\n", palavraNova);
}
