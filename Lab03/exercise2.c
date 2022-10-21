#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Digite um numero para ser calculada a sua raiz quadrada: ");
    scanf("%f", &n);
    if (n >= 0)
        printf("A raiz eh: %f", sqrt(n));
    else
        printf("O numero deve ser maior ou igual a 0");

    return 0;
}