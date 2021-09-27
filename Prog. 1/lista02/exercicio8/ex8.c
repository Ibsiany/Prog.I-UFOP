#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	char name;
	int idade, peso;

	printf("Informe a primeira letra do seu nome:\n");
	scanf("%c", &name);
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    printf("Qual o seu peso?\n");
    scanf("%d", &peso);

    if(idade >= 18 && idade <= 67 && peso >= 50){
        printf("\nOba, você pode ser doador(a) de sangue.\n");
    } else {
        printf("\nAh que pena, você não pode ser doador(a) de sangue.\n");
    }

	return 0;
}
