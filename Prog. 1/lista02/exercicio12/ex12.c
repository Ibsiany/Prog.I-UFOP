#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int code,repeat;

	printf("Informe o c�digo do seu cargo:\n");
	scanf("%d", &code);

    switch(code){
        case 101:
            printf("\nSeu cargo � Vendedor\n");
            break;
        case 102:
            printf("\nSeu cargo � Atendente\n");
            break;
        case 103:
            printf("\nSeu cargo � Auxiliar T�cnico\n");
            break;
        case 104:
            printf("\nSeu cargo � Assistente\n");
            break;
        case 105:
            printf("\nSeu cargo � Coordenador de Grupo\n");
            break;
        case 106:
            printf("\nSeu cargo � Gerente\n");
            break;
        default:
            printf("\nC�digo inv�lido, favor digitar um c�digo v�lido.\n");
    }

    printf("\nVoc� deseja realizar a opera��o novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };

	return 0;
}
