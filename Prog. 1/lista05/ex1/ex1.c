#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20], i, resto, contadorPar = 0, impar;

    for(i = 0; i < 20; i++){
        printf("Informe o valor:\n");
        scanf("%d", &n[i]);
    }

    printf("\n\nElementos do array:\n");

    for(i = 0; i < 20; i++){
        printf("%d\n", n[i]);
    }

    for(i = 0; i < 20; i++){
        resto = n[i] % 2;
        if(resto == 0){
            contadorPar++;
        }
    }

    impar = 20 - contadorPar;

    printf("\nImpar: %d\nPar:%d\n", impar, contadorPar);


    return 0;
}
