#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char str[100], c;
int pos;

void strins(char str[], char c, int pos);

int main()
{
    printf("Informe uma palavra:\n");
    scanf("%s", &str);

    printf("Informe um valor:\n");
    scanf("%d", &pos);

    getchar();
    printf("Informe uma letra:\n");
    scanf("%c", &c);

    strins(str, c, pos);

    printf("\nNova palavra: %s\n", str);

    return 0;
}

void strins(char str[], char c, int pos){
    char aux,aux2;
    int tamanho;
    tamanho = strlen(str);

    for( int i = pos; i <= tamanho; i++){
        if(i == pos){
            aux =  str[i];
            str[i] = c;
        } else {
            aux2 = str[i];
            printf("%c",aux);
            str[i] = aux;
            aux = aux2;
        }
    }
    str[tamanho+1] = '\0';
}
