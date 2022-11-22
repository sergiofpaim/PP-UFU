#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculateConsume(float d, float l);

int main()
{
    float d, l;

    printf("Digite a distancia em km: ");
    scanf("%f", &d);
    printf("Digite quantos litros foram consumidos no percurso: ");
    scanf("%f", &l);

    calculateConsume(d, l);
}

void calculateConsume(float d, float l)
{
    float r;

    r = d / l;

    if (r < 8)
        printf("Venda o carro!");
    else if (r >= 8 && r <= 14)
        printf("Economico");
    else
        printf("Super economico!");

    return 0;
}