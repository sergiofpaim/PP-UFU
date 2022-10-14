#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c, k;
    printf("Digite uma temperatura em graus Kelvin: ");
    scanf("%f", &k);
    c = k - 273.15;
    printf("A temperatura em Celcius e: %f", c);

    return 0;
}