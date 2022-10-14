#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m, k;
    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &m);
    k = m * 3.6;
    printf("%f", k);

    return 0;
}