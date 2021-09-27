#include <stdio.h>
#include <stdlib.h>

void estacao(int dia, int mes);

int main()
{
    int dia, mes;
    printf("Informe o dia atual(em numeros)\n");
    scanf("%d", &dia);

    printf("Informe o mes atual(em numeros)\n");
    scanf("%d", &mes);

    estacao(dia,mes);

    return 0;
}

void estacao(int dia, int mes){

    if(dia > 31 || mes > 12){
         printf("Data invalida.\n");
    } else if((dia >= 23 && mes == 7) || mes >= 8 && (mes <= 12 && dia < 21)){
        printf("%d/%d e primavera.\n", dia, mes);
    } else if((dia >= 21 && mes == 12) || mes >= 1 && (mes <= 3 && dia < 21)){
        printf("%d/%d e verao.\n", dia, mes);
    } else if((dia >= 21 && mes == 3) || mes >= 4 && (mes <= 6 && dia < 21)){
        printf("%d/%d e outono.\n", dia, mes);
    }   else {
        printf("%d/%d e inverno.\n", dia, mes);
    }
}
