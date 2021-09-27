#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float n, percentual, desconto, total;
	printf("Digite o valor atual do produto: ");
	scanf("%f", &n);

    printf("Digite o valor do percentual de desconto do produto: ");
	scanf("%f", &percentual);

	desconto = (n * percentual)/ 100;
	total = n - desconto;
	printf("O novo valor do produto é %.2f \n", total);

	return 0;
}
