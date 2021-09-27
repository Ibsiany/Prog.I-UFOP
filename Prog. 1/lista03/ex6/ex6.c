#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, soma = 0, media,percentualPositivo, percentualNegativo, positivos=0, negativos=0, contador = -1;

    do{
        printf("Informe um valor:\n");
        scanf("%f", &n);

        soma = soma + n;
        contador++;

        if(n > 0){
            positivos++;
        } else if(n < 0){
            negativos++;
        }
    }while( n != 0);


    media = soma/contador;

    percentualPositivo = (100 * positivos)/contador;
    percentualNegativo = (100 * negativos)/contador;

    printf("A media e %.2f\n", media);
    printf("A quantidade de numeros positivos e %.2f\n", positivos);
    printf("A quantidade de numeros negativos e %.2f\n", negativos);
    printf("O percentual de numeros positivos e %.2f%%\n", percentualPositivo);
    printf("O percentual de numeros negativos e %.2f%%\n", percentualNegativo);

    return 0;
}
