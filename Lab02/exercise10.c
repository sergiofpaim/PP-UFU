#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m, k;
    printf("Digite uma velocidade em Km/H: ");
    scanf("%f", &k);
    m = k / 3.6;
    printf("O valor em m/s eh: %f", m);

    return 0;
}