#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, hipotenusa, condicao1, condicao2;

    for(hipotenusa = 1; hipotenusa < 500; hipotenusa++) {
        for(lado1 = 1; lado1 < 500; lado1++) {
            for(lado2 = 1; lado2 < 500; lado2++) {
                condicao1 = (lado1 * lado1) + (lado2 * lado2);
                condicao2 = hipotenusa * hipotenusa;
                if(condicao1 == condicao2) {
                    printf("\nTriplo de Pitagoras:\nHipotenusa = %d\nLado 1 = %d\nLado 2 = %d\n", hipotenusa, lado1, lado2);
                } else if(condicao1 > condicao2) {
                    break;
                }
            }
        }
    }

    return 0;
}
