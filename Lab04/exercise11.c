#include <stdio.h>

int main()
{
    int n, counter;

    printf("Digite um numero inteiro positivo\n");
    scanf("%d", &n);
    for (counter = 0; counter <= n; counter++)
        printf("%d ", counter);

    return 0;
}