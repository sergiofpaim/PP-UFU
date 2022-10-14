#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, d;
    const float cotation = 5.30;
    printf("Digite um valor em reais: ");
    scanf("%f", &r);
    d = r / cotation;
    printf("O valor equivalente em dolares e: %f", d);

    return 0;
}