#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Primeiro for\n");
    for(x=2; x <=13; x += 2){
        printf("%d\n", x);
    }

    printf("\nSegundo for\n");
    for(x=5; x <=22; x += 7){
        printf("%d\n", x);
    }

    printf("\nTerceiro for\n");
    for(x=3; x <=15; x += 3){
        printf("%d\n", x);
    }

    printf("\nQuarto for\n");
    for(x=1; x <=5; x += 7){
        printf("%d\n", x);
    }

    printf("\nQuinto for\n");
    for(x=12; x >=2; x += -3){
        printf("%d\n", x);
    }

    return 0;
}
