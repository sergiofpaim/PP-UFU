#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float l, m;
    printf("Digite um volume em litros: ");
    scanf("%f", &l);
    m = l / 1000;
    printf("O volume em metros cubicos e: %f", m);

    return 0;
}