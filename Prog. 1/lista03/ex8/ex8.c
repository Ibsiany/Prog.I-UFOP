#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, maioSalario = 0;

    do{
        printf("Informe o salario:\n");
        scanf("%f", &salario);

        if(salario > maioSalario){
            maioSalario = salario;
        }

    }while(salario != -1);

    printf("\nO maior salario e %.2f\n", maioSalario);


    return 0;
}
