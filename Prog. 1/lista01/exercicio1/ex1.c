#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
	int n, before, after;
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	before = n - 1;
	after = n + 1;
	printf("O n�mero que voc� digitou foi  %d \nO n�mero anterior �: %d \nO depois dele �: %d",n, before, after);

	return 0;
}