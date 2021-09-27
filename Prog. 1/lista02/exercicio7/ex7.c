#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int code,salario,repeat, total;

	printf("Informe o código do seu cargo:\n");
	scanf("%d", &code);
	printf("Informe seu salário atual:\n");
    scanf("%d", &salario);

    switch(code){
        case 1:
            total = ((50 * salario)/100)+salario;
            printf("\nSeu salário atual é %d\n", total);
            break;
        case 2:
            total = ((30 * salario)/100)+salario;
            printf("\nSeu salário atual é %d\n", total);
            break;
        case 3:
            total = ((20 * salario)/100)+salario;
            printf("\nSeu salário atual é %d\n", total);
            break;
        default:
            printf("\nCódigo invalido!\n");
    }

    printf("\nVocê deseja realizar a operação novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };

	return 0;
}
