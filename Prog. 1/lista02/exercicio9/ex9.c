#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int repeat,x,y;

	printf("Informe os valores do par ordenado(x e y): \n");
	printf("x:");
	scanf("%d", &x);
	printf("y:");
	scanf("%d", &y);

	if(x == 0 && y == 0){
	    printf("\nO par ordenado (%d, %d) está na origem.\n",x,y);
	} else if(x >= 0 && y >= 0){
        printf("\nO par ordenado (%d, %d) está no primeiro quadrante.\n",x,y);
	} else if(x <= 0 && y >= 0){
        printf("\nO par ordenado (%d, %d) está no segundo quadrante.\n",x,y);
	} else if(x < 0 && y < 0){
        printf("\nO par ordenado (%d, %d) está no terceiro quadrante.\n",x,y);
	} else if(x >= 0 && y <= 0){
	    printf("\nO par ordenado (%d, %d) está no quarto quadrante.\n",x,y);
	}

    printf("\nVocê deseja realizar a operação novamente? (Digite 1 para sim)\n");
    scanf("%d", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };

	return 0;
}
