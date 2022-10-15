#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, n1, n2, n3;
    printf("Digite um numero inteiro positivo de tres digitos: ");
    scanf("%d&d", &num, &n1, n2, n3);
    n1 = num / 100;
    n2 = (num % 100) / 10;
    n3 = ((num % 100) % 10);
    printf("O numero gerado eh: %d%d%d", n3, n2, n1);
    return 0;
}