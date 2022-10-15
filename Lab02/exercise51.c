#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cat1, cat2, h;
    printf("Digite a coordenada do ponto X: \n");
    scanf("%f", &cat1);
    printf("Digite a coordenada do ponto Y: \n");
    scanf("%f", &cat2);
    h = sqrt((pow(cat1, 2) + pow(cat2, 2)));
    printf("O distancia dos pontos (%f, %f) a origem (0, 0) eh: %f", cat1, cat2, h);
    return 0;
}