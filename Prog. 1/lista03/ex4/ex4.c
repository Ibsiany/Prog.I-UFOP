#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, contador = 0, foraIntervalo;

    for(i = 0; i < 10; i++){
        printf("Informe um numero:\n");
        scanf("%d", &n);

        if(n >= 10 && n <= 20){
            contador = contador + 1;
        }
    }

    foraIntervalo = 10 - contador;

    printf("A quantidade de numeros no intervalo de [10,20] sao: %d\nA quantidade de numeros fora do intervalo de [10,20] sao %d \n", contador, foraIntervalo);

    return 0;
}
