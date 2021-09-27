#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float n, valorConvertido;
	printf("Informe a temperatura em graus Fahrenheit:\n");
	scanf("%f", &n);

	valorConvertido = ((5 * n) - 160)/9;
	printf("\nO valor convertido em graus centígrados é %.2f\n", valorConvertido);

	return 0;
}
