#include <stdio.h>

int main()
{
    int n, counter = 1;

    printf("Os primeiros 50 numeros sao\n");
    for (n = 1; counter <= 50; n++)
        if (n % 2 == 0)
        {
            printf("%d ", n);
            counter++;
        }

    return 0;
}