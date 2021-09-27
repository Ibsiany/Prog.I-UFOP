#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, produto = 1, i, numeroBaseMaior, numeroBaseMenor, resultado = 0,valorAnterior = 1;
    printf("Informe n1:\n");
    scanf("%d", &n1);
    printf("Informe n2:\n");
    scanf("%d", &n2);

    if( n1 > n2){
        numeroBaseMaior = n1;
        numeroBaseMenor = n2;
    } else if(n2 > n1){
        numeroBaseMaior = n2;
        numeroBaseMenor = n1;
    }

    if(n1 != n2){
        for( i = numeroBaseMenor; i <= numeroBaseMaior; i++){
            if(i == 0){
                continue; //professor, sei que nao ensinou essa parte mas foi a saída mais simples que encontrei
            }
            produto = valorAnterior * i;

            valorAnterior = produto;
        }

        printf("resultado = %d \n", produto);
    } else {
        printf("resultado = %d \n", n1);
    }


    return 0;
}
