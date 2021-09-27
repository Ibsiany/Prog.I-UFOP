#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int a,b,c, repeat;

	printf("Informe os lados de um triângulo.\n");
    printf("Lado A:");
	scanf("%d", &a);
	printf("Lado B:");
    scanf("%d", &b);
    printf("Lado C:");
    scanf("%d", &c);

    if(a == b && a == c){
        printf("\nO triângulo é um EQUILÁTERO.\n");
    } else if(a == b || a == c || b == c){
        printf("\nO triângulo é um ISÓSCELES.\n");
    } else {
        printf("\nO triângulo é um ESCALENO.\n");
    }

    printf("\nVocê deseja realizar a operação novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };


	return 0;
}
