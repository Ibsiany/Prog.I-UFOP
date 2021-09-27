#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int n, repeat;

	printf("Informe um número:\n");
	scanf("%d", &n);

	switch(n){
        case 1 ... 9:
            printf("\nO número %d está entre 0 e 10. \n", n);
            break;
        case 11 ... 99:
            printf("\nO número %d está entre 10 e 100. \n", n);
            break;
        case 101 ... 999:
            printf("\nO número %d está entre 100 e 1000. \n", n);
            break;
        case 1001 ... 9999:
            printf("\nO número %d está entre 1000 e 10000.\n", n);
            break;
        default:
            printf("\nO número %d não se encaixa em nenhuma das condições. \n", n);
	}

    printf("\nVocê deseja realizar a operação novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };


	return 0;
}
