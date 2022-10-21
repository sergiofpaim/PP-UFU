#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;
    printf("Digite um numero real positivo: ");
    scanf("%f", &n);
    if (n >= 0)
    {
        printf("O numero ao quadrado eh: %f \n", pow(n, 2));
        printf("A raiz desse numero eh: %f", sqrt(n));
    }

    return 0;
}