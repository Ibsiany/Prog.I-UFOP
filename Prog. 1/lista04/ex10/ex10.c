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
    int numero_sorteado, milhao = 1000000, contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0, contador5 = 0, contador6 = 0, porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5, porcentagem6;


    for(int i = 0; i < milhao; i++){
        numero_sorteado = (rand()%6)+1;

        switch(numero_sorteado){
            case 1:
                contador1++;
                break;
            case 2:
                contador2++;
                break;
            case 3:
                contador3++;
                break;
            case 4:
                contador4++;
                break;
            case 5:
                contador5 ++;
                break;
            case 6:
                contador6 ++;
                break;
        }
    }

    porcentagem1 = (100 * contador1)/milhao;
    porcentagem2 = (100 * contador2)/milhao;
    porcentagem3 = (100 * contador3)/milhao;
    porcentagem4 = (100 * contador4)/milhao;
    porcentagem5 = (100 * contador5)/milhao;
    porcentagem6 = (100 * contador6)/milhao;


    printf("\nNumero 1: %d%% \nNumero 2: %d%% \nNumero 3: %d%% \nNumero 4: %d%% \nNumero 5: %d%% \nNumero 6: %d%% \n", porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5, porcentagem6);
}
