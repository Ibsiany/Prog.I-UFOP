#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float salmin, salario, calculo;
	printf("Digite o valor do sal�rio m�nimo: ");
	scanf("%f", &salmin);
    printf("Digite o valor do seu sal�rio: ");
	scanf("%f", &salario);
	calculo = salario / salmin;
	printf("No momento voc� ganha %.2f sal�rio(s) m�nimo(s)",calculo);

	return 0;
}
