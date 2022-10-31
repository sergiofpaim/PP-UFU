#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (((n % 3) == 0) && ((n % 5) != 0))
        printf("O numero eh divisivel apenas por 3");
    else if (((n % 3) != 0) && ((n % 5) == 0))
        printf("O numero eh divisivel apenas por 5");
    else
        printf("O numero nao eh divisivel ou por 3 ou por 5 ou eh divisivel simultaneamente pelos 2");

    return 0;
}