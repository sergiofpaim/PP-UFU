#include <stdio.h>
#include <stdlib.h>
int main()
{
    int counter;
    const int n = 2000000;

    printf("Todos os números primos abaixo de 2.000.000 sao:\n 2 3 ");
    for (counter = 4; counter < n; counter++)
        if (counter % 2 != 0 && counter % 3 != 0)
            printf("%d ", counter);

    return 0;
}