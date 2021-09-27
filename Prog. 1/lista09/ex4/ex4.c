#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Coordenada
{
    float x;
    float y;
};

struct Lado
{
    float esquerdo;
    float direito;
};

struct Retangulo
{
    struct Lado superior;
    struct Lado inferior;
};

int main()
{
    struct Retangulo retangulo;
    struct Coordenada coordenada;
    float area, comprimento_diagonal, perimetro, base, altura;

    printf("---------------------------RETANGULO---------------------------\n");
    printf("Informe o ponto superior esquerdo do retangulo:(em metros)\n");
    scanf("%f", &retangulo.superior.esquerdo);

    printf("Informe o ponto inferior esquerdo do retangulo:(em metros)\n");
    scanf("%f", &retangulo.inferior.esquerdo);

    printf("Informe o ponto inferior direito do retangulo:(em metros)\n");
    scanf("%f", &retangulo.inferior.direito);

    printf("Informe o ponto superior direito do retangulo:(em metros)\n");
    scanf("%f", &retangulo.superior.direito);

    printf("---------------------------COORDENADAS---------------------------\n");
    printf("Informe a coordenada x:\n");
    scanf("%f", &coordenada.x);

    printf("Informe a coordenada y:\n");
    scanf("%f", &coordenada.y);

    if (coordenada.x >= retangulo.superior.esquerdo && coordenada.x <= retangulo.inferior.esquerdo && coordenada.y >= retangulo.inferior.direito && coordenada.y <= retangulo.superior.direito)
    {

        printf("O ponto (%.1f, %.1f) esta no retangulo.",coordenada.x, coordenada.y);
    }else {
        printf("O ponto (%.1f, %.1f) nao esta no retangulo.",coordenada.x, coordenada.y);
    }

    return 0;
}
