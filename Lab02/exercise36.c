#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v, h, r;
    const float pi = 3.141592;
    printf("Digite a altura e o raio de um cilidro circular: ");
    scanf("%f %f", &h, &r);
    v = pi * pow(r, 2) * h;
    printf("O volume do cilindro e: %f", v);

    return 0;
}