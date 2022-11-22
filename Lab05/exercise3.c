#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkNumber(int number);

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O numero digitado eh ");

    if (checkNumber(n) == 1)
        printf("positivo");
    else if (checkNumber(n) == 0)
        printf("igual a 0");
    else
        printf("negativo");

    return 0;
}

int checkNumber(int number)
{
    if (number > 0)
        return 1;
    else if (number == 0)
        return 0;
    else
        return -1;
}