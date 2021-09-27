#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int n1, n2, soma, sub, produto,quociente, resto;
	printf("Digite o primeiro número:\n");
	scanf("%d", &n1);
    printf("Digite o segundo número:\n");
	scanf("%d", &n2);

	soma = n1 + n2;
	sub = n1 - n2;
	produto = n1 * n2;
	quociente = n1 / n2;
	resto = n1 % n2;
	printf("\n%d + %d = %d \n%d - %d = %d \n%d * %d = %d \n%d / %d = %d,%d\n",n1, n2, soma,n1, n2, sub,n1, n2, produto,n1, n2, quociente, resto);

	return 0;
}
