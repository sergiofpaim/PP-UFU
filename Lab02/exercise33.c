#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float l, a;
    printf("Digite o valor de um dos lados de um quadrado: ");
    scanf("%f", &l);
    a = pow(l, 2);
    printf("A area do quadrado eh: %f", a);

    return 0;
}