#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total, valor, valorPago, desconto;
    int quantidade;
    printf("Informe o valor total do pedido:\n");
    scanf("%f", &valor);
    printf("Informe a quantidade de pedidos:\n");
    scanf("%d", &quantidade);

    if(valor > 100 && quantidade == 1){
        desconto = (valor * 7)/100;
        total = valor - desconto;

        printf("O valor a ser pago e %.2f e o seu frete e gratis.", total);
    } else if(valor > 100 && quantidade > 1){
        valorPago = valor * quantidade;
        desconto = (valorPago * 7)/100;
        total = valorPago - desconto;
        printf("O valor a ser pago e %.2f e o seu frete e R$ 5,00.", total);
    } else if(valor >= 70 && total <= 100){
        valorPago = valor * quantidade;
        desconto = (valorPago * 6)/100;
        total = valorPago - desconto;
        printf("O valor a ser pago e %.2f e o seu frete e R$ 10,00.", total);
    } else {
	valorPago = valor * quantidade;
        printf("O valor a ser pago e %.2f e o seu frete e R$ 10,00.", valorPago);
    }

    return 0;
}
