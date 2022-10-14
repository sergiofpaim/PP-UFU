#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m, k;
    printf("Digite uma distancia em Km: ");
    scanf("%f", &k);
    m = k / 1.61;
    printf("A distancia em milhas e: %f", m);

    return 0;
}