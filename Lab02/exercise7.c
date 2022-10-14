#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c, f;
    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &f);
    c = 5 * (f - 32) / 9;
    printf("A temperatura em Celsius e: %f", c);

    return 0;
}