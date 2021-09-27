#include <stdio.h>
#include <stdlib.h>

int somaintervalo(int n1, int n2);

int main()
{
    int n1, n2, total;
    printf("Informe n1:\n");
    scanf("%d", &n1);

    printf("Informe n2:\n");
    scanf("%d", &n2);

    total = somaintervalo(n1, n2);

    printf("No intervalo entre %d e %d\ a soma total e %d \n", n1, n2, total);

    return 0;
}

int somaintervalo(int n1, int n2){
    int auxMenor, auxMaior, soma = 0;
    if(n1 > n2){
        auxMaior = n1;
        auxMenor = n2;
    } else if(n2 > n1){
        auxMaior = n2;
        auxMenor = n1;
    }

    for(int i = auxMenor; i <= auxMaior; i++){
        soma = soma + i;
    }

    return soma;
}
