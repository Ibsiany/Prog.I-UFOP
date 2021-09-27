#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0, i;
    printf("Informe um numero:\n");
    scanf("%d", &n);

    for(i = 0; i <= n; i++){
        soma = soma + i;
    }

    printf("Soma: %d \n", soma);

    return 0;
}
