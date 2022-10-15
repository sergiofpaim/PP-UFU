#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m, h;
    printf("Digite uma area em metros quadrados: \n");
    scanf("%f", &m);
    h = m * 0.0001;
    printf("A area em hectares eh: %f", h);
    return 0;
}