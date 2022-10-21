#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;
    printf("Digite um numero real: ");
    scanf("%f", &n);
    if (n >= 0)
        printf("A raiz eh: %f", sqrt(n));
    else
        printf("O numero ao quadrado eh: %f", pow(n, 2));

    return 0;
}