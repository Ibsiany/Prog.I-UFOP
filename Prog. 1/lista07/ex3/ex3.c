#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b,c;
    for ( a = 1; a <=6; ++a){
        printf("\nCombinacao %d\n", a);
        for ( b = 1; b <=6; ++b){
            for ( c = 1; c <=6; ++c){
               if(a != b && b != c && a!=c){
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
