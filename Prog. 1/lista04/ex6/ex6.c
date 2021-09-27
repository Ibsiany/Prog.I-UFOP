#include <stdio.h>
#include <stdlib.h>

int contaimpar(int n1, int n2);

int main()
{
    int n1, n2, impar;
    printf("Informe n1:\n");
    scanf("%d", &n1);

    printf("Informe n2:\n");
    scanf("%d", &n2);

    impar = contaimpar(n1, n2);

    printf("Contem %d numeros impares entre %d e %d\n", impar, n1, n2);

    return 0;
}

int contaimpar(int n1, int n2){
    int auxMenor, auxMaior, contador = 0;
    if(n1 > n2){
        auxMaior = n1;
        auxMenor = n2;
    } else if(n2 > n1){
        auxMaior = n2;
        auxMenor = n1;
    }

    for(int i = auxMenor; i <= auxMaior; i++){
        if(i % 2 != 0){
            contador++;
        }
    }

    return contador;
}
