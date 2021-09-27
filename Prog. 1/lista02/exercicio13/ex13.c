#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float nota, repeat;

	printf("Informe a nota do aluno:\n");
	scanf("%f", &nota);

	if(nota >= 9 && nota <= 10){
       printf("\nConceito A\n");
	} else if(nota >= 7 && nota <= 8.9) {
	    printf("\nConceito B\n");
	} else if(nota >= 5 && nota <= 6.9) {
	    printf("\nConceito C\n");
	} else if(nota < 5) {
	    printf("\nConceito D\n");
	} else {
	    printf("\nNota inválida.\n");
	}

    printf("\nVocê deseja realizar a operação novamente? (Digite 1 para sim)\n");
    scanf("%f", &repeat);

    if(repeat == 1){
        system("cls");
        main();
    };


	return 0;
}
