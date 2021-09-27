#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, resultado, divisao, num;
    do{

    printf("n1:\n");
    scanf("%d", &n1);
    printf("n2:\n");
    scanf("%d", &n2);

    resultado = n1 % n2;
    divisao = n1 / n2;

    printf("resultado: %d\n", divisao);
    printf("resultado 0 e 1: %d\n", resultado);

    printf("Digite:\n");
    scanf("%d", &num);
    }while(num != 0);

    return 0;
}
