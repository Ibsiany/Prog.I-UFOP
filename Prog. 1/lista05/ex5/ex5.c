#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20], i, aux, vetorTroca;

    for(i = 0; i < 20; i++){
        printf("Informe o valor:\n");
        scanf("%d", &n[i]);
    }

    printf("\n\nElementos do array:\n");

    for(i = 0; i < 20; i++){
        printf("%d\n", n[i]);
    }

    for(i = 0; i < 10; i++){
        vetorTroca = 19 - i;
        aux = n[i];
        n[i] = n[vetorTroca];
        n[vetorTroca] = aux;
    }

    printf("\n\nElementos apos a troca:\n");

    for(i = 0; i < 20; i++){
        printf("%d\n", n[i]);
    }

    return 0;
}
