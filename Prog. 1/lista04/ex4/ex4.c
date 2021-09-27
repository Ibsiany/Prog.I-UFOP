#include <stdio.h>
#include <stdlib.h>

char conceito(int nota);

char response;

int main()
{
    int nota;
    char resultado;
    printf("Digite a nota final:\n");
    scanf("%d", &nota);

    resultado = conceito(nota);

    if( resultado != 'N'){
        printf("O conceito do aluno e %c\n", resultado);
    } else {
        printf("Nota invalida");
    }

    return 0;
}

char conceito(int nota){
    switch(nota){
        case 0 ... 49:
            response = 'D';
            break;
        case 50 ... 69:
            response = 'C';
            break;
        case 70 ... 89:
            response = 'B';
            break;
        case 90 ... 100:
            response = 'A';
            break;
        default:
            response = 'N';
            break;
    }

    return response;
}
