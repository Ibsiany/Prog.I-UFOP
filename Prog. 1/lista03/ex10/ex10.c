#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, fatorial = 1;
    printf("Informe um valor inteiro positivo:\n");
    scanf("%d", &n);

    if(n > 0){
        for(i = 1; i <= n; i++){
            fatorial = fatorial * i;
        }
        printf("%d! e %d", n, fatorial);
    } else {
        printf("\nValor invalido!\n");
    }


    return 0;
}
