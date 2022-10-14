#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float p, c;
    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &p);
    c = p * 2.54;
    printf("O comprimento em centimetros eh: %f", c);

    return 0;
}