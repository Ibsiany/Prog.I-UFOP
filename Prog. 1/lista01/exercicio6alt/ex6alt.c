#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int A, B, nB, nA;
	printf("Informe o valor da variável A:\n");
	scanf("%d", &A);
    printf("Informe o valor da variável B:\n");
	scanf("%d", &B);

    printf("\n\nOs valores iniciais das variáveis: \nA: %d B: %d \n",A, B);

    A = A + B;

    B = A - B;

    A = A - B;

	printf("Os valores finais das variáveis após a troca: \nA: %d B: %d \n",A, B);

	return 0;
}
