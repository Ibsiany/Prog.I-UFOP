#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float n, valorConvertido;
	printf("Informe a temperatura em graus centígrados:\n");
	scanf("%f", &n);

	valorConvertido = ((9 * n) + 160)/5;
	printf("\nO valor convertido em graus Fahrenheit é %.2f \n", valorConvertido);

	return 0;
}
