#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float n, gorjeta, total;
	printf("Qual o valor gasto com as despesas no restaurante? ");
	scanf("%f", &n);

	gorjeta = (n * 10)/ 100;
	total = gorjeta + n;
	printf("O valor da gorjeta é %.2f \nO total a ser pago é %.2f \n", gorjeta, total);

	return 0;
}
