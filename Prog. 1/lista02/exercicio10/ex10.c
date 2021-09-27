#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int n1,n2,repeat,soma, media, produto, divisao, resto;

	printf("Informe dois número entre 1 e 10.\n");
    printf("Primeiro número:");
	scanf("%d", &n1);
    printf("Segundo número:");
    scanf("%d", &n2);



    soma = n1  + n2;

    if(n1 > 1 && n1 < 10 && n2 > 1 && n2 < 10){
        if(soma < 8){
            media = (n1 + n2)/2;
            printf("\nA soma entre %d e %d é menor que 8, sua média é %d.\n", n1, n2, media);
        } else if(soma == 8){
            produto = n1 * n2;
            printf("\nA soma entre %d e %d é igual a 8, o produto da multiplicação dos números é %d.\n", n1, n2, produto);
        } else if(soma > 8){
            if(n1 > n2) {
                divisao = n1 / n2;
                resto = n1 % n2;
                printf("\nA soma entre %d e %d é maior que 8, o resultado da divisão entre eles é %d,%d.\n", n1, n2, divisao, resto);
            } else {
                divisao = n2 / n1;
                resto = n2 % n1;
                printf("\nA soma entre %d e %d é maior que 8, o resultado da divisão entre eles é %d,%d.\n", n1, n2, divisao,resto);
            }
        }
    } else {
        printf("\nO número não está entre 1 e 10.\n");
    }


    printf("\nVocê deseja realizar a operação novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };

	return 0;
}
