#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float p, c;
    printf("Digite um comprimento em centimetros: ");
    scanf("%f", &c);
    p = c / 2.54;
    printf("O comprimento em polegadas eh: %f", p);

    return 0;
}