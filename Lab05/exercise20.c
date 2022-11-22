#include <stdio.h>
#include <math.h>

int checkPrimeNumbers(int n);

void main()
{
    int n;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);

    if (n < 1)
        printf("Nao ha primos.");
    else
        printf("O numero de numeros primos abaixo de %d eh: %d", n, checkPrimeNumbers(n));
}

int checkPrimeNumbers(int n)
{
    int counter = 2;

    for (int i = n - 1; i > 1; i--)
    {
        if (n == 2)
            counter = 1;
        else if (n == 3)
            counter = 2;
        if (((i % 2) != 0) && ((i % 3) != 0))
            counter++;
    }

    return counter;
}