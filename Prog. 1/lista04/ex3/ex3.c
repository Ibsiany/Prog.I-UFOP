#include <stdio.h>
#include <stdlib.h>

int soma(int n);

int adicao = 0;

int main()
{
    int n, total;
    printf("Informe um numero inteiro\n");
    scanf("%d", &n);

    total = soma(n);
    printf("O resultado e %d\n", total);

    return 0;
}

int soma(int n){
    for(int i = 1; i<= n; i++){
        adicao = adicao + i;
    }

    return adicao;
}

