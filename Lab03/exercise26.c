#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float d, l, r;

    printf("Digite a distancia em km: ");
    scanf("%f", &d);
    printf("Digite quantos litros foram consumidos no percurso: ");
    scanf("%f", &l);

    r = d / l;

    if (r < 8)
        printf("Venda o carro!");
    else if (r >= 8 && r <= 14)
        printf("Economico");
    else
        printf("Super economico!");

    return 0;
}