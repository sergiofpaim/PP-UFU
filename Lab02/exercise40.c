#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float d, l;
    printf("Digite o numero de dias trabalhados pelo encanador: ");
    scanf("%f", &d);
    l = 27.6 * d;
    printf("O valor liquido a ser pago eh: %f", l);

    return 0;
}