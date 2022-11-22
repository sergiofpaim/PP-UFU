#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void checkNumber(int number);

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    checkNumber(n);

    return 0;
}

void checkNumber(int number)
{
    int integ;

    integ = sqrt(number);

    if ((sqrt(number) == integ))
        printf("O numero eh um quadrado perfeito");
    else
        printf("O numero nao eh quadrado perfeito");
}