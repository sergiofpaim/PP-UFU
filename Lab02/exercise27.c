#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h, m;
    printf("Digite uma area em hectares: ");
    scanf("%f", &h);
    m = h * 10000;
    printf("O valor em metros quadrados eh: %f", m);

    return 0;
}