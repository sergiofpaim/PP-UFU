#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("O numero digitado eh par");
    else
        printf("O numero digitado eh impar");

    return 0;
}