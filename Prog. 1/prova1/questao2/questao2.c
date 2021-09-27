#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, n, valor, resultado = 0, total;
    printf("Informe um numero inteiro x maior que 0.\n");
    scanf("%d", &x);

    printf("Informe um numero inteiro n maior que 0.\n");
    scanf("%d", &n);

    if(x > 0 && n > 0){
        for(int i = 1; i <= n; i++){
            valor = ((3*pow(x, i + 1)) - 2 * i * x + 5 * n)/(i + 2);
            resultado = resultado + valor;
        }

        total = n * resultado;
        printf("O resultado da expressao e %d", total);

    }else {
        printf("Valor invalido!");
    }
    return 0;
}
