#include <stdio.h>
#include <math.h>

float convertToF(float c);

int main()
{
    float c;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &c);

    printf("A temperatura convertida em Fahrenheit eh: %f", convertToF(c));

    return 0;
}

float convertToF(float c)
{
    int f;

    f = (c * 1.8) + 32;

    return f;
}