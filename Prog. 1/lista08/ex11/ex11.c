#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  caractere;
    int inteiro;
    float numero_float;
    double decimal;

    printf("char: %d\n", sizeof(caractere));
    printf("int: %d\n", sizeof(inteiro));
    printf("float: %d\n", sizeof(numero_float));
    printf("double: %d\n", sizeof(decimal));

    return 0;
}
