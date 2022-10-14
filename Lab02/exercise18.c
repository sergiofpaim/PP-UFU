#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float l, m;
    printf("Digite um volume em metros cubicos: ");
    scanf("%f", &m);
    l = 1000 * m;
    printf("O volume em litros e: %f", l);

    return 0;
}