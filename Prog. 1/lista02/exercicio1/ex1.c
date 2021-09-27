#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int horas,minutos, minutosHoras, minutosTotais;
	printf("Informe a hora e o(s) minuto(s) no momento");
    printf("\nHora(s): ");
	scanf("%d", &horas);
    printf("Minuto(s): ");
	scanf("%d", &minutos);

	minutosHoras = (horas*60);
	minutosTotais = minutosHoras + minutos;

    printf("Do inicio do dia ate a hora infomada já se passaram %d minutos \n",minutosTotais);

	return 0;
}
