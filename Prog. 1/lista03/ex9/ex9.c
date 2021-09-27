#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, fn = 1, x = 0, y = 1,auxAnt;
    printf("Informe o tamanho da sequencia de Fibonacci desejada:\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\n%d\n", fn);

        fn = x + y;
        x = y;
        y = fn;
    }

    return 0;
}
