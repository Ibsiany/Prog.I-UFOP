#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main()
{
    srand(time(NULL));
    dado();
    return 0;
}

int dado(){
    int numero_sorteado;

    numero_sorteado = (rand()%6)+1;
    printf("\nO numero sorteado e %d \n", numero_sorteado);
}
