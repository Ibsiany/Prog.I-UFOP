#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int repeat,mes;

	printf("Informe o n�mero equivalente ao m�s que deseja saber:\n");
	scanf("%d", &mes);

	switch(mes){
        case 1:
            printf("\nJaneiro\n");
            break;
        case 2:
            printf("\nFevereiro\n");
            break;
        case 3:
            printf("\nMar�o\n");
            break;
        case 4:
            printf("\nAbril\n");
            break;
        case 5:
            printf("\nMaio\n");
            break;
        case 6:
            printf("\nJunho\n");
            break;
        case 7:
            printf("\nJulho\n");
            break;
        case 8:
            printf("\nAgosto\n");
            break;
        case 9:
            printf("\nSetembro\n");
            break;
        case 10:
            printf("\nOutubro\n");
            break;
        case 11:
            printf("\nNovembro\n");
            break;
        case 12:
            printf("\nDezembro\n");
            break;
        default:
            printf("\nEsse n�mero n�o corresponde a nenhum m�s do ano.\n");
	}

    printf("\nVoc� deseja realizar a opera��o novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };

	return 0;
}
