#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5], *ponteiro;
    ponteiro = array;
    for (int i = 0; i < 5; i++)
    {
        printf("Informe o valor do elemento na posicao %d: \n", i + 1);
        scanf("%d", &array[i]);
    }
    ponteiro = array;

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Resultado %d \n", *ponteiro * 2);
        ponteiro++;
    }

    return 0;
}
