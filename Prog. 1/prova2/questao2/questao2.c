#include <stdio.h>
#include <stdlib.h>

int contc(char str[], char c);

int main()
{
    int numero_de_vezes;
    char c = 'c', str[50];
    fflush(stdin);

    printf("Informe uma palavra:\n");
    fgets(str, 50, stdin);

    numero_de_vezes = contc(str, c);

    printf("O numero de vezes que a letra %c aparece e: %d\n", c, numero_de_vezes);

    return 0;
}

int contc(char str[], char c){
    int tamanho, i, contador = 0;
    char aux;
    tamanho = strlen(str);

    for(i = 0; i < tamanho; i++){
        aux = str[i];
        if(aux == c){
            contador ++;
        }
    }

    return contador;
}
