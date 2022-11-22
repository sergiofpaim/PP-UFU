#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int counter, n, d1, d2;

    printf("Digite um numero de vezes que os dados serao jogados: ");
    scanf("%d", &n);

    for (counter = 1; counter <= n; counter++)
    {
        printf("Na %da rodada\n", counter);

        d1 = rand() % (6 + 1 - 1) + 1;
        d2 = rand() % (6 + 1 - 1) + 1;

        if (d1 > d2)
            printf("Dado 1: %d > Dado 2: %d\n", d1, d2);
        else if (d1 < d2)
            printf("Dado 1: %d < Dado 2: %d\n", d1, d2);
        else
            printf("Dado 1: %d = Dado 2: %d\n", d1, d2);
    }

    return 0;
}