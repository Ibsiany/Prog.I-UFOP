#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha, coluna, k;
    for(linha = 0; linha < 10;linha++){
          for(k = 0;k < 10 - linha;k++){
               printf(" ");
          }
          for(coluna = 0;coluna <= linha;coluna++){
               printf("*");
          }
          printf("\n");
     }
    return 0;
}
