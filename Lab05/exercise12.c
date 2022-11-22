#include <stdio.h>
#include <math.h>

int convertSum(int n);

int main()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Numer invalido.");
    else
        printf("A soma dos seus algarismos eh %d", convertSum(n));

    return 0;
}

int convertSum(int n)
{
    int sum = 0, m;

    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }

    return sum;
}