#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0, resto, media, mediaPares, somaPares = 0, nPar=0, nImpar=0, contador = -1;

    do{
        printf("Informe um valor inteiro positivo:\n");
        scanf("%d", &n);

        if(n < 0){
            printf("Numero invalido.", media);
            break;
        }

        resto = n % 2;

        soma = soma + n;
        contador++;

        if(resto == 0 && n != 0){
            somaPares = somaPares + n;
            nPar++;
        } else if(resto != 0 && n != 0){
            nImpar++;
        }
    }while( n != 0);

    if(n >= 0){
        media = soma/contador;
        mediaPares = somaPares / nPar;

        printf("A media geral e %d\n", media);
        printf("A media dos numeros pares e %d\n", mediaPares);
        printf("A quantidade de numeros pares sao %d\n", nPar);
        printf("A quantidade de numeros impares sao %d\n", nImpar);
    }


    return 0;
}
