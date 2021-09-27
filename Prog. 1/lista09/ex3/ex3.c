#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto
{
    float esquerdo;
    float direito;
};

struct Retangulo
{
    struct Ponto superior;
    struct Ponto inferior;
};


int main()
{
    struct Retangulo retangulo;
    float area, comprimento_diagonal, perimetro, base, altura;

    printf("Informe o ponto superior esquerdo do retangulo:(em metros)\n");
    scanf("%f", &retangulo.superior.esquerdo);

    printf("Informe o ponto superior direito do retangulo:(em metros)\n");
    scanf("%f", &retangulo.superior.direito);

    printf("Informe o ponto inferior esquerdo do retangulo:(em metros)\n");
    scanf("%f", &retangulo.inferior.esquerdo);

    printf("Informe o ponto inferior direito do retangulo:(em metros)\n");
    scanf("%f", &retangulo.inferior.direito);

    base = retangulo.inferior.esquerdo - retangulo.superior.esquerdo;
    altura = retangulo.inferior.direito - retangulo.superior.direito;
    printf("\nBase: %.2f\nAltura:%.2f\n", base, altura);

    area = base * altura;
    comprimento_diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    perimetro = 2 * (base + altura);

    printf("\nArea:%.2f\nDiagonal: %.2f\nPerimetro:%.2f\n", area, comprimento_diagonal, perimetro);
    return 0;
}
