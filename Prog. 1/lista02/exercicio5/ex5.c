#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int a,b,c, repeat;

	printf("Informe os lados de um tri�ngulo.\n");
    printf("Lado A:");
	scanf("%d", &a);
	printf("Lado B:");
    scanf("%d", &b);
    printf("Lado C:");
    scanf("%d", &c);

    if(a == b && a == c){
        printf("\nO tri�ngulo � um EQUIL�TERO.\n");
    } else if(a == b || a == c || b == c){
        printf("\nO tri�ngulo � um IS�SCELES.\n");
    } else {
        printf("\nO tri�ngulo � um ESCALENO.\n");
    }

    printf("\nVoc� deseja realizar a opera��o novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };


	return 0;
}
