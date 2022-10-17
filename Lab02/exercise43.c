#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v;
    printf("Digite um valor para ser pago: ");
    scanf("%f", &v);
    printf("O valor com 10 por cento de desconto eh: %f\n", v * 0.9);
    printf("O valor mensal do parcelamento de 3x eh: %f\n", v / 3);
    printf("A comissao do vendedor, caso a venda seja a vista eh: %f\n", v * 0.9 * 0.05);
    printf("A comissao do vendedor, caso a venda seja a parcelada eh: %f", v * 0.05);

    return 0;
}