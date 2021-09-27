#include <stdio.h>
#include <stdlib.h>

int sequenciaFibonacci(int n);

int main()
{
    int n, i;
    printf("Informe o tamanho da sequencia de Fibonacci desejada:\n");
    scanf("%d", &n);

    sequenciaFibonacci(n);

    return 0;
}

int sequenciaFibonacci(int n){
    int fn = 1, x = 0, y = 1;
    for(int i = 0; i < n; i++){
        printf("\n%d\n", fn);

        fn = x + y;
        x = y;
        y = fn;
    }
}
