#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20], i, nDigitado, media, somatorio = 0;

    for(i = 0; i < 20; i++){
        printf("Informe o valor:\n");
        scanf("%d", &nDigitado);

        if(nDigitado < 0){
            i = i - 1;
        } else {
            somatorio = somatorio + nDigitado;
            n[i] = nDigitado;
        }
    }

    printf("\nElementos do array:\n");
    for(i = 0; i < 20; i++){
        printf("%d\n", n[i]);
    }

    media = somatorio / 20;

    printf("\nMedia: %d\n", media);

    return 0;
}
