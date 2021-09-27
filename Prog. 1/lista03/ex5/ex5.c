#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float peso, soma;
    char continuar;

    do{
        printf("Informe sua idade\n");
        scanf("%d", &idade);
        if(idade > 30){
            printf("Informe o peso\n");
            scanf("%f", &peso);

            soma = soma + peso;

            printf("A soma do peso e %.2f\n", soma);

            getchar();
            printf("\nVoce deseja continuar? Digite 's' para sim ou 'n' para sair\n");
            scanf("%c", &continuar);

        } else {
            printf("\nIdade nao adequada.\n");
            printf("A soma do peso e %.2f\n", soma);
        }
    }while(continuar == 's' && continuar != 'n');

    return 0;
}
