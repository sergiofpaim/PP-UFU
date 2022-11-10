#include <stdio.h>

int main()
{
    int n, i = 3;
    printf("Os 5 primeiros multiplos de 3, maiores que zero sao:");
    for (n = 1; n <= 5; n++)
        printf(" %d", (i * n));

    return 0;
}