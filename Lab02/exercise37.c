#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float p, d;
    printf("Digite um valor de um produto: ");
    scanf("%f", &p);
    d = p * 0.88;
    printf("O valor com desconto eh: %f", d);

    return 0;
}