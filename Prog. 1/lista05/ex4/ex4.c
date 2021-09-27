#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n[20], maiorNum = 0, menorNum;

    for(i = 0; i < 20; i++){
        printf("Informe o valor:\n");
        scanf("%d", &n[i]);
    }

    menorNum = n[0];

    for(i = 0; i < 20; i++){
       if(n[i] > maiorNum){
            maiorNum = n[i];
       } else if( n[i] < menorNum ){
            menorNum = n[i];
       }
    }

    printf("\nMenor numero:%d\nMaior numero:%d", menorNum, maiorNum);

    return 0;
}
