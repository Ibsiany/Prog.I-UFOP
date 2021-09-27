#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[100];

    fflush(stdin);
    printf("Informe a palavra:\n");
    fgets(palavra, 100, stdin);

    contaVogais(palavra);

    return 0;
}

void contaVogais(char palavra[100]){
    int tamanho, contador = 0;
    tamanho = strlen(palavra);

    for(int i = 0; i < tamanho; i++){
        //toupper colocara tudo maiusulo.
        palavra[i] = toupper(palavra[i]);

        if(palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
            contador++;
        }
    }

    printf("\nA quantidade de vogais digitadas sao: %d\n", contador);
}
