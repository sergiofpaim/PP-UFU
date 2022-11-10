#include <stdio.h>

int main()
{
    printf("\nPrimeiro\n");

    int number, n;
    for (n = 1; n <= 3; n++)
        for (number = 1; number <= 100; number++)
            printf("%d ", number);

    n = 0;
    number = 0;

    printf("\nSegundo\n");

    while (n <= 3)
    {
        while (number <= 100)
        {
            printf("%d ", number);
            number++;
        }
        n++;
        number = 0;
    }

    n = 0;
    number = 1;

    printf("\nTerceiro\n");

    do
    {
        do
        {
            printf("%d ", number);
            number++;
        } while (number <= 100);

        number = 0;
        n++;
    } while (n <= 3);

    return 0;
}