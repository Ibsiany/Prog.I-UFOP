#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float a,b,c, delta, raiz_linha, raiz_duas_linhas;
	int repeat;

	printf("Informe respectivamente os valores de a, b e c da equação de segundo grau.\n");
    printf("a:");
	scanf("%f", &a);
	printf("b:");
    scanf("%f", &b);
    printf("c:");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0){
        printf("\nNão existem raízes reais.\n");
    } else if (delta == 0){
        raiz_linha = (- b )/(2 * a);
        printf("\nSó existe uma raiz, o resultado é %.2f\n", raiz_linha);
    } else {
        raiz_linha = (- b + delta)/(2 * a);
        raiz_duas_linhas = (- b - delta)/(2 * a);
        printf("\nRaiz linha: %.2f\nRaiz duas linhas: %.2f\n ", raiz_linha, raiz_duas_linhas);
    };

    printf("\nVocê deseja realizar a operação novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };

	return 0;
}
