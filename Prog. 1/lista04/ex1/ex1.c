#include <stdio.h>
#include <stdlib.h>

int idadeEmDias(int anos,int meses, int dias);

int main()
{
    int anos, meses, dias, idade;
    printf("Informe uma idade exata em anos:\n");
    scanf("%d", &anos);
    printf("Informe o restante da idade em meses:\n");
    scanf("%d", &meses);
    printf("Informe o restante da idade que restou em dias:\n");
    scanf("%d", &dias);

    idade = idadeEmDias(anos, meses, dias);
    printf("A idade em dias e: %d\n", idade);

    return 0;
}

int idadeEmDias(int anos,int meses, int dias){
    int total = (anos * 365) + (meses * 30) + dias;

    return total;
}

