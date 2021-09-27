#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int code,repeat;

	printf("Informe o código do seu cargo:\n");
	scanf("%d", &code);

    switch(code){
        case 101:
            printf("\nSeu cargo é Vendedor\n");
            break;
        case 102:
            printf("\nSeu cargo é Atendente\n");
            break;
        case 103:
            printf("\nSeu cargo é Auxiliar Técnico\n");
            break;
        case 104:
            printf("\nSeu cargo é Assistente\n");
            break;
        case 105:
            printf("\nSeu cargo é Coordenador de Grupo\n");
            break;
        case 106:
            printf("\nSeu cargo é Gerente\n");
            break;
        default:
            printf("\nCódigo inválido, favor digitar um código válido.\n");
    }

    printf("\nVocê deseja realizar a operação novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };

	return 0;
}
