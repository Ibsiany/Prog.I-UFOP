#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 0, volume, canal = 1;
     printf("Selecione uma das opcaoes a seguir: \n1 Ligar; \n2 Desligar; \n3 Aumentar volume; \n4 Diminuir volume; \n5 Aumentar canal; \n6 Diminuir canal; \n7 Tirar da tomada.\n\n");

    do{
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                canal = 10;
                volume = 20;
                printf("Televisao ligada.\nCanal:%d \nVolume:%d\n\n", canal, volume);
                break;
            case 2:
                canal = -1;
                printf("Televisao desligada.\n\n");
                break;
            case 3:
                canal = canal;
                volume = volume + 1;
                printf("Novo volume:%d \Canal:%d\n\n", volume, canal);
                break;
            case 4:
                canal = canal;
                volume = volume - 1;
                printf("Novo volume:%d \Canal:%d\n\n", volume, canal);
                break;
            case 5:
                canal = canal + 1;
                volume = 20;
                printf("Novo canal:%d \nVolume:%d\n\n", canal, volume);
                break;
            case 6:
                canal = canal - 1;
                volume = 20;
                printf("Novo canal:%d \nVolume:%d\n\n", canal, volume);
                break;
            default:
                printf("Valor invalido\n\n");
                break;
        }
    }while(opcao != 7);

    return 0;
}
