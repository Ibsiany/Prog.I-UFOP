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

    nA=A;
    nB=B;
    A = B;
    B = nA;

	printf("Os valores iniciais das variáveis: \nA: %d B: %d \nOs valores finais das variáveis após a troca: \nA: %d B: %d \n",nA, nB, A, B);

	return 0;
}
