#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, auxNum, i;

    printf("Informe um numero:\n");
    scanf("%d", &n);

    auxNum = n;

    for(i = 1; i< 10; i++){
        printf("Informe um numero:\n");
        scanf("%d", &n);

        if(n > auxNum){
            auxNum = n;
        }
    }

    printf("O maior numero e: %d\n", auxNum);

    return 0;
}
