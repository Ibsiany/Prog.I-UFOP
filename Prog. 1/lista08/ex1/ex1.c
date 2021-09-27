#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b;
    int *c, *d;
    a = 2;
    b = 3;
    c = &a;
    d = &b;

    if(c > d){
        printf("o maior endereco e: a.\n");
        return;
    } else {
        printf("o maior endereco e b.\n");
    }


    return 0;
}
