#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, s;
    s = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    s = (n * 3 + 1) + (2 * n - 1);
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro eh: %d", s);

    return 0;
}