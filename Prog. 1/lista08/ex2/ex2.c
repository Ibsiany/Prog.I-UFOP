#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b;
    int *c, *d;
    printf("Informe o valor da variavel a:");
    scanf("%d", &a);
    c = &a;

    printf("Informe o valor da variavel b:");
    scanf("%d", &b);
    d = &b;

    if(c > d){
        printf("\nO maior endereco e: a. %p\n");
        return;
    } else {
        printf("\nO maior endereco e b.\n");
    }


    return 0;
}
