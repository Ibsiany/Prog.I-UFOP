#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, produto;
    printf("Informe um numero:\n");
    scanf("%d", &n);

    for(i = 0; i < 11; i ++){
        produto = n * i;
        printf("%d * %d = %d\n", i,n,produto);
    }

    return 0;
}
