#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float raio,altura, pi = 3.14159, volume;
	int repeat;

	printf("Informe o raio da base da lata de �leo.\n");
	scanf("%f", &raio);
	printf("\nInforme a altura da lata de �leo.\n");
    scanf("%f", &altura);

    volume = pi * raio * 2 * altura;

    printf("\nO volume dessa lata de �leo � %.2f\n", volume);

    printf("\nVoc� deseja realizar a opera��o novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };

	return 0;
}
