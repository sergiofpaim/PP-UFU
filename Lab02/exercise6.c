#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c, f;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("A temperatura em Fahrenheit eh: %f", f);

    return 0;
}