#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    float r, q, v;

    printf("Digite o codigo do produto: ");
    scanf("%d", &i);
    printf("Digite quantos itens deseja comprar: ");
    scanf("%f", &q);

    switch (i)
    {
    case 100:
        v = 1.2;
        break;
    case 101:
        v = 1.3;
        break;
    case 102:
        v = 1.5;
        break;
    case 103:
        v = 1.2;
        break;
    case 104:
        v = 1.7;
        break;
    case 105:
        v = 2.2;
        break;
    case 106:
        v = 1.0;
        break;
    }

    r = q * v;

    printf("O valor a ser pago eh: %f", r);

    return 0;
}