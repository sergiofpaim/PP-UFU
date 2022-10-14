#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m, k;
    printf("Digite uma distancia em Km: ");
    scanf("%f", &k);
    m = k / 1.61;
    printf("%f", m);

    return 0;
}