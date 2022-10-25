#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, sum = 0;
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &n);
    if (n <= 0)
        printf("Numero invalido");
    else
        while (n > 0)
        {
            m = n % 10;
            sum = sum + m;
            n = n / 10;
        }
    printf("A soma dos digitos eh: %d", sum);

    return 0;
}