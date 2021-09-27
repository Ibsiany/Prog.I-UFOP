#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mediaSalario, mediaFilhos, maiorSalario = 0, percentual, numSalario100, salario, numFilho, contador, somaSalario = 0, somaFilho = 0;
    char verificar;

    do{
        printf("\nInforme o salario:\n");
        scanf("%f", &salario);

        printf("Informe o numero de filhos:\n");
        scanf("%f", &numFilho);

        somaSalario = somaSalario + salario;
        somaFilho = somaFilho + numFilho;
        contador++;

        if(salario > maiorSalario){
            maiorSalario = salario;
        }

        if(salario <= 100){
            numSalario100++;
        }

        getchar();
        printf("\nVoce deseja continuar? Digite 's' ou 'S' para sim \n");
        scanf("%c", &verificar);
    }while(verificar == 's' || verificar == 'S');

    mediaSalario = somaSalario/contador;
    mediaFilhos = somaFilho/contador;
    percentual = (100 * numSalario100)/contador;

    printf("\nA media salarial e %.2f \n", mediaSalario);
    printf("A media de filhos e %.2f \n", mediaFilhos);
    printf("O maior salario e %.2f \n", maiorSalario);
    printf("O percentual de pessoas com o salario ate R$100,00 e %.2f%% \n", percentual);

    return 0;
}
