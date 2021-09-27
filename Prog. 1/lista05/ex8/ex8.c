#include <stdio.h>
#include <stdlib.h>

int  matricula[5], percentualGanho[5];
float  salario[5], salario_corrigido[5];

void ler_salario( int matricula[], float salario[]);
void reajuste_salarial(int  matricula[], float salario[], float salario_corrigido[], int percentualGanho[]);
void mostrar_informacoes(int  matricula[], float salario[], float salario_corrigido[], int percentualGanho[]);

int main()
{
    ler_salario(matricula, salario);
    reajuste_salarial(matricula, salario,salario_corrigido, percentualGanho);
    mostrar_informacoes(matricula, salario,salario_corrigido, percentualGanho);

    return 0;
}

void ler_salario(int  matricula[], float salario[]){
    for(int i = 0; i < 5; i++){
        printf("\nFuncionario %d:\n", i + 1);
        printf("Informe a matricula:\n");
        scanf("%d", &matricula[i]);
        printf("Informe o salario:\n");
        scanf("%f", &salario[i]);
    }
}

void reajuste_salarial(int  matricula[], float salario[], float salario_corrigido[], int percentualGanho[]){
    int resto, percentual;
    for(int i = 0; i < 5; i++){
        resto = matricula[i] % 2;
        if(resto == 0){
            percentual = (15 * salario[i]) / 100;
            percentualGanho[i] = 15;
            salario_corrigido[i] = salario[i] + percentual;
        } else {
            percentual = (20 * salario[i]) / 100;
            percentualGanho[i] = 20;
            salario_corrigido[i] = salario[i] + percentual;
        }
    }
}

void mostrar_informacoes(int  matricula[], float salario[], float salario_corrigido[], int percentualGanho[]){
    printf("\n\n");

    for(int i = 0; i < 5; i++){
        printf("\nFuncionario %d:\n", i + 1);
        printf("Matricula: %d\n", matricula[i]);
        printf("Salario base: %.2f\n", salario[i]);
        printf("Percentual de aumento: %d\n", percentualGanho[i]);
        printf("Salario corrigido: %.2f\n", salario_corrigido[i]);
    }
}
