#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int tempo;
	float taxa, valor, taxaConvertida, valorFinal, jurosTotal;

	printf("Informe o montante total atual:");
	scanf("%f", &valor);

    printf("Informe o período que o dinheiro renderá(em meses):");
	scanf("%d", &tempo);

    printf("Informe a taxa de juros mensal:");
	scanf("%f", &taxa);

	taxaConvertida = taxa/100;

	jurosTotal = valor * tempo * taxaConvertida;
	valorFinal = valor * (1 + taxaConvertida * tempo);
	printf("O total investido é %.2f \nO montante final é %.2f \nO valor total de juros obtido é %.2f \n", valor, valorFinal, jurosTotal);

	return 0;
}
