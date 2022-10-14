#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c, k;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("A temperatura em Kelvin e: %f", k);

    return 0;
}