#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pi, a, ratio;
    pi = 3.141592;
    printf("Digite um valor do raio de um circulo: ");
    scanf("%f%f", &pi, &ratio);
    a = pi * (ratio * ratio);
    printf("A area do circulo correspondente eh: %f", a);

    return 0;
}