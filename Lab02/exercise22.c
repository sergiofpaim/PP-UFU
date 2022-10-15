#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float j, m;
    printf("Digite um comprimento em jardas: ");
    scanf("%f", &j);
    m = 0.91 * j;
    printf("O comprimento em metros eh: %f", m);

    return 0;
}