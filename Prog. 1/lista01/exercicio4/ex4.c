#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float salmin, salario, calculo;
	printf("Digite o valor do salário mínimo: ");
	scanf("%f", &salmin);
    printf("Digite o valor do seu salário: ");
	scanf("%f", &salario);
	calculo = salario / salmin;
	printf("No momento você ganha %.2f salário(s) mínimo(s)",calculo);

	return 0;
}
