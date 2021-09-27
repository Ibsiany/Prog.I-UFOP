#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Coordenada
{
    int x;
    int y;
};

int main()
{
    struct Coordenada coordenada;
    float resultado;

    printf("Informe a coordenada x:\n");
    scanf("%d", &coordenada.x);

    printf("Informe a coordenada y:\n");
    scanf("%d", &coordenada.y);
    resultado = sqrt(pow((coordenada.x - 0), 2) + pow((coordenada.y - 0), 2));

    printf("\nA distancia entre a coordenada(%d, %d) e a origem(0,0) e: %.2f", coordenada.x, coordenada.y, resultado);
    return 0;
}
