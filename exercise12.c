#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m, k;
    printf("Digite uma distancia em milhas: ");
    scanf("%f", &m);
    k = 1.61 * m;
    printf("%f", k);

    return 0;
}